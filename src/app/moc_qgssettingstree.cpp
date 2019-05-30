/****************************************************************************
** Meta object code from reading C++ file 'qgssettingstree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgssettingstree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssettingstree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSettingsTree_t {
    QByteArrayData data[14];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSettingsTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSettingsTree_t qt_meta_stringdata_QgsSettingsTree = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsSettingsTree"
QT_MOC_LITERAL(1, 16, 14), // "setAutoRefresh"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "mAutoRefresh"
QT_MOC_LITERAL(4, 45, 12), // "maybeRefresh"
QT_MOC_LITERAL(5, 58, 7), // "refresh"
QT_MOC_LITERAL(6, 66, 13), // "updateSetting"
QT_MOC_LITERAL(7, 80, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 97, 4), // "item"
QT_MOC_LITERAL(9, 102, 15), // "showContextMenu"
QT_MOC_LITERAL(10, 118, 3), // "pos"
QT_MOC_LITERAL(11, 122, 4), // "Type"
QT_MOC_LITERAL(12, 127, 5), // "Group"
QT_MOC_LITERAL(13, 133, 7) // "Setting"

    },
    "QgsSettingsTree\0setAutoRefresh\0\0"
    "mAutoRefresh\0maybeRefresh\0refresh\0"
    "updateSetting\0QTreeWidgetItem*\0item\0"
    "showContextMenu\0pos\0Type\0Group\0Setting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSettingsTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QPoint,   10,

 // enums: name, flags, count, data
      11, 0x0,    2,   54,

 // enum data: key, value
      12, uint(QgsSettingsTree::Group),
      13, uint(QgsSettingsTree::Setting),

       0        // eod
};

void QgsSettingsTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSettingsTree *_t = static_cast<QgsSettingsTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAutoRefresh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->maybeRefresh(); break;
        case 2: _t->refresh(); break;
        case 3: _t->updateSetting((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->showContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsSettingsTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_QgsSettingsTree.data,
      qt_meta_data_QgsSettingsTree,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSettingsTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSettingsTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSettingsTree.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int QgsSettingsTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
