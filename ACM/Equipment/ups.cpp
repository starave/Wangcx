#include "ups.h"
#include "ui_ups.h"

UPS::UPS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UPS)
{
    ui->setupUi(this);
}

UPS::~UPS()
{
    delete ui;
}
