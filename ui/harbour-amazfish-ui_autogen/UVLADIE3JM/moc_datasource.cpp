/****************************************************************************
** Meta object code from reading C++ file 'datasource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/datasource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datasource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DataSource_t {
    QByteArrayData data[27];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataSource_t qt_meta_stringdata_DataSource = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DataSource"
QT_MOC_LITERAL(1, 11, 4), // "data"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 16), // "DataSource::Type"
QT_MOC_LITERAL(4, 34, 4), // "type"
QT_MOC_LITERAL(5, 39, 3), // "day"
QT_MOC_LITERAL(6, 43, 4), // "Type"
QT_MOC_LITERAL(7, 48, 9), // "Heartrate"
QT_MOC_LITERAL(8, 58, 5), // "Steps"
QT_MOC_LITERAL(9, 64, 5), // "Sleep"
QT_MOC_LITERAL(10, 70, 9), // "Intensity"
QT_MOC_LITERAL(11, 80, 11), // "StepSummary"
QT_MOC_LITERAL(12, 92, 12), // "SleepSummary"
QT_MOC_LITERAL(13, 105, 10), // "BatteryLog"
QT_MOC_LITERAL(14, 116, 3), // "HRV"
QT_MOC_LITERAL(15, 120, 10), // "Spo2Normal"
QT_MOC_LITERAL(16, 131, 9), // "Spo2Sleep"
QT_MOC_LITERAL(17, 141, 15), // "BodyTemperature"
QT_MOC_LITERAL(18, 157, 10), // "StressAuto"
QT_MOC_LITERAL(19, 168, 12), // "StressManual"
QT_MOC_LITERAL(20, 181, 13), // "StressSummary"
QT_MOC_LITERAL(21, 195, 8), // "Activity"
QT_MOC_LITERAL(22, 204, 11), // "SleepPhases"
QT_MOC_LITERAL(23, 216, 5), // "Phase"
QT_MOC_LITERAL(24, 222, 10), // "PhaseAwake"
QT_MOC_LITERAL(25, 233, 15), // "PhaseLightSleep"
QT_MOC_LITERAL(26, 249, 14) // "PhaseDeepSleep"

    },
    "DataSource\0data\0\0DataSource::Type\0"
    "type\0day\0Type\0Heartrate\0Steps\0Sleep\0"
    "Intensity\0StepSummary\0SleepSummary\0"
    "BatteryLog\0HRV\0Spo2Normal\0Spo2Sleep\0"
    "BodyTemperature\0StressAuto\0StressManual\0"
    "StressSummary\0Activity\0SleepPhases\0"
    "Phase\0PhaseAwake\0PhaseLightSleep\0"
    "PhaseDeepSleep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       2,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariant, 0x80000000 | 3, QMetaType::QDate,    4,    5,

 // enums: name, flags, count, data
       6, 0x0,   16,   32,
      23, 0x0,    3,   64,

 // enum data: key, value
       7, uint(DataSource::Heartrate),
       8, uint(DataSource::Steps),
       9, uint(DataSource::Sleep),
      10, uint(DataSource::Intensity),
      11, uint(DataSource::StepSummary),
      12, uint(DataSource::SleepSummary),
      13, uint(DataSource::BatteryLog),
      14, uint(DataSource::HRV),
      15, uint(DataSource::Spo2Normal),
      16, uint(DataSource::Spo2Sleep),
      17, uint(DataSource::BodyTemperature),
      18, uint(DataSource::StressAuto),
      19, uint(DataSource::StressManual),
      20, uint(DataSource::StressSummary),
      21, uint(DataSource::Activity),
      22, uint(DataSource::SleepPhases),
      24, uint(DataSource::PhaseAwake),
      25, uint(DataSource::PhaseLightSleep),
      26, uint(DataSource::PhaseDeepSleep),

       0        // eod
};

void DataSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataSource *_t = static_cast<DataSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVariant _r = _t->data((*reinterpret_cast< const DataSource::Type(*)>(_a[1])),(*reinterpret_cast< const QDate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject DataSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataSource.data,
      qt_meta_data_DataSource,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DataSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataSource::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DataSource.stringdata0))
        return static_cast<void*>(const_cast< DataSource*>(this));
    return QObject::qt_metacast(_clname);
}

int DataSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
