#include "equipmentconfig.h"

EquipmentConfig* EquipmentConfig::ins = nullptr;

EquipmentConfig::EquipmentConfig(QObject *parent) : QObject(parent)
{

}

EquipmentConfig::EquipmentConfig(QString fileName, QObject *parent):QObject(parent),
    fileName(fileName)
{
    phraseXml();
}

void EquipmentConfig::phraseXml()
{
    if(fileName.isEmpty())
        return;
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(nullptr, QString("file"), QString("open error!"));
        return;
    }
    QDomDocument domDocument;
    QString error;
    int row = 0, column = 0;
    if(!domDocument.setContent(&file, false, &error, &row, &column)) {
        QMessageBox::information(nullptr, QString("Error"),
                                 QString("parse file failed at line row and column") +
                                 QString::number(row, 10) + QString(",") +
                                 QString::number(column, 10));
        file.close();
        return;
    }

    if(domDocument.isNull()) {
        QMessageBox::information(nullptr, QString("title"),
                                 QString("document is null!"));

        file.close();
        return;
    }

    const QDomElement domElement = domDocument.documentElement();
    const QDomNodeList equipNodeList = domElement.childNodes();

    for(int i = 0; i < equipNodeList.count(); i++)
    {
        QDomElement equipElement = equipNodeList.item(i).toElement();
        QString equipName = equipElement.attribute("name");
        EQUIP_PARAM equipParam;
        const QDomNodeList paramNodeList = equipElement.childNodes();
        for(int j = 0; j < paramNodeList.count(); j++)
        {
            QDomElement paramElement = paramNodeList.at(j).toElement();
            if(paramElement.attribute("type") == "analog")
            {
                equipParam.analogs.append(paramElement.attribute("name"));
            }
            if(paramElement.attribute("type") == "digital")
            {
                equipParam.digitals.append(paramElement.attribute("name"));
            }
        }
        mapEquParam.insert(equipName, equipParam);
    }
    file.close();
}


void EquipmentConfig::setFileName(const QString &value)
{
    fileName = value;
}

QMap<QString, EQUIP_PARAM> EquipmentConfig::getMapEquParam() const
{
    return mapEquParam;
}

EquipmentConfig *EquipmentConfig::getIns()
{
    if(!ins)
    {
        ins = new EquipmentConfig(":/config/xml/Equiemnt.xml");
    }
    return ins;
}

