/****************************************************************************
** Meta object code from reading C++ file 'offline_editing_plugin_gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "offline_editing_plugin_gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'offline_editing_plugin_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSelectLayerTreeModel_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSelectLayerTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSelectLayerTreeModel_t qt_meta_stringdata_QgsSelectLayerTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QgsSelectLayerTreeModel"

    },
    "QgsSelectLayerTreeModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSelectLayerTreeModel[] = {

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

void QgsSelectLayerTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsSelectLayerTreeModel::staticMetaObject = {
    { &QgsLayerTreeModel::staticMetaObject, qt_meta_stringdata_QgsSelectLayerTreeModel.data,
      qt_meta_data_QgsSelectLayerTreeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSelectLayerTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSelectLayerTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSelectLayerTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerTreeModel::qt_metacast(_clname);
}

int QgsSelectLayerTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsOfflineEditingPluginGui_t {
    QByteArrayData data[10];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsOfflineEditingPluginGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsOfflineEditingPluginGui_t qt_meta_stringdata_QgsOfflineEditingPluginGui = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsOfflineEditingPluginGui"
QT_MOC_LITERAL(1, 27, 9), // "selectAll"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "deSelectAll"
QT_MOC_LITERAL(4, 50, 15), // "datatypeChanged"
QT_MOC_LITERAL(5, 66, 5), // "index"
QT_MOC_LITERAL(6, 72, 21), // "mBrowseButton_clicked"
QT_MOC_LITERAL(7, 94, 18), // "buttonBox_accepted"
QT_MOC_LITERAL(8, 113, 18), // "buttonBox_rejected"
QT_MOC_LITERAL(9, 132, 8) // "showHelp"

    },
    "QgsOfflineEditingPluginGui\0selectAll\0"
    "\0deSelectAll\0datatypeChanged\0index\0"
    "mBrowseButton_clicked\0buttonBox_accepted\0"
    "buttonBox_rejected\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsOfflineEditingPluginGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsOfflineEditingPluginGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsOfflineEditingPluginGui *_t = static_cast<QgsOfflineEditingPluginGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectAll(); break;
        case 1: _t->deSelectAll(); break;
        case 2: _t->datatypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->mBrowseButton_clicked(); break;
        case 4: _t->buttonBox_accepted(); break;
        case 5: _t->buttonBox_rejected(); break;
        case 6: _t->showHelp(); break;
        default: ;
        }
    }
}

const QMetaObject QgsOfflineEditingPluginGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsOfflineEditingPluginGui.data,
      qt_meta_data_QgsOfflineEditingPluginGui,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsOfflineEditingPluginGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsOfflineEditingPluginGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsOfflineEditingPluginGui.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsOfflineEditingPluginGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
