/****************************************************************************
** Meta object code from reading C++ file 'qgspostgresdataitems.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgspostgresdataitems.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspostgresdataitems.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPGRootItem_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPGRootItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPGRootItem_t qt_meta_stringdata_QgsPGRootItem = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsPGRootItem"
QT_MOC_LITERAL(1, 14, 20), // "onConnectionsChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13) // "newConnection"

    },
    "QgsPGRootItem\0onConnectionsChanged\0\0"
    "newConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPGRootItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsPGRootItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPGRootItem *_t = static_cast<QgsPGRootItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnectionsChanged(); break;
        case 1: _t->newConnection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsPGRootItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsPGRootItem.data,
      qt_meta_data_QgsPGRootItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPGRootItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPGRootItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPGRootItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsPGRootItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsPGConnectionItem_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPGConnectionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPGConnectionItem_t qt_meta_stringdata_QgsPGConnectionItem = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsPGConnectionItem"
QT_MOC_LITERAL(1, 20, 17), // "addGeometryColumn"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 24), // "QgsPostgresLayerProperty"
QT_MOC_LITERAL(4, 64, 14), // "editConnection"
QT_MOC_LITERAL(5, 79, 16), // "deleteConnection"
QT_MOC_LITERAL(6, 96, 17), // "refreshConnection"
QT_MOC_LITERAL(7, 114, 12), // "createSchema"
QT_MOC_LITERAL(8, 127, 13), // "refreshSchema"
QT_MOC_LITERAL(9, 141, 6) // "schema"

    },
    "QgsPGConnectionItem\0addGeometryColumn\0"
    "\0QgsPostgresLayerProperty\0editConnection\0"
    "deleteConnection\0refreshConnection\0"
    "createSchema\0refreshSchema\0schema"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPGConnectionItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void QgsPGConnectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPGConnectionItem *_t = static_cast<QgsPGConnectionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addGeometryColumn((*reinterpret_cast< const QgsPostgresLayerProperty(*)>(_a[1]))); break;
        case 1: _t->editConnection(); break;
        case 2: _t->deleteConnection(); break;
        case 3: _t->refreshConnection(); break;
        case 4: _t->createSchema(); break;
        case 5: _t->refreshSchema((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsPGConnectionItem::*_t)(const QgsPostgresLayerProperty & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPGConnectionItem::addGeometryColumn)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsPGConnectionItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsPGConnectionItem.data,
      qt_meta_data_QgsPGConnectionItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPGConnectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPGConnectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPGConnectionItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsPGConnectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QgsPGConnectionItem::addGeometryColumn(const QgsPostgresLayerProperty & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsPGSchemaItem_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPGSchemaItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPGSchemaItem_t qt_meta_stringdata_QgsPGSchemaItem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsPGSchemaItem"
QT_MOC_LITERAL(1, 16, 12), // "deleteSchema"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12) // "renameSchema"

    },
    "QgsPGSchemaItem\0deleteSchema\0\0"
    "renameSchema"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPGSchemaItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsPGSchemaItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPGSchemaItem *_t = static_cast<QgsPGSchemaItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteSchema(); break;
        case 1: _t->renameSchema(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsPGSchemaItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsPGSchemaItem.data,
      qt_meta_data_QgsPGSchemaItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPGSchemaItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPGSchemaItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPGSchemaItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsPGSchemaItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsPGLayerItem_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPGLayerItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPGLayerItem_t qt_meta_stringdata_QgsPGLayerItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsPGLayerItem"
QT_MOC_LITERAL(1, 15, 11), // "deleteLayer"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "renameLayer"
QT_MOC_LITERAL(4, 40, 13), // "truncateTable"
QT_MOC_LITERAL(5, 54, 23) // "refreshMaterializedView"

    },
    "QgsPGLayerItem\0deleteLayer\0\0renameLayer\0"
    "truncateTable\0refreshMaterializedView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPGLayerItem[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsPGLayerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPGLayerItem *_t = static_cast<QgsPGLayerItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->deleteLayer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->renameLayer(); break;
        case 2: _t->truncateTable(); break;
        case 3: _t->refreshMaterializedView(); break;
        default: ;
        }
    }
}

const QMetaObject QgsPGLayerItem::staticMetaObject = {
    { &QgsLayerItem::staticMetaObject, qt_meta_stringdata_QgsPGLayerItem.data,
      qt_meta_data_QgsPGLayerItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPGLayerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPGLayerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPGLayerItem.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerItem::qt_metacast(_clname);
}

int QgsPGLayerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
