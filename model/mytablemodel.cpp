#include "mytablemodel.h"

myTableModel::myTableModel(QObject *parent) : QAbstractTableModel(parent)
{

}

int myTableModel::rowCount(const QModelIndex &parent) const
{
    return 4;
}
int myTableModel::columnCount(const QModelIndex &parent) const
{
    return 4;
}

QVariant myTableModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole) {
        QString unswer = QString("row = ") + QString::number(index.row()) + "  col = " + QString::number(index.column());
        // строкой выше мы формируем ответ. QString::number преобразует число в текст
        return QVariant(unswer);
    }
    return QVariant();
}
