#include "projectconfig.h"

ProjectConfig::ProjectConfig(QObject *parent):QObject(parent)
{

}

ProjectConfig::ProjectConfig(QString fileName, QObject *parent):QObject(parent),
    fileName(fileName)
{
    phraseXml();
}

void ProjectConfig::phraseXml()
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
    projectName = domElement.attribute("name");
    const QDomNodeList stationNodeList = domElement.childNodes();

    for(int i = 0; i < stationNodeList.count(); i++)
    {
        QDomElement stationElement = stationNodeList.item(i).toElement();
        const QDomNodeList systemNodeList = stationElement.childNodes();
        for(int j = 0; j < systemNodeList.count(); j++)
        {
            QDomElement systemElement = systemNodeList.item(j).toElement();
            const QDomNodeList equipmentNodeList = systemElement.childNodes();
            for(int k = 0; k < equipmentNodeList.count(); k++)
            {
                PROJECT_CONFIG config;
                QDomElement equipmentElement = equipmentNodeList.item(k).toElement();
                config.station = stationElement.attribute("name");
                config.system = systemElement.attribute("name");
                config.equipment = equipmentElement.attribute("name");
                config.type = equipmentElement.attribute("type");
                config.location = equipmentElement.attribute("location");
                projectConfig.append(config);
            }
        }
    }
    file.close();
}

void ProjectConfig::setFileName(const QString &value)
{
    fileName = value;
}

QString ProjectConfig::getProjectName() const
{
    return projectName;
}

QList<PROJECT_CONFIG> ProjectConfig::getProjectConfig() const
{
    return projectConfig;
}



