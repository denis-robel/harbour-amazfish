/****************************************************************************
** Meta object code from reading C++ file 'citymanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/weather/citymanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'citymanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CityManager_t {
    QByteArrayData data[17];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CityManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CityManager_t qt_meta_stringdata_CityManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CityManager"
QT_MOC_LITERAL(1, 12, 13), // "citiesChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "addCity"
QT_MOC_LITERAL(4, 35, 10), // "identifier"
QT_MOC_LITERAL(5, 46, 4), // "name"
QT_MOC_LITERAL(6, 51, 5), // "state"
QT_MOC_LITERAL(7, 57, 7), // "country"
QT_MOC_LITERAL(8, 65, 11), // "countryCode"
QT_MOC_LITERAL(9, 77, 9), // "longitude"
QT_MOC_LITERAL(10, 87, 8), // "latitude"
QT_MOC_LITERAL(11, 96, 10), // "removeCity"
QT_MOC_LITERAL(12, 107, 15), // "removeAllCities"
QT_MOC_LITERAL(13, 123, 10), // "loadCities"
QT_MOC_LITERAL(14, 134, 10), // "properties"
QT_MOC_LITERAL(15, 145, 6), // "cities"
QT_MOC_LITERAL(16, 152, 15) // "QList<QObject*>"

    },
    "CityManager\0citiesChanged\0\0addCity\0"
    "identifier\0name\0state\0country\0countryCode\0"
    "longitude\0latitude\0removeCity\0"
    "removeAllCities\0loadCities\0properties\0"
    "cities\0QList<QObject*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CityManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    7,   45,    2, 0x0a /* Public */,
      11,    1,   60,    2, 0x0a /* Public */,
      12,    0,   63,    2, 0x0a /* Public */,
      13,    0,   64,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantMap, QMetaType::QString,    4,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void CityManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CityManager *_t = static_cast<CityManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->citiesChanged(); break;
        case 1: _t->addCity((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 2: _t->removeCity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->removeAllCities(); break;
        case 4: _t->loadCities(); break;
        case 5: { QVariantMap _r = _t->properties((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CityManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CityManager::citiesChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CityManager *_t = static_cast<CityManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QObject*>*>(_v) = _t->cities(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CityManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CityManager.data,
      qt_meta_data_CityManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CityManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CityManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CityManager.stringdata0))
        return static_cast<void*>(const_cast< CityManager*>(this));
    return QObject::qt_metacast(_clname);
}

int CityManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CityManager::citiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
