/****************************************************************************
** Meta object code from reading C++ file 'asteroidnotificationservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/services/asteroidnotificationservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asteroidnotificationservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AsteroidNotificationService_t {
    QByteArrayData data[14];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsteroidNotificationService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsteroidNotificationService_t qt_meta_stringdata_AsteroidNotificationService = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AsteroidNotificationService"
QT_MOC_LITERAL(1, 28, 12), // "serviceEvent"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 1), // "c"
QT_MOC_LITERAL(4, 44, 7), // "uint8_t"
QT_MOC_LITERAL(5, 52, 5), // "event"
QT_MOC_LITERAL(6, 58, 9), // "sendAlert"
QT_MOC_LITERAL(7, 68, 27), // "Amazfish::WatchNotification"
QT_MOC_LITERAL(8, 96, 12), // "notification"
QT_MOC_LITERAL(9, 109, 18), // "removeNotification"
QT_MOC_LITERAL(10, 128, 2), // "id"
QT_MOC_LITERAL(11, 131, 12), // "incomingCall"
QT_MOC_LITERAL(12, 144, 6), // "caller"
QT_MOC_LITERAL(13, 151, 17) // "incomingCallEnded"

    },
    "AsteroidNotificationService\0serviceEvent\0"
    "\0c\0uint8_t\0event\0sendAlert\0"
    "Amazfish::WatchNotification\0notification\0"
    "removeNotification\0id\0incomingCall\0"
    "caller\0incomingCallEnded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsteroidNotificationService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x02 /* Public */,
       9,    1,   47,    2, 0x02 /* Public */,
      11,    1,   50,    2, 0x02 /* Public */,
      13,    0,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void AsteroidNotificationService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsteroidNotificationService *_t = static_cast<AsteroidNotificationService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serviceEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2]))); break;
        case 1: _t->sendAlert((*reinterpret_cast< const Amazfish::WatchNotification(*)>(_a[1]))); break;
        case 2: _t->removeNotification((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->incomingCall((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->incomingCallEnded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            typedef void (AsteroidNotificationService::*_t)(const QString & , uint8_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AsteroidNotificationService::serviceEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AsteroidNotificationService::staticMetaObject = {
    { &QBLEService::staticMetaObject, qt_meta_stringdata_AsteroidNotificationService.data,
      qt_meta_data_AsteroidNotificationService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AsteroidNotificationService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsteroidNotificationService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AsteroidNotificationService.stringdata0))
        return static_cast<void*>(const_cast< AsteroidNotificationService*>(this));
    return QBLEService::qt_metacast(_clname);
}

int AsteroidNotificationService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBLEService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AsteroidNotificationService::serviceEvent(const QString & _t1, uint8_t _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
