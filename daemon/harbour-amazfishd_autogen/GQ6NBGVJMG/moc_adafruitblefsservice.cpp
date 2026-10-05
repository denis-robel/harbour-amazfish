/****************************************************************************
** Meta object code from reading C++ file 'adafruitblefsservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/services/adafruitblefsservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adafruitblefsservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdafruitBleFsService_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdafruitBleFsService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdafruitBleFsService_t qt_meta_stringdata_AdafruitBleFsService = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AdafruitBleFsService"
QT_MOC_LITERAL(1, 21, 21), // "characteristicChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "characteristic"
QT_MOC_LITERAL(4, 59, 5) // "value"

    },
    "AdafruitBleFsService\0characteristicChanged\0"
    "\0characteristic\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdafruitBleFsService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,

       0        // eod
};

void AdafruitBleFsService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdafruitBleFsService *_t = static_cast<AdafruitBleFsService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->characteristicChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject AdafruitBleFsService::staticMetaObject = {
    { &AbstractOperationService::staticMetaObject, qt_meta_stringdata_AdafruitBleFsService.data,
      qt_meta_data_AdafruitBleFsService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdafruitBleFsService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdafruitBleFsService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdafruitBleFsService.stringdata0))
        return static_cast<void*>(const_cast< AdafruitBleFsService*>(this));
    return AbstractOperationService::qt_metacast(_clname);
}

int AdafruitBleFsService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractOperationService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
