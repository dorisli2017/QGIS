/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayertreemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayerTreeModel_t {
    QByteArrayData data[21];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeModel_t qt_meta_stringdata_QgsLayerTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsLayerTreeModel"
QT_MOC_LITERAL(1, 18, 19), // "nodeWillAddChildren"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(4, 57, 4), // "node"
QT_MOC_LITERAL(5, 62, 9), // "indexFrom"
QT_MOC_LITERAL(6, 72, 7), // "indexTo"
QT_MOC_LITERAL(7, 80, 17), // "nodeAddedChildren"
QT_MOC_LITERAL(8, 98, 22), // "nodeWillRemoveChildren"
QT_MOC_LITERAL(9, 121, 19), // "nodeRemovedChildren"
QT_MOC_LITERAL(10, 141, 21), // "nodeVisibilityChanged"
QT_MOC_LITERAL(11, 163, 15), // "nodeNameChanged"
QT_MOC_LITERAL(12, 179, 4), // "name"
QT_MOC_LITERAL(13, 184, 25), // "nodeCustomPropertyChanged"
QT_MOC_LITERAL(14, 210, 3), // "key"
QT_MOC_LITERAL(15, 214, 15), // "nodeLayerLoaded"
QT_MOC_LITERAL(16, 230, 23), // "nodeLayerWillBeUnloaded"
QT_MOC_LITERAL(17, 254, 18), // "layerLegendChanged"
QT_MOC_LITERAL(18, 273, 16), // "layerNeedsUpdate"
QT_MOC_LITERAL(19, 290, 21), // "legendNodeDataChanged"
QT_MOC_LITERAL(20, 312, 28) // "invalidateLegendMapBasedData"

    },
    "QgsLayerTreeModel\0nodeWillAddChildren\0"
    "\0QgsLayerTreeNode*\0node\0indexFrom\0"
    "indexTo\0nodeAddedChildren\0"
    "nodeWillRemoveChildren\0nodeRemovedChildren\0"
    "nodeVisibilityChanged\0nodeNameChanged\0"
    "name\0nodeCustomPropertyChanged\0key\0"
    "nodeLayerLoaded\0nodeLayerWillBeUnloaded\0"
    "layerLegendChanged\0layerNeedsUpdate\0"
    "legendNodeDataChanged\0"
    "invalidateLegendMapBasedData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   79,    2, 0x09 /* Protected */,
       7,    3,   86,    2, 0x09 /* Protected */,
       8,    3,   93,    2, 0x09 /* Protected */,
       9,    0,  100,    2, 0x09 /* Protected */,
      10,    1,  101,    2, 0x09 /* Protected */,
      11,    2,  104,    2, 0x09 /* Protected */,
      13,    2,  109,    2, 0x09 /* Protected */,
      15,    0,  114,    2, 0x09 /* Protected */,
      16,    0,  115,    2, 0x09 /* Protected */,
      17,    0,  116,    2, 0x09 /* Protected */,
      18,    0,  117,    2, 0x09 /* Protected */,
      19,    0,  118,    2, 0x09 /* Protected */,
      20,    0,  119,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayerTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeModel *_t = static_cast<QgsLayerTreeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nodeWillAddChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->nodeAddedChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->nodeWillRemoveChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->nodeRemovedChildren(); break;
        case 4: _t->nodeVisibilityChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1]))); break;
        case 5: _t->nodeNameChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->nodeCustomPropertyChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->nodeLayerLoaded(); break;
        case 8: _t->nodeLayerWillBeUnloaded(); break;
        case 9: _t->layerLegendChanged(); break;
        case 10: _t->layerNeedsUpdate(); break;
        case 11: _t->legendNodeDataChanged(); break;
        case 12: _t->invalidateLegendMapBasedData(); break;
        default: ;
        }
    }
}

const QMetaObject QgsLayerTreeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsLayerTreeModel.data,
      qt_meta_data_QgsLayerTreeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsLayerTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_EmbeddedWidgetLegendNode_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmbeddedWidgetLegendNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmbeddedWidgetLegendNode_t qt_meta_stringdata_EmbeddedWidgetLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 24) // "EmbeddedWidgetLegendNode"

    },
    "EmbeddedWidgetLegendNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmbeddedWidgetLegendNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void EmbeddedWidgetLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject EmbeddedWidgetLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_EmbeddedWidgetLegendNode.data,
      qt_meta_data_EmbeddedWidgetLegendNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EmbeddedWidgetLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmbeddedWidgetLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EmbeddedWidgetLegendNode.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int EmbeddedWidgetLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
