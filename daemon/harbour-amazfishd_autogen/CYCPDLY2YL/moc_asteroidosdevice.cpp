/****************************************************************************
** Meta object code from reading C++ file 'asteroidosdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/devices/asteroidosdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asteroidosdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AsteroidOSDevice_t {
    QByteArrayData data[10];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsteroidOSDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsteroidOSDevice_t qt_meta_stringdata_AsteroidOSDevice = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AsteroidOSDevice"
QT_MOC_LITERAL(1, 17, 13), // "authenticated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "ready"
QT_MOC_LITERAL(4, 38, 12), // "serviceEvent"
QT_MOC_LITERAL(5, 51, 14), // "characteristic"
QT_MOC_LITERAL(6, 66, 7), // "uint8_t"
QT_MOC_LITERAL(7, 74, 5), // "event"
QT_MOC_LITERAL(8, 80, 4), // "data"
QT_MOC_LITERAL(9, 85, 18) // "screenshotReceived"

    },
    "AsteroidOSDevice\0authenticated\0\0ready\0"
    "serviceEvent\0characteristic\0uint8_t\0"
    "event\0data\0screenshotReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsteroidOSDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    3,   32,    2, 0x08 /* Private */,
       9,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 6,    5,    7,    8,
    QMetaType::Void, QMetaType::QByteArray,    8,

       0        // eod
};

void AsteroidOSDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsteroidOSDevice *_t = static_cast<AsteroidOSDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authenticated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->serviceEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3]))); break;
        case 2: _t->screenshotReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AsteroidOSDevice::staticMetaObject = {
    { &AbstractDevice::staticMetaObject, qt_meta_stringdata_AsteroidOSDevice.data,
      qt_meta_data_AsteroidOSDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AsteroidOSDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsteroidOSDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AsteroidOSDevice.stringdata0))
        return static_cast<void*>(const_cast< AsteroidOSDevice*>(this));
    return AbstractDevice::qt_metacast(_clname);
}

int AsteroidOSDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
