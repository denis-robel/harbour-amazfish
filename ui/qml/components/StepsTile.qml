import QtQuick 2.0
import QtQuick.Layouts 1.1
import uk.co.piggz.amazfish 1.0
import "./platform"
import "ChartColors.js" as ChartColors

// Gadgetbridge-style "Today" widget: 24 h ring coloured by sleep / activity,
// with a goal gauge and the step count in the middle.
Tile {
    id: tile

    property int stepCount: 0
    property int stepGoal: 0
    property var samples: []
    property var startTime: 0

    text: qsTr("Steps")

    function refresh() {
        var start = new Date();
        start.setHours(0, 0, 0, 0);
        startTime = start.getTime() / 1000;
        samples = dataSource.data(DataSource.Activity, new Date());
    }

    // new samples arrive together with new step counts; don't query the database on every tick
    onStepCountChanged: refreshTimer.restart()
    Timer {
        id: refreshTimer
        interval: 5000
        onTriggered: tile.refresh()
    }

    Component.onCompleted: refresh()

    contentItem: DayRing {
        id: ring
        anchors.centerIn: parent
        width: Math.min(parent.width, parent.height)
        height: width
        samples: tile.samples
        startTime: tile.startTime
        idleColor: ChartColors.withAlpha(styler.blockBg, 0.30)
        emptyColor: ChartColors.withAlpha(styler.blockBg, 0.12)

        GaugeArc {
            anchors.centerIn: parent
            width: ring.width * 0.74
            height: width
            value: stepGoal > 0 ? stepCount / stepGoal : 0
            color: styler.blockBg
            trackColor: ChartColors.withAlpha(styler.blockBg, 0.25)
            lineWidth: ring.lineWidth * 0.8

            Column {
                anchors.centerIn: parent
                LabelPL {
                    anchors.horizontalCenter: parent.horizontalCenter
                    color: styler.blockBg
                    font.pixelSize: styler.themeFontSizeHuge
                    text: Number(stepCount).toLocaleString(Qt.locale(), "f", 0)
                }
                LabelPL {
                    anchors.horizontalCenter: parent.horizontalCenter
                    color: styler.blockBg
                    font.pixelSize: styler.themeFontSizeMedium
                    text: stepGoal > 0 ? qsTr("of %1").arg(Number(stepGoal).toLocaleString(Qt.locale(), "f", 0)) : ""
                }
            }
        }
    }
}
