#include <iostream>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "XmlModel.h"

int main(int argc, char* argv[])
{
	QGuiApplication app(argc, argv);
	qmlRegisterType<TestModel>("TestModel", 1, 0, "TestModel");
	QQmlApplicationEngine engine;
	engine.load(QUrl(QStringLiteral("qrc:/xmleditor/src/qml/MainWindow.qml")));
	app.exec();
	return 0;
}
