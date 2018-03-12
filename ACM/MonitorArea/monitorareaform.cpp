#include "monitorareaform.h"
#include "ui_monitorareaform.h"

MonitorAreaForm::MonitorAreaForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MonitorAreaForm)
{
    ui->setupUi(this);
    initUi();
}

MonitorAreaForm::~MonitorAreaForm()
{
    delete ui;
}

void MonitorAreaForm::initUi()
{
    ilsMonitor = new QTabWidget(this);

    vLayout = new QGridLayout();
    vLayout->setMargin(0);
    vLayout->setSpacing(0);

    QHBoxLayout *hLayout = new QHBoxLayout(this);
    hLayout->addWidget(ilsMonitor);
    hLayout->addLayout(vLayout);
    hLayout->setStretchFactor(ilsMonitor, 16);
    hLayout->setStretchFactor(vLayout, 5);
    hLayout->setMargin(0);
    hLayout->setSpacing(0);
}

void MonitorAreaForm::addILS(QWidget *widget, QString equipName)
{
    ilsMonitor->addTab(widget, equipName);
}

void MonitorAreaForm::addPOE(QWidget *widget, QString location)
{
    QStringList strList = location.split("-");
    int row = QString(strList.at(0)).toInt();
    int cloumn = QString(strList.at(1)).toInt();
    int rowSpan = QString(strList.at(2)).toInt();
    int cloumnSpan = QString(strList.at(3)).toInt();
    vLayout->addWidget(widget, row, cloumn, rowSpan, cloumnSpan);
}

