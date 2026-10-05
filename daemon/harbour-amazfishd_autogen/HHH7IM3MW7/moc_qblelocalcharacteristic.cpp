/****************************************************************************
** Meta object code from reading C++ file 'qblelocalcharacteristic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qble/qblelocalcharacteristic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qblelocalcharacteristic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QBLELocalCharacteristic_t {
    QByteArrayData data[17];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBLELocalCharacteristic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBLELocalCharacteristic_t qt_meta_stringdata_QBLELocalCharacteristic = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QBLELocalCharacteristic"
QT_MOC_LITERAL(1, 24, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 40, 29), // "org.bluez.GattCharacteristic1"
QT_MOC_LITERAL(3, 70, 12), // "valueWritten"
QT_MOC_LITERAL(4, 83, 0), // ""
QT_MOC_LITERAL(5, 84, 5), // "value"
QT_MOC_LITERAL(6, 90, 9), // "ReadValue"
QT_MOC_LITERAL(7, 100, 7), // "options"
QT_MOC_LITERAL(8, 108, 10), // "WriteValue"
QT_MOC_LITERAL(9, 119, 11), // "StartNotify"
QT_MOC_LITERAL(10, 131, 10), // "StopNotify"
QT_MOC_LITERAL(11, 142, 7), // "Service"
QT_MOC_LITERAL(12, 150, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(13, 166, 4), // "UUID"
QT_MOC_LITERAL(14, 171, 5), // "Flags"
QT_MOC_LITERAL(15, 177, 11), // "Descriptors"
QT_MOC_LITERAL(16, 189, 22) // "QList<QDBusObjectPath>"

    },
    "QBLELocalCharacteristic\0D-Bus Interface\0"
    "org.bluez.GattCharacteristic1\0"
    "valueWritten\0\0value\0ReadValue\0options\0"
    "WriteValue\0StartNotify\0StopNotify\0"
    "Service\0QDBusObjectPath\0UUID\0Flags\0"
    "Descriptors\0QList<QDBusObjectPath>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBLELocalCharacteristic[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       4,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   41,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   44,    4, 0x0a /* Public */,
       8,    2,   47,    4, 0x0a /* Public */,
       9,    0,   52,    4, 0x0a /* Public */,
      10,    0,   53,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    5,

 // slots: parameters
    QMetaType::QByteArray, QMetaType::QVariantMap,    7,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QVariantMap,    5,    7,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x00095009,
      13, QMetaType::QString, 0x00095001,
      14, QMetaType::QStringList, 0x00095001,
      15, 0x80000000 | 16, 0x00095009,

       0        // eod
};

void QBLELocalCharacteristic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBLELocalCharacteristic *_t = static_cast<QBLELocalCharacteristic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueWritten((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: { QByteArray _r = _t->ReadValue((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 2: _t->WriteValue((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 3: _t->StartNotify(); break;
        case 4: _t->StopNotify(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QBLELocalCharacteristic::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLELocalCharacteristic::valueWritten)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QDBusObjectPath> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QBLELocalCharacteristic *_t = static_cast<QBLELocalCharacteristic *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDBusObjectPath*>(_v) = _t->servicePath(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->uuid(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->flags(); break;
        case 3: *reinterpret_cast< QList<QDBusObjectPath>*>(_v) = _t->descriptorPaths(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QBLELocalCharacteristic::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBLELocalCharacteristic.data,
      qt_meta_data_QBLELocalCharacteristic,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBLELocalCharacteristic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBLELocalCharacteristic::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBLELocalCharacteristic.stringdata0))
        return static_cast<void*>(const_cast< QBLELocalCharacteristic*>(this));
    return QObject::qt_metacast(_clname);
}

int QBLELocalCharacteristic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QBLELocalCharacteristic::valueWritten(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
