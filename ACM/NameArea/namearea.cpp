#include "namearea.h"

NameArea::NameArea(QWidget *parent) : QWidget(parent)
{
    initUi();
}

void NameArea::initUi()
{
    leftLabel = new QLabel(this);
    leftLabel->setWindowOpacity(1);
    centreLabel = new QLabel(this);
    centreLabel->setWindowOpacity(1);
    centreLabel->setAlignment(Qt::AlignCenter);
    centreLabel->setFont(QFont("宋体",30,5));
    rightLabel = new QLabel(this);
    rightLabel->setWindowOpacity(1);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(leftLabel);
    layout->addWidget(centreLabel);
    layout->addWidget(rightLabel);

    layout->setStretchFactor(leftLabel, 3);
    layout->setStretchFactor(centreLabel, 18);
    layout->setStretchFactor(rightLabel, 3);
    layout->setMargin(0);
    layout->setSpacing(0);
}

void NameArea::setProjectName(QString name)
{
    centreLabel->setText(name);
}
