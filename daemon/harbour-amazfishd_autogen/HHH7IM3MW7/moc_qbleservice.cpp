/****************************************************************************
** Meta object code from reading C++ file 'qbleservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qble/qbleservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbleservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QBLEService_t {
    QByteArrayData data[25];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBLEService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBLEService_t qt_meta_stringdata_QBLEService = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QBLEService"
QT_MOC_LITERAL(1, 12, 21), // "characteristicChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 1), // "c"
QT_MOC_LITERAL(4, 37, 5), // "value"
QT_MOC_LITERAL(5, 43, 18), // "characteristicRead"
QT_MOC_LITERAL(6, 62, 21), // "characteristicWritten"
QT_MOC_LITERAL(7, 84, 25), // "characteristicWriteFailed"
QT_MOC_LITERAL(8, 110, 12), // "errorMessage"
QT_MOC_LITERAL(9, 123, 17), // "descriptorWritten"
QT_MOC_LITERAL(10, 141, 1), // "d"
QT_MOC_LITERAL(11, 143, 7), // "message"
QT_MOC_LITERAL(12, 151, 4), // "text"
QT_MOC_LITERAL(13, 156, 17), // "propertiesChanged"
QT_MOC_LITERAL(14, 174, 24), // "characteristicChangedInt"
QT_MOC_LITERAL(15, 199, 14), // "characteristic"
QT_MOC_LITERAL(16, 214, 21), // "characteristicReadInt"
QT_MOC_LITERAL(17, 236, 24), // "characteristicWrittenInt"
QT_MOC_LITERAL(18, 261, 28), // "characteristicWriteFailedInt"
QT_MOC_LITERAL(19, 290, 20), // "descriptorWrittenInt"
QT_MOC_LITERAL(20, 311, 10), // "descriptor"
QT_MOC_LITERAL(21, 322, 19), // "onPropertiesChanged"
QT_MOC_LITERAL(22, 342, 9), // "interface"
QT_MOC_LITERAL(23, 352, 3), // "map"
QT_MOC_LITERAL(24, 356, 4) // "list"

    },
    "QBLEService\0characteristicChanged\0\0c\0"
    "value\0characteristicRead\0characteristicWritten\0"
    "characteristicWriteFailed\0errorMessage\0"
    "descriptorWritten\0d\0message\0text\0"
    "propertiesChanged\0characteristicChangedInt\0"
    "characteristic\0characteristicReadInt\0"
    "characteristicWrittenInt\0"
    "characteristicWriteFailedInt\0"
    "descriptorWrittenInt\0descriptor\0"
    "onPropertiesChanged\0interface\0map\0"
    "list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBLEService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    2,   84,    2, 0x06 /* Public */,
       6,    2,   89,    2, 0x06 /* Public */,
       7,    2,   94,    2, 0x06 /* Public */,
       9,    2,   99,    2, 0x06 /* Public */,
      11,    1,  104,    2, 0x06 /* Public */,
      13,    3,  107,    2, 0x05 /* Protected */,

 // slots: name, argc, parameters, tag, flags
      14,    2,  114,    2, 0x08 /* Private */,
      16,    2,  119,    2, 0x08 /* Private */,
      17,    2,  124,    2, 0x08 /* Private */,
      18,    2,  129,    2, 0x08 /* Private */,
      19,    2,  134,    2, 0x08 /* Private */,
      21,    3,  139,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   10,    4,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   15,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   15,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   15,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   20,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,   22,   23,   24,

       0        // eod
};

void QBLEService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBLEService *_t = static_cast<QBLEService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->characteristicChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->characteristicRead((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->characteristicWritten((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->characteristicWriteFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->descriptorWritten((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 5: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->propertiesChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariantMap(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 7: _t->characteristicChangedInt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 8: _t->characteristicReadInt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 9: _t->characteristicWrittenInt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 10: _t->characteristicWriteFailedInt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->descriptorWrittenInt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 12: _t->onPropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QBLEService::*_t)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEService::characteristicChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBLEService::*_t)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEService::characteristicRead)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBLEService::*_t)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEService::characteristicWritten)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QBLEService::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEService::characteristicWriteFailed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QBLEService::*_t)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEService::descriptorWritten)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QBLEService::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEService::message)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QBLEService::*_t)(QString , QVariantMap , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEService::propertiesChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QBLEService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBLEService.data,
      qt_meta_data_QBLEService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBLEService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBLEService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBLEService.stringdata0))
        return static_cast<void*>(const_cast< QBLEService*>(this));
    return QObject::qt_metacast(_clname);
}

int QBLEService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QBLEService::characteristicChanged(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QBLEService::characteristicRead(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QBLEService::characteristicWritten(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QBLEService::characteristicWriteFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QBLEService::descriptorWritten(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QBLEService::message(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QBLEService::propertiesChanged(QString _t1, QVariantMap _t2, QStringList _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
