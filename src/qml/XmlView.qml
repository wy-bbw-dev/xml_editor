import QtQuick 2.3
import TestModel

ListView {
	id: xmlContent
	model: TestModel{}
	width: 200
	height: 200
	delegate: Text {
		text: model.display
	}
}
