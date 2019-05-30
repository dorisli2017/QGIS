/****************************************************************************
** Meta object code from reading C++ file 'qgsmssqldataitems.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmssqldataitems.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmssqldataitems.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMssqlRootItem_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMssqlRootItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMssqlRootItem_t qt_meta_stringdata_QgsMssqlRootItem = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QgsMssqlRootItem"

    },
    "QgsMssqlRootItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMssqlRootItem[] = {

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

void QgsMssqlRootItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsMssqlRootItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsMssqlRootItem.data,
      qt_meta_data_QgsMssqlRootItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMssqlRootItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMssqlRootItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMssqlRootItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsMssqlRootItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsMssqlConnectionItem_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMssqlConnectionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMssqlConnectionItem_t qt_meta_stringdata_QgsMssqlConnectionItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsMssqlConnectionItem"
QT_MOC_LITERAL(1, 23, 17), // "addGeometryColumn"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "QgsMssqlLayerProperty"
QT_MOC_LITERAL(4, 64, 12), // "setLayerType"
QT_MOC_LITERAL(5, 77, 13), // "layerProperty"
QT_MOC_LITERAL(6, 91, 7), // "refresh"
QT_MOC_LITERAL(7, 99, 14) // "setAsPopulated"

    },
    "QgsMssqlConnectionItem\0addGeometryColumn\0"
    "\0QgsMssqlLayerProperty\0setLayerType\0"
    "layerProperty\0refresh\0setAsPopulated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMssqlConnectionItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       6,    0,   40,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsMssqlConnectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMssqlConnectionItem *_t = static_cast<QgsMssqlConnectionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addGeometryColumn((*reinterpret_cast< const QgsMssqlLayerProperty(*)>(_a[1]))); break;
        case 1: _t->setLayerType((*reinterpret_cast< QgsMssqlLayerProperty(*)>(_a[1]))); break;
        case 2: _t->refresh(); break;
        case 3: _t->setAsPopulated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMssqlConnectionItem::*_t)(const QgsMssqlLayerProperty & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMssqlConnectionItem::addGeometryColumn)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsMssqlConnectionItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsMssqlConnectionItem.data,
      qt_meta_data_QgsMssqlConnectionItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMssqlConnectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMssqlConnectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMssqlConnectionItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsMssqlConnectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsMssqlConnectionItem::addGeometryColumn(const QgsMssqlLayerProperty & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsMssqlSchemaItem_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMssqlSchemaItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMssqlSchemaItem_t qt_meta_stringdata_QgsMssqlSchemaItem = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QgsMssqlSchemaItem"

    },
    "QgsMssqlSchemaItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMssqlSchemaItem[] = {

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

void QgsMssqlSchemaItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsMssqlSchemaItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsMssqlSchemaItem.data,
      qt_meta_data_QgsMssqlSchemaItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMssqlSchemaItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMssqlSchemaItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMssqlSchemaItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsMssqlSchemaItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsMssqlLayerItem_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMssqlLayerItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMssqlLayerItem_t qt_meta_stringdata_QgsMssqlLayerItem = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QgsMssqlLayerItem"

    },
    "QgsMssqlLayerItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMssqlLayerItem[] = {

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

void QgsMssqlLayerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsMssqlLayerItem::staticMetaObject = {
    { &QgsLayerItem::staticMetaObject, qt_meta_stringdata_QgsMssqlLayerItem.data,
      qt_meta_data_QgsMssqlLayerItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMssqlLayerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMssqlLayerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMssqlLayerItem.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerItem::qt_metacast(_clname);
}

int QgsMssqlLayerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
