/****************************************************************************
** Meta object code from reading C++ file 'soundprofile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../daemon/libwatchfish/soundprofile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundprofile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_watchfish__SoundProfile_t {
    QByteArrayData data[4];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_watchfish__SoundProfile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_watchfish__SoundProfile_t qt_meta_stringdata_watchfish__SoundProfile = {
    {
QT_MOC_LITERAL(0, 0, 23), // "watchfish::SoundProfile"
QT_MOC_LITERAL(1, 24, 17), // "AvailableProfiles"
QT_MOC_LITERAL(2, 42, 6), // "Silent"
QT_MOC_LITERAL(3, 49, 7) // "General"

    },
    "watchfish::SoundProfile\0AvailableProfiles\0"
    "Silent\0General"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_watchfish__SoundProfile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   18,

 // enum data: key, value
       2, uint(watchfish::SoundProfile::Silent),
       3, uint(watchfish::SoundProfile::General),

       0        // eod
};

void watchfish::SoundProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject watchfish::SoundProfile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_watchfish__SoundProfile.data,
      qt_meta_data_watchfish__SoundProfile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *watchfish::SoundProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *watchfish::SoundProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_watchfish__SoundProfile.stringdata0))
        return static_cast<void*>(const_cast< SoundProfile*>(this));
    return QObject::qt_metacast(_clname);
}

int watchfish::SoundProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
