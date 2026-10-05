/****************************************************************************
** Meta object code from reading C++ file 'trackloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/trackloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TrackLoader_t {
    QByteArrayData data[83];
    char stringdata0[979];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackLoader_t qt_meta_stringdata_TrackLoader = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TrackLoader"
QT_MOC_LITERAL(1, 12, 15), // "filenameChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "nameChanged"
QT_MOC_LITERAL(4, 41, 14), // "workoutChanged"
QT_MOC_LITERAL(5, 56, 18), // "descriptionChanged"
QT_MOC_LITERAL(6, 75, 11), // "timeChanged"
QT_MOC_LITERAL(7, 87, 15), // "durationChanged"
QT_MOC_LITERAL(8, 103, 15), // "distanceChanged"
QT_MOC_LITERAL(9, 119, 12), // "speedChanged"
QT_MOC_LITERAL(10, 132, 15), // "maxSpeedChanged"
QT_MOC_LITERAL(11, 148, 11), // "paceChanged"
QT_MOC_LITERAL(12, 160, 13), // "loadedChanged"
QT_MOC_LITERAL(13, 174, 12), // "trackChanged"
QT_MOC_LITERAL(14, 187, 16), // "heartRateChanged"
QT_MOC_LITERAL(15, 204, 19), // "heartRateMinChanged"
QT_MOC_LITERAL(16, 224, 19), // "heartRateMaxChanged"
QT_MOC_LITERAL(17, 244, 16), // "elevationChanged"
QT_MOC_LITERAL(18, 261, 14), // "cadenceChanged"
QT_MOC_LITERAL(19, 276, 17), // "cadenceMinChanged"
QT_MOC_LITERAL(20, 294, 17), // "cadenceMaxChanged"
QT_MOC_LITERAL(21, 312, 10), // "loadString"
QT_MOC_LITERAL(22, 323, 3), // "gpx"
QT_MOC_LITERAL(23, 327, 7), // "readGpx"
QT_MOC_LITERAL(24, 335, 12), // "sTworkoutKey"
QT_MOC_LITERAL(25, 348, 15), // "trackPointCount"
QT_MOC_LITERAL(26, 364, 19), // "pausePositionsCount"
QT_MOC_LITERAL(27, 384, 12), // "trackPointAt"
QT_MOC_LITERAL(28, 397, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(29, 412, 5), // "index"
QT_MOC_LITERAL(30, 418, 15), // "pausePositionAt"
QT_MOC_LITERAL(31, 434, 11), // "heartRateAt"
QT_MOC_LITERAL(32, 446, 11), // "elevationAt"
QT_MOC_LITERAL(33, 458, 6), // "timeAt"
QT_MOC_LITERAL(34, 465, 10), // "unixTimeAt"
QT_MOC_LITERAL(35, 476, 10), // "durationAt"
QT_MOC_LITERAL(36, 487, 10), // "distanceAt"
QT_MOC_LITERAL(37, 498, 7), // "speedAt"
QT_MOC_LITERAL(38, 506, 6), // "paceAt"
QT_MOC_LITERAL(39, 513, 9), // "paceStrAt"
QT_MOC_LITERAL(40, 523, 17), // "paceImperialStrAt"
QT_MOC_LITERAL(41, 541, 9), // "cadenceAt"
QT_MOC_LITERAL(42, 551, 12), // "fitZoomLevel"
QT_MOC_LITERAL(43, 564, 5), // "width"
QT_MOC_LITERAL(44, 570, 6), // "height"
QT_MOC_LITERAL(45, 577, 6), // "center"
QT_MOC_LITERAL(46, 584, 9), // "vReadFile"
QT_MOC_LITERAL(47, 594, 9), // "sFilename"
QT_MOC_LITERAL(48, 604, 17), // "vSetNewProperties"
QT_MOC_LITERAL(49, 622, 8), // "sOldName"
QT_MOC_LITERAL(50, 631, 8), // "sOldDesc"
QT_MOC_LITERAL(51, 640, 11), // "sOldWorkout"
QT_MOC_LITERAL(52, 652, 5), // "sName"
QT_MOC_LITERAL(53, 658, 5), // "sDesc"
QT_MOC_LITERAL(54, 664, 8), // "sWorkout"
QT_MOC_LITERAL(55, 673, 10), // "vWriteFile"
QT_MOC_LITERAL(56, 684, 16), // "hasHeartRateData"
QT_MOC_LITERAL(57, 701, 26), // "paceRelevantForWorkoutType"
QT_MOC_LITERAL(58, 728, 8), // "filename"
QT_MOC_LITERAL(59, 737, 4), // "name"
QT_MOC_LITERAL(60, 742, 7), // "workout"
QT_MOC_LITERAL(61, 750, 11), // "description"
QT_MOC_LITERAL(62, 762, 4), // "time"
QT_MOC_LITERAL(63, 767, 7), // "timeStr"
QT_MOC_LITERAL(64, 775, 8), // "duration"
QT_MOC_LITERAL(65, 784, 11), // "durationStr"
QT_MOC_LITERAL(66, 796, 13), // "pauseDuration"
QT_MOC_LITERAL(67, 810, 16), // "pauseDurationStr"
QT_MOC_LITERAL(68, 827, 8), // "distance"
QT_MOC_LITERAL(69, 836, 5), // "speed"
QT_MOC_LITERAL(70, 842, 8), // "maxSpeed"
QT_MOC_LITERAL(71, 851, 4), // "pace"
QT_MOC_LITERAL(72, 856, 7), // "paceStr"
QT_MOC_LITERAL(73, 864, 15), // "paceImperialStr"
QT_MOC_LITERAL(74, 880, 9), // "heartRate"
QT_MOC_LITERAL(75, 890, 12), // "heartRateMin"
QT_MOC_LITERAL(76, 903, 12), // "heartRateMax"
QT_MOC_LITERAL(77, 916, 6), // "loaded"
QT_MOC_LITERAL(78, 923, 11), // "elevationUp"
QT_MOC_LITERAL(79, 935, 13), // "elevationDown"
QT_MOC_LITERAL(80, 949, 7), // "cadence"
QT_MOC_LITERAL(81, 957, 10), // "cadenceMin"
QT_MOC_LITERAL(82, 968, 10) // "cadenceMax"

    },
    "TrackLoader\0filenameChanged\0\0nameChanged\0"
    "workoutChanged\0descriptionChanged\0"
    "timeChanged\0durationChanged\0distanceChanged\0"
    "speedChanged\0maxSpeedChanged\0paceChanged\0"
    "loadedChanged\0trackChanged\0heartRateChanged\0"
    "heartRateMinChanged\0heartRateMaxChanged\0"
    "elevationChanged\0cadenceChanged\0"
    "cadenceMinChanged\0cadenceMaxChanged\0"
    "loadString\0gpx\0readGpx\0sTworkoutKey\0"
    "trackPointCount\0pausePositionsCount\0"
    "trackPointAt\0QGeoCoordinate\0index\0"
    "pausePositionAt\0heartRateAt\0elevationAt\0"
    "timeAt\0unixTimeAt\0durationAt\0distanceAt\0"
    "speedAt\0paceAt\0paceStrAt\0paceImperialStrAt\0"
    "cadenceAt\0fitZoomLevel\0width\0height\0"
    "center\0vReadFile\0sFilename\0vSetNewProperties\0"
    "sOldName\0sOldDesc\0sOldWorkout\0sName\0"
    "sDesc\0sWorkout\0vWriteFile\0hasHeartRateData\0"
    "paceRelevantForWorkoutType\0filename\0"
    "name\0workout\0description\0time\0timeStr\0"
    "duration\0durationStr\0pauseDuration\0"
    "pauseDurationStr\0distance\0speed\0"
    "maxSpeed\0pace\0paceStr\0paceImperialStr\0"
    "heartRate\0heartRateMin\0heartRateMax\0"
    "loaded\0elevationUp\0elevationDown\0"
    "cadence\0cadenceMin\0cadenceMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
      25,  326, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  234,    2, 0x06 /* Public */,
       3,    0,  235,    2, 0x06 /* Public */,
       4,    0,  236,    2, 0x06 /* Public */,
       5,    0,  237,    2, 0x06 /* Public */,
       6,    0,  238,    2, 0x06 /* Public */,
       7,    0,  239,    2, 0x06 /* Public */,
       8,    0,  240,    2, 0x06 /* Public */,
       9,    0,  241,    2, 0x06 /* Public */,
      10,    0,  242,    2, 0x06 /* Public */,
      11,    0,  243,    2, 0x06 /* Public */,
      12,    0,  244,    2, 0x06 /* Public */,
      13,    0,  245,    2, 0x06 /* Public */,
      14,    0,  246,    2, 0x06 /* Public */,
      15,    0,  247,    2, 0x06 /* Public */,
      16,    0,  248,    2, 0x06 /* Public */,
      17,    0,  249,    2, 0x06 /* Public */,
      18,    0,  250,    2, 0x06 /* Public */,
      19,    0,  251,    2, 0x06 /* Public */,
      20,    0,  252,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      21,    1,  253,    2, 0x02 /* Public */,
      23,    0,  256,    2, 0x02 /* Public */,
      24,    0,  257,    2, 0x02 /* Public */,
      25,    0,  258,    2, 0x02 /* Public */,
      26,    0,  259,    2, 0x02 /* Public */,
      27,    1,  260,    2, 0x02 /* Public */,
      30,    1,  263,    2, 0x02 /* Public */,
      31,    1,  266,    2, 0x02 /* Public */,
      32,    1,  269,    2, 0x02 /* Public */,
      33,    1,  272,    2, 0x02 /* Public */,
      34,    1,  275,    2, 0x02 /* Public */,
      35,    1,  278,    2, 0x02 /* Public */,
      36,    1,  281,    2, 0x02 /* Public */,
      37,    1,  284,    2, 0x02 /* Public */,
      38,    1,  287,    2, 0x02 /* Public */,
      39,    1,  290,    2, 0x02 /* Public */,
      40,    1,  293,    2, 0x02 /* Public */,
      41,    1,  296,    2, 0x02 /* Public */,
      42,    2,  299,    2, 0x02 /* Public */,
      45,    0,  304,    2, 0x02 /* Public */,
      46,    1,  305,    2, 0x02 /* Public */,
      48,    6,  308,    2, 0x02 /* Public */,
      55,    1,  321,    2, 0x02 /* Public */,
      56,    0,  324,    2, 0x02 /* Public */,
      57,    0,  325,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Int,
    0x80000000 | 28, QMetaType::Int,   29,
    QMetaType::Int, QMetaType::Int,   29,
    QMetaType::UInt, QMetaType::Int,   29,
    QMetaType::QReal, QMetaType::Int,   29,
    QMetaType::QDateTime, QMetaType::Int,   29,
    QMetaType::LongLong, QMetaType::Int,   29,
    QMetaType::QReal, QMetaType::Int,   29,
    QMetaType::QReal, QMetaType::Int,   29,
    QMetaType::QReal, QMetaType::Int,   29,
    QMetaType::QReal, QMetaType::Int,   29,
    QMetaType::QString, QMetaType::Int,   29,
    QMetaType::QString, QMetaType::Int,   29,
    QMetaType::UInt, QMetaType::Int,   29,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   43,   44,
    0x80000000 | 28,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   49,   50,   51,   52,   53,   54,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
      58, QMetaType::QString, 0x00495103,
      59, QMetaType::QString, 0x00495001,
      60, QMetaType::QString, 0x00495001,
      61, QMetaType::QString, 0x00495001,
      62, QMetaType::QDateTime, 0x00495001,
      63, QMetaType::QString, 0x00495001,
      64, QMetaType::Int, 0x00495001,
      65, QMetaType::QString, 0x00495001,
      66, QMetaType::Int, 0x00495001,
      67, QMetaType::QString, 0x00495001,
      68, QMetaType::QReal, 0x00495001,
      69, QMetaType::QReal, 0x00495001,
      70, QMetaType::QReal, 0x00495001,
      71, QMetaType::QReal, 0x00495001,
      72, QMetaType::QString, 0x00495001,
      73, QMetaType::QString, 0x00495001,
      74, QMetaType::QReal, 0x00495001,
      75, QMetaType::UInt, 0x00495001,
      76, QMetaType::UInt, 0x00495001,
      77, QMetaType::Bool, 0x00495001,
      78, QMetaType::QReal, 0x00495001,
      79, QMetaType::QReal, 0x00495001,
      80, QMetaType::QReal, 0x00495001,
      81, QMetaType::UInt, 0x00495001,
      82, QMetaType::UInt, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       4,
       5,
       5,
       5,
       5,
       6,
       7,
       8,
       9,
       9,
       9,
      12,
      13,
      14,
      10,
      15,
      15,
      16,
      17,
      18,

       0        // eod
};

void TrackLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrackLoader *_t = static_cast<TrackLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filenameChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->workoutChanged(); break;
        case 3: _t->descriptionChanged(); break;
        case 4: _t->timeChanged(); break;
        case 5: _t->durationChanged(); break;
        case 6: _t->distanceChanged(); break;
        case 7: _t->speedChanged(); break;
        case 8: _t->maxSpeedChanged(); break;
        case 9: _t->paceChanged(); break;
        case 10: _t->loadedChanged(); break;
        case 11: _t->trackChanged(); break;
        case 12: _t->heartRateChanged(); break;
        case 13: _t->heartRateMinChanged(); break;
        case 14: _t->heartRateMaxChanged(); break;
        case 15: _t->elevationChanged(); break;
        case 16: _t->cadenceChanged(); break;
        case 17: _t->cadenceMinChanged(); break;
        case 18: _t->cadenceMaxChanged(); break;
        case 19: _t->loadString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: { QString _r = _t->readGpx();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->sTworkoutKey();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->trackPointCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->pausePositionsCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { QGeoCoordinate _r = _t->trackPointAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->pausePositionAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { uint _r = _t->heartRateAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 27: { qreal _r = _t->elevationAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 28: { QDateTime _r = _t->timeAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 29: { qint64 _r = _t->unixTimeAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 30: { qreal _r = _t->durationAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 31: { qreal _r = _t->distanceAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 32: { qreal _r = _t->speedAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 33: { qreal _r = _t->paceAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 34: { QString _r = _t->paceStrAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->paceImperialStrAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { uint _r = _t->cadenceAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 37: { int _r = _t->fitZoomLevel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 38: { QGeoCoordinate _r = _t->center();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = _r; }  break;
        case 39: _t->vReadFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->vSetNewProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 41: _t->vWriteFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: { bool _r = _t->hasHeartRateData();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->paceRelevantForWorkoutType();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::filenameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::workoutChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::descriptionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::timeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::durationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::distanceChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::speedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::maxSpeedChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::paceChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::loadedChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::trackChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::heartRateChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::heartRateMinChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::heartRateMaxChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::elevationChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::cadenceChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::cadenceMinChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (TrackLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackLoader::cadenceMaxChanged)) {
                *result = 18;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TrackLoader *_t = static_cast<TrackLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->filename(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->workout(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 4: *reinterpret_cast< QDateTime*>(_v) = _t->time(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->timeStr(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->durationStr(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->pauseDuration(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->pauseDurationStr(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->distance(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->speed(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->maxSpeed(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = _t->pace(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->paceStr(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->paceImperialStr(); break;
        case 16: *reinterpret_cast< qreal*>(_v) = _t->heartRate(); break;
        case 17: *reinterpret_cast< uint*>(_v) = _t->heartRateMin(); break;
        case 18: *reinterpret_cast< uint*>(_v) = _t->heartRateMax(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->loaded(); break;
        case 20: *reinterpret_cast< qreal*>(_v) = _t->elevationUp(); break;
        case 21: *reinterpret_cast< qreal*>(_v) = _t->elevationDown(); break;
        case 22: *reinterpret_cast< qreal*>(_v) = _t->cadence(); break;
        case 23: *reinterpret_cast< uint*>(_v) = _t->cadenceMin(); break;
        case 24: *reinterpret_cast< uint*>(_v) = _t->cadenceMax(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TrackLoader *_t = static_cast<TrackLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TrackLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TrackLoader.data,
      qt_meta_data_TrackLoader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TrackLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TrackLoader.stringdata0))
        return static_cast<void*>(const_cast< TrackLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int TrackLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 44;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 25;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TrackLoader::filenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TrackLoader::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TrackLoader::workoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void TrackLoader::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void TrackLoader::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void TrackLoader::durationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void TrackLoader::distanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void TrackLoader::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void TrackLoader::maxSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void TrackLoader::paceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void TrackLoader::loadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void TrackLoader::trackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void TrackLoader::heartRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void TrackLoader::heartRateMinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void TrackLoader::heartRateMaxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void TrackLoader::elevationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void TrackLoader::cadenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void TrackLoader::cadenceMinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void TrackLoader::cadenceMaxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
