/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmaplayermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapLayerModel_t {
    QByteArrayData data[16];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapLayerModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapLayerModel_t qt_meta_stringdata_QgsMapLayerModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsMapLayerModel"
QT_MOC_LITERAL(1, 17, 12), // "removeLayers"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "layerIds"
QT_MOC_LITERAL(4, 40, 9), // "addLayers"
QT_MOC_LITERAL(5, 50, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(6, 70, 6), // "layers"
QT_MOC_LITERAL(7, 77, 15), // "allowEmptyLayer"
QT_MOC_LITERAL(8, 93, 7), // "showCrs"
QT_MOC_LITERAL(9, 101, 14), // "itemsCheckable"
QT_MOC_LITERAL(10, 116, 15), // "additionalItems"
QT_MOC_LITERAL(11, 132, 12), // "ItemDataRole"
QT_MOC_LITERAL(12, 145, 11), // "LayerIdRole"
QT_MOC_LITERAL(13, 157, 9), // "LayerRole"
QT_MOC_LITERAL(14, 167, 9), // "EmptyRole"
QT_MOC_LITERAL(15, 177, 14) // "AdditionalRole"

    },
    "QgsMapLayerModel\0removeLayers\0\0layerIds\0"
    "addLayers\0QList<QgsMapLayer*>\0layers\0"
    "allowEmptyLayer\0showCrs\0itemsCheckable\0"
    "additionalItems\0ItemDataRole\0LayerIdRole\0"
    "LayerRole\0EmptyRole\0AdditionalRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapLayerModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   30, // properties
       1,   42, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       4,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::QStringList, 0x00095103,

 // enums: name, flags, count, data
      11, 0x0,    4,   46,

 // enum data: key, value
      12, uint(QgsMapLayerModel::LayerIdRole),
      13, uint(QgsMapLayerModel::LayerRole),
      14, uint(QgsMapLayerModel::EmptyRole),
      15, uint(QgsMapLayerModel::AdditionalRole),

       0        // eod
};

void QgsMapLayerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapLayerModel *_t = static_cast<QgsMapLayerModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeLayers((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->addLayers((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsMapLayerModel *_t = static_cast<QgsMapLayerModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->allowEmptyLayer(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showCrs(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->itemsCheckable(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->additionalItems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsMapLayerModel *_t = static_cast<QgsMapLayerModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAllowEmptyLayer(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShowCrs(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setItemsCheckable(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setAdditionalItems(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsMapLayerModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsMapLayerModel.data,
      qt_meta_data_QgsMapLayerModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapLayerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapLayerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayerModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsMapLayerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
