/****************************************************************************
** Meta object code from reading C++ file 'qgsmeshdatasetgrouptreeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmeshdatasetgrouptreeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmeshdatasetgrouptreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMeshDatasetGroupTreeModel_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshDatasetGroupTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshDatasetGroupTreeModel_t qt_meta_stringdata_QgsMeshDatasetGroupTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QgsMeshDatasetGroupTreeModel"

    },
    "QgsMeshDatasetGroupTreeModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshDatasetGroupTreeModel[] = {

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

void QgsMeshDatasetGroupTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsMeshDatasetGroupTreeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsMeshDatasetGroupTreeModel.data,
      qt_meta_data_QgsMeshDatasetGroupTreeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshDatasetGroupTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshDatasetGroupTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshDatasetGroupTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsMeshDatasetGroupTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsMeshDatasetGroupTreeView_t {
    QByteArrayData data[5];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshDatasetGroupTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshDatasetGroupTreeView_t qt_meta_stringdata_QgsMeshDatasetGroupTreeView = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsMeshDatasetGroupTreeView"
QT_MOC_LITERAL(1, 28, 24), // "activeScalarGroupChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 10), // "groupIndex"
QT_MOC_LITERAL(4, 65, 24) // "activeVectorGroupChanged"

    },
    "QgsMeshDatasetGroupTreeView\0"
    "activeScalarGroupChanged\0\0groupIndex\0"
    "activeVectorGroupChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshDatasetGroupTreeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QgsMeshDatasetGroupTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshDatasetGroupTreeView *_t = static_cast<QgsMeshDatasetGroupTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeScalarGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->activeVectorGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMeshDatasetGroupTreeView::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshDatasetGroupTreeView::activeScalarGroupChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsMeshDatasetGroupTreeView::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshDatasetGroupTreeView::activeVectorGroupChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsMeshDatasetGroupTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QgsMeshDatasetGroupTreeView.data,
      qt_meta_data_QgsMeshDatasetGroupTreeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshDatasetGroupTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshDatasetGroupTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshDatasetGroupTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QgsMeshDatasetGroupTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsMeshDatasetGroupTreeView::activeScalarGroupChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMeshDatasetGroupTreeView::activeVectorGroupChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
