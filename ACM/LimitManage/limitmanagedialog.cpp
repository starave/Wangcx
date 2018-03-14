#include "limitmanagedialog.h"
#include "ui_limitmanagedialog.h"

LimitManageDialog::LimitManageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LimitManageDialog)
{
    ui->setupUi(this);
    init();
}

LimitManageDialog::~LimitManageDialog()
{
    delete ui;
}

void LimitManageDialog::init()
{
    treeModel = new QStandardItemModel(this);
    tableModel = new QStandardItemModel(this);
    initTreeView();
    initTableView();
}

void LimitManageDialog::initTreeView()
{
    QList<EQUIP_CFG> proCfg = ProjectConfig::getIns()->getProjectConfig();
    QMap<QString, QStandardItem*> mapStationItem;

    QStandardItem *parentItem = treeModel->invisibleRootItem();

    for(int i = 0; i < proCfg.count(); i++)
    {
        EQUIP_CFG equipCfg = proCfg.at(i);
        if(!mapStationItem.value(equipCfg.station))
        {
            QStandardItem *staionItem = new QStandardItem(equipCfg.station);
            mapStationItem.insert(equipCfg.station, staionItem);
            parentItem->appendRow(staionItem);
        }
        QStandardItem *equipItem = new QStandardItem(equipCfg.equipment);
        mapStationItem.value(equipCfg.station)->appendRow(equipItem);
    }
    ui->treeView->setModel(treeModel);
    ui->treeView->header()->hide();
}

void LimitManageDialog::initTableView()
{
    QStringList headerString;
    headerString << "参数名称" << "低低限" << "低限" << "高限" << "高高限" << "报警开关";
    tableModel->setColumnCount(6);
    for(int i = 0; i < headerString.count(); i++)
    {
        tableModel->setHeaderData(i, Qt::Horizontal, headerString.at(i), Qt::DisplayRole);
    }
    ui->tableView->setModel(tableModel);
}


void LimitManageDialog::on_treeView_clicked(const QModelIndex &index)
{
    QStandardItem * item = treeModel->item(index.row(),index.column());
    QStandardItem * parentItem = item->parent();
    QFile limitFile("limitfile.xml");
    if(limitFile.exists())
    {

    }
    else
    {

    }
}
