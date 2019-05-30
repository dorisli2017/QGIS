/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometry_t {
    QByteArrayData data[15];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometry_t qt_meta_stringdata_QgsGeometry = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QgsGeometry"
QT_MOC_LITERAL(1, 12, 6), // "isNull"
QT_MOC_LITERAL(2, 19, 4), // "type"
QT_MOC_LITERAL(3, 24, 25), // "QgsWkbTypes::GeometryType"
QT_MOC_LITERAL(4, 50, 10), // "BufferSide"
QT_MOC_LITERAL(5, 61, 8), // "SideLeft"
QT_MOC_LITERAL(6, 70, 9), // "SideRight"
QT_MOC_LITERAL(7, 80, 11), // "EndCapStyle"
QT_MOC_LITERAL(8, 92, 8), // "CapRound"
QT_MOC_LITERAL(9, 101, 7), // "CapFlat"
QT_MOC_LITERAL(10, 109, 9), // "CapSquare"
QT_MOC_LITERAL(11, 119, 9), // "JoinStyle"
QT_MOC_LITERAL(12, 129, 14), // "JoinStyleRound"
QT_MOC_LITERAL(13, 144, 14), // "JoinStyleMiter"
QT_MOC_LITERAL(14, 159, 14) // "JoinStyleBevel"

    },
    "QgsGeometry\0isNull\0type\0"
    "QgsWkbTypes::GeometryType\0BufferSide\0"
    "SideLeft\0SideRight\0EndCapStyle\0CapRound\0"
    "CapFlat\0CapSquare\0JoinStyle\0JoinStyleRound\0"
    "JoinStyleMiter\0JoinStyleBevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       3,   20, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095001,
       2, 0x80000000 | 3, 0x00095009,

 // enums: name, flags, count, data
       4, 0x0,    2,   32,
       7, 0x0,    3,   36,
      11, 0x0,    3,   42,

 // enum data: key, value
       5, uint(QgsGeometry::SideLeft),
       6, uint(QgsGeometry::SideRight),
       8, uint(QgsGeometry::CapRound),
       9, uint(QgsGeometry::CapFlat),
      10, uint(QgsGeometry::CapSquare),
      12, uint(QgsGeometry::JoinStyleRound),
      13, uint(QgsGeometry::JoinStyleMiter),
      14, uint(QgsGeometry::JoinStyleBevel),

       0        // eod
};

void QgsGeometry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QgsGeometry *_t = reinterpret_cast<QgsGeometry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isNull(); break;
        case 1: *reinterpret_cast< QgsWkbTypes::GeometryType*>(_v) = _t->type(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_QgsGeometry[] = {
        &QgsWkbTypes::staticMetaObject,
    nullptr
};

const QMetaObject QgsGeometry::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsGeometry.data,
      qt_meta_data_QgsGeometry,  qt_static_metacall, qt_meta_extradata_QgsGeometry, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
