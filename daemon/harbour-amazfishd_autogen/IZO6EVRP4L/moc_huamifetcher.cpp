/****************************************************************************
** Meta object code from reading C++ file 'huamifetcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/devices/huami/huamifetcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'huamifetcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HuamiFetcher_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HuamiFetcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HuamiFetcher_t qt_meta_stringdata_HuamiFetcher = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HuamiFetcher"
QT_MOC_LITERAL(1, 13, 11), // "busyChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 22), // "fetchOperationComplete"
QT_MOC_LITERAL(4, 49, 23), // "AbstractFetchOperation*"
QT_MOC_LITERAL(5, 73, 9), // "operation"
QT_MOC_LITERAL(6, 83, 4) // "busy"

    },
    "HuamiFetcher\0busyChanged\0\0"
    "fetchOperationComplete\0AbstractFetchOperation*\0"
    "operation\0busy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HuamiFetcher[] = {

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
       3,    1,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void HuamiFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HuamiFetcher *_t = static_cast<HuamiFetcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->busyChanged(); break;
        case 1: _t->fetchOperationComplete((*reinterpret_cast< AbstractFetchOperation*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->busy();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HuamiFetcher::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HuamiFetcher::busyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HuamiFetcher::*_t)(AbstractFetchOperation * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HuamiFetcher::fetchOperationComplete)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject HuamiFetcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HuamiFetcher.data,
      qt_meta_data_HuamiFetcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HuamiFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HuamiFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HuamiFetcher.stringdata0))
        return static_cast<void*>(const_cast< HuamiFetcher*>(this));
    return QObject::qt_metacast(_clname);
}

int HuamiFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void HuamiFetcher::busyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HuamiFetcher::fetchOperationComplete(AbstractFetchOperation * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
