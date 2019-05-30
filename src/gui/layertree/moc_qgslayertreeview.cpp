/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayertreeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayerTreeView_t {
    QByteArrayData data[23];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeView_t qt_meta_stringdata_QgsLayerTreeView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsLayerTreeView"
QT_MOC_LITERAL(1, 17, 19), // "currentLayerChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(4, 51, 5), // "layer"
QT_MOC_LITERAL(5, 57, 21), // "refreshLayerSymbology"
QT_MOC_LITERAL(6, 79, 7), // "layerId"
QT_MOC_LITERAL(7, 87, 14), // "expandAllNodes"
QT_MOC_LITERAL(8, 102, 16), // "collapseAllNodes"
QT_MOC_LITERAL(9, 119, 17), // "modelRowsInserted"
QT_MOC_LITERAL(10, 137, 5), // "index"
QT_MOC_LITERAL(11, 143, 5), // "start"
QT_MOC_LITERAL(12, 149, 3), // "end"
QT_MOC_LITERAL(13, 153, 16), // "modelRowsRemoved"
QT_MOC_LITERAL(14, 170, 25), // "updateExpandedStateToNode"
QT_MOC_LITERAL(15, 196, 16), // "onCurrentChanged"
QT_MOC_LITERAL(16, 213, 17), // "onExpandedChanged"
QT_MOC_LITERAL(17, 231, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(18, 249, 4), // "node"
QT_MOC_LITERAL(19, 254, 8), // "expanded"
QT_MOC_LITERAL(20, 263, 12), // "onModelReset"
QT_MOC_LITERAL(21, 276, 23), // "onCustomPropertyChanged"
QT_MOC_LITERAL(22, 300, 3) // "key"

    },
    "QgsLayerTreeView\0currentLayerChanged\0"
    "\0QgsMapLayer*\0layer\0refreshLayerSymbology\0"
    "layerId\0expandAllNodes\0collapseAllNodes\0"
    "modelRowsInserted\0index\0start\0end\0"
    "modelRowsRemoved\0updateExpandedStateToNode\0"
    "onCurrentChanged\0onExpandedChanged\0"
    "QgsLayerTreeNode*\0node\0expanded\0"
    "onModelReset\0onCustomPropertyChanged\0"
    "key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   72,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    3,   77,    2, 0x09 /* Protected */,
      13,    0,   84,    2, 0x09 /* Protected */,
      14,    1,   85,    2, 0x09 /* Protected */,
      15,    0,   88,    2, 0x09 /* Protected */,
      16,    2,   89,    2, 0x09 /* Protected */,
      20,    0,   94,    2, 0x09 /* Protected */,
      21,    2,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Bool,   18,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString,   18,   22,

       0        // eod
};

void QgsLayerTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeView *_t = static_cast<QgsLayerTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: _t->refreshLayerSymbology((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->expandAllNodes(); break;
        case 3: _t->collapseAllNodes(); break;
        case 4: _t->modelRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->modelRowsRemoved(); break;
        case 6: _t->updateExpandedStateToNode((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->onCurrentChanged(); break;
        case 8: _t->onExpandedChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->onModelReset(); break;
        case 10: _t->onCustomPropertyChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayerTreeView::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeView::currentLayerChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsLayerTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QgsLayerTreeView.data,
      qt_meta_data_QgsLayerTreeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QgsLayerTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QgsLayerTreeView::currentLayerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
