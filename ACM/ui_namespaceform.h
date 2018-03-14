/********************************************************************************
** Form generated from reading UI file 'namespaceform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMESPACEFORM_H
#define UI_NAMESPACEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NameSpaceForm
{
public:

    void setupUi(QWidget *NameSpaceForm)
    {
        if (NameSpaceForm->objectName().isEmpty())
            NameSpaceForm->setObjectName(QStringLiteral("NameSpaceForm"));
        NameSpaceForm->resize(1920, 120);

        retranslateUi(NameSpaceForm);

        QMetaObject::connectSlotsByName(NameSpaceForm);
    } // setupUi

    void retranslateUi(QWidget *NameSpaceForm)
    {
        NameSpaceForm->setWindowTitle(QApplication::translate("NameSpaceForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NameSpaceForm: public Ui_NameSpaceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMESPACEFORM_H
