/********************************************************************************
** Form generated from reading UI file 'usermanagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGEDIALOG_H
#define UI_USERMANAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserManageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *userAddBtn;
    QPushButton *userDelBtn;
    QSpacerItem *horizontalSpacer;
    QTableView *tv_userInfotable;

    void setupUi(QDialog *UserManageDialog)
    {
        if (UserManageDialog->objectName().isEmpty())
            UserManageDialog->setObjectName(QStringLiteral("UserManageDialog"));
        UserManageDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(UserManageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        userAddBtn = new QPushButton(UserManageDialog);
        userAddBtn->setObjectName(QStringLiteral("userAddBtn"));
        userAddBtn->setMinimumSize(QSize(30, 30));
        userAddBtn->setMaximumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/button/addBtn.png"), QSize(), QIcon::Normal, QIcon::Off);
        userAddBtn->setIcon(icon);
        userAddBtn->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(userAddBtn);

        userDelBtn = new QPushButton(UserManageDialog);
        userDelBtn->setObjectName(QStringLiteral("userDelBtn"));
        userDelBtn->setMinimumSize(QSize(30, 30));
        userDelBtn->setMaximumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/button/decBtn.png"), QSize(), QIcon::Normal, QIcon::Off);
        userDelBtn->setIcon(icon1);
        userDelBtn->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(userDelBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tv_userInfotable = new QTableView(UserManageDialog);
        tv_userInfotable->setObjectName(QStringLiteral("tv_userInfotable"));

        verticalLayout->addWidget(tv_userInfotable);


        retranslateUi(UserManageDialog);

        QMetaObject::connectSlotsByName(UserManageDialog);
    } // setupUi

    void retranslateUi(QDialog *UserManageDialog)
    {
        UserManageDialog->setWindowTitle(QApplication::translate("UserManageDialog", "Dialog", nullptr));
        userAddBtn->setText(QString());
        userDelBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserManageDialog: public Ui_UserManageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGEDIALOG_H
