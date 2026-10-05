/****************************************************************************
** Meta object code from reading C++ file 'musiccontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../daemon/libwatchfish/musiccontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musiccontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_watchfish__MusicController_t {
    QByteArrayData data[27];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_watchfish__MusicController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_watchfish__MusicController_t qt_meta_stringdata_watchfish__MusicController = {
    {
QT_MOC_LITERAL(0, 0, 26), // "watchfish::MusicController"
QT_MOC_LITERAL(1, 27, 13), // "statusChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 14), // "serviceChanged"
QT_MOC_LITERAL(4, 57, 15), // "metadataChanged"
QT_MOC_LITERAL(5, 73, 12), // "titleChanged"
QT_MOC_LITERAL(6, 86, 12), // "albumChanged"
QT_MOC_LITERAL(7, 99, 13), // "artistChanged"
QT_MOC_LITERAL(8, 113, 15), // "albumArtChanged"
QT_MOC_LITERAL(9, 129, 15), // "durationChanged"
QT_MOC_LITERAL(10, 145, 13), // "repeatChanged"
QT_MOC_LITERAL(11, 159, 14), // "shuffleChanged"
QT_MOC_LITERAL(12, 174, 13), // "volumeChanged"
QT_MOC_LITERAL(13, 188, 4), // "play"
QT_MOC_LITERAL(14, 193, 5), // "pause"
QT_MOC_LITERAL(15, 199, 9), // "playPause"
QT_MOC_LITERAL(16, 209, 4), // "next"
QT_MOC_LITERAL(17, 214, 8), // "previous"
QT_MOC_LITERAL(18, 223, 9), // "setVolume"
QT_MOC_LITERAL(19, 233, 9), // "newVolume"
QT_MOC_LITERAL(20, 243, 8), // "volumeUp"
QT_MOC_LITERAL(21, 252, 10), // "volumeDown"
QT_MOC_LITERAL(22, 263, 6), // "Status"
QT_MOC_LITERAL(23, 270, 14), // "StatusNoPlayer"
QT_MOC_LITERAL(24, 285, 13), // "StatusStopped"
QT_MOC_LITERAL(25, 299, 12), // "StatusPaused"
QT_MOC_LITERAL(26, 312, 13) // "StatusPlaying"

    },
    "watchfish::MusicController\0statusChanged\0"
    "\0serviceChanged\0metadataChanged\0"
    "titleChanged\0albumChanged\0artistChanged\0"
    "albumArtChanged\0durationChanged\0"
    "repeatChanged\0shuffleChanged\0volumeChanged\0"
    "play\0pause\0playPause\0next\0previous\0"
    "setVolume\0newVolume\0volumeUp\0volumeDown\0"
    "Status\0StatusNoPlayer\0StatusStopped\0"
    "StatusPaused\0StatusPlaying"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_watchfish__MusicController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       1,  130, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,
       7,    0,  114,    2, 0x06 /* Public */,
       8,    0,  115,    2, 0x06 /* Public */,
       9,    0,  116,    2, 0x06 /* Public */,
      10,    0,  117,    2, 0x06 /* Public */,
      11,    0,  118,    2, 0x06 /* Public */,
      12,    0,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  120,    2, 0x0a /* Public */,
      14,    0,  121,    2, 0x0a /* Public */,
      15,    0,  122,    2, 0x0a /* Public */,
      16,    0,  123,    2, 0x0a /* Public */,
      17,    0,  124,    2, 0x0a /* Public */,
      18,    1,  125,    2, 0x0a /* Public */,
      20,    0,  128,    2, 0x0a /* Public */,
      21,    0,  129,    2, 0x0a /* Public */,

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

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   19,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      22, 0x0,    4,  134,

 // enum data: key, value
      23, uint(watchfish::MusicController::StatusNoPlayer),
      24, uint(watchfish::MusicController::StatusStopped),
      25, uint(watchfish::MusicController::StatusPaused),
      26, uint(watchfish::MusicController::StatusPlaying),

       0        // eod
};

void watchfish::MusicController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MusicController *_t = static_cast<MusicController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->serviceChanged(); break;
        case 2: _t->metadataChanged(); break;
        case 3: _t->titleChanged(); break;
        case 4: _t->albumChanged(); break;
        case 5: _t->artistChanged(); break;
        case 6: _t->albumArtChanged(); break;
        case 7: _t->durationChanged(); break;
        case 8: _t->repeatChanged(); break;
        case 9: _t->shuffleChanged(); break;
        case 10: _t->volumeChanged(); break;
        case 11: _t->play(); break;
        case 12: _t->pause(); break;
        case 13: _t->playPause(); break;
        case 14: _t->next(); break;
        case 15: _t->previous(); break;
        case 16: _t->setVolume((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 17: _t->volumeUp(); break;
        case 18: _t->volumeDown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::serviceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::metadataChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::titleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::albumChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::artistChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::albumArtChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::durationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::repeatChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::shuffleChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MusicController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicController::volumeChanged)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject watchfish::MusicController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_watchfish__MusicController.data,
      qt_meta_data_watchfish__MusicController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *watchfish::MusicController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *watchfish::MusicController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_watchfish__MusicController.stringdata0))
        return static_cast<void*>(const_cast< MusicController*>(this));
    return QObject::qt_metacast(_clname);
}

int watchfish::MusicController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void watchfish::MusicController::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void watchfish::MusicController::serviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void watchfish::MusicController::metadataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void watchfish::MusicController::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void watchfish::MusicController::albumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void watchfish::MusicController::artistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void watchfish::MusicController::albumArtChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void watchfish::MusicController::durationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void watchfish::MusicController::repeatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void watchfish::MusicController::shuffleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void watchfish::MusicController::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
