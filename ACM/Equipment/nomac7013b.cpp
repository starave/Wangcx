#include "nomac7013b.h"
#include "ui_nomac7013b.h"

Nomac7013B::Nomac7013B(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nomac7013B)
{
    ui->setupUi(this);
}

Nomac7013B::~Nomac7013B()
{
    delete ui;
}
