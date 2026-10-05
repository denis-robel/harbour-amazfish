/****************************************************************************
** Meta object code from reading C++ file 'miband2service.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/services/miband2service.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'miband2service.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MiBand2Service_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MiBand2Service_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MiBand2Service_t qt_meta_stringdata_MiBand2Service = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MiBand2Service"
QT_MOC_LITERAL(1, 15, 13), // "authenticated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "ready"
QT_MOC_LITERAL(4, 36, 21), // "characteristicChanged"
QT_MOC_LITERAL(5, 58, 14), // "characteristic"
QT_MOC_LITERAL(6, 73, 5) // "value"

    },
    "MiBand2Service\0authenticated\0\0ready\0"
    "characteristicChanged\0characteristic\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiBand2Service[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    5,    6,

       0        // eod
};

void MiBand2Service::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MiBand2Service *_t = static_cast<MiBand2Service *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authenticated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->characteristicChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MiBand2Service::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiBand2Service::authenticated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MiBand2Service::staticMetaObject = {
    { &QBLEService::staticMetaObject, qt_meta_stringdata_MiBand2Service.data,
      qt_meta_data_MiBand2Service,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MiBand2Service::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiBand2Service::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MiBand2Service.stringdata0))
        return static_cast<void*>(const_cast< MiBand2Service*>(this));
    return QBLEService::qt_metacast(_clname);
}

int MiBand2Service::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBLEService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MiBand2Service::authenticated(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
