/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutitemlegend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutitemlegend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutitemlegend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLegendModel_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLegendModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLegendModel_t qt_meta_stringdata_QgsLegendModel = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QgsLegendModel"

    },
    "QgsLegendModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLegendModel[] = {

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

void QgsLegendModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsLegendModel::staticMetaObject = {
    { &QgsLayerTreeModel::staticMetaObject, qt_meta_stringdata_QgsLegendModel.data,
      qt_meta_data_QgsLegendModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLegendModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLegendModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLegendModel.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerTreeModel::qt_metacast(_clname);
}

int QgsLegendModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsLayoutItemLegend_t {
    QByteArrayData data[15];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutItemLegend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutItemLegend_t qt_meta_stringdata_QgsLayoutItemLegend = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsLayoutItemLegend"
QT_MOC_LITERAL(1, 20, 7), // "refresh"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(4, 56, 36), // "QgsLayoutObject::DataDefinedP..."
QT_MOC_LITERAL(5, 93, 8), // "property"
QT_MOC_LITERAL(6, 102, 20), // "invalidateCurrentMap"
QT_MOC_LITERAL(7, 123, 26), // "updateFilterByMapAndRedraw"
QT_MOC_LITERAL(8, 150, 29), // "mapLayerStyleOverridesChanged"
QT_MOC_LITERAL(9, 180, 12), // "onAtlasEnded"
QT_MOC_LITERAL(10, 193, 14), // "onAtlasFeature"
QT_MOC_LITERAL(11, 208, 25), // "nodeCustomPropertyChanged"
QT_MOC_LITERAL(12, 234, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(13, 252, 4), // "node"
QT_MOC_LITERAL(14, 257, 3) // "key"

    },
    "QgsLayoutItemLegend\0refresh\0\0"
    "refreshDataDefinedProperty\0"
    "QgsLayoutObject::DataDefinedProperty\0"
    "property\0invalidateCurrentMap\0"
    "updateFilterByMapAndRedraw\0"
    "mapLayerStyleOverridesChanged\0"
    "onAtlasEnded\0onAtlasFeature\0"
    "nodeCustomPropertyChanged\0QgsLayerTreeNode*\0"
    "node\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutItemLegend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    1,   60,    2, 0x0a /* Public */,
       3,    0,   63,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    2,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,   13,   14,

       0        // eod
};

void QgsLayoutItemLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutItemLegend *_t = static_cast<QgsLayoutItemLegend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->refreshDataDefinedProperty((*reinterpret_cast< QgsLayoutObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 2: _t->refreshDataDefinedProperty(); break;
        case 3: _t->invalidateCurrentMap(); break;
        case 4: _t->updateFilterByMapAndRedraw(); break;
        case 5: _t->mapLayerStyleOverridesChanged(); break;
        case 6: _t->onAtlasEnded(); break;
        case 7: _t->onAtlasFeature(); break;
        case 8: _t->nodeCustomPropertyChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsLayoutItemLegend::staticMetaObject = {
    { &QgsLayoutItem::staticMetaObject, qt_meta_stringdata_QgsLayoutItemLegend.data,
      qt_meta_data_QgsLayoutItemLegend,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutItemLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutItemLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutItemLegend.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItem::qt_metacast(_clname);
}

int QgsLayoutItemLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
