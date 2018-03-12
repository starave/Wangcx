#ifndef NAVIGATIONBAR_H
#define NAVIGATIONBAR_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

class NavigationBar : public QWidget
{
    Q_OBJECT
public:
    explicit NavigationBar(QWidget *parent = nullptr);

    void initUi();
    void addStation(QString stationName);
signals:

public slots:
private:
    QVBoxLayout *stationLayout;

};

#endif // NAVIGATIONBAR_H
