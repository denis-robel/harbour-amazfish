/****************************************************************************
** Meta object code from reading C++ file 'daemoninterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/daemoninterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'daemoninterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DaemonInterface_t {
    QByteArrayData data[67];
    char stringdata0[872];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DaemonInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DaemonInterface_t qt_meta_stringdata_DaemonInterface = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DaemonInterface"
QT_MOC_LITERAL(1, 16, 6), // "paired"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "name"
QT_MOC_LITERAL(4, 29, 7), // "address"
QT_MOC_LITERAL(5, 37, 5), // "error"
QT_MOC_LITERAL(6, 43, 14), // "pairingChanged"
QT_MOC_LITERAL(7, 58, 7), // "message"
QT_MOC_LITERAL(8, 66, 4), // "text"
QT_MOC_LITERAL(9, 71, 16), // "downloadProgress"
QT_MOC_LITERAL(10, 88, 7), // "percent"
QT_MOC_LITERAL(11, 96, 23), // "operationRunningChanged"
QT_MOC_LITERAL(12, 120, 13), // "buttonPressed"
QT_MOC_LITERAL(13, 134, 7), // "presses"
QT_MOC_LITERAL(14, 142, 18), // "informationChanged"
QT_MOC_LITERAL(15, 161, 7), // "infoKey"
QT_MOC_LITERAL(16, 169, 9), // "infoValue"
QT_MOC_LITERAL(17, 179, 22), // "connectionStateChanged"
QT_MOC_LITERAL(18, 202, 34), // "connectionStateChangedCountCh..."
QT_MOC_LITERAL(19, 237, 4), // "pair"
QT_MOC_LITERAL(20, 242, 10), // "deviceType"
QT_MOC_LITERAL(21, 253, 21), // "changeConnectionState"
QT_MOC_LITERAL(22, 275, 15), // "connectToDevice"
QT_MOC_LITERAL(23, 291, 10), // "disconnect"
QT_MOC_LITERAL(24, 302, 6), // "unpair"
QT_MOC_LITERAL(25, 309, 15), // "supportsFeature"
QT_MOC_LITERAL(26, 325, 17), // "Amazfish::Feature"
QT_MOC_LITERAL(27, 343, 1), // "f"
QT_MOC_LITERAL(28, 345, 16), // "supportsDataType"
QT_MOC_LITERAL(29, 362, 18), // "Amazfish::DataType"
QT_MOC_LITERAL(30, 381, 1), // "t"
QT_MOC_LITERAL(31, 383, 17), // "supportedFeatures"
QT_MOC_LITERAL(32, 401, 18), // "supportedDataTypes"
QT_MOC_LITERAL(33, 420, 23), // "prepareFirmwareDownload"
QT_MOC_LITERAL(34, 444, 4), // "path"
QT_MOC_LITERAL(35, 449, 13), // "startDownload"
QT_MOC_LITERAL(36, 463, 9), // "fetchData"
QT_MOC_LITERAL(37, 473, 9), // "dataTypes"
QT_MOC_LITERAL(38, 483, 18), // "refreshInformation"
QT_MOC_LITERAL(39, 502, 11), // "information"
QT_MOC_LITERAL(40, 514, 14), // "Amazfish::Info"
QT_MOC_LITERAL(41, 529, 1), // "i"
QT_MOC_LITERAL(42, 531, 9), // "sendAlert"
QT_MOC_LITERAL(43, 541, 14), // "notificationId"
QT_MOC_LITERAL(44, 556, 5), // "appId"
QT_MOC_LITERAL(45, 562, 7), // "appName"
QT_MOC_LITERAL(46, 570, 7), // "summary"
QT_MOC_LITERAL(47, 578, 4), // "body"
QT_MOC_LITERAL(48, 583, 14), // "allowDuplicate"
QT_MOC_LITERAL(49, 598, 12), // "incomingCall"
QT_MOC_LITERAL(50, 611, 6), // "caller"
QT_MOC_LITERAL(51, 618, 18), // "applyDeviceSetting"
QT_MOC_LITERAL(52, 637, 18), // "Amazfish::Settings"
QT_MOC_LITERAL(53, 656, 1), // "s"
QT_MOC_LITERAL(54, 658, 22), // "requestManualHeartrate"
QT_MOC_LITERAL(55, 681, 18), // "triggerSendWeather"
QT_MOC_LITERAL(56, 700, 14), // "updateCalendar"
QT_MOC_LITERAL(57, 715, 12), // "reloadCities"
QT_MOC_LITERAL(58, 728, 13), // "enableFeature"
QT_MOC_LITERAL(59, 742, 7), // "feature"
QT_MOC_LITERAL(60, 750, 17), // "requestScreenshot"
QT_MOC_LITERAL(61, 768, 21), // "supportedDisplayItems"
QT_MOC_LITERAL(62, 790, 14), // "immediateAlert"
QT_MOC_LITERAL(63, 805, 5), // "level"
QT_MOC_LITERAL(64, 811, 15), // "connectionState"
QT_MOC_LITERAL(65, 827, 27), // "connectionStateChangedCount"
QT_MOC_LITERAL(66, 855, 16) // "operationRunning"

    },
    "DaemonInterface\0paired\0\0name\0address\0"
    "error\0pairingChanged\0message\0text\0"
    "downloadProgress\0percent\0"
    "operationRunningChanged\0buttonPressed\0"
    "presses\0informationChanged\0infoKey\0"
    "infoValue\0connectionStateChanged\0"
    "connectionStateChangedCountChanged\0"
    "pair\0deviceType\0changeConnectionState\0"
    "connectToDevice\0disconnect\0unpair\0"
    "supportsFeature\0Amazfish::Feature\0f\0"
    "supportsDataType\0Amazfish::DataType\0"
    "t\0supportedFeatures\0supportedDataTypes\0"
    "prepareFirmwareDownload\0path\0startDownload\0"
    "fetchData\0dataTypes\0refreshInformation\0"
    "information\0Amazfish::Info\0i\0sendAlert\0"
    "notificationId\0appId\0appName\0summary\0"
    "body\0allowDuplicate\0incomingCall\0"
    "caller\0applyDeviceSetting\0Amazfish::Settings\0"
    "s\0requestManualHeartrate\0triggerSendWeather\0"
    "updateCalendar\0reloadCities\0enableFeature\0"
    "feature\0requestScreenshot\0"
    "supportedDisplayItems\0immediateAlert\0"
    "level\0connectionState\0connectionStateChangedCount\0"
    "operationRunning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DaemonInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       3,  286, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  189,    2, 0x06 /* Public */,
       6,    0,  196,    2, 0x06 /* Public */,
       7,    1,  197,    2, 0x06 /* Public */,
       9,    1,  200,    2, 0x06 /* Public */,
      11,    0,  203,    2, 0x06 /* Public */,
      12,    1,  204,    2, 0x06 /* Public */,
      14,    2,  207,    2, 0x06 /* Public */,
      17,    0,  212,    2, 0x06 /* Public */,
      18,    0,  213,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    3,  214,    2, 0x0a /* Public */,
      21,    0,  221,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      22,    0,  222,    2, 0x02 /* Public */,
      23,    0,  223,    2, 0x02 /* Public */,
      24,    0,  224,    2, 0x02 /* Public */,
      25,    1,  225,    2, 0x02 /* Public */,
      28,    1,  228,    2, 0x02 /* Public */,
      31,    0,  231,    2, 0x02 /* Public */,
      32,    0,  232,    2, 0x02 /* Public */,
      33,    1,  233,    2, 0x02 /* Public */,
      35,    0,  236,    2, 0x02 /* Public */,
      36,    1,  237,    2, 0x02 /* Public */,
      38,    0,  240,    2, 0x02 /* Public */,
      39,    1,  241,    2, 0x02 /* Public */,
      42,    6,  244,    2, 0x02 /* Public */,
      42,    5,  257,    2, 0x22 /* Public | MethodCloned */,
      49,    1,  268,    2, 0x02 /* Public */,
      51,    1,  271,    2, 0x02 /* Public */,
      54,    0,  274,    2, 0x02 /* Public */,
      55,    0,  275,    2, 0x02 /* Public */,
      56,    0,  276,    2, 0x02 /* Public */,
      57,    0,  277,    2, 0x02 /* Public */,
      58,    1,  278,    2, 0x02 /* Public */,
      60,    0,  281,    2, 0x02 /* Public */,
      61,    0,  282,    2, 0x02 /* Public */,
      62,    1,  283,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   15,   16,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,   20,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 26,   27,
    QMetaType::Bool, 0x80000000 | 29,   30,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::QString, QMetaType::QString,   34,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   43,   44,   45,   46,   47,   48,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   43,   44,   45,   46,   47,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   59,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::Int,   63,

 // properties: name, type, flags
      64, QMetaType::QString, 0x00495003,
      65, QMetaType::Int, 0x00495003,
      66, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       7,
       8,
       4,

       0        // eod
};

void DaemonInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DaemonInterface *_t = static_cast<DaemonInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paired((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->pairingChanged(); break;
        case 2: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->operationRunningChanged(); break;
        case 5: _t->buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->informationChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->connectionStateChanged(); break;
        case 8: _t->connectionStateChangedCountChanged(); break;
        case 9: _t->pair((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->changeConnectionState(); break;
        case 11: _t->connectToDevice(); break;
        case 12: _t->disconnect(); break;
        case 13: _t->unpair(); break;
        case 14: { bool _r = _t->supportsFeature((*reinterpret_cast< Amazfish::Feature(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->supportsDataType((*reinterpret_cast< Amazfish::DataType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->supportedFeatures();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->supportedDataTypes();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->prepareFirmwareDownload((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->startDownload();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->fetchData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->refreshInformation(); break;
        case 22: { QString _r = _t->information((*reinterpret_cast< Amazfish::Info(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: _t->sendAlert((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 24: _t->sendAlert((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 25: _t->incomingCall((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->applyDeviceSetting((*reinterpret_cast< Amazfish::Settings(*)>(_a[1]))); break;
        case 27: _t->requestManualHeartrate(); break;
        case 28: _t->triggerSendWeather(); break;
        case 29: _t->updateCalendar(); break;
        case 30: _t->reloadCities(); break;
        case 31: _t->enableFeature((*reinterpret_cast< Amazfish::Feature(*)>(_a[1]))); break;
        case 32: _t->requestScreenshot(); break;
        case 33: { QStringList _r = _t->supportedDisplayItems();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 34: _t->immediateAlert((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Amazfish::Feature >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Amazfish::DataType >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Amazfish::Info >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Amazfish::Settings >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Amazfish::Feature >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DaemonInterface::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DaemonInterface::paired)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DaemonInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DaemonInterface::pairingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DaemonInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DaemonInterface::message)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DaemonInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DaemonInterface::downloadProgress)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DaemonInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DaemonInterface::operationRunningChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DaemonInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DaemonInterface::buttonPressed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DaemonInterface::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DaemonInterface::informationChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DaemonInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DaemonInterface::connectionStateChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DaemonInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DaemonInterface::connectionStateChangedCountChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DaemonInterface *_t = static_cast<DaemonInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_connectionState; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->m_connectionStateChangedCount; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->operationRunning(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DaemonInterface *_t = static_cast<DaemonInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_connectionState != *reinterpret_cast< QString*>(_v)) {
                _t->m_connectionState = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->connectionStateChanged();
            }
            break;
        case 1:
            if (_t->m_connectionStateChangedCount != *reinterpret_cast< int*>(_v)) {
                _t->m_connectionStateChangedCount = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->connectionStateChangedCountChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DaemonInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DaemonInterface.data,
      qt_meta_data_DaemonInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DaemonInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DaemonInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DaemonInterface.stringdata0))
        return static_cast<void*>(const_cast< DaemonInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int DaemonInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DaemonInterface::paired(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DaemonInterface::pairingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DaemonInterface::message(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DaemonInterface::downloadProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DaemonInterface::operationRunningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void DaemonInterface::buttonPressed(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DaemonInterface::informationChanged(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DaemonInterface::connectionStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void DaemonInterface::connectionStateChangedCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
