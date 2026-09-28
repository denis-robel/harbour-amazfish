import QtQuick 2.0
import "./platform"

// Label / value row, laid out like Silica's DetailItem so it fits every platform.
Item {
    id: row
    property string label
    property string value

    width: parent ? parent.width : 0
    height: Math.max(lbl.height, val.height)

    LabelPL {
        id: lbl
        anchors.left: parent.left
        anchors.right: parent.horizontalCenter
        anchors.rightMargin: styler.themePaddingMedium
        horizontalAlignment: Text.AlignRight
        text: row.label
        color: styler.themeSecondaryHighlightColor
        font.pixelSize: styler.themeFontSizeSmall
        truncMode: truncModes.fade
    }
    LabelPL {
        id: val
        anchors.left: parent.horizontalCenter
        anchors.leftMargin: styler.themePaddingMedium
        anchors.right: parent.right
        text: row.value
        color: styler.themeHighlightColor
        font.pixelSize: styler.themeFontSizeSmall
        truncMode: truncModes.fade
    }
}
