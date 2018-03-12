#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readConfig();
    initUi();
    configUi();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initUi()
{
    showFullScreen();
    setWindowFlags(Qt::FramelessWindowHint);
    workSpace = new QWidget(this);
    nameArea = new NameArea(this);
    nameArea->setProjectName(projectName);
    nameArea->setStyleSheet("border-image:url(:/image/background/namespace.jpg);");
    monitorSpace = new QWidget(this);
    alarmSpace = new QWidget(this);
    alarmSpace->setStyleSheet("background-color:blue;");

    hLayout = new QHBoxLayout(monitorSpace);
    vLayout = new QVBoxLayout(workSpace);

    vLayout->addWidget(nameArea);
    vLayout->addWidget(monitorSpace);
    vLayout->addWidget(alarmSpace);
    vLayout->setStretchFactor(nameArea,1);
    vLayout->setStretchFactor(monitorSpace,6);
    vLayout->setStretchFactor(alarmSpace,2);
    vLayout->setMargin(0);
    vLayout->setSpacing(0);

    navigationBar = new NavigationBarForm(monitorSpace);

    dataArea = new QStackedWidget(monitorSpace);
    hLayout->addWidget(navigationBar);
    hLayout->addWidget(dataArea);
    hLayout->setStretchFactor(navigationBar,3);
    hLayout->setStretchFactor(dataArea,21);
    hLayout->setMargin(0);
    hLayout->setSpacing(0);

    userMange = new UserManageDialog(this);
    limitManage = new LimitManageDialog(this);

    VHFStation = new MonitorAreaForm(this);

    dataArea->addWidget(VHFStation);
    dataArea->setCurrentWidget(VHFStation);

    setCentralWidget(workSpace);

    connect(navigationBar, SIGNAL(UiNavigation(QString)),
            this, SLOT(onUiNavigation(QString)));
}

void MainWindow::readConfig()
{
    ProjectConfig config(":/config/xml/ACM.xml");
    projectName = config.getProjectName();
    projectConfig = config.getProjectConfig();
}

void MainWindow::configUi()
{
    /************配置导航栏*************/
    for(int i = 0; i < projectConfig.count(); i++)
    {
        if(!stationNameList.contains(projectConfig.at(i).station))
        {
            navigationBar->addStation(projectConfig.at(i).station);
            stationNameList.append(projectConfig.at(i).station);
        }
    }
    /***********配置站点界面**************/
    for(int i = 0; i < stationNameList.count(); i++)
    {
        MonitorAreaForm *widget = new MonitorAreaForm(dataArea);
        dataArea->addWidget(widget);
        mapStaionWidget.insert(stationNameList.at(i), widget);
    }
    dataArea->setCurrentWidget(mapStaionWidget.value(stationNameList.at(0)));
    /***********配置设备界面**************/
    for(int i = 0; i < projectConfig.count(); i++)
    {
        for(int j = 0; j < stationNameList.count(); j++)
        {
            if(projectConfig.at(i).station == stationNameList.at(j))
            {
                if(projectConfig.at(i).system == "POE")
                {
                    mapStaionWidget.value(stationNameList.at(j))
                            ->addPOE(createEquipment(projectConfig.at(i).type, projectConfig.at(i).equipment), projectConfig.at(i).location);
                }
                if(projectConfig.at(i).system == "ILS")
                {
                    mapStaionWidget.value(stationNameList.at(j))
                            ->addILS(createEquipment(projectConfig.at(i).type, projectConfig.at(i).equipment), projectConfig.at(i).equipment);
                }
            }
        }
    }
}

QWidget* MainWindow::createEquipment(QString type, QString equipName)
{
    QWidget *widget;
    if(type == "AC485T")
    {
        widget = new AirConditioner(this);
        static_cast<AirConditioner* >(widget)->setTitle(equipName);
    }
    if(type == "Nomac7013B")
    {
        widget = new Nomac7013B(this);
    }
    if(type == "UPS")
    {
        widget = new UPS(this);
    }
    return widget;
}

void MainWindow::onUiNavigation(QString uiName)
{
    if(stationNameList.contains(uiName))
    {
        dataArea->setCurrentWidget(mapStaionWidget.value(uiName));
    }
    if(uiName == "UserManage")
    {
        userMange->show();
    }
    if(uiName == "LimitManage")
    {
        limitManage->show();
    }
}
