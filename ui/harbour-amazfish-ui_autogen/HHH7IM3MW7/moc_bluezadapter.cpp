/****************************************************************************
** Meta object code from reading C++ file 'bluezadapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qble/bluezadapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluezadapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BluezAdapter_t {
    QByteArrayData data[12];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BluezAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BluezAdapter_t qt_meta_stringdata_BluezAdapter = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BluezAdapter"
QT_MOC_LITERAL(1, 13, 14), // "setAdapterPath"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "path"
QT_MOC_LITERAL(4, 34, 14), // "startDiscovery"
QT_MOC_LITERAL(5, 49, 13), // "stopDiscovery"
QT_MOC_LITERAL(6, 63, 11), // "matchDevice"
QT_MOC_LITERAL(7, 75, 5), // "match"
QT_MOC_LITERAL(8, 81, 13), // "deviceIsValid"
QT_MOC_LITERAL(9, 95, 10), // "deviceName"
QT_MOC_LITERAL(10, 106, 12), // "removeDevice"
QT_MOC_LITERAL(11, 119, 6) // "device"

    },
    "BluezAdapter\0setAdapterPath\0\0path\0"
    "startDiscovery\0stopDiscovery\0matchDevice\0"
    "match\0deviceIsValid\0deviceName\0"
    "removeDevice\0device"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BluezAdapter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x02 /* Public */,
       4,    0,   52,    2, 0x02 /* Public */,
       5,    0,   53,    2, 0x02 /* Public */,
       6,    1,   54,    2, 0x02 /* Public */,
       8,    1,   57,    2, 0x02 /* Public */,
       9,    1,   60,    2, 0x02 /* Public */,
      10,    1,   63,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    7,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void BluezAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BluezAdapter *_t = static_cast<BluezAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAdapterPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->startDiscovery(); break;
        case 2: _t->stopDiscovery(); break;
        case 3: { QString _r = _t->matchDevice((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->deviceIsValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->deviceName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: _t->removeDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject BluezAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BluezAdapter.data,
      qt_meta_data_BluezAdapter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BluezAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluezAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BluezAdapter.stringdata0))
        return static_cast<void*>(const_cast< BluezAdapter*>(this));
    return QObject::qt_metacast(_clname);
}

int BluezAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
