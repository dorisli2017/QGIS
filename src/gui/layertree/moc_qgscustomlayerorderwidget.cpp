/****************************************************************************
** Meta object code from reading C++ file 'qgscustomlayerorderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgscustomlayerorderwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscustomlayerorderwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCustomLayerOrderWidget_t {
    QByteArrayData data[9];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCustomLayerOrderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCustomLayerOrderWidget_t qt_meta_stringdata_QgsCustomLayerOrderWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsCustomLayerOrderWidget"
QT_MOC_LITERAL(1, 26, 32), // "bridgeHasCustomLayerOrderChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 5), // "state"
QT_MOC_LITERAL(4, 66, 29), // "bridgeCustomLayerOrderChanged"
QT_MOC_LITERAL(5, 96, 21), // "nodeVisibilityChanged"
QT_MOC_LITERAL(6, 118, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(7, 136, 4), // "node"
QT_MOC_LITERAL(8, 141, 12) // "modelUpdated"

    },
    "QgsCustomLayerOrderWidget\0"
    "bridgeHasCustomLayerOrderChanged\0\0"
    "state\0bridgeCustomLayerOrderChanged\0"
    "nodeVisibilityChanged\0QgsLayerTreeNode*\0"
    "node\0modelUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCustomLayerOrderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void QgsCustomLayerOrderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCustomLayerOrderWidget *_t = static_cast<QgsCustomLayerOrderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bridgeHasCustomLayerOrderChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->bridgeCustomLayerOrderChanged(); break;
        case 2: _t->nodeVisibilityChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1]))); break;
        case 3: _t->modelUpdated(); break;
        default: ;
        }
    }
}

const QMetaObject QgsCustomLayerOrderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsCustomLayerOrderWidget.data,
      qt_meta_data_QgsCustomLayerOrderWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCustomLayerOrderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCustomLayerOrderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCustomLayerOrderWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsCustomLayerOrderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_CustomLayerOrderModel_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomLayerOrderModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomLayerOrderModel_t qt_meta_stringdata_CustomLayerOrderModel = {
    {
QT_MOC_LITERAL(0, 0, 21) // "CustomLayerOrderModel"

    },
    "CustomLayerOrderModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomLayerOrderModel[] = {

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

void CustomLayerOrderModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CustomLayerOrderModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_CustomLayerOrderModel.data,
      qt_meta_data_CustomLayerOrderModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CustomLayerOrderModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomLayerOrderModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomLayerOrderModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int CustomLayerOrderModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
