/****************************************************************************
** Meta object code from reading C++ file 'qgsstylemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsstylemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsstylemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsStyleModel_t {
    QByteArrayData data[19];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStyleModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStyleModel_t qt_meta_stringdata_QgsStyleModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsStyleModel"
QT_MOC_LITERAL(1, 14, 13), // "onSymbolAdded"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "name"
QT_MOC_LITERAL(4, 34, 10), // "QgsSymbol*"
QT_MOC_LITERAL(5, 45, 6), // "symbol"
QT_MOC_LITERAL(6, 52, 15), // "onSymbolRemoved"
QT_MOC_LITERAL(7, 68, 15), // "onSymbolChanged"
QT_MOC_LITERAL(8, 84, 14), // "onSymbolRename"
QT_MOC_LITERAL(9, 99, 7), // "oldName"
QT_MOC_LITERAL(10, 107, 7), // "newName"
QT_MOC_LITERAL(11, 115, 11), // "onRampAdded"
QT_MOC_LITERAL(12, 127, 13), // "onRampRemoved"
QT_MOC_LITERAL(13, 141, 13), // "onRampChanged"
QT_MOC_LITERAL(14, 155, 12), // "onRampRename"
QT_MOC_LITERAL(15, 168, 13), // "onTagsChanged"
QT_MOC_LITERAL(16, 182, 6), // "entity"
QT_MOC_LITERAL(17, 189, 4), // "tags"
QT_MOC_LITERAL(18, 194, 18) // "rebuildSymbolIcons"

    },
    "QgsStyleModel\0onSymbolAdded\0\0name\0"
    "QgsSymbol*\0symbol\0onSymbolRemoved\0"
    "onSymbolChanged\0onSymbolRename\0oldName\0"
    "newName\0onRampAdded\0onRampRemoved\0"
    "onRampChanged\0onRampRename\0onTagsChanged\0"
    "entity\0tags\0rebuildSymbolIcons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStyleModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       7,    1,   72,    2, 0x08 /* Private */,
       8,    2,   75,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      14,    2,   89,    2, 0x08 /* Private */,
      15,    3,   94,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QStringList,   16,    3,   17,
    QMetaType::Void,

       0        // eod
};

void QgsStyleModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsStyleModel *_t = static_cast<QgsStyleModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSymbolAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsSymbol*(*)>(_a[2]))); break;
        case 1: _t->onSymbolRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onSymbolChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onSymbolRename((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->onRampAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onRampRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onRampChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onRampRename((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->onTagsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 9: _t->rebuildSymbolIcons(); break;
        default: ;
        }
    }
}

const QMetaObject QgsStyleModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsStyleModel.data,
      qt_meta_data_QgsStyleModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsStyleModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStyleModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStyleModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsStyleModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_QgsStyleProxyModel_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStyleProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStyleProxyModel_t qt_meta_stringdata_QgsStyleProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsStyleProxyModel"
QT_MOC_LITERAL(1, 19, 15), // "setFilterString"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6) // "filter"

    },
    "QgsStyleProxyModel\0setFilterString\0\0"
    "filter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStyleProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void QgsStyleProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsStyleProxyModel *_t = static_cast<QgsStyleProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFilterString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsStyleProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsStyleProxyModel.data,
      qt_meta_data_QgsStyleProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsStyleProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStyleProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStyleProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsStyleProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
