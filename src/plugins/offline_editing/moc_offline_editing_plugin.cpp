/****************************************************************************
** Meta object code from reading C++ file 'offline_editing_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "offline_editing_plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'offline_editing_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsOfflineEditingPlugin_t {
    QByteArrayData data[19];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsOfflineEditingPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsOfflineEditingPlugin_t qt_meta_stringdata_QgsOfflineEditingPlugin = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsOfflineEditingPlugin"
QT_MOC_LITERAL(1, 24, 7), // "initGui"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "convertProject"
QT_MOC_LITERAL(4, 48, 11), // "synchronize"
QT_MOC_LITERAL(5, 60, 6), // "unload"
QT_MOC_LITERAL(6, 67, 4), // "help"
QT_MOC_LITERAL(7, 72, 13), // "updateActions"
QT_MOC_LITERAL(8, 86, 12), // "showProgress"
QT_MOC_LITERAL(9, 99, 16), // "setLayerProgress"
QT_MOC_LITERAL(10, 116, 5), // "layer"
QT_MOC_LITERAL(11, 122, 9), // "numLayers"
QT_MOC_LITERAL(12, 132, 15), // "setProgressMode"
QT_MOC_LITERAL(13, 148, 31), // "QgsOfflineEditing::ProgressMode"
QT_MOC_LITERAL(14, 180, 4), // "mode"
QT_MOC_LITERAL(15, 185, 7), // "maximum"
QT_MOC_LITERAL(16, 193, 14), // "updateProgress"
QT_MOC_LITERAL(17, 208, 8), // "progress"
QT_MOC_LITERAL(18, 217, 12) // "hideProgress"

    },
    "QgsOfflineEditingPlugin\0initGui\0\0"
    "convertProject\0synchronize\0unload\0"
    "help\0updateActions\0showProgress\0"
    "setLayerProgress\0layer\0numLayers\0"
    "setProgressMode\0QgsOfflineEditing::ProgressMode\0"
    "mode\0maximum\0updateProgress\0progress\0"
    "hideProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsOfflineEditingPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    2,   76,    2, 0x08 /* Private */,
      12,    2,   81,    2, 0x08 /* Private */,
      16,    1,   86,    2, 0x08 /* Private */,
      18,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,

       0        // eod
};

void QgsOfflineEditingPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsOfflineEditingPlugin *_t = static_cast<QgsOfflineEditingPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initGui(); break;
        case 1: _t->convertProject(); break;
        case 2: _t->synchronize(); break;
        case 3: _t->unload(); break;
        case 4: _t->help(); break;
        case 5: _t->updateActions(); break;
        case 6: _t->showProgress(); break;
        case 7: _t->setLayerProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->setProgressMode((*reinterpret_cast< QgsOfflineEditing::ProgressMode(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->hideProgress(); break;
        default: ;
        }
    }
}

const QMetaObject QgsOfflineEditingPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsOfflineEditingPlugin.data,
      qt_meta_data_QgsOfflineEditingPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsOfflineEditingPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsOfflineEditingPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsOfflineEditingPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgisPlugin"))
        return static_cast< QgisPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsOfflineEditingPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
