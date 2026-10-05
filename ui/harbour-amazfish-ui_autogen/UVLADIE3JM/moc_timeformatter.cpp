/****************************************************************************
** Meta object code from reading C++ file 'timeformatter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/timeformatter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timeformatter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TimeFormatter_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeFormatter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeFormatter_t qt_meta_stringdata_TimeFormatter = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TimeFormatter"
QT_MOC_LITERAL(1, 14, 21), // "formatHMS_fromSeconds"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "seconds"
QT_MOC_LITERAL(4, 45, 9), // "formatHMS"
QT_MOC_LITERAL(5, 55, 5), // "hours"
QT_MOC_LITERAL(6, 61, 7) // "minutes"

    },
    "TimeFormatter\0formatHMS_fromSeconds\0"
    "\0seconds\0formatHMS\0hours\0minutes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeFormatter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       4,    3,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::UInt,    3,
    QMetaType::QString, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    5,    6,    3,

       0        // eod
};

void TimeFormatter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeFormatter *_t = static_cast<TimeFormatter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->formatHMS_fromSeconds((*reinterpret_cast< const uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->formatHMS((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject TimeFormatter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TimeFormatter.data,
      qt_meta_data_TimeFormatter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TimeFormatter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeFormatter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TimeFormatter.stringdata0))
        return static_cast<void*>(const_cast< TimeFormatter*>(this));
    return QObject::qt_metacast(_clname);
}

int TimeFormatter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
