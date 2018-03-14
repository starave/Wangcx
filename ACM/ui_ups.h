/********************************************************************************
** Form generated from reading UI file 'ups.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPS_H
#define UI_UPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UPS
{
public:

    void setupUi(QWidget *UPS)
    {
        if (UPS->objectName().isEmpty())
            UPS->setObjectName(QStringLiteral("UPS"));
        UPS->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UPS->sizePolicy().hasHeightForWidth());
        UPS->setSizePolicy(sizePolicy);
        UPS->setMinimumSize(QSize(200, 200));

        retranslateUi(UPS);

        QMetaObject::connectSlotsByName(UPS);
    } // setupUi

    void retranslateUi(QWidget *UPS)
    {
        UPS->setWindowTitle(QApplication::translate("UPS", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UPS: public Ui_UPS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPS_H
