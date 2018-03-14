#ifndef PROJECTCONFIG_H
#define PROJECTCONFIG_H

#include <QObject>
#include <QString>
#include <QList>
#include <QFile>
#include <QMessageBox>
#include <QDomDocument>

struct EQUIP_CFG
{
    EQUIP_CFG() {}
    QString station;        //站点名称
    QString system;         //系统名称（ILS 仪表着陆系统 POE 动力环境系统）
    QString equipment;      //设备名称
    QString type;           //设备类型
    QString location;       //界面位置
};

class ProjectConfig : public QObject
{
    Q_OBJECT
public:
    explicit ProjectConfig(QObject *parent = nullptr);
    ProjectConfig(QString fileName, QObject *parent = nullptr);

    /**
     * @brief phraseXml     解析Xml文件，获取工程名称和工程配置
     */
    void phraseXml();

    /**
     * @brief setFileName   设置文件名
     * @param value
     */
    void setFileName(const QString &value);

    /**
     * @brief getProjectName    获取工程名称
     * @return
     */
    QString getProjectName() const;

    /**
     * @brief getProjectConfig  获取工程配置
     * @return
     */
    QList<EQUIP_CFG> getProjectConfig() const;

    /**
     * @brief getIns        获取单一实例
     * @return
     */
    static ProjectConfig *getIns();

    /**
     * @brief getStationList    获取台站名列表
     * @return
     */
    QStringList getStationList() const;

signals:

public slots:

private:
    QString fileName;               //文件名

    QString projectName;            //工程名称
    QList<EQUIP_CFG> projectConfig;   //工程配置
    QMap<QString, EQUIP_CFG> proCfg;
    QStringList stationList;        //台站名列表

    static ProjectConfig* ins; //单一实例
};

#endif // PROJECTCONFIG_H
