/****************************************************************************
** Meta object code from reading C++ file 'qblelocalapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qble/qblelocalapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qblelocalapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QBLELocalApplication_t {
    QByteArrayData data[6];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBLELocalApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBLELocalApplication_t qt_meta_stringdata_QBLELocalApplication = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QBLELocalApplication"
QT_MOC_LITERAL(1, 21, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 37, 34), // "org.freedesktop.DBus.ObjectMa..."
QT_MOC_LITERAL(3, 72, 17), // "GetManagedObjects"
QT_MOC_LITERAL(4, 90, 17), // "ManagedObjectList"
QT_MOC_LITERAL(5, 108, 0) // ""

    },
    "QBLELocalApplication\0D-Bus Interface\0"
    "org.freedesktop.DBus.ObjectManager\0"
    "GetManagedObjects\0ManagedObjectList\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBLELocalApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       1,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    0,   21,    5, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 4,

       0        // eod
};

void QBLELocalApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBLELocalApplication *_t = static_cast<QBLELocalApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { ManagedObjectList _r = _t->GetManagedObjects();
            if (_a[0]) *reinterpret_cast< ManagedObjectList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject QBLELocalApplication::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBLELocalApplication.data,
      qt_meta_data_QBLELocalApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBLELocalApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBLELocalApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBLELocalApplication.stringdata0))
        return static_cast<void*>(const_cast< QBLELocalApplication*>(this));
    return QObject::qt_metacast(_clname);
}

int QBLELocalApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
