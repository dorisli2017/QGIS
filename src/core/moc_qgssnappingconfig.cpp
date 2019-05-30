/****************************************************************************
** Meta object code from reading C++ file 'qgssnappingconfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgssnappingconfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssnappingconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSnappingConfig_t {
    QByteArrayData data[11];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSnappingConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSnappingConfig_t qt_meta_stringdata_QgsSnappingConfig = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsSnappingConfig"
QT_MOC_LITERAL(1, 18, 7), // "project"
QT_MOC_LITERAL(2, 26, 11), // "QgsProject*"
QT_MOC_LITERAL(3, 38, 12), // "SnappingMode"
QT_MOC_LITERAL(4, 51, 11), // "ActiveLayer"
QT_MOC_LITERAL(5, 63, 9), // "AllLayers"
QT_MOC_LITERAL(6, 73, 21), // "AdvancedConfiguration"
QT_MOC_LITERAL(7, 95, 12), // "SnappingType"
QT_MOC_LITERAL(8, 108, 6), // "Vertex"
QT_MOC_LITERAL(9, 115, 16), // "VertexAndSegment"
QT_MOC_LITERAL(10, 132, 7) // "Segment"

    },
    "QgsSnappingConfig\0project\0QgsProject*\0"
    "SnappingMode\0ActiveLayer\0AllLayers\0"
    "AdvancedConfiguration\0SnappingType\0"
    "Vertex\0VertexAndSegment\0Segment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSnappingConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       2,   17, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,

 // enums: name, flags, count, data
       3, 0x0,    3,   25,
       7, 0x0,    3,   31,

 // enum data: key, value
       4, uint(QgsSnappingConfig::ActiveLayer),
       5, uint(QgsSnappingConfig::AllLayers),
       6, uint(QgsSnappingConfig::AdvancedConfiguration),
       8, uint(QgsSnappingConfig::Vertex),
       9, uint(QgsSnappingConfig::VertexAndSegment),
      10, uint(QgsSnappingConfig::Segment),

       0        // eod
};

void QgsSnappingConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QgsSnappingConfig *_t = reinterpret_cast<QgsSnappingConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsProject**>(_v) = _t->project(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsSnappingConfig *_t = reinterpret_cast<QgsSnappingConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProject(*reinterpret_cast< QgsProject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsSnappingConfig::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsSnappingConfig.data,
      qt_meta_data_QgsSnappingConfig,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
