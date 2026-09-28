import QtQuick 2.0
import "ChartColors.js" as ChartColors

// 24 h ring: each segment coloured by sleep phase / activity, like the
// "Today" widget on Gadgetbridge's dashboard. Midnight is at the top.
// samples: output of dataSource.data(DataSource.Activity, day)
Item {
    id: ring

    property var samples: []
    property var startTime: 0
    property int segments: 144                  // 10 minute segments
    property real lineWidth: width * 0.08
    property int activeIntensity: 15
    property color idleColor: ChartColors.withAlpha(styler.themeSecondaryColor, 0.3)
    property color emptyColor: ChartColors.withAlpha(styler.themeSecondaryColor, 0.12)
    default property alias content: centre.data

    implicitWidth: styler.themeItemSizeLarge * 3
    implicitHeight: implicitWidth

    onSamplesChanged: canvas.requestPaint()
    onIdleColorChanged: canvas.requestPaint()

    Canvas {
        id: canvas
        anchors.fill: parent
        onWidthChanged: requestPaint()
        onHeightChanged: requestPaint()

        onPaint: {
            var ctx = getContext("2d");
            ctx.clearRect(0, 0, width, height);
            var n = ring.segments;
            var rank = [];
            for (var i = 0; i < n; i++) rank.push(-1);

            var list = ring.samples || [];
            var segSec = 86400 / n;
            for (i = 0; i < list.length; i++) {
                var p = list[i];
                var s = Math.floor((p.x - ring.startTime) / segSec);
                if (s < 0 || s >= n) continue;
                var r = p.k === ChartColors.PHASE_DEEP ? 3
                      : p.k === ChartColors.PHASE_LIGHT ? 2
                      : (p.s > 0 || p.i >= ring.activeIntensity) ? 1 : 0;
                if (r > rank[s]) rank[s] = r;
            }

            var cx = width / 2, cy = height / 2;
            var rad = Math.min(width, height) / 2 - ring.lineWidth / 2;
            var step = 2 * Math.PI / n;
            ctx.lineWidth = ring.lineWidth;
            ctx.lineCap = "butt";

            for (i = 0; i < n; i++) {
                var a = -Math.PI / 2 + i * step;
                ctx.strokeStyle = rank[i] === 3 ? ChartColors.deepSleep
                                : rank[i] === 2 ? ChartColors.lightSleep
                                : rank[i] === 1 ? ChartColors.active
                                : rank[i] === 0 ? ring.idleColor
                                : ring.emptyColor;
                ctx.beginPath();
                ctx.arc(cx, cy, rad, a, a + step * 1.02, false);   // slight overlap avoids hairline gaps
                ctx.stroke();
            }
        }
    }

    Item {
        id: centre
        anchors.fill: parent
    }
}
