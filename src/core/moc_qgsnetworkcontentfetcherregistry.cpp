/****************************************************************************
** Meta object code from reading C++ file 'qgsnetworkcontentfetcherregistry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsnetworkcontentfetcherregistry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsnetworkcontentfetcherregistry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFetchedContent_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFetchedContent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFetchedContent_t qt_meta_stringdata_QgsFetchedContent = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsFetchedContent"
QT_MOC_LITERAL(1, 18, 7), // "fetched"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "download"
QT_MOC_LITERAL(4, 36, 10), // "redownload"
QT_MOC_LITERAL(5, 47, 6), // "cancel"
QT_MOC_LITERAL(6, 54, 13) // "taskCompleted"

    },
    "QgsFetchedContent\0fetched\0\0download\0"
    "redownload\0cancel\0taskCompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFetchedContent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       3,    0,   43,    2, 0x2a /* Public | MethodCloned */,
       5,    0,   44,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsFetchedContent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFetchedContent *_t = static_cast<QgsFetchedContent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fetched(); break;
        case 1: _t->download((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->download(); break;
        case 3: _t->cancel(); break;
        case 4: _t->taskCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsFetchedContent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFetchedContent::fetched)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsFetchedContent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsFetchedContent.data,
      qt_meta_data_QgsFetchedContent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFetchedContent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFetchedContent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFetchedContent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsFetchedContent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsFetchedContent::fetched()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsNetworkContentFetcherRegistry_t {
    QByteArrayData data[4];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsNetworkContentFetcherRegistry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsNetworkContentFetcherRegistry_t qt_meta_stringdata_QgsNetworkContentFetcherRegistry = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsNetworkContentFetcherRegistry"
QT_MOC_LITERAL(1, 33, 12), // "FetchingMode"
QT_MOC_LITERAL(2, 46, 13), // "DownloadLater"
QT_MOC_LITERAL(3, 60, 19) // "DownloadImmediately"

    },
    "QgsNetworkContentFetcherRegistry\0"
    "FetchingMode\0DownloadLater\0"
    "DownloadImmediately"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsNetworkContentFetcherRegistry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   18,

 // enum data: key, value
       2, uint(QgsNetworkContentFetcherRegistry::DownloadLater),
       3, uint(QgsNetworkContentFetcherRegistry::DownloadImmediately),

       0        // eod
};

void QgsNetworkContentFetcherRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsNetworkContentFetcherRegistry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsNetworkContentFetcherRegistry.data,
      qt_meta_data_QgsNetworkContentFetcherRegistry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsNetworkContentFetcherRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsNetworkContentFetcherRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsNetworkContentFetcherRegistry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsNetworkContentFetcherRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
