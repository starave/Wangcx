#ifndef NAVIGATIONBARFORM_H
#define NAVIGATIONBARFORM_H

#include <QWidget>

namespace Ui {
class NavigationBarForm;
}

class NavigationBarForm : public QWidget
{
    Q_OBJECT

public:
    explicit NavigationBarForm(QWidget *parent = 0);
    ~NavigationBarForm();

    void addStation(QString stationName);

signals:
    void UiNavigation(QString uiName);

private slots:
    void on_pb_quit_clicked();

    void on_pb_userManage_clicked();

    void on_pb_limit_clicked();

    void on_pb_station_clicked();

private:
    Ui::NavigationBarForm *ui;
};

#endif // NAVIGATIONBARFORM_H
