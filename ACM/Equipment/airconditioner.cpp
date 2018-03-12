#include "airconditioner.h"
#include "ui_airconditioner.h"

AirConditioner::AirConditioner(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AirConditioner)
{
    ui->setupUi(this);
}

AirConditioner::~AirConditioner()
{
    delete ui;
}

void AirConditioner::setTitle(QString name)
{
    ui->label_3->setText(name);
}
