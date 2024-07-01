import QtQuick 2.3
import QtQuick.Controls
import xmleditor

ApplicationWindow {
	visible: true
	width: 640
	height: 480
	title: qsTr("XML Editor")

	menuBar: MyMenuBar{}
	
	XmlView{}
	
}
