/****************************************************************************
** Meta object code from reading C++ file 'qgsunittypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsunittypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsunittypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsUnitTypes_t {
    QByteArrayData data[97];
    char stringdata0[1458];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsUnitTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsUnitTypes_t qt_meta_stringdata_QgsUnitTypes = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QgsUnitTypes"
QT_MOC_LITERAL(1, 13, 8), // "unitType"
QT_MOC_LITERAL(2, 22, 16), // "DistanceUnitType"
QT_MOC_LITERAL(3, 39, 0), // ""
QT_MOC_LITERAL(4, 40, 26), // "QgsUnitTypes::DistanceUnit"
QT_MOC_LITERAL(5, 67, 4), // "unit"
QT_MOC_LITERAL(6, 72, 10), // "encodeUnit"
QT_MOC_LITERAL(7, 83, 18), // "decodeDistanceUnit"
QT_MOC_LITERAL(8, 102, 6), // "string"
QT_MOC_LITERAL(9, 109, 5), // "bool*"
QT_MOC_LITERAL(10, 115, 2), // "ok"
QT_MOC_LITERAL(11, 118, 8), // "toString"
QT_MOC_LITERAL(12, 127, 19), // "toAbbreviatedString"
QT_MOC_LITERAL(13, 147, 20), // "stringToDistanceUnit"
QT_MOC_LITERAL(14, 168, 20), // "fromUnitToUnitFactor"
QT_MOC_LITERAL(15, 189, 8), // "fromUnit"
QT_MOC_LITERAL(16, 198, 6), // "toUnit"
QT_MOC_LITERAL(17, 205, 22), // "QgsUnitTypes::AreaUnit"
QT_MOC_LITERAL(18, 228, 14), // "decodeAreaUnit"
QT_MOC_LITERAL(19, 243, 8), // "AreaUnit"
QT_MOC_LITERAL(20, 252, 16), // "stringToAreaUnit"
QT_MOC_LITERAL(21, 269, 18), // "distanceToAreaUnit"
QT_MOC_LITERAL(22, 288, 12), // "distanceUnit"
QT_MOC_LITERAL(23, 301, 23), // "QgsUnitTypes::AngleUnit"
QT_MOC_LITERAL(24, 325, 15), // "decodeAngleUnit"
QT_MOC_LITERAL(25, 341, 11), // "formatAngle"
QT_MOC_LITERAL(26, 353, 5), // "angle"
QT_MOC_LITERAL(27, 359, 8), // "decimals"
QT_MOC_LITERAL(28, 368, 14), // "scaledDistance"
QT_MOC_LITERAL(29, 383, 27), // "QgsUnitTypes::DistanceValue"
QT_MOC_LITERAL(30, 411, 8), // "distance"
QT_MOC_LITERAL(31, 420, 12), // "keepBaseUnit"
QT_MOC_LITERAL(32, 433, 10), // "scaledArea"
QT_MOC_LITERAL(33, 444, 23), // "QgsUnitTypes::AreaValue"
QT_MOC_LITERAL(34, 468, 4), // "area"
QT_MOC_LITERAL(35, 473, 14), // "formatDistance"
QT_MOC_LITERAL(36, 488, 10), // "formatArea"
QT_MOC_LITERAL(37, 499, 24), // "QgsUnitTypes::RenderUnit"
QT_MOC_LITERAL(38, 524, 16), // "decodeRenderUnit"
QT_MOC_LITERAL(39, 541, 24), // "QgsUnitTypes::LayoutUnit"
QT_MOC_LITERAL(40, 566, 16), // "decodeLayoutUnit"
QT_MOC_LITERAL(41, 583, 28), // "QgsUnitTypes::LayoutUnitType"
QT_MOC_LITERAL(42, 612, 5), // "units"
QT_MOC_LITERAL(43, 618, 19), // "SystemOfMeasurement"
QT_MOC_LITERAL(44, 638, 13), // "UnknownSystem"
QT_MOC_LITERAL(45, 652, 12), // "MetricSystem"
QT_MOC_LITERAL(46, 665, 14), // "ImperialSystem"
QT_MOC_LITERAL(47, 680, 10), // "USCSSystem"
QT_MOC_LITERAL(48, 691, 12), // "DistanceUnit"
QT_MOC_LITERAL(49, 704, 14), // "DistanceMeters"
QT_MOC_LITERAL(50, 719, 18), // "DistanceKilometers"
QT_MOC_LITERAL(51, 738, 12), // "DistanceFeet"
QT_MOC_LITERAL(52, 751, 21), // "DistanceNauticalMiles"
QT_MOC_LITERAL(53, 773, 13), // "DistanceYards"
QT_MOC_LITERAL(54, 787, 13), // "DistanceMiles"
QT_MOC_LITERAL(55, 801, 15), // "DistanceDegrees"
QT_MOC_LITERAL(56, 817, 19), // "DistanceCentimeters"
QT_MOC_LITERAL(57, 837, 19), // "DistanceMillimeters"
QT_MOC_LITERAL(58, 857, 19), // "DistanceUnknownUnit"
QT_MOC_LITERAL(59, 877, 16), // "AreaSquareMeters"
QT_MOC_LITERAL(60, 894, 20), // "AreaSquareKilometers"
QT_MOC_LITERAL(61, 915, 14), // "AreaSquareFeet"
QT_MOC_LITERAL(62, 930, 15), // "AreaSquareYards"
QT_MOC_LITERAL(63, 946, 15), // "AreaSquareMiles"
QT_MOC_LITERAL(64, 962, 12), // "AreaHectares"
QT_MOC_LITERAL(65, 975, 9), // "AreaAcres"
QT_MOC_LITERAL(66, 985, 23), // "AreaSquareNauticalMiles"
QT_MOC_LITERAL(67, 1009, 17), // "AreaSquareDegrees"
QT_MOC_LITERAL(68, 1027, 21), // "AreaSquareCentimeters"
QT_MOC_LITERAL(69, 1049, 21), // "AreaSquareMillimeters"
QT_MOC_LITERAL(70, 1071, 15), // "AreaUnknownUnit"
QT_MOC_LITERAL(71, 1087, 9), // "AngleUnit"
QT_MOC_LITERAL(72, 1097, 12), // "AngleDegrees"
QT_MOC_LITERAL(73, 1110, 12), // "AngleRadians"
QT_MOC_LITERAL(74, 1123, 8), // "AngleGon"
QT_MOC_LITERAL(75, 1132, 17), // "AngleMinutesOfArc"
QT_MOC_LITERAL(76, 1150, 17), // "AngleSecondsOfArc"
QT_MOC_LITERAL(77, 1168, 9), // "AngleTurn"
QT_MOC_LITERAL(78, 1178, 16), // "AngleUnknownUnit"
QT_MOC_LITERAL(79, 1195, 10), // "RenderUnit"
QT_MOC_LITERAL(80, 1206, 17), // "RenderMillimeters"
QT_MOC_LITERAL(81, 1224, 14), // "RenderMapUnits"
QT_MOC_LITERAL(82, 1239, 12), // "RenderPixels"
QT_MOC_LITERAL(83, 1252, 16), // "RenderPercentage"
QT_MOC_LITERAL(84, 1269, 12), // "RenderPoints"
QT_MOC_LITERAL(85, 1282, 12), // "RenderInches"
QT_MOC_LITERAL(86, 1295, 17), // "RenderUnknownUnit"
QT_MOC_LITERAL(87, 1313, 22), // "RenderMetersInMapUnits"
QT_MOC_LITERAL(88, 1336, 10), // "LayoutUnit"
QT_MOC_LITERAL(89, 1347, 17), // "LayoutMillimeters"
QT_MOC_LITERAL(90, 1365, 17), // "LayoutCentimeters"
QT_MOC_LITERAL(91, 1383, 12), // "LayoutMeters"
QT_MOC_LITERAL(92, 1396, 12), // "LayoutInches"
QT_MOC_LITERAL(93, 1409, 10), // "LayoutFeet"
QT_MOC_LITERAL(94, 1420, 12), // "LayoutPoints"
QT_MOC_LITERAL(95, 1433, 11), // "LayoutPicas"
QT_MOC_LITERAL(96, 1445, 12) // "LayoutPixels"

    },
    "QgsUnitTypes\0unitType\0DistanceUnitType\0"
    "\0QgsUnitTypes::DistanceUnit\0unit\0"
    "encodeUnit\0decodeDistanceUnit\0string\0"
    "bool*\0ok\0toString\0toAbbreviatedString\0"
    "stringToDistanceUnit\0fromUnitToUnitFactor\0"
    "fromUnit\0toUnit\0QgsUnitTypes::AreaUnit\0"
    "decodeAreaUnit\0AreaUnit\0stringToAreaUnit\0"
    "distanceToAreaUnit\0distanceUnit\0"
    "QgsUnitTypes::AngleUnit\0decodeAngleUnit\0"
    "formatAngle\0angle\0decimals\0scaledDistance\0"
    "QgsUnitTypes::DistanceValue\0distance\0"
    "keepBaseUnit\0scaledArea\0QgsUnitTypes::AreaValue\0"
    "area\0formatDistance\0formatArea\0"
    "QgsUnitTypes::RenderUnit\0decodeRenderUnit\0"
    "QgsUnitTypes::LayoutUnit\0decodeLayoutUnit\0"
    "QgsUnitTypes::LayoutUnitType\0units\0"
    "SystemOfMeasurement\0UnknownSystem\0"
    "MetricSystem\0ImperialSystem\0USCSSystem\0"
    "DistanceUnit\0DistanceMeters\0"
    "DistanceKilometers\0DistanceFeet\0"
    "DistanceNauticalMiles\0DistanceYards\0"
    "DistanceMiles\0DistanceDegrees\0"
    "DistanceCentimeters\0DistanceMillimeters\0"
    "DistanceUnknownUnit\0AreaSquareMeters\0"
    "AreaSquareKilometers\0AreaSquareFeet\0"
    "AreaSquareYards\0AreaSquareMiles\0"
    "AreaHectares\0AreaAcres\0AreaSquareNauticalMiles\0"
    "AreaSquareDegrees\0AreaSquareCentimeters\0"
    "AreaSquareMillimeters\0AreaUnknownUnit\0"
    "AngleUnit\0AngleDegrees\0AngleRadians\0"
    "AngleGon\0AngleMinutesOfArc\0AngleSecondsOfArc\0"
    "AngleTurn\0AngleUnknownUnit\0RenderUnit\0"
    "RenderMillimeters\0RenderMapUnits\0"
    "RenderPixels\0RenderPercentage\0"
    "RenderPoints\0RenderInches\0RenderUnknownUnit\0"
    "RenderMetersInMapUnits\0LayoutUnit\0"
    "LayoutMillimeters\0LayoutCentimeters\0"
    "LayoutMeters\0LayoutInches\0LayoutFeet\0"
    "LayoutPoints\0LayoutPicas\0LayoutPixels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsUnitTypes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       6,  382, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,  204,    3, 0x02 /* Public */,
       6,    1,  207,    3, 0x02 /* Public */,
       7,    2,  210,    3, 0x02 /* Public */,
       7,    1,  215,    3, 0x22 /* Public | MethodCloned */,
      11,    1,  218,    3, 0x02 /* Public */,
      12,    1,  221,    3, 0x02 /* Public */,
      13,    2,  224,    3, 0x02 /* Public */,
      13,    1,  229,    3, 0x22 /* Public | MethodCloned */,
      14,    2,  232,    3, 0x02 /* Public */,
       1,    1,  237,    3, 0x02 /* Public */,
       6,    1,  240,    3, 0x02 /* Public */,
      18,    2,  243,    3, 0x02 /* Public */,
      18,    1,  248,    3, 0x22 /* Public | MethodCloned */,
      20,    2,  251,    3, 0x02 /* Public */,
      20,    1,  256,    3, 0x22 /* Public | MethodCloned */,
      14,    2,  259,    3, 0x02 /* Public */,
      21,    1,  264,    3, 0x02 /* Public */,
       6,    1,  267,    3, 0x02 /* Public */,
      24,    2,  270,    3, 0x02 /* Public */,
      24,    1,  275,    3, 0x22 /* Public | MethodCloned */,
      14,    2,  278,    3, 0x02 /* Public */,
      25,    3,  283,    3, 0x02 /* Public */,
      28,    4,  290,    3, 0x02 /* Public */,
      28,    3,  299,    3, 0x22 /* Public | MethodCloned */,
      32,    4,  306,    3, 0x02 /* Public */,
      32,    3,  315,    3, 0x22 /* Public | MethodCloned */,
      35,    4,  322,    3, 0x02 /* Public */,
      35,    3,  331,    3, 0x22 /* Public | MethodCloned */,
      36,    4,  338,    3, 0x02 /* Public */,
      36,    3,  347,    3, 0x22 /* Public | MethodCloned */,
       6,    1,  354,    3, 0x02 /* Public */,
      38,    2,  357,    3, 0x02 /* Public */,
      38,    1,  362,    3, 0x22 /* Public | MethodCloned */,
      12,    1,  365,    3, 0x02 /* Public */,
       6,    1,  368,    3, 0x02 /* Public */,
      40,    2,  371,    3, 0x02 /* Public */,
      40,    1,  376,    3, 0x22 /* Public | MethodCloned */,
       1,    1,  379,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::QString, 0x80000000 | 4,    5,
    0x80000000 | 4, QMetaType::QString, 0x80000000 | 9,    8,   10,
    0x80000000 | 4, QMetaType::QString,    8,
    QMetaType::QString, 0x80000000 | 4,    5,
    QMetaType::QString, 0x80000000 | 4,    5,
    0x80000000 | 4, QMetaType::QString, 0x80000000 | 9,    8,   10,
    0x80000000 | 4, QMetaType::QString,    8,
    QMetaType::Double, 0x80000000 | 4, 0x80000000 | 4,   15,   16,
    0x80000000 | 2, 0x80000000 | 17,    5,
    QMetaType::QString, 0x80000000 | 17,    5,
    0x80000000 | 19, QMetaType::QString, 0x80000000 | 9,    8,   10,
    0x80000000 | 19, QMetaType::QString,    8,
    0x80000000 | 19, QMetaType::QString, 0x80000000 | 9,    8,   10,
    0x80000000 | 19, QMetaType::QString,    8,
    QMetaType::Double, 0x80000000 | 17, 0x80000000 | 17,   15,   16,
    0x80000000 | 17, 0x80000000 | 4,   22,
    QMetaType::QString, 0x80000000 | 23,    5,
    0x80000000 | 23, QMetaType::QString, 0x80000000 | 9,    8,   10,
    0x80000000 | 23, QMetaType::QString,    8,
    QMetaType::Double, 0x80000000 | 23, 0x80000000 | 23,   15,   16,
    QMetaType::QString, QMetaType::Double, QMetaType::Int, 0x80000000 | 23,   26,   27,    5,
    0x80000000 | 29, QMetaType::Double, 0x80000000 | 4, QMetaType::Int, QMetaType::Bool,   30,    5,   27,   31,
    0x80000000 | 29, QMetaType::Double, 0x80000000 | 4, QMetaType::Int,   30,    5,   27,
    0x80000000 | 33, QMetaType::Double, 0x80000000 | 17, QMetaType::Int, QMetaType::Bool,   34,    5,   27,   31,
    0x80000000 | 33, QMetaType::Double, 0x80000000 | 17, QMetaType::Int,   34,    5,   27,
    QMetaType::QString, QMetaType::Double, QMetaType::Int, 0x80000000 | 4, QMetaType::Bool,   30,   27,    5,   31,
    QMetaType::QString, QMetaType::Double, QMetaType::Int, 0x80000000 | 4,   30,   27,    5,
    QMetaType::QString, QMetaType::Double, QMetaType::Int, 0x80000000 | 17, QMetaType::Bool,   34,   27,    5,   31,
    QMetaType::QString, QMetaType::Double, QMetaType::Int, 0x80000000 | 17,   34,   27,    5,
    QMetaType::QString, 0x80000000 | 37,    5,
    0x80000000 | 37, QMetaType::QString, 0x80000000 | 9,    8,   10,
    0x80000000 | 37, QMetaType::QString,    8,
    QMetaType::QString, 0x80000000 | 37,    5,
    QMetaType::QString, 0x80000000 | 39,    5,
    0x80000000 | 39, QMetaType::QString, 0x80000000 | 9,    8,   10,
    0x80000000 | 39, QMetaType::QString,    8,
    0x80000000 | 41, 0x80000000 | 39,   42,

 // enums: name, flags, count, data
      43, 0x0,    4,  406,
      48, 0x0,   10,  414,
      19, 0x0,   12,  434,
      71, 0x0,    7,  458,
      79, 0x0,    8,  472,
      88, 0x0,    8,  488,

 // enum data: key, value
      44, uint(QgsUnitTypes::UnknownSystem),
      45, uint(QgsUnitTypes::MetricSystem),
      46, uint(QgsUnitTypes::ImperialSystem),
      47, uint(QgsUnitTypes::USCSSystem),
      49, uint(QgsUnitTypes::DistanceMeters),
      50, uint(QgsUnitTypes::DistanceKilometers),
      51, uint(QgsUnitTypes::DistanceFeet),
      52, uint(QgsUnitTypes::DistanceNauticalMiles),
      53, uint(QgsUnitTypes::DistanceYards),
      54, uint(QgsUnitTypes::DistanceMiles),
      55, uint(QgsUnitTypes::DistanceDegrees),
      56, uint(QgsUnitTypes::DistanceCentimeters),
      57, uint(QgsUnitTypes::DistanceMillimeters),
      58, uint(QgsUnitTypes::DistanceUnknownUnit),
      59, uint(QgsUnitTypes::AreaSquareMeters),
      60, uint(QgsUnitTypes::AreaSquareKilometers),
      61, uint(QgsUnitTypes::AreaSquareFeet),
      62, uint(QgsUnitTypes::AreaSquareYards),
      63, uint(QgsUnitTypes::AreaSquareMiles),
      64, uint(QgsUnitTypes::AreaHectares),
      65, uint(QgsUnitTypes::AreaAcres),
      66, uint(QgsUnitTypes::AreaSquareNauticalMiles),
      67, uint(QgsUnitTypes::AreaSquareDegrees),
      68, uint(QgsUnitTypes::AreaSquareCentimeters),
      69, uint(QgsUnitTypes::AreaSquareMillimeters),
      70, uint(QgsUnitTypes::AreaUnknownUnit),
      72, uint(QgsUnitTypes::AngleDegrees),
      73, uint(QgsUnitTypes::AngleRadians),
      74, uint(QgsUnitTypes::AngleGon),
      75, uint(QgsUnitTypes::AngleMinutesOfArc),
      76, uint(QgsUnitTypes::AngleSecondsOfArc),
      77, uint(QgsUnitTypes::AngleTurn),
      78, uint(QgsUnitTypes::AngleUnknownUnit),
      80, uint(QgsUnitTypes::RenderMillimeters),
      81, uint(QgsUnitTypes::RenderMapUnits),
      82, uint(QgsUnitTypes::RenderPixels),
      83, uint(QgsUnitTypes::RenderPercentage),
      84, uint(QgsUnitTypes::RenderPoints),
      85, uint(QgsUnitTypes::RenderInches),
      86, uint(QgsUnitTypes::RenderUnknownUnit),
      87, uint(QgsUnitTypes::RenderMetersInMapUnits),
      89, uint(QgsUnitTypes::LayoutMillimeters),
      90, uint(QgsUnitTypes::LayoutCentimeters),
      91, uint(QgsUnitTypes::LayoutMeters),
      92, uint(QgsUnitTypes::LayoutInches),
      93, uint(QgsUnitTypes::LayoutFeet),
      94, uint(QgsUnitTypes::LayoutPoints),
      95, uint(QgsUnitTypes::LayoutPicas),
      96, uint(QgsUnitTypes::LayoutPixels),

       0        // eod
};

