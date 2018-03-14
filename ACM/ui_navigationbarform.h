/********************************************************************************
** Form generated from reading UI file 'navigationbarform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATIONBARFORM_H
#define UI_NAVIGATIONBARFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavigationBarForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pb_limit;
    QPushButton *pb_userManage;
    QPushButton *pb_quit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *NavigationBarForm)
    {
        if (NavigationBarForm->objectName().isEmpty())
            NavigationBarForm->setObjectName(QStringLiteral("NavigationBarForm"));
        NavigationBarForm->resize(183, 300);
        verticalLayout_2 = new QVBoxLayout(NavigationBarForm);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pb_limit = new QPushButton(NavigationBarForm);
        pb_limit->setObjectName(QStringLiteral("pb_limit"));

        verticalLayout_2->addWidget(pb_limit);

        pb_userManage = new QPushButton(NavigationBarForm);
        pb_userManage->setObjectName(QStringLiteral("pb_userManage"));

        verticalLayout_2->addWidget(pb_userManage);

        pb_quit = new QPushButton(NavigationBarForm);
        pb_quit->setObjectName(QStringLiteral("pb_quit"));

        verticalLayout_2->addWidget(pb_quit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(NavigationBarForm);

        QMetaObject::connectSlotsByName(NavigationBarForm);
    } // setupUi

    void retranslateUi(QWidget *NavigationBarForm)
    {
        NavigationBarForm->setWindowTitle(QApplication::translate("NavigationBarForm", "Form", nullptr));
        pb_limit->setText(QApplication::translate("NavigationBarForm", "\346\212\245\350\255\246\350\256\276\347\275\256", nullptr));
        pb_userManage->setText(QApplication::translate("NavigationBarForm", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        pb_quit->setText(QApplication::translate("NavigationBarForm", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NavigationBarForm: public Ui_NavigationBarForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONBARFORM_H
