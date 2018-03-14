#ifndef EUIPMENTCONFIG_H
#define EUIPMENTCONFIG_H

#include <QObject>
#include <QDomDocument>
#include <QStringList>
#include <QMap>
#include <QFile>
#include <QMessageBox>

struct EQUIP_PARAM
{
    EQUIP_PARAM() {}
    QStringList analogs;
    QStringList digitals;
};

struct EQUIP_LIMIT
{
    EQUIP_LIMIT() {
        low_low = 0.0;
        low = 0.0;
        high = 0.0;
        high_high = 0.0;
    }
    QString name;       //参数名称
    float low_low;      //低低限
    float low;          //低限
    float high;         //高限
    float high_high;    //高高限
    bool alarmSwitch;   //报警开关
};

class EquipmentConfig : public QObject
{
    Q_OBJECT
public:
    explicit EquipmentConfig(QObject *parent = nullptr);

    EquipmentConfig(QString fileName, QObject *parent = nullptr);

    void phraseXml();

    void setFileName(const QString &value);

    QMap<QString, EQUIP_PARAM> getMapEquParam() const;

    static EquipmentConfig *getIns();

signals:

public slots:

private:
    QString fileName;

    QMap<QString, EQUIP_PARAM> mapEquParam;     //设备名称-设备参数

    static EquipmentConfig* ins;        //单一实例
};

#endif // EUIPMENTCONFIG_H
