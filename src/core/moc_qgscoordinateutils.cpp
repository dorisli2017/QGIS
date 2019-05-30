/****************************************************************************
** Meta object code from reading C++ file 'qgscoordinateutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgscoordinateutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscoordinateutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCoordinateUtils_t {
    QByteArrayData data[13];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCoordinateUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCoordinateUtils_t qt_meta_stringdata_QgsCoordinateUtils = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsCoordinateUtils"
QT_MOC_LITERAL(1, 19, 28), // "calculateCoordinatePrecision"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 16), // "mapUnitsPerPixel"
QT_MOC_LITERAL(4, 66, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(5, 95, 6), // "mapCrs"
QT_MOC_LITERAL(6, 102, 11), // "QgsProject*"
QT_MOC_LITERAL(7, 114, 7), // "project"
QT_MOC_LITERAL(8, 122, 26), // "formatCoordinateForProject"
QT_MOC_LITERAL(9, 149, 10), // "QgsPointXY"
QT_MOC_LITERAL(10, 160, 5), // "point"
QT_MOC_LITERAL(11, 166, 7), // "destCrs"
QT_MOC_LITERAL(12, 174, 9) // "precision"

    },
    "QgsCoordinateUtils\0calculateCoordinatePrecision\0"
    "\0mapUnitsPerPixel\0QgsCoordinateReferenceSystem\0"
    "mapCrs\0QgsProject*\0project\0"
    "formatCoordinateForProject\0QgsPointXY\0"
    "point\0destCrs\0precision"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCoordinateUtils[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x02 /* Public */,
       1,    2,   36,    2, 0x22 /* Public | MethodCloned */,
       8,    4,   41,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Int, QMetaType::Double, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Int, QMetaType::Double, 0x80000000 | 4,    3,    5,
    QMetaType::QString, 0x80000000 | 6, 0x80000000 | 9, 0x80000000 | 4, QMetaType::Int,    7,   10,   11,   12,

       0        // eod
};

void QgsCoordinateUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCoordinateUtils *_t = reinterpret_cast<QgsCoordinateUtils *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->calculateCoordinatePrecision((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[2])),(*reinterpret_cast< QgsProject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->calculateCoordinatePrecision((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->formatCoordinateForProject((*reinterpret_cast< QgsProject*(*)>(_a[1])),(*reinterpret_cast< const QgsPointXY(*)>(_a[2])),(*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QgsCoordinateUtils::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsCoordinateUtils.data,
      qt_meta_data_QgsCoordinateUtils,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
