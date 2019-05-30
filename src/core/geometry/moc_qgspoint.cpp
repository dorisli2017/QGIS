/****************************************************************************
** Meta object code from reading C++ file 'qgspoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgspoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPoint_t {
    QByteArrayData data[5];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPoint_t qt_meta_stringdata_QgsPoint = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QgsPoint"
QT_MOC_LITERAL(1, 9, 1), // "x"
QT_MOC_LITERAL(2, 11, 1), // "y"
QT_MOC_LITERAL(3, 13, 1), // "z"
QT_MOC_LITERAL(4, 15, 1) // "m"

    },
    "QgsPoint\0x\0y\0z\0m"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPoint[] = {

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
       1, QMetaType::Double, 0x00095103,
       2, QMetaType::Double, 0x00095103,
       3, QMetaType::Double, 0x00095103,
       4, QMetaType::Double, 0x00095103,

       0        // eod
};

void QgsPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QgsPoint *_t = reinterpret_cast<QgsPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->z(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->m(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsPoint *_t = reinterpret_cast<QgsPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setZ(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setM(*reinterpret_cast< double*>(_v)); break;
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

const QMetaObject QgsPoint::staticMetaObject = {
    { &QgsAbstractGeometry::staticMetaObject, qt_meta_stringdata_QgsPoint.data,
      qt_meta_data_QgsPoint,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
