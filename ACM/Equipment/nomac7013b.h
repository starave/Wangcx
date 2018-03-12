#ifndef NOMAC7013B_H
#define NOMAC7013B_H

#include <QWidget>

namespace Ui {
class Nomac7013B;
}

class Nomac7013B : public QWidget
{
    Q_OBJECT

public:
    explicit Nomac7013B(QWidget *parent = 0);
    ~Nomac7013B();

private:
    Ui::Nomac7013B *ui;
};

#endif // NOMAC7013B_H
