import QtQuick 2.0
import "./platform"

// Big value with unit and a small label below, as in Gadgetbridge's workout summary.
Column {
    id: tile
    property string value: "–"
    property string unit: ""
    property string label: ""

    spacing: 0

    Row {
        spacing: styler.themePaddingSmall
        LabelPL {
            id: lblValue
            text: tile.value
            color: styler.themeHighlightColor
            font.pixelSize: styler.themeFontSizeLarge
        }
        LabelPL {
            anchors.baseline: lblValue.baseline
            text: tile.unit
            visible: tile.unit !== ""
            color: styler.themeSecondaryHighlightColor
            font.pixelSize: styler.themeFontSizeSmall
        }
    }
    LabelPL {
        width: tile.width
        text: tile.label
        color: styler.themeSecondaryColor
        font.pixelSize: styler.themeFontSizeExtraSmall
        truncMode: truncModes.fade
    }
}
