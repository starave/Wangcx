#ifndef USERMANAGEDIALOG_H
#define USERMANAGEDIALOG_H

#include <QDialog>
#include <QFile>
#include <QMessageBox>
#include <QCloseEvent>

#include "usermodel.h"

namespace Ui {
class UserManageDialog;
}

struct USERINFO
{
    USERINFO() {}

    QString userName;
    QString userPwd;
    QString userRole;
};

class UserManageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserManageDialog(QWidget *parent = 0);
    ~UserManageDialog();

    void readUserInfoFromFile();

    void userTableView_ModelInit();

    void userInfoInit();

    void writeUserInfoToFile();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_userAddBtn_clicked();
    void on_userDelBtn_clicked();


private:
    Ui::UserManageDialog *ui;

    int userTotalNum;

    USERINFO *userInfo;

    UserModel *model;


};

#endif // USERMANAGEDIALOG_H
