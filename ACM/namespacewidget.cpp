#include "namespacewidget.h"

NameSpaceWidget::NameSpaceWidget(QWidget *parent) : QWidget(parent)
{

}

void NameSpaceWidget::initUi()
{
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addSpacing(360);

    nameLabel = new QLabel(this);
    layout->addWidget(nameLabel);
}
