/********************************************************************************
** Form generated from reading UI file 'limitmanagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIMITMANAGEDIALOG_H
#define UI_LIMITMANAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LimitManageDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *pb_analog;
    QPushButton *pb_digital;
    QPushButton *pb_commit;

    void setupUi(QDialog *LimitManageDialog)
    {
        if (LimitManageDialog->objectName().isEmpty())
            LimitManageDialog->setObjectName(QStringLiteral("LimitManageDialog"));
        LimitManageDialog->resize(1000, 600);
        horizontalLayout = new QHBoxLayout(LimitManageDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeView = new QTreeView(LimitManageDialog);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setMaximumSize(QSize(200, 16777215));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(treeView);

        tableView = new QTableView(LimitManageDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pb_analog = new QPushButton(LimitManageDialog);
        pb_analog->setObjectName(QStringLiteral("pb_analog"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_analog->sizePolicy().hasHeightForWidth());
        pb_analog->setSizePolicy(sizePolicy);
        pb_analog->setMinimumSize(QSize(75, 75));
        pb_analog->setMaximumSize(QSize(75, 75));

        verticalLayout->addWidget(pb_analog);

        pb_digital = new QPushButton(LimitManageDialog);
        pb_digital->setObjectName(QStringLiteral("pb_digital"));
        sizePolicy.setHeightForWidth(pb_digital->sizePolicy().hasHeightForWidth());
        pb_digital->setSizePolicy(sizePolicy);
        pb_digital->setMinimumSize(QSize(75, 75));
        pb_digital->setMaximumSize(QSize(75, 75));

        verticalLayout->addWidget(pb_digital);

        pb_commit = new QPushButton(LimitManageDialog);
        pb_commit->setObjectName(QStringLiteral("pb_commit"));
        sizePolicy.setHeightForWidth(pb_commit->sizePolicy().hasHeightForWidth());
        pb_commit->setSizePolicy(sizePolicy);
        pb_commit->setMinimumSize(QSize(75, 75));
        pb_commit->setMaximumSize(QSize(75, 75));

        verticalLayout->addWidget(pb_commit);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(LimitManageDialog);

        QMetaObject::connectSlotsByName(LimitManageDialog);
    } // setupUi

    void retranslateUi(QDialog *LimitManageDialog)
    {
        LimitManageDialog->setWindowTitle(QApplication::translate("LimitManageDialog", "Dialog", nullptr));
        pb_analog->setText(QApplication::translate("LimitManageDialog", "\346\250\241\346\213\237\351\207\217", nullptr));
        pb_digital->setText(QApplication::translate("LimitManageDialog", "\345\274\200\345\205\263\351\207\217", nullptr));
        pb_commit->setText(QApplication::translate("LimitManageDialog", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LimitManageDialog: public Ui_LimitManageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIMITMANAGEDIALOG_H
