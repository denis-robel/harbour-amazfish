/****************************************************************************
** Meta object code from reading C++ file 'dfuworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/operations/dfuworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dfuworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DfuWorker_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DfuWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DfuWorker_t qt_meta_stringdata_DfuWorker = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DfuWorker"
QT_MOC_LITERAL(1, 10, 18), // "packetNotification"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "done"
QT_MOC_LITERAL(4, 35, 12), // "sendFirmware"
QT_MOC_LITERAL(5, 48, 11), // "DfuService*"
QT_MOC_LITERAL(6, 60, 7), // "service"
QT_MOC_LITERAL(7, 68, 7), // "fwBytes"
QT_MOC_LITERAL(8, 76, 19) // "notificationPackets"

    },
    "DfuWorker\0packetNotification\0\0done\0"
    "sendFirmware\0DfuService*\0service\0"
    "fwBytes\0notificationPackets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DfuWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QByteArray, QMetaType::Int,    6,    7,    8,

       0        // eod
};

void DfuWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DfuWorker *_t = static_cast<DfuWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->packetNotification(); break;
        case 1: _t->done(); break;
        case 2: _t->sendFirmware((*reinterpret_cast< DfuService*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DfuWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DfuWorker::packetNotification)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DfuWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DfuWorker::done)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DfuWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DfuWorker.data,
      qt_meta_data_DfuWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DfuWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DfuWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DfuWorker.stringdata0))
        return static_cast<void*>(const_cast< DfuWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int DfuWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DfuWorker::packetNotification()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DfuWorker::done()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
