#include "namespaceform.h"
#include "ui_namespaceform.h"

NameSpaceForm::NameSpaceForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NameSpaceForm)
{
    ui->setupUi(this);
}

NameSpaceForm::~NameSpaceForm()
{
    delete ui;
}
