/****************************************************************************
** Meta object code from reading C++ file 'o2replyserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../o2replyserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'o2replyserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_O2ReplyServer_t {
    QByteArrayData data[17];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_O2ReplyServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_O2ReplyServer_t qt_meta_stringdata_O2ReplyServer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "O2ReplyServer"
QT_MOC_LITERAL(1, 14, 20), // "verificationReceived"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(4, 58, 12), // "serverClosed"
QT_MOC_LITERAL(5, 71, 20), // "onIncomingConnection"
QT_MOC_LITERAL(6, 92, 12), // "onBytesReady"
QT_MOC_LITERAL(7, 105, 16), // "parseQueryParams"
QT_MOC_LITERAL(8, 122, 11), // "QByteArray*"
QT_MOC_LITERAL(9, 134, 4), // "data"
QT_MOC_LITERAL(10, 139, 11), // "closeServer"
QT_MOC_LITERAL(11, 151, 11), // "QTcpSocket*"
QT_MOC_LITERAL(12, 163, 6), // "socket"
QT_MOC_LITERAL(13, 170, 13), // "hasparameters"
QT_MOC_LITERAL(14, 184, 12), // "replyContent"
QT_MOC_LITERAL(15, 197, 7), // "timeout"
QT_MOC_LITERAL(16, 205, 13) // "callbackTries"

    },
    "O2ReplyServer\0verificationReceived\0\0"
    "QMap<QString,QString>\0serverClosed\0"
    "onIncomingConnection\0onBytesReady\0"
    "parseQueryParams\0QByteArray*\0data\0"
    "closeServer\0QTcpSocket*\0socket\0"
    "hasparameters\0replyContent\0timeout\0"
    "callbackTries"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_O2ReplyServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   60,    2, 0x0a /* Public */,
       6,    0,   61,    2, 0x0a /* Public */,
       7,    1,   62,    2, 0x0a /* Public */,
      10,    2,   65,    2, 0x0a /* Public */,
      10,    1,   70,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   73,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 3, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Bool,   12,   13,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::QByteArray, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::Int, 0x00095103,

       0        // eod
};

void O2ReplyServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        O2ReplyServer *_t = static_cast<O2ReplyServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->verificationReceived((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 1: _t->serverClosed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onIncomingConnection(); break;
        case 3: _t->onBytesReady(); break;
        case 4: { QMap<QString,QString> _r = _t->parseQueryParams((*reinterpret_cast< QByteArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = _r; }  break;
        case 5: _t->closeServer((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->closeServer((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 7: _t->closeServer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (O2ReplyServer::*_t)(QMap<QString,QString> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&O2ReplyServer::verificationReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (O2ReplyServer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&O2ReplyServer::serverClosed)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        O2ReplyServer *_t = static_cast<O2ReplyServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->replyContent(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->timeout(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->callbackTries(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        O2ReplyServer *_t = static_cast<O2ReplyServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setReplyContent(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setTimeout(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCallbackTries(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject O2ReplyServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_O2ReplyServer.data,
      qt_meta_data_O2ReplyServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *O2ReplyServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *O2ReplyServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_O2ReplyServer.stringdata0))
        return static_cast<void*>(const_cast< O2ReplyServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int O2ReplyServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void O2ReplyServer::verificationReceived(QMap<QString,QString> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void O2ReplyServer::serverClosed(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
