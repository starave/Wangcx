#ifndef NAMESPACEWIDGET_H
#define NAMESPACEWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>

class NameSpaceWidget : public QWidget
{
    Q_OBJECT
public:
    explicit NameSpaceWidget(QWidget *parent = nullptr);

    void initUi();

signals:

public slots:


private:
    QLabel *nameLabel;
};

#endif // NAMESPACEWIDGET_H
