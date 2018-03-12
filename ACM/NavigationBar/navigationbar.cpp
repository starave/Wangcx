#include "navigationbar.h"

NavigationBar::NavigationBar(QWidget *parent) : QWidget(parent)
{

}

void NavigationBar::initUi()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    stationLayout = new QVBoxLayout();
    layout->addSpacing(200);
    layout->addLayout(stationLayout);
    layout->addStretch();
}

void NavigationBar::addStation(QString stationName)
{

}
