#ifndef UPS_H
#define UPS_H

#include <QWidget>

namespace Ui {
class UPS;
}

class UPS : public QWidget
{
    Q_OBJECT

public:
    explicit UPS(QWidget *parent = 0);
    ~UPS();

private:
    Ui::UPS *ui;
};

#endif // UPS_H
