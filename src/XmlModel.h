#pragma once

#include <QAbstractListModel>


class TestModel : public QAbstractListModel {
	Q_OBJECT
public:
	explicit TestModel(QObject *parent = nullptr);
	~TestModel();

	int rowCount(const QModelIndex &parent) const override;
	QVariant data(const QModelIndex &index, int role) const override;
};