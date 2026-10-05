/****************************************************************************
** Meta object code from reading C++ file 'adafruitblefsoperation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/operations/adafruitblefsoperation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adafruitblefsoperation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdafruitBleFsOperation_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdafruitBleFsOperation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdafruitBleFsOperation_t qt_meta_stringdata_AdafruitBleFsOperation = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AdafruitBleFsOperation"
QT_MOC_LITERAL(1, 23, 16), // "startUpdateFiles"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "AdafruitBleFsOperation*"
QT_MOC_LITERAL(4, 65, 7), // "service"
QT_MOC_LITERAL(5, 73, 3), // "mtu"
QT_MOC_LITERAL(6, 77, 15), // "workerDestroyed"
QT_MOC_LITERAL(7, 93, 6) // "object"

    },
    "AdafruitBleFsOperation\0startUpdateFiles\0"
    "\0AdafruitBleFsOperation*\0service\0mtu\0"
    "workerDestroyed\0object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdafruitBleFsOperation[] = {

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
       1,    2,   24,    2, 0x04 /* Private */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    7,

       0        // eod
};

void AdafruitBleFsOperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdafruitBleFsOperation *_t = static_cast<AdafruitBleFsOperation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startUpdateFiles((*reinterpret_cast< AdafruitBleFsOperation*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->workerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AdafruitBleFsOperation* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AdafruitBleFsOperation::*_t)(AdafruitBleFsOperation * , const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdafruitBleFsOperation::startUpdateFiles)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AdafruitBleFsOperation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AdafruitBleFsOperation.data,
      qt_meta_data_AdafruitBleFsOperation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdafruitBleFsOperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdafruitBleFsOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdafruitBleFsOperation.stringdata0))
        return static_cast<void*>(const_cast< AdafruitBleFsOperation*>(this));
    if (!strcmp(_clname, "AbstractOperation"))
        return static_cast< AbstractOperation*>(const_cast< AdafruitBleFsOperation*>(this));
    return QObject::qt_metacast(_clname);
}

int AdafruitBleFsOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AdafruitBleFsOperation::startUpdateFiles(AdafruitBleFsOperation * _t1, const int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
