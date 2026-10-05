/****************************************************************************
** Meta object code from reading C++ file 'sportsdatamodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/sportsdatamodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sportsdatamodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SportsDataModel_t {
    QByteArrayData data[11];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SportsDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SportsDataModel_t qt_meta_stringdata_SportsDataModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SportsDataModel"
QT_MOC_LITERAL(1, 16, 7), // "setKind"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 2), // "id"
QT_MOC_LITERAL(4, 28, 4), // "kind"
QT_MOC_LITERAL(5, 33, 6), // "update"
QT_MOC_LITERAL(6, 40, 3), // "gpx"
QT_MOC_LITERAL(7, 44, 6), // "rawGpx"
QT_MOC_LITERAL(8, 51, 12), // "deleteRecord"
QT_MOC_LITERAL(9, 64, 10), // "monthKeyAt"
QT_MOC_LITERAL(10, 75, 3) // "row"

    },
    "SportsDataModel\0setKind\0\0id\0kind\0"
    "update\0gpx\0rawGpx\0deleteRecord\0"
    "monthKeyAt\0row"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SportsDataModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x02 /* Public */,
       5,    0,   49,    2, 0x02 /* Public */,
       6,    1,   50,    2, 0x02 /* Public */,
       7,    1,   53,    2, 0x02 /* Public */,
       8,    1,   56,    2, 0x02 /* Public */,
       9,    1,   59,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::QString, QMetaType::UInt,    3,
    QMetaType::QString, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::QString, QMetaType::Int,   10,

       0        // eod
};

void SportsDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SportsDataModel *_t = static_cast<SportsDataModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setKind((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->update(); break;
        case 2: { QString _r = _t->gpx((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->rawGpx((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->deleteRecord((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: { QString _r = _t->monthKeyAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject SportsDataModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_SportsDataModel.data,
      qt_meta_data_SportsDataModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SportsDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SportsDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SportsDataModel.stringdata0))
        return static_cast<void*>(const_cast< SportsDataModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int SportsDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
