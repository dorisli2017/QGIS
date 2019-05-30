/****************************************************************************
** Meta object code from reading C++ file 'qgsprojectlayergroupdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsprojectlayergroupdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprojectlayergroupdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsEmbeddedLayerTreeModel_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsEmbeddedLayerTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsEmbeddedLayerTreeModel_t qt_meta_stringdata_QgsEmbeddedLayerTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QgsEmbeddedLayerTreeModel"

    },
    "QgsEmbeddedLayerTreeModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsEmbeddedLayerTreeModel[] = {

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

void QgsEmbeddedLayerTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsEmbeddedLayerTreeModel::staticMetaObject = {
    { &QgsLayerTreeModel::staticMetaObject, qt_meta_stringdata_QgsEmbeddedLayerTreeModel.data,
      qt_meta_data_QgsEmbeddedLayerTreeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsEmbeddedLayerTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsEmbeddedLayerTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsEmbeddedLayerTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerTreeModel::qt_metacast(_clname);
}

int QgsEmbeddedLayerTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsProjectLayerGroupDialog_t {
    QByteArrayData data[5];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProjectLayerGroupDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProjectLayerGroupDialog_t qt_meta_stringdata_QgsProjectLayerGroupDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsProjectLayerGroupDialog"
QT_MOC_LITERAL(1, 27, 26), // "onTreeViewSelectionChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 19), // "mButtonBox_accepted"
QT_MOC_LITERAL(4, 75, 8) // "showHelp"

    },
    "QgsProjectLayerGroupDialog\0"
    "onTreeViewSelectionChanged\0\0"
    "mButtonBox_accepted\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProjectLayerGroupDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsProjectLayerGroupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProjectLayerGroupDialog *_t = static_cast<QgsProjectLayerGroupDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTreeViewSelectionChanged(); break;
        case 1: _t->mButtonBox_accepted(); break;
        case 2: _t->showHelp(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsProjectLayerGroupDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsProjectLayerGroupDialog.data,
      qt_meta_data_QgsProjectLayerGroupDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProjectLayerGroupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProjectLayerGroupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProjectLayerGroupDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsProjectLayerGroupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
