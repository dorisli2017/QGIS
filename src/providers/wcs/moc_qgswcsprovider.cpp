/****************************************************************************
** Meta object code from reading C++ file 'qgswcsprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgswcsprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswcsprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsWcsProvider_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWcsProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWcsProvider_t qt_meta_stringdata_QgsWcsProvider = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QgsWcsProvider"

    },
    "QgsWcsProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWcsProvider[] = {

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

void QgsWcsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsWcsProvider::staticMetaObject = {
    { &QgsRasterDataProvider::staticMetaObject, qt_meta_stringdata_QgsWcsProvider.data,
      qt_meta_data_QgsWcsProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWcsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWcsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWcsProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsGdalProviderBase"))
        return static_cast< QgsGdalProviderBase*>(this);
    return QgsRasterDataProvider::qt_metacast(_clname);
}

int QgsWcsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRasterDataProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsWcsDownloadHandler_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWcsDownloadHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWcsDownloadHandler_t qt_meta_stringdata_QgsWcsDownloadHandler = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsWcsDownloadHandler"
QT_MOC_LITERAL(1, 22, 18), // "cacheReplyFinished"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 18), // "cacheReplyProgress"
QT_MOC_LITERAL(4, 61, 8) // "canceled"

    },
    "QgsWcsDownloadHandler\0cacheReplyFinished\0"
    "\0cacheReplyProgress\0canceled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWcsDownloadHandler[] = {

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
       4,    0,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void,

       0        // eod
};

void QgsWcsDownloadHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWcsDownloadHandler *_t = static_cast<QgsWcsDownloadHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cacheReplyFinished(); break;
        case 1: _t->cacheReplyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->canceled(); break;
        default: ;
        }
    }
}

const QMetaObject QgsWcsDownloadHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsWcsDownloadHandler.data,
      qt_meta_data_QgsWcsDownloadHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWcsDownloadHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWcsDownloadHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWcsDownloadHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsWcsDownloadHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
