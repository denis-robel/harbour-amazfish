/****************************************************************************
** Meta object code from reading C++ file 'qbledescriptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qble/qbledescriptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbledescriptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QBLEDescriptor_t {
    QByteArrayData data[13];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBLEDescriptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBLEDescriptor_t qt_meta_stringdata_QBLEDescriptor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QBLEDescriptor"
QT_MOC_LITERAL(1, 15, 17), // "descriptorChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "characterisitc"
QT_MOC_LITERAL(4, 49, 5), // "value"
QT_MOC_LITERAL(5, 55, 14), // "descriptorRead"
QT_MOC_LITERAL(6, 70, 19), // "onPropertiesChanged"
QT_MOC_LITERAL(7, 90, 9), // "interface"
QT_MOC_LITERAL(8, 100, 3), // "map"
QT_MOC_LITERAL(9, 104, 4), // "list"
QT_MOC_LITERAL(10, 109, 12), // "readFinished"
QT_MOC_LITERAL(11, 122, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(12, 147, 4) // "call"

    },
    "QBLEDescriptor\0descriptorChanged\0\0"
    "characterisitc\0value\0descriptorRead\0"
    "onPropertiesChanged\0interface\0map\0"
    "list\0readFinished\0QDBusPendingCallWatcher*\0"
    "call"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBLEDescriptor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   44,    2, 0x08 /* Private */,
      10,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void QBLEDescriptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBLEDescriptor *_t = static_cast<QBLEDescriptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->descriptorChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->descriptorRead((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->onPropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 3: _t->readFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (QBLEDescriptor::*_t)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEDescriptor::descriptorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBLEDescriptor::*_t)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBLEDescriptor::descriptorRead)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QBLEDescriptor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBLEDescriptor.data,
      qt_meta_data_QBLEDescriptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBLEDescriptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBLEDescriptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBLEDescriptor.stringdata0))
        return static_cast<void*>(const_cast< QBLEDescriptor*>(this));
    return QObject::qt_metacast(_clname);
}

int QBLEDescriptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QBLEDescriptor::descriptorChanged(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QBLEDescriptor::descriptorRead(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
