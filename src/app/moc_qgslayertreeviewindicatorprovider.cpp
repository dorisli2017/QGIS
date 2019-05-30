/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreeviewindicatorprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayertreeviewindicatorprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreeviewindicatorprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayerTreeViewIndicatorProvider_t {
    QByteArrayData data[12];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeViewIndicatorProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeViewIndicatorProvider_t qt_meta_stringdata_QgsLayerTreeViewIndicatorProvider = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QgsLayerTreeViewIndicatorProv..."
QT_MOC_LITERAL(1, 34, 18), // "onIndicatorClicked"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 5), // "index"
QT_MOC_LITERAL(4, 60, 15), // "onAddedChildren"
QT_MOC_LITERAL(5, 76, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(6, 94, 4), // "node"
QT_MOC_LITERAL(7, 99, 9), // "indexFrom"
QT_MOC_LITERAL(8, 109, 7), // "indexTo"
QT_MOC_LITERAL(9, 117, 20), // "onWillRemoveChildren"
QT_MOC_LITERAL(10, 138, 13), // "onLayerLoaded"
QT_MOC_LITERAL(11, 152, 14) // "onLayerChanged"

    },
    "QgsLayerTreeViewIndicatorProvider\0"
    "onIndicatorClicked\0\0index\0onAddedChildren\0"
    "QgsLayerTreeNode*\0node\0indexFrom\0"
    "indexTo\0onWillRemoveChildren\0onLayerLoaded\0"
    "onLayerChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeViewIndicatorProvider[] = {

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
       1,    1,   39,    2, 0x09 /* Protected */,
       4,    3,   42,    2, 0x09 /* Protected */,
       9,    3,   49,    2, 0x09 /* Protected */,
      10,    0,   56,    2, 0x09 /* Protected */,
      11,    0,   57,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayerTreeViewIndicatorProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeViewIndicatorProvider *_t = static_cast<QgsLayerTreeViewIndicatorProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onIndicatorClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onAddedChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->onWillRemoveChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->onLayerLoaded(); break;
        case 4: _t->onLayerChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QgsLayerTreeViewIndicatorProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayerTreeViewIndicatorProvider.data,
      qt_meta_data_QgsLayerTreeViewIndicatorProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerTreeViewIndicatorProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeViewIndicatorProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeViewIndicatorProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsLayerTreeViewIndicatorProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
