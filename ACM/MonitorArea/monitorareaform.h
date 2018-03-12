#ifndef MONITORAREAFORM_H
#define MONITORAREAFORM_H

#include <QWidget>
#include <QTabWidget>
#include <QHBoxLayout>
#include <QGridLayout>

namespace Ui {
class MonitorAreaForm;
}

class MonitorAreaForm : public QWidget
{
    Q_OBJECT

public:
    explicit MonitorAreaForm(QWidget *parent = 0);
    ~MonitorAreaForm();

    void initUi();

    void addILS(QWidget *widget, QString equipName);

    void addPOE(QWidget *widget, QString location);
private:
    Ui::MonitorAreaForm *ui;
    QTabWidget *ilsMonitor;             //仪表着陆系统监控
    QGridLayout *vLayout;               //动力环境布局
};

#endif // MONITORAREAFORM_H
