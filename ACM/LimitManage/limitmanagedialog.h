#ifndef LIMITMANAGEDIALOG_H
#define LIMITMANAGEDIALOG_H

#include <QDialog>
#include <QStandardItemModel>

#include "projectconfig.h"
#include "equipmentconfig.h"

namespace Ui {
class LimitManageDialog;
}

class LimitManageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LimitManageDialog(QWidget *parent = 0);
    ~LimitManageDialog();

    void init();
    void initTreeView();
    void initTableView();

signals:
    void limitChanged(EQUIP_LIMIT limit);

private slots:

    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::LimitManageDialog *ui;
    QStandardItemModel *treeModel;
    QStandardItemModel *tableModel;
};

#endif // LIMITMANAGEDIALOG_H
