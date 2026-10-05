/****************************************************************************
** Meta object code from reading C++ file 'alertnotificationservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/services/alertnotificationservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alertnotificationservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AlertNotificationService_t {
    QByteArrayData data[69];
    char stringdata0[662];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlertNotificationService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlertNotificationService_t qt_meta_stringdata_AlertNotificationService = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AlertNotificationService"
QT_MOC_LITERAL(1, 25, 12), // "serviceEvent"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 1), // "c"
QT_MOC_LITERAL(4, 41, 7), // "uint8_t"
QT_MOC_LITERAL(5, 49, 5), // "event"
QT_MOC_LITERAL(6, 55, 9), // "sendAlert"
QT_MOC_LITERAL(7, 65, 6), // "sender"
QT_MOC_LITERAL(8, 72, 7), // "subject"
QT_MOC_LITERAL(9, 80, 7), // "message"
QT_MOC_LITERAL(10, 88, 12), // "incomingCall"
QT_MOC_LITERAL(11, 101, 6), // "header"
QT_MOC_LITERAL(12, 108, 6), // "caller"
QT_MOC_LITERAL(13, 115, 13), // "AlertCategory"
QT_MOC_LITERAL(14, 129, 6), // "Simple"
QT_MOC_LITERAL(15, 136, 5), // "Email"
QT_MOC_LITERAL(16, 142, 4), // "News"
QT_MOC_LITERAL(17, 147, 12), // "IncomingCall"
QT_MOC_LITERAL(18, 160, 10), // "MissedCall"
QT_MOC_LITERAL(19, 171, 3), // "SMS"
QT_MOC_LITERAL(20, 175, 9), // "VoiceMail"
QT_MOC_LITERAL(21, 185, 8), // "Schedule"
QT_MOC_LITERAL(22, 194, 17), // "HighPriorityAlert"
QT_MOC_LITERAL(23, 212, 14), // "InstantMessage"
QT_MOC_LITERAL(24, 227, 3), // "Any"
QT_MOC_LITERAL(25, 231, 6), // "Custom"
QT_MOC_LITERAL(26, 238, 11), // "CustomHuami"
QT_MOC_LITERAL(27, 250, 9), // "HuamiIcon"
QT_MOC_LITERAL(28, 260, 6), // "WECHAT"
QT_MOC_LITERAL(29, 267, 9), // "PENGUIN_1"
QT_MOC_LITERAL(30, 277, 9), // "MI_CHAT_2"
QT_MOC_LITERAL(31, 287, 8), // "FACEBOOK"
QT_MOC_LITERAL(32, 296, 7), // "TWITTER"
QT_MOC_LITERAL(33, 304, 8), // "MI_APP_5"
QT_MOC_LITERAL(34, 313, 8), // "SNAPCHAT"
QT_MOC_LITERAL(35, 322, 8), // "WHATSAPP"
QT_MOC_LITERAL(36, 331, 16), // "RED_WHITE_FIRE_8"
QT_MOC_LITERAL(37, 348, 9), // "CHINESE_9"
QT_MOC_LITERAL(38, 358, 11), // "ALARM_CLOCK"
QT_MOC_LITERAL(39, 370, 6), // "APP_11"
QT_MOC_LITERAL(40, 377, 9), // "INSTAGRAM"
QT_MOC_LITERAL(41, 387, 12), // "CHAT_BLUE_13"
QT_MOC_LITERAL(42, 400, 6), // "COW_14"
QT_MOC_LITERAL(43, 407, 10), // "CHINESE_15"
QT_MOC_LITERAL(44, 418, 10), // "CHINESE_16"
QT_MOC_LITERAL(45, 429, 7), // "STAR_17"
QT_MOC_LITERAL(46, 437, 6), // "APP_18"
QT_MOC_LITERAL(47, 444, 10), // "CHINESE_19"
QT_MOC_LITERAL(48, 455, 10), // "CHINESE_20"
QT_MOC_LITERAL(49, 466, 8), // "CALENDAR"
QT_MOC_LITERAL(50, 475, 18), // "FACEBOOK_MESSENGER"
QT_MOC_LITERAL(51, 494, 5), // "VIBER"
QT_MOC_LITERAL(52, 500, 4), // "LINE"
QT_MOC_LITERAL(53, 505, 8), // "TELEGRAM"
QT_MOC_LITERAL(54, 514, 9), // "KAKAOTALK"
QT_MOC_LITERAL(55, 524, 5), // "SKYPE"
QT_MOC_LITERAL(56, 530, 9), // "VKONTAKTE"
QT_MOC_LITERAL(57, 540, 9), // "POKEMONGO"
QT_MOC_LITERAL(58, 550, 8), // "HANGOUTS"
QT_MOC_LITERAL(59, 559, 5), // "MI_31"
QT_MOC_LITERAL(60, 565, 10), // "CHINESE_32"
QT_MOC_LITERAL(61, 576, 10), // "CHINESE_33"
QT_MOC_LITERAL(62, 587, 5), // "EMAIL"
QT_MOC_LITERAL(63, 593, 7), // "WEATHER"
QT_MOC_LITERAL(64, 601, 13), // "HR_WARNING_36"
QT_MOC_LITERAL(65, 615, 10), // "AlertEvent"
QT_MOC_LITERAL(66, 626, 11), // "CALL_REJECT"
QT_MOC_LITERAL(67, 638, 11), // "CALL_ANSWER"
QT_MOC_LITERAL(68, 650, 11) // "CALL_IGNORE"

    },
    "AlertNotificationService\0serviceEvent\0"
    "\0c\0uint8_t\0event\0sendAlert\0sender\0"
    "subject\0message\0incomingCall\0header\0"
    "caller\0AlertCategory\0Simple\0Email\0"
    "News\0IncomingCall\0MissedCall\0SMS\0"
    "VoiceMail\0Schedule\0HighPriorityAlert\0"
    "InstantMessage\0Any\0Custom\0CustomHuami\0"
    "HuamiIcon\0WECHAT\0PENGUIN_1\0MI_CHAT_2\0"
    "FACEBOOK\0TWITTER\0MI_APP_5\0SNAPCHAT\0"
    "WHATSAPP\0RED_WHITE_FIRE_8\0CHINESE_9\0"
    "ALARM_CLOCK\0APP_11\0INSTAGRAM\0CHAT_BLUE_13\0"
    "COW_14\0CHINESE_15\0CHINESE_16\0STAR_17\0"
    "APP_18\0CHINESE_19\0CHINESE_20\0CALENDAR\0"
    "FACEBOOK_MESSENGER\0VIBER\0LINE\0TELEGRAM\0"
    "KAKAOTALK\0SKYPE\0VKONTAKTE\0POKEMONGO\0"
    "HANGOUTS\0MI_31\0CHINESE_32\0CHINESE_33\0"
    "EMAIL\0WEATHER\0HR_WARNING_36\0AlertEvent\0"
    "CALL_REJECT\0CALL_ANSWER\0CALL_IGNORE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlertNotificationService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       3,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    3,   34,    2, 0x02 /* Public */,
      10,    2,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString,   11,   12,

 // enums: name, flags, count, data
      13, 0x0,   13,   58,
      27, 0x0,   37,   84,
      65, 0x0,    3,  158,

 // enum data: key, value
      14, uint(AlertNotificationService::Simple),
      15, uint(AlertNotificationService::Email),
      16, uint(AlertNotificationService::News),
      17, uint(AlertNotificationService::IncomingCall),
      18, uint(AlertNotificationService::MissedCall),
      19, uint(AlertNotificationService::SMS),
      20, uint(AlertNotificationService::VoiceMail),
      21, uint(AlertNotificationService::Schedule),
      22, uint(AlertNotificationService::HighPriorityAlert),
      23, uint(AlertNotificationService::InstantMessage),
      24, uint(AlertNotificationService::Any),
      25, uint(AlertNotificationService::Custom),
      26, uint(AlertNotificationService::CustomHuami),
      28, uint(AlertNotificationService::WECHAT),
      29, uint(AlertNotificationService::PENGUIN_1),
      30, uint(AlertNotificationService::MI_CHAT_2),
      31, uint(AlertNotificationService::FACEBOOK),
      32, uint(AlertNotificationService::TWITTER),
      33, uint(AlertNotificationService::MI_APP_5),
      34, uint(AlertNotificationService::SNAPCHAT),
      35, uint(AlertNotificationService::WHATSAPP),
      36, uint(AlertNotificationService::RED_WHITE_FIRE_8),
      37, uint(AlertNotificationService::CHINESE_9),
      38, uint(AlertNotificationService::ALARM_CLOCK),
      39, uint(AlertNotificationService::APP_11),
      40, uint(AlertNotificationService::INSTAGRAM),
      41, uint(AlertNotificationService::CHAT_BLUE_13),
      42, uint(AlertNotificationService::COW_14),
      43, uint(AlertNotificationService::CHINESE_15),
      44, uint(AlertNotificationService::CHINESE_16),
      45, uint(AlertNotificationService::STAR_17),
      46, uint(AlertNotificationService::APP_18),
      47, uint(AlertNotificationService::CHINESE_19),
      48, uint(AlertNotificationService::CHINESE_20),
      49, uint(AlertNotificationService::CALENDAR),
      50, uint(AlertNotificationService::FACEBOOK_MESSENGER),
      51, uint(AlertNotificationService::VIBER),
      52, uint(AlertNotificationService::LINE),
      53, uint(AlertNotificationService::TELEGRAM),
      54, uint(AlertNotificationService::KAKAOTALK),
      55, uint(AlertNotificationService::SKYPE),
      56, uint(AlertNotificationService::VKONTAKTE),
      57, uint(AlertNotificationService::POKEMONGO),
      58, uint(AlertNotificationService::HANGOUTS),
      59, uint(AlertNotificationService::MI_31),
      60, uint(AlertNotificationService::CHINESE_32),
      61, uint(AlertNotificationService::CHINESE_33),
      62, uint(AlertNotificationService::EMAIL),
      63, uint(AlertNotificationService::WEATHER),
      64, uint(AlertNotificationService::HR_WARNING_36),
      66, uint(AlertNotificationService::CALL_REJECT),
      67, uint(AlertNotificationService::CALL_ANSWER),
      68, uint(AlertNotificationService::CALL_IGNORE),

       0        // eod
};

void AlertNotificationService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlertNotificationService *_t = static_cast<AlertNotificationService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serviceEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2]))); break;
        case 1: _t->sendAlert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->incomingCall((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AlertNotificationService::*_t)(const QString & , uint8_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlertNotificationService::serviceEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AlertNotificationService::staticMetaObject = {
    { &QBLEService::staticMetaObject, qt_meta_stringdata_AlertNotificationService.data,
      qt_meta_data_AlertNotificationService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AlertNotificationService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlertNotificationService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AlertNotificationService.stringdata0))
        return static_cast<void*>(const_cast< AlertNotificationService*>(this));
    return QBLEService::qt_metacast(_clname);
}

int AlertNotificationService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBLEService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AlertNotificationService::serviceEvent(const QString & _t1, uint8_t _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
