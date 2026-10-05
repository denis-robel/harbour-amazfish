/****************************************************************************
** Meta object code from reading C++ file 'navigationinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/navigationinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NavigationInterface_t {
    QByteArrayData data[12];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavigationInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavigationInterface_t qt_meta_stringdata_NavigationInterface = {
    {
QT_MOC_LITERAL(0, 0, 19), // "NavigationInterface"
QT_MOC_LITERAL(1, 20, 14), // "runningChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "navigationChanged"
QT_MOC_LITERAL(4, 54, 4), // "icon"
QT_MOC_LITERAL(5, 59, 9), // "narrative"
QT_MOC_LITERAL(6, 69, 7), // "manDisk"
QT_MOC_LITERAL(7, 77, 7), // "percent"
QT_MOC_LITERAL(8, 85, 21), // "slot_narrativeChanged"
QT_MOC_LITERAL(9, 107, 19), // "slot_runningChanged"
QT_MOC_LITERAL(10, 127, 16), // "slot_iconChanged"
QT_MOC_LITERAL(11, 144, 19) // "slot_manDistChanged"

    },
    "NavigationInterface\0runningChanged\0\0"
    "navigationChanged\0icon\0narrative\0"
    "manDisk\0percent\0slot_narrativeChanged\0"
    "slot_runningChanged\0slot_iconChanged\0"
    "slot_manDistChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavigationInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    4,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,
      10,    0,   58,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NavigationInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavigationInterface *_t = static_cast<NavigationInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->navigationChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->slot_narrativeChanged(); break;
        case 3: _t->slot_runningChanged(); break;
        case 4: _t->slot_iconChanged(); break;
        case 5: _t->slot_manDistChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NavigationInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationInterface::runningChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NavigationInterface::*_t)(const QString & , const QString & , const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationInterface::navigationChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject NavigationInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NavigationInterface.data,
      qt_meta_data_NavigationInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NavigationInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavigationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NavigationInterface.stringdata0))
        return static_cast<void*>(const_cast< NavigationInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int NavigationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NavigationInterface::runningChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NavigationInterface::navigationChanged(const QString & _t1, const QString & _t2, const QString & _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
