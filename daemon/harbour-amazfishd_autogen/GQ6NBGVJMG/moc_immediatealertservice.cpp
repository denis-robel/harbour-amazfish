/****************************************************************************
** Meta object code from reading C++ file 'immediatealertservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/services/immediatealertservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'immediatealertservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImmediateAlertService_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImmediateAlertService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImmediateAlertService_t qt_meta_stringdata_ImmediateAlertService = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ImmediateAlertService"
QT_MOC_LITERAL(1, 22, 6), // "Levels"
QT_MOC_LITERAL(2, 29, 7), // "NoAlert"
QT_MOC_LITERAL(3, 37, 9), // "MildAlert"
QT_MOC_LITERAL(4, 47, 9) // "HighAlert"

    },
    "ImmediateAlertService\0Levels\0NoAlert\0"
    "MildAlert\0HighAlert"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImmediateAlertService[] = {

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
       1, 0x0,    3,   18,

 // enum data: key, value
       2, uint(ImmediateAlertService::Levels::NoAlert),
       3, uint(ImmediateAlertService::Levels::MildAlert),
       4, uint(ImmediateAlertService::Levels::HighAlert),

       0        // eod
};

void ImmediateAlertService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ImmediateAlertService::staticMetaObject = {
    { &QBLEService::staticMetaObject, qt_meta_stringdata_ImmediateAlertService.data,
      qt_meta_data_ImmediateAlertService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImmediateAlertService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImmediateAlertService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImmediateAlertService.stringdata0))
        return static_cast<void*>(const_cast< ImmediateAlertService*>(this));
    return QBLEService::qt_metacast(_clname);
}

int ImmediateAlertService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBLEService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
