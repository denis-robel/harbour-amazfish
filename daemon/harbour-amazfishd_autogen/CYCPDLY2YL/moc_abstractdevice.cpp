/****************************************************************************
** Meta object code from reading C++ file 'abstractdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/devices/abstractdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractDevice_t {
    QByteArrayData data[32];
    char stringdata0[459];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractDevice_t qt_meta_stringdata_AbstractDevice = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AbstractDevice"
QT_MOC_LITERAL(1, 15, 23), // "operationRunningChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "message"
QT_MOC_LITERAL(4, 48, 4), // "text"
QT_MOC_LITERAL(5, 53, 16), // "downloadProgress"
QT_MOC_LITERAL(6, 70, 7), // "percent"
QT_MOC_LITERAL(7, 78, 13), // "buttonPressed"
QT_MOC_LITERAL(8, 92, 7), // "presses"
QT_MOC_LITERAL(9, 100, 22), // "connectionStateChanged"
QT_MOC_LITERAL(10, 123, 18), // "informationChanged"
QT_MOC_LITERAL(11, 142, 14), // "Amazfish::Info"
QT_MOC_LITERAL(12, 157, 3), // "key"
QT_MOC_LITERAL(13, 161, 3), // "val"
QT_MOC_LITERAL(14, 165, 11), // "deviceEvent"
QT_MOC_LITERAL(15, 177, 5), // "Event"
QT_MOC_LITERAL(16, 183, 5), // "event"
QT_MOC_LITERAL(17, 189, 11), // "deviceError"
QT_MOC_LITERAL(18, 201, 16), // "EVENT_MUSIC_STOP"
QT_MOC_LITERAL(19, 218, 16), // "EVENT_MUSIC_PLAY"
QT_MOC_LITERAL(20, 235, 17), // "EVENT_MUSIC_PAUSE"
QT_MOC_LITERAL(21, 253, 21), // "EVENT_MUSIC_PLAYPAUSE"
QT_MOC_LITERAL(22, 275, 16), // "EVENT_MUSIC_NEXT"
QT_MOC_LITERAL(23, 292, 16), // "EVENT_MUSIC_PREV"
QT_MOC_LITERAL(24, 309, 17), // "EVENT_MUSIC_VOLUP"
QT_MOC_LITERAL(25, 327, 19), // "EVENT_MUSIC_VOLDOWN"
QT_MOC_LITERAL(26, 347, 15), // "EVENT_APP_MUSIC"
QT_MOC_LITERAL(27, 363, 18), // "EVENT_DECLINE_CALL"
QT_MOC_LITERAL(28, 382, 17), // "EVENT_ANSWER_CALL"
QT_MOC_LITERAL(29, 400, 17), // "EVENT_IGNORE_CALL"
QT_MOC_LITERAL(30, 418, 16), // "EVENT_FIND_PHONE"
QT_MOC_LITERAL(31, 435, 23) // "EVENT_CANCEL_FIND_PHONE"

    },
    "AbstractDevice\0operationRunningChanged\0"
    "\0message\0text\0downloadProgress\0percent\0"
    "buttonPressed\0presses\0connectionStateChanged\0"
    "informationChanged\0Amazfish::Info\0key\0"
    "val\0deviceEvent\0Event\0event\0deviceError\0"
    "EVENT_MUSIC_STOP\0EVENT_MUSIC_PLAY\0"
    "EVENT_MUSIC_PAUSE\0EVENT_MUSIC_PLAYPAUSE\0"
    "EVENT_MUSIC_NEXT\0EVENT_MUSIC_PREV\0"
    "EVENT_MUSIC_VOLUP\0EVENT_MUSIC_VOLDOWN\0"
    "EVENT_APP_MUSIC\0EVENT_DECLINE_CALL\0"
    "EVENT_ANSWER_CALL\0EVENT_IGNORE_CALL\0"
    "EVENT_FIND_PHONE\0EVENT_CANCEL_FIND_PHONE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   76, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,
       7,    1,   61,    2, 0x06 /* Public */,
       9,    0,   64,    2, 0x06 /* Public */,
      10,    2,   65,    2, 0x06 /* Public */,
      14,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,   73,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // enums: name, flags, count, data
      15, 0x0,   14,   80,

 // enum data: key, value
      18, uint(AbstractDevice::EVENT_MUSIC_STOP),
      19, uint(AbstractDevice::EVENT_MUSIC_PLAY),
      20, uint(AbstractDevice::EVENT_MUSIC_PAUSE),
      21, uint(AbstractDevice::EVENT_MUSIC_PLAYPAUSE),
      22, uint(AbstractDevice::EVENT_MUSIC_NEXT),
      23, uint(AbstractDevice::EVENT_MUSIC_PREV),
      24, uint(AbstractDevice::EVENT_MUSIC_VOLUP),
      25, uint(AbstractDevice::EVENT_MUSIC_VOLDOWN),
      26, uint(AbstractDevice::EVENT_APP_MUSIC),
      27, uint(AbstractDevice::EVENT_DECLINE_CALL),
      28, uint(AbstractDevice::EVENT_ANSWER_CALL),
      29, uint(AbstractDevice::EVENT_IGNORE_CALL),
      30, uint(AbstractDevice::EVENT_FIND_PHONE),
      31, uint(AbstractDevice::EVENT_CANCEL_FIND_PHONE),

       0        // eod
};

void AbstractDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractDevice *_t = static_cast<AbstractDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->operationRunningChanged(); break;
        case 1: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->connectionStateChanged(); break;
        case 5: _t->informationChanged((*reinterpret_cast< Amazfish::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->deviceEvent((*reinterpret_cast< Event(*)>(_a[1]))); break;
        case 7: _t->deviceError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Amazfish::Info >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractDevice::operationRunningChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractDevice::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractDevice::message)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractDevice::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractDevice::downloadProgress)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AbstractDevice::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractDevice::buttonPressed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AbstractDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractDevice::connectionStateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AbstractDevice::*_t)(Amazfish::Info , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractDevice::informationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (AbstractDevice::*_t)(Event );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractDevice::deviceEvent)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject AbstractDevice::staticMetaObject = {
    { &QBLEDevice::staticMetaObject, qt_meta_stringdata_AbstractDevice.data,
      qt_meta_data_AbstractDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AbstractDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractDevice.stringdata0))
        return static_cast<void*>(const_cast< AbstractDevice*>(this));
    return QBLEDevice::qt_metacast(_clname);
}

int AbstractDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBLEDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AbstractDevice::operationRunningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AbstractDevice::message(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractDevice::downloadProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AbstractDevice::buttonPressed(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AbstractDevice::connectionStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void AbstractDevice::informationChanged(Amazfish::Info _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AbstractDevice::deviceEvent(Event _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
