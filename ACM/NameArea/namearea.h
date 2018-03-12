#ifndef NAMEAREA_H
#define NAMEAREA_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>

class NameArea : public QWidget
{
    Q_OBJECT
public:
    explicit NameArea(QWidget *parent = nullptr);

    void initUi();

    void setProjectName(QString name);

signals:

public slots:

private:
    QLabel *leftLabel;
    QLabel *centreLabel;
    QLabel *rightLabel;
};

#endif // NAMEAREA_H