void QgsUnitTypes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsUnitTypes *_t = reinterpret_cast<QgsUnitTypes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { DistanceUnitType _r = _t->unitType((*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DistanceUnitType*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->encodeUnit((*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QgsUnitTypes::DistanceUnit _r = _t->decodeDistanceUnit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::DistanceUnit*>(_a[0]) = std::move(_r); }  break;
        case 3: { QgsUnitTypes::DistanceUnit _r = _t->decodeDistanceUnit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::DistanceUnit*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->toString((*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->toAbbreviatedString((*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QgsUnitTypes::DistanceUnit _r = _t->stringToDistanceUnit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::DistanceUnit*>(_a[0]) = std::move(_r); }  break;
        case 7: { QgsUnitTypes::DistanceUnit _r = _t->stringToDistanceUnit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::DistanceUnit*>(_a[0]) = std::move(_r); }  break;
        case 8: { double _r = _t->fromUnitToUnitFactor((*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[1])),(*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 9: { DistanceUnitType _r = _t->unitType((*reinterpret_cast< QgsUnitTypes::AreaUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DistanceUnitType*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->encodeUnit((*reinterpret_cast< QgsUnitTypes::AreaUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { AreaUnit _r = _t->decodeAreaUnit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< AreaUnit*>(_a[0]) = std::move(_r); }  break;
        case 12: { AreaUnit _r = _t->decodeAreaUnit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AreaUnit*>(_a[0]) = std::move(_r); }  break;
        case 13: { AreaUnit _r = _t->stringToAreaUnit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< AreaUnit*>(_a[0]) = std::move(_r); }  break;
        case 14: { AreaUnit _r = _t->stringToAreaUnit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AreaUnit*>(_a[0]) = std::move(_r); }  break;
        case 15: { double _r = _t->fromUnitToUnitFactor((*reinterpret_cast< QgsUnitTypes::AreaUnit(*)>(_a[1])),(*reinterpret_cast< QgsUnitTypes::AreaUnit(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 16: { QgsUnitTypes::AreaUnit _r = _t->distanceToAreaUnit((*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::AreaUnit*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->encodeUnit((*reinterpret_cast< QgsUnitTypes::AngleUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { QgsUnitTypes::AngleUnit _r = _t->decodeAngleUnit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::AngleUnit*>(_a[0]) = std::move(_r); }  break;
        case 19: { QgsUnitTypes::AngleUnit _r = _t->decodeAngleUnit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::AngleUnit*>(_a[0]) = std::move(_r); }  break;
        case 20: { double _r = _t->fromUnitToUnitFactor((*reinterpret_cast< QgsUnitTypes::AngleUnit(*)>(_a[1])),(*reinterpret_cast< QgsUnitTypes::AngleUnit(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 21: { QString _r = _t->formatAngle((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QgsUnitTypes::AngleUnit(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 22: { QgsUnitTypes::DistanceValue _r = _t->scaledDistance((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::DistanceValue*>(_a[0]) = std::move(_r); }  break;
        case 23: { QgsUnitTypes::DistanceValue _r = _t->scaledDistance((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::DistanceValue*>(_a[0]) = std::move(_r); }  break;
        case 24: { QgsUnitTypes::AreaValue _r = _t->scaledArea((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QgsUnitTypes::AreaUnit(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::AreaValue*>(_a[0]) = std::move(_r); }  break;
        case 25: { QgsUnitTypes::AreaValue _r = _t->scaledArea((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QgsUnitTypes::AreaUnit(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::AreaValue*>(_a[0]) = std::move(_r); }  break;
        case 26: { QString _r = _t->formatDistance((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->formatDistance((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: { QString _r = _t->formatArea((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QgsUnitTypes::AreaUnit(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 29: { QString _r = _t->formatArea((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QgsUnitTypes::AreaUnit(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 30: { QString _r = _t->encodeUnit((*reinterpret_cast< QgsUnitTypes::RenderUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 31: { QgsUnitTypes::RenderUnit _r = _t->decodeRenderUnit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::RenderUnit*>(_a[0]) = std::move(_r); }  break;
        case 32: { QgsUnitTypes::RenderUnit _r = _t->decodeRenderUnit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::RenderUnit*>(_a[0]) = std::move(_r); }  break;
        case 33: { QString _r = _t->toAbbreviatedString((*reinterpret_cast< QgsUnitTypes::RenderUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 34: { QString _r = _t->encodeUnit((*reinterpret_cast< QgsUnitTypes::LayoutUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 35: { QgsUnitTypes::LayoutUnit _r = _t->decodeLayoutUnit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::LayoutUnit*>(_a[0]) = std::move(_r); }  break;
        case 36: { QgsUnitTypes::LayoutUnit _r = _t->decodeLayoutUnit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::LayoutUnit*>(_a[0]) = std::move(_r); }  break;
        case 37: { QgsUnitTypes::LayoutUnitType _r = _t->unitType((*reinterpret_cast< QgsUnitTypes::LayoutUnit(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsUnitTypes::LayoutUnitType*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QgsUnitTypes::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsUnitTypes.data,
      qt_meta_data_QgsUnitTypes,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
