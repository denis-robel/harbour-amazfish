/****************************************************************************
** Meta object code from reading C++ file 'voicecallcontroller_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../daemon/libwatchfish/voicecallcontroller_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'voicecallcontroller_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_watchfish__VoiceCallControllerPrivate_t {
    QByteArrayData data[8];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_watchfish__VoiceCallControllerPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_watchfish__VoiceCallControllerPrivate_t qt_meta_stringdata_watchfish__VoiceCallControllerPrivate = {
    {
QT_MOC_LITERAL(0, 0, 37), // "watchfish::VoiceCallControlle..."
QT_MOC_LITERAL(1, 38, 28), // "handleActiveVoiceCallChanged"
QT_MOC_LITERAL(2, 67, 0), // ""
QT_MOC_LITERAL(3, 68, 34), // "handleActiveVoiceCallStatusCh..."
QT_MOC_LITERAL(4, 103, 6), // "status"
QT_MOC_LITERAL(5, 110, 10), // "statusName"
QT_MOC_LITERAL(6, 121, 34), // "handleActiveVoiceCallLineIdCh..."
QT_MOC_LITERAL(7, 156, 6) // "lineId"

    },
    "watchfish::VoiceCallControllerPrivate\0"
    "handleActiveVoiceCallChanged\0\0"
    "handleActiveVoiceCallStatusChanged\0"
    "status\0statusName\0handleActiveVoiceCallLineIdChanged\0"
    "lineId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_watchfish__VoiceCallControllerPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    2,   30,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void watchfish::VoiceCallControllerPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VoiceCallControllerPrivate *_t = static_cast<VoiceCallControllerPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleActiveVoiceCallChanged(); break;
        case 1: _t->handleActiveVoiceCallStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->handleActiveVoiceCallLineIdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject watchfish::VoiceCallControllerPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_watchfish__VoiceCallControllerPrivate.data,
      qt_meta_data_watchfish__VoiceCallControllerPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *watchfish::VoiceCallControllerPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *watchfish::VoiceCallControllerPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_watchfish__VoiceCallControllerPrivate.stringdata0))
        return static_cast<void*>(const_cast< VoiceCallControllerPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int watchfish::VoiceCallControllerPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
