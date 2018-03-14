/********************************************************************************
** Form generated from reading UI file 'monitorareaform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORAREAFORM_H
#define UI_MONITORAREAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonitorAreaForm
{
public:

    void setupUi(QWidget *MonitorAreaForm)
    {
        if (MonitorAreaForm->objectName().isEmpty())
            MonitorAreaForm->setObjectName(QStringLiteral("MonitorAreaForm"));
        MonitorAreaForm->resize(400, 300);

        retranslateUi(MonitorAreaForm);

        QMetaObject::connectSlotsByName(MonitorAreaForm);
    } // setupUi

    void retranslateUi(QWidget *MonitorAreaForm)
    {
        MonitorAreaForm->setWindowTitle(QApplication::translate("MonitorAreaForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MonitorAreaForm: public Ui_MonitorAreaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORAREAFORM_H
