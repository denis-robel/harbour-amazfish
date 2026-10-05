/****************************************************************************
** Meta object code from reading C++ file 'pinetimesimpleweatherservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/services/pinetimesimpleweatherservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pinetimesimpleweatherservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PineTimeSimpleWeatherService_t {
    QByteArrayData data[12];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PineTimeSimpleWeatherService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PineTimeSimpleWeatherService_t qt_meta_stringdata_PineTimeSimpleWeatherService = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PineTimeSimpleWeatherService"
QT_MOC_LITERAL(1, 29, 12), // "WeatherIcons"
QT_MOC_LITERAL(2, 42, 8), // "ClearSky"
QT_MOC_LITERAL(3, 51, 9), // "FewClouds"
QT_MOC_LITERAL(4, 61, 15), // "ScatteredClouds"
QT_MOC_LITERAL(5, 77, 12), // "BrokenClouds"
QT_MOC_LITERAL(6, 90, 10), // "ShowerRain"
QT_MOC_LITERAL(7, 101, 4), // "Rain"
QT_MOC_LITERAL(8, 106, 12), // "Thunderstorm"
QT_MOC_LITERAL(9, 119, 4), // "Snow"
QT_MOC_LITERAL(10, 124, 4), // "Mist"
QT_MOC_LITERAL(11, 129, 7) // "Unknown"

    },
    "PineTimeSimpleWeatherService\0WeatherIcons\0"
    "ClearSky\0FewClouds\0ScatteredClouds\0"
    "BrokenClouds\0ShowerRain\0Rain\0Thunderstorm\0"
    "Snow\0Mist\0Unknown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PineTimeSimpleWeatherService[] = {

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
       1, 0x0,   10,   18,

 // enum data: key, value
       2, uint(PineTimeSimpleWeatherService::WeatherIcons::ClearSky),
       3, uint(PineTimeSimpleWeatherService::WeatherIcons::FewClouds),
       4, uint(PineTimeSimpleWeatherService::WeatherIcons::ScatteredClouds),
       5, uint(PineTimeSimpleWeatherService::WeatherIcons::BrokenClouds),
       6, uint(PineTimeSimpleWeatherService::WeatherIcons::ShowerRain),
       7, uint(PineTimeSimpleWeatherService::WeatherIcons::Rain),
       8, uint(PineTimeSimpleWeatherService::WeatherIcons::Thunderstorm),
       9, uint(PineTimeSimpleWeatherService::WeatherIcons::Snow),
      10, uint(PineTimeSimpleWeatherService::WeatherIcons::Mist),
      11, uint(PineTimeSimpleWeatherService::WeatherIcons::Unknown),

       0        // eod
};

void PineTimeSimpleWeatherService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PineTimeSimpleWeatherService::staticMetaObject = {
    { &QBLEService::staticMetaObject, qt_meta_stringdata_PineTimeSimpleWeatherService.data,
      qt_meta_data_PineTimeSimpleWeatherService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PineTimeSimpleWeatherService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PineTimeSimpleWeatherService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PineTimeSimpleWeatherService.stringdata0))
        return static_cast<void*>(const_cast< PineTimeSimpleWeatherService*>(this));
    return QBLEService::qt_metacast(_clname);
}

int PineTimeSimpleWeatherService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBLEService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
