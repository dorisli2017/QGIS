/****************************************************************************
** Meta object code from reading C++ file 'qgswmsprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgswmsprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswmsprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsWmsLegendDownloadHandler_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWmsLegendDownloadHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWmsLegendDownloadHandler_t qt_meta_stringdata_QgsWmsLegendDownloadHandler = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsWmsLegendDownloadHandler"
QT_MOC_LITERAL(1, 28, 7), // "errored"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(4, 65, 4), // "code"
QT_MOC_LITERAL(5, 70, 8), // "finished"
QT_MOC_LITERAL(6, 79, 10) // "progressed"

    },
    "QgsWmsLegendDownloadHandler\0errored\0"
    "\0QNetworkReply::NetworkError\0code\0"
    "finished\0progressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWmsLegendDownloadHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    0,   32,    2, 0x08 /* Private */,
       6,    2,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void QgsWmsLegendDownloadHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWmsLegendDownloadHandler *_t = static_cast<QgsWmsLegendDownloadHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errored((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->progressed((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsWmsLegendDownloadHandler::staticMetaObject = {
    { &QgsImageFetcher::staticMetaObject, qt_meta_stringdata_QgsWmsLegendDownloadHandler.data,
      qt_meta_data_QgsWmsLegendDownloadHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWmsLegendDownloadHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWmsLegendDownloadHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWmsLegendDownloadHandler.stringdata0))
        return static_cast<void*>(this);
    return QgsImageFetcher::qt_metacast(_clname);
}

int QgsWmsLegendDownloadHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsImageFetcher::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_QgsCachedImageFetcher_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCachedImageFetcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCachedImageFetcher_t qt_meta_stringdata_QgsCachedImageFetcher = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsCachedImageFetcher"
QT_MOC_LITERAL(1, 22, 4), // "send"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "QgsCachedImageFetcher\0send\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCachedImageFetcher[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsCachedImageFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCachedImageFetcher *_t = static_cast<QgsCachedImageFetcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsCachedImageFetcher::staticMetaObject = {
    { &QgsImageFetcher::staticMetaObject, qt_meta_stringdata_QgsCachedImageFetcher.data,
      qt_meta_data_QgsCachedImageFetcher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCachedImageFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCachedImageFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCachedImageFetcher.stringdata0))
        return static_cast<void*>(this);
    return QgsImageFetcher::qt_metacast(_clname);
}

int QgsCachedImageFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsImageFetcher::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsWmsProvider_t {
    QByteArrayData data[7];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWmsProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWmsProvider_t qt_meta_stringdata_QgsWmsProvider = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsWmsProvider"
QT_MOC_LITERAL(1, 15, 21), // "identifyReplyFinished"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 29), // "getLegendGraphicReplyFinished"
QT_MOC_LITERAL(4, 68, 28), // "getLegendGraphicReplyErrored"
QT_MOC_LITERAL(5, 97, 7), // "message"
QT_MOC_LITERAL(6, 105, 29) // "getLegendGraphicReplyProgress"

    },
    "QgsWmsProvider\0identifyReplyFinished\0"
    "\0getLegendGraphicReplyFinished\0"
    "getLegendGraphicReplyErrored\0message\0"
    "getLegendGraphicReplyProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWmsProvider[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       4,    1,   38,    2, 0x08 /* Private */,
       6,    2,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void QgsWmsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWmsProvider *_t = static_cast<QgsWmsProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->identifyReplyFinished(); break;
        case 1: _t->getLegendGraphicReplyFinished((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 2: _t->getLegendGraphicReplyErrored((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->getLegendGraphicReplyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsWmsProvider::staticMetaObject = {
    { &QgsRasterDataProvider::staticMetaObject, qt_meta_stringdata_QgsWmsProvider.data,
      qt_meta_data_QgsWmsProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWmsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWmsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWmsProvider.stringdata0))
        return static_cast<void*>(this);
    return QgsRasterDataProvider::qt_metacast(_clname);
}

int QgsWmsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRasterDataProvider::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsWmsImageDownloadHandler_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWmsImageDownloadHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWmsImageDownloadHandler_t qt_meta_stringdata_QgsWmsImageDownloadHandler = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsWmsImageDownloadHandler"
QT_MOC_LITERAL(1, 27, 18), // "cacheReplyFinished"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 18), // "cacheReplyProgress"
QT_MOC_LITERAL(4, 66, 13), // "bytesReceived"
QT_MOC_LITERAL(5, 80, 10), // "bytesTotal"
QT_MOC_LITERAL(6, 91, 8) // "canceled"

    },
    "QgsWmsImageDownloadHandler\0"
    "cacheReplyFinished\0\0cacheReplyProgress\0"
    "bytesReceived\0bytesTotal\0canceled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWmsImageDownloadHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    2,   30,    2, 0x09 /* Protected */,
       6,    0,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void,

       0        // eod
};

void QgsWmsImageDownloadHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWmsImageDownloadHandler *_t = static_cast<QgsWmsImageDownloadHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cacheReplyFinished(); break;
        case 1: _t->cacheReplyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->canceled(); break;
        default: ;
        }
    }
}

const QMetaObject QgsWmsImageDownloadHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsWmsImageDownloadHandler.data,
      qt_meta_data_QgsWmsImageDownloadHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWmsImageDownloadHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWmsImageDownloadHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWmsImageDownloadHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsWmsImageDownloadHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_QgsWmsTiledImageDownloadHandler_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWmsTiledImageDownloadHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWmsTiledImageDownloadHandler_t qt_meta_stringdata_QgsWmsTiledImageDownloadHandler = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsWmsTiledImageDownloadHandler"
QT_MOC_LITERAL(1, 32, 17), // "tileReplyFinished"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 8) // "canceled"

    },
    "QgsWmsTiledImageDownloadHandler\0"
    "tileReplyFinished\0\0canceled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWmsTiledImageDownloadHandler[] = {

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
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsWmsTiledImageDownloadHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWmsTiledImageDownloadHandler *_t = static_cast<QgsWmsTiledImageDownloadHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileReplyFinished(); break;
        case 1: _t->canceled(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsWmsTiledImageDownloadHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsWmsTiledImageDownloadHandler.data,
      qt_meta_data_QgsWmsTiledImageDownloadHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWmsTiledImageDownloadHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWmsTiledImageDownloadHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWmsTiledImageDownloadHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsWmsTiledImageDownloadHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
