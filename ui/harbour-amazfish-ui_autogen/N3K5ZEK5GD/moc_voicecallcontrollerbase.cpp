/****************************************************************************
** Meta object code from reading C++ file 'voicecallcontrollerbase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../daemon/libwatchfish/voicecallcontrollerbase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'voicecallcontrollerbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_watchfish__VoiceCallControllerBase_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_watchfish__VoiceCallControllerBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_watchfish__VoiceCallControllerBase_t qt_meta_stringdata_watchfish__VoiceCallControllerBase = {
    {
QT_MOC_LITERAL(0, 0, 34), // "watchfish::VoiceCallControlle..."
QT_MOC_LITERAL(1, 35, 13), // "inCallChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 14), // "ringingChanged"
QT_MOC_LITERAL(4, 65, 15), // "callerIdChanged"
QT_MOC_LITERAL(5, 81, 6), // "inCall"
QT_MOC_LITERAL(6, 88, 7), // "ringing"
QT_MOC_LITERAL(7, 96, 8) // "callerId"

    },
    "watchfish::VoiceCallControllerBase\0"
    "inCallChanged\0\0ringingChanged\0"
    "callerIdChanged\0inCall\0ringing\0callerId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_watchfish__VoiceCallControllerBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00495001,
       6, QMetaType::Bool, 0x00495001,
       7, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void watchfish::VoiceCallControllerBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VoiceCallControllerBase *_t = static_cast<VoiceCallControllerBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inCallChanged(); break;
        case 1: _t->ringingChanged(); break;
        case 2: _t->callerIdChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VoiceCallControllerBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VoiceCallControllerBase::inCallChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VoiceCallControllerBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VoiceCallControllerBase::ringingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VoiceCallControllerBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VoiceCallControllerBase::callerIdChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VoiceCallControllerBase *_t = static_cast<VoiceCallControllerBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->inCall(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->ringing(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->callerId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject watchfish::VoiceCallControllerBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_watchfish__VoiceCallControllerBase.data,
      qt_meta_data_watchfish__VoiceCallControllerBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *watchfish::VoiceCallControllerBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *watchfish::VoiceCallControllerBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_watchfish__VoiceCallControllerBase.stringdata0))
        return static_cast<void*>(const_cast< VoiceCallControllerBase*>(this));
    return QObject::qt_metacast(_clname);
}

int watchfish::VoiceCallControllerBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void watchfish::VoiceCallControllerBase::inCallChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void watchfish::VoiceCallControllerBase::ringingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void watchfish::VoiceCallControllerBase::callerIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
