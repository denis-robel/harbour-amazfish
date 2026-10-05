/****************************************************************************
** Meta object code from reading C++ file 'qblecharacteristic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qble/qblecharacteristic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qblecharacteristic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QBLECharacteristic_t {
    QByteArrayData data[18];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBLECharacteristic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBLECharacteristic_t qt_meta_stringdata_QBLECharacteristic = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QBLECharacteristic"
QT_MOC_LITERAL(1, 19, 21), // "characteristicChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 14), // "characterisitc"
QT_MOC_LITERAL(4, 57, 5), // "value"
QT_MOC_LITERAL(5, 63, 18), // "characteristicRead"
QT_MOC_LITERAL(6, 82, 21), // "characteristicWritten"
QT_MOC_LITERAL(7, 104, 14), // "characteristic"
QT_MOC_LITERAL(8, 119, 25), // "characteristicWriteFailed"
QT_MOC_LITERAL(9, 145, 12), // "errorMessage"
QT_MOC_LITERAL(10, 158, 19), // "onPropertiesChanged"
QT_MOC_LITERAL(11, 178, 9), // "interface"
QT_MOC_LITERAL(12, 188, 3), // "map"
QT_MOC_LITERAL(13, 192, 4), // "list"
QT_MOC_LITERAL(14, 197, 12), // "readFinished"
QT_MOC_LITERAL(15, 210, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(16, 235, 4), // "call"
QT_MOC_LITERAL(17, 240, 13) // "writeFinished"

    },
    "QBLECharacteristic\0characteristicChanged\0"
    "\0characterisitc\0value\0characteristicRead\0"
    "characteristicWritten\0characteristic\0"
    "characteristicWriteFailed\0errorMessage\0"
    "onPropertiesChanged\0interface\0map\0"
    "list\0readFinished\0QDBusPendingCallWatcher*\0"
    "call\0writeFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBLECharacteristic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    2,   54,    2, 0x06 /* Public */,
       6,    2,   59,    2, 0x06 /* Public */,
       8,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    3,   69,    2, 0x08 /* Private */,
      14,    1,   76,    2, 0x08 /* Private */,
      17,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    7,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void QBLECharacteristic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBLECharacteristic *_t = static_cast<QBLECharacteristic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->characteristicChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->characteristicRead((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->characteristicWritten((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->characteristicWriteFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->onPropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 5: _t->readFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 6: _t->writeFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QBLECharacteristic::*_t)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLECharacteristic::characteristicChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBLECharacteristic::*_t)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLECharacteristic::characteristicRead)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBLECharacteristic::*_t)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLECharacteristic::characteristicWritten)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QBLECharacteristic::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLECharacteristic::characteristicWriteFailed)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QBLECharacteristic::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBLECharacteristic.data,
      qt_meta_data_QBLECharacteristic,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBLECharacteristic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBLECharacteristic::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBLECharacteristic.stringdata0))
        return static_cast<void*>(const_cast< QBLECharacteristic*>(this));
    return QObject::qt_metacast(_clname);
}

int QBLECharacteristic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QBLECharacteristic::characteristicChanged(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QBLECharacteristic::characteristicRead(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QBLECharacteristic::characteristicWritten(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QBLECharacteristic::characteristicWriteFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
