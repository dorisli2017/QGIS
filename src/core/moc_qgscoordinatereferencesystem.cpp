/****************************************************************************
** Meta object code from reading C++ file 'qgscoordinatereferencesystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgscoordinatereferencesystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscoordinatereferencesystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCoordinateReferenceSystem_t {
    QByteArrayData data[7];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCoordinateReferenceSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCoordinateReferenceSystem_t qt_meta_stringdata_QgsCoordinateReferenceSystem = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(1, 29, 10), // "fromEpsgId"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "epsg"
QT_MOC_LITERAL(4, 46, 8), // "mapUnits"
QT_MOC_LITERAL(5, 55, 26), // "QgsUnitTypes::DistanceUnit"
QT_MOC_LITERAL(6, 82, 12) // "isGeographic"

    },
    "QgsCoordinateReferenceSystem\0fromEpsgId\0"
    "\0epsg\0mapUnits\0QgsUnitTypes::DistanceUnit\0"
    "isGeographic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCoordinateReferenceSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 0, QMetaType::Long,    3,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095009,
       6, QMetaType::Bool, 0x00095001,

       0        // eod
};

void QgsCoordinateReferenceSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCoordinateReferenceSystem *_t = reinterpret_cast<QgsCoordinateReferenceSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QgsCoordinateReferenceSystem _r = _t->fromEpsgId((*reinterpret_cast< long(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsCoordinateReferenceSystem*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsCoordinateReferenceSystem *_t = reinterpret_cast<QgsCoordinateReferenceSystem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsUnitTypes::DistanceUnit*>(_v) = _t->mapUnits(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isGeographic(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QgsCoordinateReferenceSystem[] = {
        &QgsUnitTypes::staticMetaObject,
    nullptr
};

const QMetaObject QgsCoordinateReferenceSystem::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsCoordinateReferenceSystem.data,
      qt_meta_data_QgsCoordinateReferenceSystem,  qt_static_metacall, qt_meta_extradata_QgsCoordinateReferenceSystem, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
