#ifndef LIMITMANAGEDIALOG_H
#define LIMITMANAGEDIALOG_H

#include <QDialog>

namespace Ui {
class LimitManageDialog;
}

class LimitManageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LimitManageDialog(QWidget *parent = 0);
    ~LimitManageDialog();

private:
    Ui::LimitManageDialog *ui;
};

#endif // LIMITMANAGEDIALOG_H
