/****************************************************************************
** Meta object code from reading C++ file 'calendarsource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../daemon/libwatchfish/calendarsource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calendarsource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_watchfish__CalendarSource_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_watchfish__CalendarSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_watchfish__CalendarSource_t qt_meta_stringdata_watchfish__CalendarSource = {
    {
QT_MOC_LITERAL(0, 0, 25), // "watchfish::CalendarSource"
QT_MOC_LITERAL(1, 26, 7), // "changed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "fetchEvents"
QT_MOC_LITERAL(4, 47, 31), // "QList<watchfish::CalendarEvent>"
QT_MOC_LITERAL(5, 79, 5), // "start"
QT_MOC_LITERAL(6, 85, 3), // "end"
QT_MOC_LITERAL(7, 89, 14), // "startInclusive"
QT_MOC_LITERAL(8, 104, 12) // "endInclusive"

    },
    "watchfish::CalendarSource\0changed\0\0"
    "fetchEvents\0QList<watchfish::CalendarEvent>\0"
    "start\0end\0startInclusive\0endInclusive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_watchfish__CalendarSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    4,   35,    2, 0x02 /* Public */,
       3,    3,   44,    2, 0x22 /* Public | MethodCloned */,
       3,    2,   51,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::QDate, QMetaType::QDate, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,    8,
    0x80000000 | 4, QMetaType::QDate, QMetaType::QDate, QMetaType::Bool,    5,    6,    7,
    0x80000000 | 4, QMetaType::QDate, QMetaType::QDate,    5,    6,

       0        // eod
};

void watchfish::CalendarSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalendarSource *_t = static_cast<CalendarSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: { QList<watchfish::CalendarEvent> _r = _t->fetchEvents((*reinterpret_cast< const QDate(*)>(_a[1])),(*reinterpret_cast< const QDate(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<watchfish::CalendarEvent>*>(_a[0]) = _r; }  break;
        case 2: { QList<watchfish::CalendarEvent> _r = _t->fetchEvents((*reinterpret_cast< const QDate(*)>(_a[1])),(*reinterpret_cast< const QDate(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<watchfish::CalendarEvent>*>(_a[0]) = _r; }  break;
        case 3: { QList<watchfish::CalendarEvent> _r = _t->fetchEvents((*reinterpret_cast< const QDate(*)>(_a[1])),(*reinterpret_cast< const QDate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<watchfish::CalendarEvent>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CalendarSource::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalendarSource::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject watchfish::CalendarSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_watchfish__CalendarSource.data,
      qt_meta_data_watchfish__CalendarSource,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *watchfish::CalendarSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *watchfish::CalendarSource::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_watchfish__CalendarSource.stringdata0))
        return static_cast<void*>(const_cast< CalendarSource*>(this));
    return QObject::qt_metacast(_clname);
}

int watchfish::CalendarSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void watchfish::CalendarSource::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
