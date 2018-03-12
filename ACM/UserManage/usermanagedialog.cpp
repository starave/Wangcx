#include "usermanagedialog.h"
#include "ui_usermanagedialog.h"

#include <QTextStream>
#include <QDebug>

UserManageDialog::UserManageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserManageDialog)
{
    ui->setupUi(this);

    setWindowTitle("用户管理");

    readUserInfoFromFile();
    userTableView_ModelInit();
    userInfoInit();
}

UserManageDialog::~UserManageDialog()
{
    delete ui;
}

void UserManageDialog::readUserInfoFromFile()
{
    QFile file("userInfofile.txt");
    if(!file.open(QIODevice::ReadOnly))//以只读的方式打开文件
    {
        return;
    }
    QTextStream stream(&file);
    QString lineStr;
    lineStr = stream.readLine();
    userTotalNum = lineStr.toInt();
    userInfo = new USERINFO[userTotalNum + 1];
    for(int i=0; i<userTotalNum; i++)
    {
        lineStr = stream.readLine();
        userInfo[i].userName = stream.readLine();
        userInfo[i].userPwd = stream.readLine();
        userInfo[i].userRole = stream.readLine();
    }
    file.close();
}

void UserManageDialog::userTableView_ModelInit(){
    model = new UserModel(this);//所有单元格字符居中
    //添加表头
    QStringList headerList;
    headerList<<"NAME"<<"PASSWORD"<<"ROLE";
    model->setHorizontalHeaderLabels(headerList);

    ui->tv_userInfotable->setModel(model);//进行属性设置时，此语句置前
    //表格宽度自适应调整
    ui->tv_userInfotable->horizontalHeader()->setStretchLastSection(true);
    //设置行颜色:绿色/黄色相间
    ui->tv_userInfotable->setAlternatingRowColors(true);
    ui->tv_userInfotable->setStyleSheet("QTableView{background-color:rgb(141, 225, 215);""alternate-background-color:rgb(250, 250, 115);}");
}

void UserManageDialog::userInfoInit()
{
    for(int i=0; i<userTotalNum; i++)
    {
        model->setItem(i, 0, new QStandardItem(userInfo[i].userName));
        model->setItem(i, 1, new QStandardItem(userInfo[i].userPwd));
        model->setItem(i, 2, new QStandardItem(userInfo[i].userRole));
    }
}

void UserManageDialog::writeUserInfoToFile()
{
    QFile file("userInfofile.txt");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
    {
        QMessageBox::information(this, tr("打开文件失败！"),  file.errorString());
        return;
    }

    QTextStream stream(&file);
    int rowCount = model->rowCount();
    stream << rowCount << "\r\n";// stream << rowCount << endl;
    QString strTabView;
        for(int i=0; i<rowCount; i++)
        {
            stream << "\r\n";// stream << endl;
            for(int j=0; j<3; j++)
            {
                strTabView = model->item(i, j)->text();
                stream << strTabView << "\r\n";// stream << strTabView << endl;
            }
        }
    file.flush();//略之
    file.close();
}

void UserManageDialog::closeEvent(QCloseEvent *event)
{
    writeUserInfoToFile();
    event->accept();
}


void UserManageDialog::on_userAddBtn_clicked()
{
    int rowNum;
    rowNum = model->rowCount();
    model->setItem(rowNum, 0,  new QStandardItem("newUser"));
    model->setItem(rowNum, 1,  new QStandardItem("123456"));
    model->setItem(rowNum, 2,  new QStandardItem("普通用户"));
}

void UserManageDialog::on_userDelBtn_clicked()
{
    int rowCurrent = ui->tv_userInfotable->currentIndex().row();
    if(rowCurrent == -1)
    {
        return;
    }
    QString str = model->item(rowCurrent, 1)->text();//读取用户名
    if(str == "admin")
    {
        QMessageBox::warning(this, tr("warning"), tr("禁止删除管理员信息!\n请选择需要删除的普通用户项"),QMessageBox::Ok);
        return;
    }
    else
    {
        model->removeRow(rowCurrent);
    }
}
