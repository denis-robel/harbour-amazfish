/****************************************************************************
** Meta object code from reading C++ file 'abstractfirmwareinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/devices/abstractfirmwareinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractfirmwareinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractFirmwareInfo_t {
    QByteArrayData data[14];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractFirmwareInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractFirmwareInfo_t qt_meta_stringdata_AbstractFirmwareInfo = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AbstractFirmwareInfo"
QT_MOC_LITERAL(1, 21, 4), // "Type"
QT_MOC_LITERAL(2, 26, 7), // "Invalid"
QT_MOC_LITERAL(3, 34, 8), // "Firmware"
QT_MOC_LITERAL(4, 43, 4), // "Font"
QT_MOC_LITERAL(5, 48, 10), // "Font_Latin"
QT_MOC_LITERAL(6, 59, 3), // "GPS"
QT_MOC_LITERAL(7, 63, 7), // "GPS_CEP"
QT_MOC_LITERAL(8, 71, 8), // "GPS_UIHH"
QT_MOC_LITERAL(9, 80, 11), // "GPS_ALMANAC"
QT_MOC_LITERAL(10, 92, 3), // "Res"
QT_MOC_LITERAL(11, 96, 14), // "Res_Compressed"
QT_MOC_LITERAL(12, 111, 9), // "Watchface"
QT_MOC_LITERAL(13, 121, 10) // "Bootloader"

    },
    "AbstractFirmwareInfo\0Type\0Invalid\0"
    "Firmware\0Font\0Font_Latin\0GPS\0GPS_CEP\0"
    "GPS_UIHH\0GPS_ALMANAC\0Res\0Res_Compressed\0"
    "Watchface\0Bootloader"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractFirmwareInfo[] = {

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
       1, 0x0,   12,   18,

 // enum data: key, value
       2, uint(AbstractFirmwareInfo::Invalid),
       3, uint(AbstractFirmwareInfo::Firmware),
       4, uint(AbstractFirmwareInfo::Font),
       5, uint(AbstractFirmwareInfo::Font_Latin),
       6, uint(AbstractFirmwareInfo::GPS),
       7, uint(AbstractFirmwareInfo::GPS_CEP),
       8, uint(AbstractFirmwareInfo::GPS_UIHH),
       9, uint(AbstractFirmwareInfo::GPS_ALMANAC),
      10, uint(AbstractFirmwareInfo::Res),
      11, uint(AbstractFirmwareInfo::Res_Compressed),
      12, uint(AbstractFirmwareInfo::Watchface),
      13, uint(AbstractFirmwareInfo::Bootloader),

       0        // eod
};

void AbstractFirmwareInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AbstractFirmwareInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractFirmwareInfo.data,
      qt_meta_data_AbstractFirmwareInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AbstractFirmwareInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractFirmwareInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractFirmwareInfo.stringdata0))
        return static_cast<void*>(const_cast< AbstractFirmwareInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractFirmwareInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
