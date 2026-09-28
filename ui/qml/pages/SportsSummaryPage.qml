import "../components/"
import "../components/platform"
import "../components/Translation.js" as T
import QtQuick 2.0
import QtQuick.Layouts 1.1
import uk.co.piggz.amazfish 1.0

PageListPL {
    id: page

    function fncCovertSecondsToString(sec) {
        var iHours = Math.floor(sec / 3600);
        var iMinutes = Math.floor((sec - iHours * 3600) / 60);
        var iSeconds = Math.floor(sec - (iHours * 3600) - (iMinutes * 60));
        return (iHours > 0 ? iHours + "h " : "") + (iMinutes > 0 ? iMinutes + "m " : "") + iSeconds + "s";
    }


    title: qsTr("Sports Activities")
    model: SportsModel
    Component.onCompleted: {
        SportsModel.update();
    }

    Connections {
        target: DaemonInterfaceInstance
        onOperationRunningChanged: {
            SportsModel.update();
        }
    }

    pageMenu: PageMenuPL {
        PageMenuItemPL {
            iconSource: styler.iconDownloadData !== undefined ? styler.iconDownloadData : ""
            text: qsTr("Download Next Activity")
            onClicked: DaemonInterfaceInstance.fetchData(Amazfish.TYPE_GPS_TRACK)
            enabled: DaemonInterfaceInstance.connectionState === "authenticated"
        }

    }

    delegate: ListItemPL {
        id: listItem

        contentHeight: Math.max(styler.themeItemSizeSmall, textColumn.height) + 2 * styler.themePaddingMedium
        onClicked: {
            var sportpage = app.pages.push(Qt.resolvedUrl("SportPage.qml"), {
                "activityId": model.id,
                "activitytitle": T.translateSportKind(kindstring) + " - " + Qt.formatDateTime(startdate, "yyyy/MM/dd"),
                "date": Qt.formatDateTime(startdate, "yyyy/MM/dd"),
                "location": [baselatitude, baselongitude, basealtitude],
                "starttime": Qt.formatDateTime(startdate, "hh:mm:ss"),
                "duration": durationLabel.text,
                "times": timesText,
                "kindstring": kindstring,
                "tcx": SportsModel.gpx(id),
                "rawGpx": SportsModel.rawGpx(id)
            });
            SportsMeta.update(id);
            sportpage.update();
        }

        // pressed feedback where the platform's list item provides it (Silica, Kirigami, QtControls)
        readonly property bool showPressed: listItem.highlighted === true
        readonly property string timesText: startdate.toLocaleTimeString(Qt.locale(), Locale.ShortFormat) + " – " + enddate.toLocaleTimeString(Qt.locale(), Locale.ShortFormat)

        // Plain Silica-style row: icon, two lines of text, duration on the right.
        // No cards or tinted backgrounds; hierarchy comes from primary/secondary colours only.
        Item {
            x: styler.themeHorizontalPageMargin
            width: parent.width - 2 * x
            height: listItem.contentHeight

            Loader {
                id: workoutImage
                anchors.verticalCenter: parent.verticalCenter
                width: styler.themeIconSizeMedium
                height: width
                sourceComponent: IconPL {
                    iconSource: styler.activityIconPrefix + "icon-m-" + kindstring.toLowerCase() + styler.customIconSuffix
                    width: workoutImage.width
                    height: width
                    opacity: listItem.showPressed ? 0.6 : 1.0
                }
            }

            Column {
                id: textColumn
                anchors.left: workoutImage.right
                anchors.leftMargin: styler.themePaddingLarge
                anchors.right: durationLabel.left
                anchors.rightMargin: styler.themePaddingMedium
                anchors.verticalCenter: parent.verticalCenter

                LabelPL {
                    id: nameLabel
                    width: parent.width
                    text: T.translateSportKind(kindstring)
                    color: listItem.showPressed ? styler.themeHighlightColor : styler.themePrimaryColor
                    font.pixelSize: styler.themeFontSizeMedium
                    truncMode: truncModes.fade
                }

                LabelPL {
                    id: dateLabel
                    width: parent.width
                    text: Qt.formatDate(startdate, "ddd") + " " + startdate.toLocaleDateString(Qt.locale(), Locale.ShortFormat) + " · " + listItem.timesText
                    color: listItem.showPressed ? styler.themeSecondaryHighlightColor : styler.themeSecondaryColor
                    font.pixelSize: styler.themeFontSizeExtraSmall
                    truncMode: truncModes.fade
                }
            }

            LabelPL {
                id: durationLabel
                anchors.right: parent.right
                anchors.verticalCenter: parent.verticalCenter
                text: fncCovertSecondsToString((enddate - startdate) / 1000)
                color: listItem.showPressed ? styler.themeHighlightColor : styler.themePrimaryColor
                font.pixelSize: styler.themeFontSizeSmall
                horizontalAlignment: Text.AlignRight
            }
        }

        menu: ContextMenuPL {
            id: contextMenu

            ContextMenuItemPL {
                iconName: styler.iconDelete
                text: qsTr("Remove")
                onClicked: {
                    SportsModel.deleteRecord(id);
                }
            }

        }

    }

}
