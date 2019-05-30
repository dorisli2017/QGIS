/****************************************************************************
** Meta object code from reading C++ file 'qgsfeature.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsfeature.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfeature.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFeature_t {
    QByteArrayData data[9];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFeature_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFeature_t qt_meta_stringdata_QgsFeature = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QgsFeature"
QT_MOC_LITERAL(1, 11, 2), // "id"
QT_MOC_LITERAL(2, 14, 12), // "QgsFeatureId"
QT_MOC_LITERAL(3, 27, 10), // "attributes"
QT_MOC_LITERAL(4, 38, 13), // "QgsAttributes"
QT_MOC_LITERAL(5, 52, 6), // "fields"
QT_MOC_LITERAL(6, 59, 9), // "QgsFields"
QT_MOC_LITERAL(7, 69, 8), // "geometry"
QT_MOC_LITERAL(8, 78, 11) // "QgsGeometry"

    },
    "QgsFeature\0id\0QgsFeatureId\0attributes\0"
    "QgsAttributes\0fields\0QgsFields\0geometry\0"
    "QgsGeometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFeature[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, 0x80000000 | 4, 0x0009510b,
       5, 0x80000000 | 6, 0x0009510b,
       7, 0x80000000 | 8, 0x0009510b,

       0        // eod
};

void QgsFeature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFields >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsFeature *_t = reinterpret_cast<QgsFeature *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsFeatureId*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QgsAttributes*>(_v) = _t->attributes(); break;
        case 2: *reinterpret_cast< QgsFields*>(_v) = _t->fields(); break;
        case 3: *reinterpret_cast< QgsGeometry*>(_v) = _t->geometry(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsFeature *_t = reinterpret_cast<QgsFeature *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QgsFeatureId*>(_v)); break;
        case 1: _t->setAttributes(*reinterpret_cast< QgsAttributes*>(_v)); break;
        case 2: _t->setFields(*reinterpret_cast< QgsFields*>(_v)); break;
        case 3: _t->setGeometry(*reinterpret_cast< QgsGeometry*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QgsFeature::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsFeature.data,
      qt_meta_data_QgsFeature,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
