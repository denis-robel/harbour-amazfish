/****************************************************************************
** Meta object code from reading C++ file 'deviceinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/deviceinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DeviceInterface_t {
    QByteArrayData data[85];
    char stringdata0[1189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceInterface_t qt_meta_stringdata_DeviceInterface = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DeviceInterface"
QT_MOC_LITERAL(1, 16, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 32, 20), // "uk.co.piggz.amazfish"
QT_MOC_LITERAL(3, 53, 7), // "message"
QT_MOC_LITERAL(4, 61, 0), // ""
QT_MOC_LITERAL(5, 62, 4), // "text"
QT_MOC_LITERAL(6, 67, 16), // "downloadProgress"
QT_MOC_LITERAL(7, 84, 7), // "percent"
QT_MOC_LITERAL(8, 92, 23), // "operationRunningChanged"
QT_MOC_LITERAL(9, 116, 13), // "buttonPressed"
QT_MOC_LITERAL(10, 130, 7), // "presses"
QT_MOC_LITERAL(11, 138, 20), // "deviceEventTriggered"
QT_MOC_LITERAL(12, 159, 5), // "event"
QT_MOC_LITERAL(13, 165, 18), // "informationChanged"
QT_MOC_LITERAL(14, 184, 7), // "infoKey"
QT_MOC_LITERAL(15, 192, 9), // "infoValue"
QT_MOC_LITERAL(16, 202, 22), // "connectionStateChanged"
QT_MOC_LITERAL(17, 225, 14), // "onRefreshTimer"
QT_MOC_LITERAL(18, 240, 14), // "onNotification"
QT_MOC_LITERAL(19, 255, 24), // "watchfish::Notification*"
QT_MOC_LITERAL(20, 280, 12), // "notification"
QT_MOC_LITERAL(21, 293, 16), // "onRingingChanged"
QT_MOC_LITERAL(22, 310, 24), // "onConnectionStateChanged"
QT_MOC_LITERAL(23, 335, 23), // "slot_informationChanged"
QT_MOC_LITERAL(24, 359, 14), // "Amazfish::Info"
QT_MOC_LITERAL(25, 374, 7), // "infokey"
QT_MOC_LITERAL(26, 382, 9), // "infovalue"
QT_MOC_LITERAL(27, 392, 12), // "musicChanged"
QT_MOC_LITERAL(28, 405, 11), // "deviceEvent"
QT_MOC_LITERAL(29, 417, 21), // "AbstractDevice::Event"
QT_MOC_LITERAL(30, 439, 19), // "handleButtonPressed"
QT_MOC_LITERAL(31, 459, 12), // "onEventTimer"
QT_MOC_LITERAL(32, 472, 30), // "backgroundActivityStateChanged"
QT_MOC_LITERAL(33, 503, 15), // "onCitiesChanged"
QT_MOC_LITERAL(34, 519, 14), // "onWeatherReady"
QT_MOC_LITERAL(35, 534, 24), // "navigationRunningChanged"
QT_MOC_LITERAL(36, 559, 7), // "running"
QT_MOC_LITERAL(37, 567, 17), // "navigationChanged"
QT_MOC_LITERAL(38, 585, 4), // "icon"
QT_MOC_LITERAL(39, 590, 9), // "narrative"
QT_MOC_LITERAL(40, 600, 7), // "manDist"
QT_MOC_LITERAL(41, 608, 8), // "progress"
QT_MOC_LITERAL(42, 617, 4), // "pair"
QT_MOC_LITERAL(43, 622, 4), // "name"
QT_MOC_LITERAL(44, 627, 10), // "deviceType"
QT_MOC_LITERAL(45, 638, 7), // "address"
QT_MOC_LITERAL(46, 646, 15), // "connectToDevice"
QT_MOC_LITERAL(47, 662, 13), // "userInitiated"
QT_MOC_LITERAL(48, 676, 10), // "disconnect"
QT_MOC_LITERAL(49, 687, 6), // "unpair"
QT_MOC_LITERAL(50, 694, 15), // "connectionState"
QT_MOC_LITERAL(51, 710, 27), // "connectionStateChangedCount"
QT_MOC_LITERAL(52, 738, 16), // "operationRunning"
QT_MOC_LITERAL(53, 755, 15), // "supportsFeature"
QT_MOC_LITERAL(54, 771, 1), // "f"
QT_MOC_LITERAL(55, 773, 16), // "supportsDataType"
QT_MOC_LITERAL(56, 790, 1), // "t"
QT_MOC_LITERAL(57, 792, 17), // "supportedFeatures"
QT_MOC_LITERAL(58, 810, 18), // "supportedDataTypes"
QT_MOC_LITERAL(59, 829, 23), // "prepareFirmwareDownload"
QT_MOC_LITERAL(60, 853, 4), // "path"
QT_MOC_LITERAL(61, 858, 13), // "startDownload"
QT_MOC_LITERAL(62, 872, 18), // "refreshInformation"
QT_MOC_LITERAL(63, 891, 11), // "information"
QT_MOC_LITERAL(64, 903, 1), // "i"
QT_MOC_LITERAL(65, 905, 9), // "sendAlert"
QT_MOC_LITERAL(66, 915, 14), // "allowDuplicate"
QT_MOC_LITERAL(67, 930, 27), // "Amazfish::WatchNotification"
QT_MOC_LITERAL(68, 958, 12), // "incomingCall"
QT_MOC_LITERAL(69, 971, 6), // "caller"
QT_MOC_LITERAL(70, 978, 17), // "incomingCallEnded"
QT_MOC_LITERAL(71, 996, 18), // "applyDeviceSetting"
QT_MOC_LITERAL(72, 1015, 1), // "s"
QT_MOC_LITERAL(73, 1017, 22), // "requestManualHeartrate"
QT_MOC_LITERAL(74, 1040, 18), // "triggerSendWeather"
QT_MOC_LITERAL(75, 1059, 14), // "updateCalendar"
QT_MOC_LITERAL(76, 1074, 12), // "reloadCities"
QT_MOC_LITERAL(77, 1087, 13), // "enableFeature"
QT_MOC_LITERAL(78, 1101, 7), // "feature"
QT_MOC_LITERAL(79, 1109, 9), // "fetchData"
QT_MOC_LITERAL(80, 1119, 8), // "dataType"
QT_MOC_LITERAL(81, 1128, 17), // "requestScreenshot"
QT_MOC_LITERAL(82, 1146, 21), // "supportedDisplayItems"
QT_MOC_LITERAL(83, 1168, 14), // "immediateAlert"
QT_MOC_LITERAL(84, 1183, 5) // "level"

    },
    "DeviceInterface\0D-Bus Interface\0"
    "uk.co.piggz.amazfish\0message\0\0text\0"
    "downloadProgress\0percent\0"
    "operationRunningChanged\0buttonPressed\0"
    "presses\0deviceEventTriggered\0event\0"
    "informationChanged\0infoKey\0infoValue\0"
    "connectionStateChanged\0onRefreshTimer\0"
    "onNotification\0watchfish::Notification*\0"
    "notification\0onRingingChanged\0"
    "onConnectionStateChanged\0"
    "slot_informationChanged\0Amazfish::Info\0"
    "infokey\0infovalue\0musicChanged\0"
    "deviceEvent\0AbstractDevice::Event\0"
    "handleButtonPressed\0onEventTimer\0"
    "backgroundActivityStateChanged\0"
    "onCitiesChanged\0onWeatherReady\0"
    "navigationRunningChanged\0running\0"
    "navigationChanged\0icon\0narrative\0"
    "manDist\0progress\0pair\0name\0deviceType\0"
    "address\0connectToDevice\0userInitiated\0"
    "disconnect\0unpair\0connectionState\0"
    "connectionStateChangedCount\0"
    "operationRunning\0supportsFeature\0f\0"
    "supportsDataType\0t\0supportedFeatures\0"
    "supportedDataTypes\0prepareFirmwareDownload\0"
    "path\0startDownload\0refreshInformation\0"
    "information\0i\0sendAlert\0allowDuplicate\0"
    "Amazfish::WatchNotification\0incomingCall\0"
    "caller\0incomingCallEnded\0applyDeviceSetting\0"
    "s\0requestManualHeartrate\0triggerSendWeather\0"
    "updateCalendar\0reloadCities\0enableFeature\0"
    "feature\0fetchData\0dataType\0requestScreenshot\0"
    "supportedDisplayItems\0immediateAlert\0"
    "level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      52,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,  276,    4, 0x06 /* Public */,
       6,    1,  279,    4, 0x06 /* Public */,
       8,    0,  282,    4, 0x06 /* Public */,
       9,    1,  283,    4, 0x06 /* Public */,
      11,    1,  286,    4, 0x06 /* Public */,
      13,    2,  289,    4, 0x06 /* Public */,
      16,    0,  294,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  295,    4, 0x08 /* Private */,
      18,    1,  296,    4, 0x08 /* Private */,
      21,    0,  299,    4, 0x08 /* Private */,
      22,    0,  300,    4, 0x08 /* Private */,
      23,    2,  301,    4, 0x08 /* Private */,
      27,    0,  306,    4, 0x08 /* Private */,
      28,    1,  307,    4, 0x08 /* Private */,
      30,    1,  310,    4, 0x08 /* Private */,
      31,    0,  313,    4, 0x08 /* Private */,
      32,    0,  314,    4, 0x08 /* Private */,
      33,    0,  315,    4, 0x08 /* Private */,
      34,    0,  316,    4, 0x08 /* Private */,
      35,    1,  317,    4, 0x08 /* Private */,
      37,    4,  320,    4, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      42,    3,  329,    4, 0x02 /* Public */,
      46,    1,  336,    4, 0x02 /* Public */,
      48,    0,  339,    4, 0x02 /* Public */,
      49,    0,  340,    4, 0x02 /* Public */,
      50,    0,  341,    4, 0x02 /* Public */,
      51,    0,  342,    4, 0x02 /* Public */,
      52,    0,  343,    4, 0x02 /* Public */,
      53,    1,  344,    4, 0x02 /* Public */,
      55,    1,  347,    4, 0x02 /* Public */,
      57,    0,  350,    4, 0x02 /* Public */,
      58,    0,  351,    4, 0x02 /* Public */,
      59,    1,  352,    4, 0x02 /* Public */,
      61,    0,  355,    4, 0x02 /* Public */,
      62,    0,  356,    4, 0x02 /* Public */,
      63,    1,  357,    4, 0x02 /* Public */,
      65,    2,  360,    4, 0x02 /* Public */,
      65,    1,  365,    4, 0x22 /* Public | MethodCloned */,
      65,    2,  368,    4, 0x02 /* Public */,
      65,    1,  373,    4, 0x22 /* Public | MethodCloned */,
      68,    1,  376,    4, 0x02 /* Public */,
      70,    0,  379,    4, 0x02 /* Public */,
      71,    1,  380,    4, 0x02 /* Public */,
      73,    0,  383,    4, 0x02 /* Public */,
      74,    0,  384,    4, 0x02 /* Public */,
      75,    0,  385,    4, 0x02 /* Public */,
      76,    0,  386,    4, 0x02 /* Public */,
      77,    1,  387,    4, 0x02 /* Public */,
      79,    1,  390,    4, 0x02 /* Public */,
      81,    0,  393,    4, 0x02 /* Public */,
      82,    0,  394,    4, 0x02 /* Public */,
      83,    1,  395,    4, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24, QMetaType::QString,   25,   26,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   12,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,   38,   39,   40,   41,

 // methods: parameters
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   43,   44,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,   54,
    QMetaType::Bool, QMetaType::Int,   56,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::QString, QMetaType::QString,   60,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,   64,
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::Bool,   20,   66,
    QMetaType::Void, QMetaType::QVariantMap,   20,
    QMetaType::Void, 0x80000000 | 67, QMetaType::Bool,   20,   66,
    QMetaType::Void, 0x80000000 | 67,   20,
    QMetaType::Void, QMetaType::QString,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   78,
    QMetaType::Void, QMetaType::Int,   80,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::Int,   84,

       0        // eod
};

void DeviceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeviceInterface *_t = static_cast<DeviceInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->operationRunningChanged(); break;
        case 3: _t->buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->deviceEventTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->informationChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->connectionStateChanged(); break;
        case 7: _t->onRefreshTimer(); break;
        case 8: _t->onNotification((*reinterpret_cast< watchfish::Notification*(*)>(_a[1]))); break;
        case 9: _t->onRingingChanged(); break;
        case 10: _t->onConnectionStateChanged(); break;
        case 11: _t->slot_informationChanged((*reinterpret_cast< Amazfish::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->musicChanged(); break;
        case 13: _t->deviceEvent((*reinterpret_cast< AbstractDevice::Event(*)>(_a[1]))); break;
        case 14: _t->handleButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onEventTimer(); break;
        case 16: _t->backgroundActivityStateChanged(); break;
        case 17: _t->onCitiesChanged(); break;
        case 18: _t->onWeatherReady(); break;
        case 19: _t->navigationRunningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->navigationChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 21: { QString _r = _t->pair((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: _t->connectToDevice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->disconnect(); break;
        case 24: _t->unpair(); break;
        case 25: { QString _r = _t->connectionState();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->connectionStateChangedCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->operationRunning();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->supportsFeature((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->supportsDataType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->supportedFeatures();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->supportedDataTypes();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { QString _r = _t->prepareFirmwareDownload((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->startDownload();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: _t->refreshInformation(); break;
        case 35: { QString _r = _t->information((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: _t->sendAlert((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->sendAlert((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 38: _t->sendAlert((*reinterpret_cast< const Amazfish::WatchNotification(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 39: _t->sendAlert((*reinterpret_cast< const Amazfish::WatchNotification(*)>(_a[1]))); break;
        case 40: _t->incomingCall((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->incomingCallEnded(); break;
        case 42: _t->applyDeviceSetting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->requestManualHeartrate(); break;
        case 44: _t->triggerSendWeather(); break;
        case 45: _t->updateCalendar(); break;
        case 46: _t->reloadCities(); break;
        case 47: _t->enableFeature((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->fetchData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->requestScreenshot(); break;
        case 50: { QStringList _r = _t->supportedDisplayItems();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 51: _t->immediateAlert((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< watchfish::Notification* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Amazfish::Info >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Amazfish::WatchNotification >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Amazfish::WatchNotification >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DeviceInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceInterface::message)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeviceInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceInterface::downloadProgress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeviceInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceInterface::operationRunningChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeviceInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceInterface::buttonPressed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DeviceInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceInterface::deviceEventTriggered)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DeviceInterface::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceInterface::informationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DeviceInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceInterface::connectionStateChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject DeviceInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DeviceInterface.data,
      qt_meta_data_DeviceInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeviceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceInterface.stringdata0))
        return static_cast<void*>(const_cast< DeviceInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int DeviceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void DeviceInterface::message(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceInterface::downloadProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceInterface::operationRunningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DeviceInterface::buttonPressed(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeviceInterface::deviceEventTriggered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DeviceInterface::informationChanged(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DeviceInterface::connectionStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
