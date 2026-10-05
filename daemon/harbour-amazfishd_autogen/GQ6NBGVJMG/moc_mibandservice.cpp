/****************************************************************************
** Meta object code from reading C++ file 'mibandservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/services/mibandservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mibandservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MiBandService_t {
    QByteArrayData data[10];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MiBandService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MiBandService_t qt_meta_stringdata_MiBandService = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MiBandService"
QT_MOC_LITERAL(1, 14, 18), // "informationChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "Amazfish::Info"
QT_MOC_LITERAL(4, 49, 3), // "key"
QT_MOC_LITERAL(5, 53, 3), // "val"
QT_MOC_LITERAL(6, 57, 13), // "buttonPressed"
QT_MOC_LITERAL(7, 71, 12), // "serviceEvent"
QT_MOC_LITERAL(8, 84, 7), // "uint8_t"
QT_MOC_LITERAL(9, 92, 5) // "event"

    },
    "MiBandService\0informationChanged\0\0"
    "Amazfish::Info\0key\0val\0buttonPressed\0"
    "serviceEvent\0uint8_t\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiBandService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    0,   34,    2, 0x06 /* Public */,
       7,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void MiBandService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MiBandService *_t = static_cast<MiBandService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->informationChanged((*reinterpret_cast< Amazfish::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->buttonPressed(); break;
        case 2: _t->serviceEvent((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Amazfish::Info >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MiBandService::*_t)(Amazfish::Info , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiBandService::informationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MiBandService::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiBandService::buttonPressed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MiBandService::*_t)(uint8_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiBandService::serviceEvent)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MiBandService::staticMetaObject = {
    { &QBLEService::staticMetaObject, qt_meta_stringdata_MiBandService.data,
      qt_meta_data_MiBandService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MiBandService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiBandService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MiBandService.stringdata0))
        return static_cast<void*>(const_cast< MiBandService*>(this));
    return QBLEService::qt_metacast(_clname);
}

int MiBandService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBLEService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MiBandService::informationChanged(Amazfish::Info _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MiBandService::buttonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MiBandService::serviceEvent(uint8_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
