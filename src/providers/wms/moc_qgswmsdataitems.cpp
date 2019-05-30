/****************************************************************************
** Meta object code from reading C++ file 'qgswmsdataitems.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgswmsdataitems.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswmsdataitems.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsWMSConnectionItem_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWMSConnectionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWMSConnectionItem_t qt_meta_stringdata_QgsWMSConnectionItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsWMSConnectionItem"
QT_MOC_LITERAL(1, 21, 11), // "deleteLater"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "QgsWMSConnectionItem\0deleteLater\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWMSConnectionItem[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsWMSConnectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWMSConnectionItem *_t = static_cast<QgsWMSConnectionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteLater(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsWMSConnectionItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsWMSConnectionItem.data,
      qt_meta_data_QgsWMSConnectionItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWMSConnectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWMSConnectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWMSConnectionItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsWMSConnectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QgsWMSLayerItem_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWMSLayerItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWMSLayerItem_t qt_meta_stringdata_QgsWMSLayerItem = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QgsWMSLayerItem"

    },
    "QgsWMSLayerItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWMSLayerItem[] = {

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

void QgsWMSLayerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsWMSLayerItem::staticMetaObject = {
    { &QgsLayerItem::staticMetaObject, qt_meta_stringdata_QgsWMSLayerItem.data,
      qt_meta_data_QgsWMSLayerItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWMSLayerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWMSLayerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWMSLayerItem.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerItem::qt_metacast(_clname);
}

int QgsWMSLayerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsWMTSLayerItem_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWMTSLayerItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWMTSLayerItem_t qt_meta_stringdata_QgsWMTSLayerItem = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QgsWMTSLayerItem"

    },
    "QgsWMTSLayerItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWMTSLayerItem[] = {

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

void QgsWMTSLayerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsWMTSLayerItem::staticMetaObject = {
    { &QgsLayerItem::staticMetaObject, qt_meta_stringdata_QgsWMTSLayerItem.data,
      qt_meta_data_QgsWMTSLayerItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWMTSLayerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWMTSLayerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWMTSLayerItem.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerItem::qt_metacast(_clname);
}

int QgsWMTSLayerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsWMSRootItem_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWMSRootItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWMSRootItem_t qt_meta_stringdata_QgsWMSRootItem = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QgsWMSRootItem"

    },
    "QgsWMSRootItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWMSRootItem[] = {

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

void QgsWMSRootItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsWMSRootItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsWMSRootItem.data,
      qt_meta_data_QgsWMSRootItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWMSRootItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWMSRootItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWMSRootItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsWMSRootItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsXyzTileRootItem_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsXyzTileRootItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsXyzTileRootItem_t qt_meta_stringdata_QgsXyzTileRootItem = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QgsXyzTileRootItem"

    },
    "QgsXyzTileRootItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsXyzTileRootItem[] = {

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

void QgsXyzTileRootItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsXyzTileRootItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsXyzTileRootItem.data,
      qt_meta_data_QgsXyzTileRootItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsXyzTileRootItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsXyzTileRootItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsXyzTileRootItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsXyzTileRootItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsXyzLayerItem_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsXyzLayerItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsXyzLayerItem_t qt_meta_stringdata_QgsXyzLayerItem = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QgsXyzLayerItem"

    },
    "QgsXyzLayerItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsXyzLayerItem[] = {

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

void QgsXyzLayerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsXyzLayerItem::staticMetaObject = {
    { &QgsLayerItem::staticMetaObject, qt_meta_stringdata_QgsXyzLayerItem.data,
      qt_meta_data_QgsXyzLayerItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsXyzLayerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsXyzLayerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsXyzLayerItem.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerItem::qt_metacast(_clname);
}

int QgsXyzLayerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
