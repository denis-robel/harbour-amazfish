/****************************************************************************
** Meta object code from reading C++ file 'deviceinfoservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/services/deviceinfoservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceinfoservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DeviceInfoService_t {
    QByteArrayData data[10];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceInfoService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceInfoService_t qt_meta_stringdata_DeviceInfoService = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DeviceInfoService"
QT_MOC_LITERAL(1, 18, 18), // "informationChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "Amazfish::Info"
QT_MOC_LITERAL(4, 53, 3), // "key"
QT_MOC_LITERAL(5, 57, 3), // "val"
QT_MOC_LITERAL(6, 61, 18), // "characteristicRead"
QT_MOC_LITERAL(7, 80, 1), // "c"
QT_MOC_LITERAL(8, 82, 5), // "value"
QT_MOC_LITERAL(9, 88, 18) // "refreshInformation"

    },
    "DeviceInfoService\0informationChanged\0"
    "\0Amazfish::Info\0key\0val\0characteristicRead\0"
    "c\0value\0refreshInformation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceInfoService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   34,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    7,    8,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void DeviceInfoService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeviceInfoService *_t = static_cast<DeviceInfoService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->informationChanged((*reinterpret_cast< Amazfish::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->characteristicRead((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->refreshInformation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (DeviceInfoService::*_t)(Amazfish::Info , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceInfoService::informationChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DeviceInfoService::staticMetaObject = {
    { &QBLEService::staticMetaObject, qt_meta_stringdata_DeviceInfoService.data,
      qt_meta_data_DeviceInfoService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeviceInfoService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceInfoService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceInfoService.stringdata0))
        return static_cast<void*>(const_cast< DeviceInfoService*>(this));
    return QBLEService::qt_metacast(_clname);
}

int DeviceInfoService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBLEService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DeviceInfoService::informationChanged(Amazfish::Info _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
