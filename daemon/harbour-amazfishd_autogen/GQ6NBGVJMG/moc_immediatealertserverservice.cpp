/****************************************************************************
** Meta object code from reading C++ file 'immediatealertserverservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/services/immediatealertserverservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'immediatealertserverservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImmediateAlertServerService_t {
    QByteArrayData data[10];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImmediateAlertServerService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImmediateAlertServerService_t qt_meta_stringdata_ImmediateAlertServerService = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ImmediateAlertServerService"
QT_MOC_LITERAL(1, 28, 17), // "alertLevelChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "level"
QT_MOC_LITERAL(4, 53, 14), // "onValueWritten"
QT_MOC_LITERAL(5, 68, 5), // "value"
QT_MOC_LITERAL(6, 74, 6), // "Levels"
QT_MOC_LITERAL(7, 81, 7), // "NoAlert"
QT_MOC_LITERAL(8, 89, 9), // "MildAlert"
QT_MOC_LITERAL(9, 99, 9) // "HighAlert"

    },
    "ImmediateAlertServerService\0"
    "alertLevelChanged\0\0level\0onValueWritten\0"
    "value\0Levels\0NoAlert\0MildAlert\0HighAlert"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImmediateAlertServerService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   30, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    5,

 // enums: name, flags, count, data
       6, 0x0,    3,   34,

 // enum data: key, value
       7, uint(ImmediateAlertServerService::Levels::NoAlert),
       8, uint(ImmediateAlertServerService::Levels::MildAlert),
       9, uint(ImmediateAlertServerService::Levels::HighAlert),

       0        // eod
};

void ImmediateAlertServerService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImmediateAlertServerService *_t = static_cast<ImmediateAlertServerService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->alertLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onValueWritten((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImmediateAlertServerService::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImmediateAlertServerService::alertLevelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ImmediateAlertServerService::staticMetaObject = {
    { &QBLELocalService::staticMetaObject, qt_meta_stringdata_ImmediateAlertServerService.data,
      qt_meta_data_ImmediateAlertServerService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImmediateAlertServerService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImmediateAlertServerService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImmediateAlertServerService.stringdata0))
        return static_cast<void*>(const_cast< ImmediateAlertServerService*>(this));
    return QBLELocalService::qt_metacast(_clname);
}

int ImmediateAlertServerService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBLELocalService::qt_metacall(_c, _id, _a);
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
void ImmediateAlertServerService::alertLevelChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
