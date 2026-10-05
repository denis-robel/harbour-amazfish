/****************************************************************************
** Meta object code from reading C++ file 'currentweather.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../lib/src/weather/currentweather.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'currentweather.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CurrentWeather_t {
    QByteArrayData data[18];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurrentWeather_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurrentWeather_t qt_meta_stringdata_CurrentWeather = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CurrentWeather"
QT_MOC_LITERAL(1, 15, 5), // "ready"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "slotFinishedCurrent"
QT_MOC_LITERAL(4, 42, 20), // "slotFinishedForecast"
QT_MOC_LITERAL(5, 63, 7), // "setCity"
QT_MOC_LITERAL(6, 71, 5), // "City*"
QT_MOC_LITERAL(7, 77, 4), // "city"
QT_MOC_LITERAL(8, 82, 7), // "refresh"
QT_MOC_LITERAL(9, 90, 11), // "temperature"
QT_MOC_LITERAL(10, 102, 14), // "minTemperature"
QT_MOC_LITERAL(11, 117, 14), // "maxTemperature"
QT_MOC_LITERAL(12, 132, 11), // "weatherCode"
QT_MOC_LITERAL(13, 144, 11), // "weatherIcon"
QT_MOC_LITERAL(14, 156, 7), // "windDeg"
QT_MOC_LITERAL(15, 164, 9), // "windSpeed"
QT_MOC_LITERAL(16, 174, 8), // "humidity"
QT_MOC_LITERAL(17, 183, 6) // "clouds"

    },
    "CurrentWeather\0ready\0\0slotFinishedCurrent\0"
    "slotFinishedForecast\0setCity\0City*\0"
    "city\0refresh\0temperature\0minTemperature\0"
    "maxTemperature\0weatherCode\0weatherIcon\0"
    "windDeg\0windSpeed\0humidity\0clouds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurrentWeather[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       9,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x02 /* Public */,
       8,    0,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QReal, 0x00495001,
      10, QMetaType::QReal, 0x00495001,
      11, QMetaType::QReal, 0x00495001,
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::QString, 0x00495001,
      14, QMetaType::QReal, 0x00495001,
      15, QMetaType::QReal, 0x00495001,
      16, QMetaType::Int, 0x00495001,
      17, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void CurrentWeather::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CurrentWeather *_t = static_cast<CurrentWeather *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->slotFinishedCurrent(); break;
        case 2: _t->slotFinishedForecast(); break;
        case 3: _t->setCity((*reinterpret_cast< City*(*)>(_a[1]))); break;
        case 4: _t->refresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< City* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CurrentWeather::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurrentWeather::ready)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CurrentWeather *_t = static_cast<CurrentWeather *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->temperature(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->minTemperature(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->maxTemperature(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->weatherCode(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->weatherIcon(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->windDeg(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->windSpeed(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->humidity(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->clouds(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CurrentWeather::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CurrentWeather.data,
      qt_meta_data_CurrentWeather,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CurrentWeather::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurrentWeather::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CurrentWeather.stringdata0))
        return static_cast<void*>(const_cast< CurrentWeather*>(this));
    return QObject::qt_metacast(_clname);
}

int CurrentWeather::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CurrentWeather::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
