#ifndef USERMODEL_H
#define USERMODEL_H

#include <QStandardItemModel>

class UserModel : public QStandardItemModel
{
    Q_OBJECT
public:
    UserModel(QObject *parent = NULL) : QStandardItemModel(parent){}
    UserModel(int row, int column, QObject *parent = NULL) : QStandardItemModel(row, column, parent){}
    QVariant data(const QModelIndex &index, int role) const
    {
        if(Qt::TextAlignmentRole == role)
        {
            return Qt::AlignCenter;
        }
        return QStandardItemModel::data(index, role);
    }
};

#endif // USERMODEL_H
