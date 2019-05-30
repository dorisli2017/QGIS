/****************************************************************************
** Meta object code from reading C++ file 'qgsnetworkdiskcache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsnetworkdiskcache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsnetworkdiskcache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExpirableNetworkDiskCache_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExpirableNetworkDiskCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExpirableNetworkDiskCache_t qt_meta_stringdata_ExpirableNetworkDiskCache = {
    {
QT_MOC_LITERAL(0, 0, 25) // "ExpirableNetworkDiskCache"

    },
    "ExpirableNetworkDiskCache"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExpirableNetworkDiskCache[] = {

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

void ExpirableNetworkDiskCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ExpirableNetworkDiskCache::staticMetaObject = {
    { &QNetworkDiskCache::staticMetaObject, qt_meta_stringdata_ExpirableNetworkDiskCache.data,
      qt_meta_data_ExpirableNetworkDiskCache,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ExpirableNetworkDiskCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExpirableNetworkDiskCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExpirableNetworkDiskCache.stringdata0))
        return static_cast<void*>(this);
    return QNetworkDiskCache::qt_metacast(_clname);
}

int ExpirableNetworkDiskCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkDiskCache::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsNetworkDiskCache_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsNetworkDiskCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsNetworkDiskCache_t qt_meta_stringdata_QgsNetworkDiskCache = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsNetworkDiskCache"
QT_MOC_LITERAL(1, 20, 5), // "clear"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "QgsNetworkDiskCache\0clear\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsNetworkDiskCache[] = {

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

void QgsNetworkDiskCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsNetworkDiskCache *_t = static_cast<QgsNetworkDiskCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsNetworkDiskCache::staticMetaObject = {
    { &QNetworkDiskCache::staticMetaObject, qt_meta_stringdata_QgsNetworkDiskCache.data,
      qt_meta_data_QgsNetworkDiskCache,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsNetworkDiskCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsNetworkDiskCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsNetworkDiskCache.stringdata0))
        return static_cast<void*>(this);
    return QNetworkDiskCache::qt_metacast(_clname);
}

int QgsNetworkDiskCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkDiskCache::qt_metacall(_c, _id, _a);
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
