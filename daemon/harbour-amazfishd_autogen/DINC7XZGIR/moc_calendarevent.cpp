/****************************************************************************
** Meta object code from reading C++ file 'calendarevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libwatchfish/calendarevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calendarevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_watchfish__CalendarEvent_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_watchfish__CalendarEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_watchfish__CalendarEvent_t qt_meta_stringdata_watchfish__CalendarEvent = {
    {
QT_MOC_LITERAL(0, 0, 24), // "watchfish::CalendarEvent"
QT_MOC_LITERAL(1, 25, 3), // "uid"
QT_MOC_LITERAL(2, 29, 5), // "start"
QT_MOC_LITERAL(3, 35, 3), // "end"
QT_MOC_LITERAL(4, 39, 9), // "alertTime"
QT_MOC_LITERAL(5, 49, 5), // "title"
QT_MOC_LITERAL(6, 55, 8), // "location"
QT_MOC_LITERAL(7, 64, 11), // "description"
QT_MOC_LITERAL(8, 76, 6) // "allDay"

    },
    "watchfish::CalendarEvent\0uid\0start\0"
    "end\0alertTime\0title\0location\0description\0"
    "allDay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_watchfish__CalendarEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::QDateTime, 0x00095103,
       3, QMetaType::QDateTime, 0x00095103,
       4, QMetaType::QDateTime, 0x00095103,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void watchfish::CalendarEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        CalendarEvent *_t = reinterpret_cast<CalendarEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->uid(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->start(); break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = _t->end(); break;
        case 3: *reinterpret_cast< QDateTime*>(_v) = _t->alertTime(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->location(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->allDay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CalendarEvent *_t = reinterpret_cast<CalendarEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUid(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setStart(*reinterpret_cast< QDateTime*>(_v)); break;
        case 2: _t->setEnd(*reinterpret_cast< QDateTime*>(_v)); break;
        case 3: _t->setAlertTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 4: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setLocation(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setAllDay(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject watchfish::CalendarEvent::staticMetaObject = {
    { Q_NULLPTR, qt_meta_stringdata_watchfish__CalendarEvent.data,
      qt_meta_data_watchfish__CalendarEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
