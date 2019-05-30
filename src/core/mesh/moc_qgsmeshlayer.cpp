/****************************************************************************
** Meta object code from reading C++ file 'qgsmeshlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmeshlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmeshlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMeshLayer_t {
    QByteArrayData data[12];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshLayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshLayer_t qt_meta_stringdata_QgsMeshLayer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QgsMeshLayer"
QT_MOC_LITERAL(1, 13, 26), // "activeScalarDatasetChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "QgsMeshDatasetIndex"
QT_MOC_LITERAL(4, 61, 5), // "index"
QT_MOC_LITERAL(5, 67, 26), // "activeVectorDatasetChanged"
QT_MOC_LITERAL(6, 94, 19), // "timeSettingsChanged"
QT_MOC_LITERAL(7, 114, 19), // "setTransformContext"
QT_MOC_LITERAL(8, 134, 29), // "QgsCoordinateTransformContext"
QT_MOC_LITERAL(9, 164, 16), // "transformContext"
QT_MOC_LITERAL(10, 181, 20), // "onDatasetGroupsAdded"
QT_MOC_LITERAL(11, 202, 5) // "count"

    },
    "QgsMeshLayer\0activeScalarDatasetChanged\0"
    "\0QgsMeshDatasetIndex\0index\0"
    "activeVectorDatasetChanged\0"
    "timeSettingsChanged\0setTransformContext\0"
    "QgsCoordinateTransformContext\0"
    "transformContext\0onDatasetGroupsAdded\0"
    "count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       6,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   46,    2, 0x0a /* Public */,
      10,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void QgsMeshLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshLayer *_t = static_cast<QgsMeshLayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeScalarDatasetChanged((*reinterpret_cast< const QgsMeshDatasetIndex(*)>(_a[1]))); break;
        case 1: _t->activeVectorDatasetChanged((*reinterpret_cast< const QgsMeshDatasetIndex(*)>(_a[1]))); break;
        case 2: _t->timeSettingsChanged(); break;
        case 3: _t->setTransformContext((*reinterpret_cast< const QgsCoordinateTransformContext(*)>(_a[1]))); break;
        case 4: _t->onDatasetGroupsAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMeshLayer::*_t)(const QgsMeshDatasetIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshLayer::activeScalarDatasetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsMeshLayer::*_t)(const QgsMeshDatasetIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshLayer::activeVectorDatasetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsMeshLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshLayer::timeSettingsChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsMeshLayer::staticMetaObject = {
    { &QgsMapLayer::staticMetaObject, qt_meta_stringdata_QgsMeshLayer.data,
      qt_meta_data_QgsMeshLayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshLayer.stringdata0))
        return static_cast<void*>(this);
    return QgsMapLayer::qt_metacast(_clname);
}

int QgsMeshLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayer::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsMeshLayer::activeScalarDatasetChanged(const QgsMeshDatasetIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMeshLayer::activeVectorDatasetChanged(const QgsMeshDatasetIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMeshLayer::timeSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
