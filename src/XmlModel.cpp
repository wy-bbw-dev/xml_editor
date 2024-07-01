#include "XmlModel.h"

TestModel::TestModel(QObject *parent)
	: QAbstractListModel(parent)
{
}

TestModel::~TestModel()
{
}

int TestModel::rowCount(const QModelIndex &parent) const
{
	qDebug() << "rowCount: 5";
	return 5;
}

QVariant TestModel::data(const QModelIndex &index, int role) const
{
	//if (role == Qt::DisplayRole) {
	//	return QString("Row %1").arg(index.row());
	//}
	qDebug() << "index: " << index.row() << "role: " << role << "data: 5" << QVariant(QString("Row %1").arg(index.row()));
	return QString("Row %1").arg(index.row()); 
	//return QVariant();
}