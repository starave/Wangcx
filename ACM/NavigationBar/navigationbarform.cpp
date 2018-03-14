#include "navigationbarform.h"
#include "ui_navigationbarform.h"

NavigationBarForm::NavigationBarForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NavigationBarForm)
{
    ui->setupUi(this);
}

NavigationBarForm::~NavigationBarForm()
{
    delete ui;
}

void NavigationBarForm::addStation(QString stationName)
{
    QPushButton *button = new QPushButton(stationName,this);
    ui->verticalLayout->addWidget(button);
    connect(button, SIGNAL(clicked()), this, SLOT(onStationClicked()));
}

void NavigationBarForm::on_pb_quit_clicked()
{
    QApplication::quit();
}

void NavigationBarForm::on_pb_userManage_clicked()
{
    emit UiNavigation("UserManage");
}

void NavigationBarForm::on_pb_limit_clicked()
{
    emit UiNavigation("LimitManage");
}

void NavigationBarForm::onStationClicked()
{
    QPushButton *button = (QPushButton*)sender();
    emit UiNavigation(button->text());
}
