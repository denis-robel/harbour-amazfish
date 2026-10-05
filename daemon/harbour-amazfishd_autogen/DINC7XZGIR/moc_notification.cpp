/****************************************************************************
** Meta object code from reading C++ file 'notification.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libwatchfish/notification.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notification.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_watchfish__Notification_t {
    QByteArrayData data[38];
    char stringdata0[464];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_watchfish__Notification_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_watchfish__Notification_t qt_meta_stringdata_watchfish__Notification = {
    {
QT_MOC_LITERAL(0, 0, 23), // "watchfish::Notification"
QT_MOC_LITERAL(1, 24, 12), // "appIdChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "appNameChanged"
QT_MOC_LITERAL(4, 53, 14), // "summaryChanged"
QT_MOC_LITERAL(5, 68, 11), // "bodyChanged"
QT_MOC_LITERAL(6, 80, 16), // "timestampChanged"
QT_MOC_LITERAL(7, 97, 11), // "iconChanged"
QT_MOC_LITERAL(8, 109, 15), // "categoryChanged"
QT_MOC_LITERAL(9, 125, 14), // "urgencyChanged"
QT_MOC_LITERAL(10, 140, 16), // "transientChanged"
QT_MOC_LITERAL(11, 157, 21), // "previewSummaryChanged"
QT_MOC_LITERAL(12, 179, 18), // "previewBodyChanged"
QT_MOC_LITERAL(13, 198, 14), // "actionsChanged"
QT_MOC_LITERAL(14, 213, 6), // "closed"
QT_MOC_LITERAL(15, 220, 36), // "watchfish::Notification::Clos..."
QT_MOC_LITERAL(16, 257, 6), // "reason"
QT_MOC_LITERAL(17, 264, 12), // "invokeAction"
QT_MOC_LITERAL(18, 277, 6), // "action"
QT_MOC_LITERAL(19, 284, 5), // "close"
QT_MOC_LITERAL(20, 290, 2), // "id"
QT_MOC_LITERAL(21, 293, 5), // "appId"
QT_MOC_LITERAL(22, 299, 7), // "appName"
QT_MOC_LITERAL(23, 307, 7), // "summary"
QT_MOC_LITERAL(24, 315, 4), // "body"
QT_MOC_LITERAL(25, 320, 9), // "timestamp"
QT_MOC_LITERAL(26, 330, 4), // "icon"
QT_MOC_LITERAL(27, 335, 8), // "category"
QT_MOC_LITERAL(28, 344, 7), // "urgency"
QT_MOC_LITERAL(29, 352, 9), // "transient"
QT_MOC_LITERAL(30, 362, 14), // "previewSummary"
QT_MOC_LITERAL(31, 377, 11), // "previewBody"
QT_MOC_LITERAL(32, 389, 7), // "actions"
QT_MOC_LITERAL(33, 397, 11), // "CloseReason"
QT_MOC_LITERAL(34, 409, 7), // "Expired"
QT_MOC_LITERAL(35, 417, 15), // "DismissedByUser"
QT_MOC_LITERAL(36, 433, 18), // "DismissedByProgram"
QT_MOC_LITERAL(37, 452, 11) // "ClosedOther"

    },
    "watchfish::Notification\0appIdChanged\0"
    "\0appNameChanged\0summaryChanged\0"
    "bodyChanged\0timestampChanged\0iconChanged\0"
    "categoryChanged\0urgencyChanged\0"
    "transientChanged\0previewSummaryChanged\0"
    "previewBodyChanged\0actionsChanged\0"
    "closed\0watchfish::Notification::CloseReason\0"
    "reason\0invokeAction\0action\0close\0id\0"
    "appId\0appName\0summary\0body\0timestamp\0"
    "icon\0category\0urgency\0transient\0"
    "previewSummary\0previewBody\0actions\0"
    "CloseReason\0Expired\0DismissedByUser\0"
    "DismissedByProgram\0ClosedOther"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_watchfish__Notification[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
      13,  108, // properties
       1,  160, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,
       9,    0,   96,    2, 0x06 /* Public */,
      10,    0,   97,    2, 0x06 /* Public */,
      11,    0,   98,    2, 0x06 /* Public */,
      12,    0,   99,    2, 0x06 /* Public */,
      13,    0,  100,    2, 0x06 /* Public */,
      14,    1,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  104,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,

 // properties: name, type, flags
      20, QMetaType::UInt, 0x00095401,
      21, QMetaType::QString, 0x00495103,
      22, QMetaType::QString, 0x00495103,
      23, QMetaType::QString, 0x00495103,
      24, QMetaType::QString, 0x00495103,
      25, QMetaType::QDateTime, 0x00495103,
      26, QMetaType::QString, 0x00495103,
      27, QMetaType::QString, 0x00495103,
      28, QMetaType::Int, 0x00495103,
      29, QMetaType::Bool, 0x00495103,
      30, QMetaType::QString, 0x00495103,
      31, QMetaType::QString, 0x00495103,
      32, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,

 // enums: name, flags, count, data
      33, 0x0,    4,  164,

 // enum data: key, value
      34, uint(watchfish::Notification::Expired),
      35, uint(watchfish::Notification::DismissedByUser),
      36, uint(watchfish::Notification::DismissedByProgram),
      37, uint(watchfish::Notification::ClosedOther),

       0        // eod
};

