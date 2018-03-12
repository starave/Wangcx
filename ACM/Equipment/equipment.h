#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <QObject>

class Equipment : public QObject
{
    Q_OBJECT
public:
    explicit Equipment(QObject *parent = nullptr);

    QString getName() const;
    void setName(const QString &value);

    QString getStation() const;
    void setStation(const QString &value);

signals:

public slots:

private:
    QString name;           //设备名称
    QString station;        //设备站点
};

#endif // EQUIPMENT_H
