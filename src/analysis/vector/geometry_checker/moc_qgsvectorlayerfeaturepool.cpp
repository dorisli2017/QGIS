/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayerfeaturepool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsvectorlayerfeaturepool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorlayerfeaturepool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVectorLayerFeaturePool_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorLayerFeaturePool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorLayerFeaturePool_t qt_meta_stringdata_QgsVectorLayerFeaturePool = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsVectorLayerFeaturePool"
QT_MOC_LITERAL(1, 26, 17), // "onGeometryChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 12), // "QgsFeatureId"
QT_MOC_LITERAL(4, 58, 3), // "fid"
QT_MOC_LITERAL(5, 62, 11), // "QgsGeometry"
QT_MOC_LITERAL(6, 74, 8), // "geometry"
QT_MOC_LITERAL(7, 83, 16) // "onFeatureDeleted"

    },
    "QgsVectorLayerFeaturePool\0onGeometryChanged\0"
    "\0QgsFeatureId\0fid\0QgsGeometry\0geometry\0"
    "onFeatureDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorLayerFeaturePool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08 /* Private */,
       7,    1,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QgsVectorLayerFeaturePool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorLayerFeaturePool *_t = static_cast<QgsVectorLayerFeaturePool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onGeometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< const QgsGeometry(*)>(_a[2]))); break;
        case 1: _t->onFeatureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsVectorLayerFeaturePool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsVectorLayerFeaturePool.data,
      qt_meta_data_QgsVectorLayerFeaturePool,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorLayerFeaturePool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorLayerFeaturePool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorLayerFeaturePool.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsFeaturePool"))
        return static_cast< QgsFeaturePool*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsVectorLayerFeaturePool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
