#include "limitmanagedialog.h"
#include "ui_limitmanagedialog.h"

LimitManageDialog::LimitManageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LimitManageDialog)
{
    ui->setupUi(this);
}

LimitManageDialog::~LimitManageDialog()
{
    delete ui;
}
