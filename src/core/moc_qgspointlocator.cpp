/****************************************************************************
** Meta object code from reading C++ file 'qgspointlocator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgspointlocator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspointlocator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPointLocator_t {
    QByteArrayData data[13];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPointLocator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPointLocator_t qt_meta_stringdata_QgsPointLocator = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsPointLocator"
QT_MOC_LITERAL(1, 16, 12), // "destroyIndex"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "onFeatureAdded"
QT_MOC_LITERAL(4, 45, 12), // "QgsFeatureId"
QT_MOC_LITERAL(5, 58, 3), // "fid"
QT_MOC_LITERAL(6, 62, 16), // "onFeatureDeleted"
QT_MOC_LITERAL(7, 79, 17), // "onGeometryChanged"
QT_MOC_LITERAL(8, 97, 11), // "QgsGeometry"
QT_MOC_LITERAL(9, 109, 4), // "geom"
QT_MOC_LITERAL(10, 114, 23), // "onAttributeValueChanged"
QT_MOC_LITERAL(11, 138, 3), // "idx"
QT_MOC_LITERAL(12, 142, 5) // "value"

    },
    "QgsPointLocator\0destroyIndex\0\0"
    "onFeatureAdded\0QgsFeatureId\0fid\0"
    "onFeatureDeleted\0onGeometryChanged\0"
    "QgsGeometry\0geom\0onAttributeValueChanged\0"
    "idx\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPointLocator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,
       7,    2,   46,    2, 0x08 /* Private */,
      10,    3,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 8,    5,    9,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::QVariant,    5,   11,   12,

       0        // eod
};

void QgsPointLocator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPointLocator *_t = static_cast<QgsPointLocator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->destroyIndex(); break;
        case 1: _t->onFeatureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 2: _t->onFeatureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 3: _t->onGeometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< const QgsGeometry(*)>(_a[2]))); break;
        case 4: _t->onAttributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsPointLocator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsPointLocator.data,
      qt_meta_data_QgsPointLocator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPointLocator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPointLocator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPointLocator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsPointLocator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
