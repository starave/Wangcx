#include "equipment.h"

Equipment::Equipment(QObject *parent) : QObject(parent)
{

}

QString Equipment::getName() const
{
    return name;
}

void Equipment::setName(const QString &value)
{
    name = value;
}

QString Equipment::getStation() const
{
    return station;
}

void Equipment::setStation(const QString &value)
{
    station = value;
}
