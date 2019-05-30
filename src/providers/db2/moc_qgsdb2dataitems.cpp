/****************************************************************************
** Meta object code from reading C++ file 'qgsdb2dataitems.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsdb2dataitems.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdb2dataitems.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDb2RootItem_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDb2RootItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDb2RootItem_t qt_meta_stringdata_QgsDb2RootItem = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QgsDb2RootItem"

    },
    "QgsDb2RootItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDb2RootItem[] = {

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

void QgsDb2RootItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDb2RootItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsDb2RootItem.data,
      qt_meta_data_QgsDb2RootItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDb2RootItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDb2RootItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDb2RootItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsDb2RootItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsDb2ConnectionItem_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDb2ConnectionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDb2ConnectionItem_t qt_meta_stringdata_QgsDb2ConnectionItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsDb2ConnectionItem"
QT_MOC_LITERAL(1, 21, 17), // "addGeometryColumn"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19) // "QgsDb2LayerProperty"

    },
    "QgsDb2ConnectionItem\0addGeometryColumn\0"
    "\0QgsDb2LayerProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDb2ConnectionItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void QgsDb2ConnectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDb2ConnectionItem *_t = static_cast<QgsDb2ConnectionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addGeometryColumn((*reinterpret_cast< QgsDb2LayerProperty(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsDb2ConnectionItem::*_t)(QgsDb2LayerProperty );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDb2ConnectionItem::addGeometryColumn)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsDb2ConnectionItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsDb2ConnectionItem.data,
      qt_meta_data_QgsDb2ConnectionItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDb2ConnectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDb2ConnectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDb2ConnectionItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsDb2ConnectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsDb2ConnectionItem::addGeometryColumn(QgsDb2LayerProperty _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsDb2SchemaItem_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDb2SchemaItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDb2SchemaItem_t qt_meta_stringdata_QgsDb2SchemaItem = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QgsDb2SchemaItem"

    },
    "QgsDb2SchemaItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDb2SchemaItem[] = {

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

void QgsDb2SchemaItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDb2SchemaItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsDb2SchemaItem.data,
      qt_meta_data_QgsDb2SchemaItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDb2SchemaItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDb2SchemaItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDb2SchemaItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsDb2SchemaItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsDb2LayerItem_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDb2LayerItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDb2LayerItem_t qt_meta_stringdata_QgsDb2LayerItem = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QgsDb2LayerItem"

    },
    "QgsDb2LayerItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDb2LayerItem[] = {

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

void QgsDb2LayerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDb2LayerItem::staticMetaObject = {
    { &QgsLayerItem::staticMetaObject, qt_meta_stringdata_QgsDb2LayerItem.data,
      qt_meta_data_QgsDb2LayerItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDb2LayerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDb2LayerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDb2LayerItem.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerItem::qt_metacast(_clname);
}

int QgsDb2LayerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
