/****************************************************************************
** Meta object code from reading C++ file 'dbushrm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/dbushrm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbushrm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusHRM_t {
    QByteArrayData data[8];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusHRM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusHRM_t qt_meta_stringdata_DBusHRM = {
    {
QT_MOC_LITERAL(0, 0, 7), // "DBusHRM"
QT_MOC_LITERAL(1, 8, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 24, 24), // "org.sailfishos.heartrate"
QT_MOC_LITERAL(3, 49, 5), // "start"
QT_MOC_LITERAL(4, 55, 0), // ""
QT_MOC_LITERAL(5, 56, 4), // "stop"
QT_MOC_LITERAL(6, 61, 9), // "heartRate"
QT_MOC_LITERAL(7, 71, 12) // "batteryLevel"

    },
    "DBusHRM\0D-Bus Interface\0"
    "org.sailfishos.heartrate\0start\0\0stop\0"
    "heartRate\0batteryLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusHRM[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    0,   36,    4, 0x0a /* Public */,
       5,    0,   37,    4, 0x0a /* Public */,
       6,    0,   38,    4, 0x0a /* Public */,
       7,    0,   39,    4, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,

       0        // eod
};

void DBusHRM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusHRM *_t = static_cast<DBusHRM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->stop(); break;
        case 2: { int _r = _t->heartRate();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->batteryLevel();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject DBusHRM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DBusHRM.data,
      qt_meta_data_DBusHRM,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusHRM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusHRM::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusHRM.stringdata0))
        return static_cast<void*>(const_cast< DBusHRM*>(this));
    return QObject::qt_metacast(_clname);
}

int DBusHRM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
