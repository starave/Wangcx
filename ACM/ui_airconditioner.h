/********************************************************************************
** Form generated from reading UI file 'airconditioner.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRCONDITIONER_H
#define UI_AIRCONDITIONER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AirConditioner
{
public:
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AirConditioner)
    {
        if (AirConditioner->objectName().isEmpty())
            AirConditioner->setObjectName(QStringLiteral("AirConditioner"));
        AirConditioner->resize(200, 100);
        horizontalLayout_3 = new QHBoxLayout(AirConditioner);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(11, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(AirConditioner);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(AirConditioner);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(30, 0));
        label_2->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(label_2);

        lcdNumber = new QLCDNumber(AirConditioner);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout_2->addWidget(lcdNumber);

        label = new QLabel(AirConditioner);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(30, 0));
        label->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(AirConditioner);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(30, 30));
        pushButton->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(AirConditioner);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(30, 30));
        pushButton_2->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(AirConditioner);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(30, 30));
        pushButton_4->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(AirConditioner);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(30, 30));
        pushButton_3->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(11, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        retranslateUi(AirConditioner);

        QMetaObject::connectSlotsByName(AirConditioner);
    } // setupUi

    void retranslateUi(QWidget *AirConditioner)
    {
        AirConditioner->setWindowTitle(QApplication::translate("AirConditioner", "Form", nullptr));
        label_3->setText(QApplication::translate("AirConditioner", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("AirConditioner", "TextLabel", nullptr));
        label->setText(QApplication::translate("AirConditioner", "\342\204\203", nullptr));
        pushButton->setText(QApplication::translate("AirConditioner", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("AirConditioner", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("AirConditioner", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("AirConditioner", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AirConditioner: public Ui_AirConditioner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRCONDITIONER_H
