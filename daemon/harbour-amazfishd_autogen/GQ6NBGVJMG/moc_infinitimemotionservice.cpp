/****************************************************************************
** Meta object code from reading C++ file 'infinitimemotionservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/services/infinitimemotionservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infinitimemotionservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InfiniTimeMotionService_t {
    QByteArrayData data[12];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InfiniTimeMotionService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InfiniTimeMotionService_t qt_meta_stringdata_InfiniTimeMotionService = {
    {
QT_MOC_LITERAL(0, 0, 23), // "InfiniTimeMotionService"
QT_MOC_LITERAL(1, 24, 18), // "informationChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "Amazfish::Info"
QT_MOC_LITERAL(4, 59, 3), // "key"
QT_MOC_LITERAL(5, 63, 3), // "val"
QT_MOC_LITERAL(6, 67, 13), // "motionChanged"
QT_MOC_LITERAL(7, 81, 1), // "x"
QT_MOC_LITERAL(8, 83, 1), // "y"
QT_MOC_LITERAL(9, 85, 1), // "z"
QT_MOC_LITERAL(10, 87, 13), // "refreshMotion"
QT_MOC_LITERAL(11, 101, 12) // "refreshSteps"

    },
    "InfiniTimeMotionService\0informationChanged\0"
    "\0Amazfish::Info\0key\0val\0motionChanged\0"
    "x\0y\0z\0refreshMotion\0refreshSteps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InfiniTimeMotionService[] = {

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
       6,    3,   39,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   46,    2, 0x02 /* Public */,
      11,    0,   47,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,    8,    9,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InfiniTimeMotionService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InfiniTimeMotionService *_t = static_cast<InfiniTimeMotionService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->informationChanged((*reinterpret_cast< Amazfish::Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->motionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->refreshMotion(); break;
        case 3: _t->refreshSteps(); break;
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
            typedef void (InfiniTimeMotionService::*_t)(Amazfish::Info , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfiniTimeMotionService::informationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (InfiniTimeMotionService::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfiniTimeMotionService::motionChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject InfiniTimeMotionService::staticMetaObject = {
    { &QBLEService::staticMetaObject, qt_meta_stringdata_InfiniTimeMotionService.data,
      qt_meta_data_InfiniTimeMotionService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InfiniTimeMotionService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InfiniTimeMotionService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InfiniTimeMotionService.stringdata0))
        return static_cast<void*>(const_cast< InfiniTimeMotionService*>(this));
    return QBLEService::qt_metacast(_clname);
}

int InfiniTimeMotionService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBLEService::qt_metacall(_c, _id, _a);
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
void InfiniTimeMotionService::informationChanged(Amazfish::Info _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InfiniTimeMotionService::motionChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
