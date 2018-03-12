#ifndef AIRCONDITIONER_H
#define AIRCONDITIONER_H

#include <QWidget>

namespace Ui {
class AirConditioner;
}

class AirConditioner : public QWidget
{
    Q_OBJECT

public:
    explicit AirConditioner(QWidget *parent = 0);
    ~AirConditioner();

    void setTitle(QString name);

private:
    Ui::AirConditioner *ui;
};

#endif // AIRCONDITIONER_H
