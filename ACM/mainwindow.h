#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLayout>
#include <QLabel>
#include <QStackedWidget>
#include <QMap>
#include <QPushButton>

#include "navigationbarform.h"
#include "usermanagedialog.h"
#include "limitmanagedialog.h"
#include "monitorareaform.h"
#include "projectconfig.h"
#include "equipmentconfig.h"

#include "airconditioner.h"
#include "nomac7013b.h"
#include "ups.h"
#include "namearea.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    /**
     * @brief initUi        初始化界面
     */
    void initUi();

    /**
     * @brief readConfig    读取配置信息
     */
    void readConfig();

    /**
     * @brief configUi      配置界面
     */
    void configUi();

    /**
     * @brief createEquipment   创建设备
     * @param equipName         设备名称
     */
    QWidget* createEquipment(QString type, QString equipName);

private slots:
    void onUiNavigation(QString uiName);


private:
    Ui::MainWindow *ui;
    QHBoxLayout *hLayout;           //告警区布局
    QVBoxLayout *vLayout;           //垂直布局
    QWidget *workSpace;             //工作区
    NameArea *nameArea;             //标题区
    QWidget *alarmSpace;            //告警区
    QWidget *monitorSpace;          //监控区
    QStackedWidget *dataArea;       //数据区

    NavigationBarForm *navigationBar;           //导航栏
    UserManageDialog  *userMange;               //用户管理
    LimitManageDialog *limitManage;             //阈值管理

    MonitorAreaForm *VHFStation;
    QList<EQUIP_CFG> projectConfig;        //工程配置
    QString projectName;                        //工程名称
    QMap<QString, EQUIP_PARAM> equipConfig;            //设备配置

    QMap<QString, MonitorAreaForm *> mapStaionWidget;    //站点名--站点窗口
    QStringList stationNameList;                //站点名称列表
};

#endif // MAINWINDOW_H
