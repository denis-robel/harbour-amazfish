/****************************************************************************
** Meta object code from reading C++ file 'qbledevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qble/qbledevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbledevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QBLEDevice_t {
    QByteArrayData data[10];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBLEDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBLEDevice_t qt_meta_stringdata_QBLEDevice = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QBLEDevice"
QT_MOC_LITERAL(1, 11, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "interface"
QT_MOC_LITERAL(4, 40, 3), // "map"
QT_MOC_LITERAL(5, 44, 4), // "list"
QT_MOC_LITERAL(6, 49, 5), // "error"
QT_MOC_LITERAL(7, 55, 7), // "message"
QT_MOC_LITERAL(8, 63, 16), // "servicesResolved"
QT_MOC_LITERAL(9, 80, 22) // "onPropertiesChangedInt"

    },
    "QBLEDevice\0propertiesChanged\0\0interface\0"
    "map\0list\0error\0message\0servicesResolved\0"
    "onPropertiesChangedInt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBLEDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       6,    1,   41,    2, 0x06 /* Public */,
       8,    0,   44,    2, 0x05 /* Protected */,

 // slots: name, argc, parameters, tag, flags
       9,    3,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,    3,    4,    5,

       0        // eod
};

void QBLEDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBLEDevice *_t = static_cast<QBLEDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->servicesResolved(); break;
        case 3: _t->onPropertiesChangedInt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QBLEDevice::*_t)(const QString & , const QVariantMap & , const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEDevice::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBLEDevice::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEDevice::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBLEDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEDevice::servicesResolved)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QBLEDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBLEDevice.data,
      qt_meta_data_QBLEDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBLEDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBLEDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBLEDevice.stringdata0))
        return static_cast<void*>(const_cast< QBLEDevice*>(this));
    return QObject::qt_metacast(_clname);
}

int QBLEDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QBLEDevice::propertiesChanged(const QString & _t1, const QVariantMap & _t2, const QStringList & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QBLEDevice::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QBLEDevice::servicesResolved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
