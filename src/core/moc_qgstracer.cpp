/****************************************************************************
** Meta object code from reading C++ file 'qgstracer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgstracer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstracer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTracer_t {
    QByteArrayData data[17];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTracer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTracer_t qt_meta_stringdata_QgsTracer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QgsTracer"
QT_MOC_LITERAL(1, 10, 15), // "invalidateGraph"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "onFeatureAdded"
QT_MOC_LITERAL(4, 42, 12), // "QgsFeatureId"
QT_MOC_LITERAL(5, 55, 3), // "fid"
QT_MOC_LITERAL(6, 59, 16), // "onFeatureDeleted"
QT_MOC_LITERAL(7, 76, 17), // "onGeometryChanged"
QT_MOC_LITERAL(8, 94, 11), // "QgsGeometry"
QT_MOC_LITERAL(9, 106, 4), // "geom"
QT_MOC_LITERAL(10, 111, 23), // "onAttributeValueChanged"
QT_MOC_LITERAL(11, 135, 3), // "idx"
QT_MOC_LITERAL(12, 139, 5), // "value"
QT_MOC_LITERAL(13, 145, 13), // "onDataChanged"
QT_MOC_LITERAL(14, 159, 14), // "onStyleChanged"
QT_MOC_LITERAL(15, 174, 16), // "onLayerDestroyed"
QT_MOC_LITERAL(16, 191, 3) // "obj"

    },
    "QgsTracer\0invalidateGraph\0\0onFeatureAdded\0"
    "QgsFeatureId\0fid\0onFeatureDeleted\0"
    "onGeometryChanged\0QgsGeometry\0geom\0"
    "onAttributeValueChanged\0idx\0value\0"
    "onDataChanged\0onStyleChanged\0"
    "onLayerDestroyed\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTracer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    1,   55,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       7,    2,   61,    2, 0x08 /* Private */,
      10,    3,   66,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,
      14,    0,   74,    2, 0x08 /* Private */,
      15,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 8,    5,    9,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::QVariant,    5,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   16,

       0        // eod
};

void QgsTracer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTracer *_t = static_cast<QgsTracer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidateGraph(); break;
        case 1: _t->onFeatureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 2: _t->onFeatureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 3: _t->onGeometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< const QgsGeometry(*)>(_a[2]))); break;
        case 4: _t->onAttributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 5: _t->onDataChanged(); break;
        case 6: _t->onStyleChanged(); break;
        case 7: _t->onLayerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsTracer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsTracer.data,
      qt_meta_data_QgsTracer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTracer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTracer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTracer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsTracer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