void watchfish::Notification::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Notification *_t = static_cast<Notification *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appIdChanged(); break;
        case 1: _t->appNameChanged(); break;
        case 2: _t->summaryChanged(); break;
        case 3: _t->bodyChanged(); break;
        case 4: _t->timestampChanged(); break;
        case 5: _t->iconChanged(); break;
        case 6: _t->categoryChanged(); break;
        case 7: _t->urgencyChanged(); break;
        case 8: _t->transientChanged(); break;
        case 9: _t->previewSummaryChanged(); break;
        case 10: _t->previewBodyChanged(); break;
        case 11: _t->actionsChanged(); break;
        case 12: _t->closed((*reinterpret_cast< watchfish::Notification::CloseReason(*)>(_a[1]))); break;
        case 13: _t->invokeAction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::appIdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::appNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::summaryChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::bodyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::timestampChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::iconChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::categoryChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::urgencyChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::transientChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::previewSummaryChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::previewBodyChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Notification::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::actionsChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Notification::*_t)(watchfish::Notification::CloseReason );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Notification::closed)) {
                *result = 12;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Notification *_t = static_cast<Notification *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->appId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->appName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->summary(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->body(); break;
        case 5: *reinterpret_cast< QDateTime*>(_v) = _t->timestamp(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->icon(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->urgency(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->transient(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->previewSummary(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->previewBody(); break;
        case 12: *reinterpret_cast< QStringList*>(_v) = _t->actions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Notification *_t = static_cast<Notification *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setAppId(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAppName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSummary(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setBody(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setTimestamp(*reinterpret_cast< QDateTime*>(_v)); break;
        case 6: _t->setIcon(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setCategory(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setUrgency(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setTransient(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setPreviewSummary(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setPreviewBody(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject watchfish::Notification::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_watchfish__Notification.data,
      qt_meta_data_watchfish__Notification,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *watchfish::Notification::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *watchfish::Notification::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_watchfish__Notification.stringdata0))
        return static_cast<void*>(const_cast< Notification*>(this));
    return QObject::qt_metacast(_clname);
}

int watchfish::Notification::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void watchfish::Notification::appIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void watchfish::Notification::appNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void watchfish::Notification::summaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void watchfish::Notification::bodyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void watchfish::Notification::timestampChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void watchfish::Notification::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void watchfish::Notification::categoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void watchfish::Notification::urgencyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void watchfish::Notification::transientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void watchfish::Notification::previewSummaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void watchfish::Notification::previewBodyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void watchfish::Notification::actionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void watchfish::Notification::closed(watchfish::Notification::CloseReason _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
