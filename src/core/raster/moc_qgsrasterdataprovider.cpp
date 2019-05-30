/****************************************************************************
** Meta object code from reading C++ file 'qgsrasterdataprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsrasterdataprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrasterdataprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsImageFetcher_t {
    QByteArrayData data[9];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsImageFetcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsImageFetcher_t qt_meta_stringdata_QgsImageFetcher = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsImageFetcher"
QT_MOC_LITERAL(1, 16, 6), // "finish"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "legend"
QT_MOC_LITERAL(4, 31, 8), // "progress"
QT_MOC_LITERAL(5, 40, 8), // "received"
QT_MOC_LITERAL(6, 49, 5), // "total"
QT_MOC_LITERAL(7, 55, 5), // "error"
QT_MOC_LITERAL(8, 61, 3) // "msg"

    },
    "QgsImageFetcher\0finish\0\0legend\0progress\0"
    "received\0total\0error\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsImageFetcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,
       7,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void QgsImageFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsImageFetcher *_t = static_cast<QgsImageFetcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finish((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsImageFetcher::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsImageFetcher::finish)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsImageFetcher::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsImageFetcher::progress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsImageFetcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsImageFetcher::error)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsImageFetcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsImageFetcher.data,
      qt_meta_data_QgsImageFetcher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsImageFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsImageFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsImageFetcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsImageFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QgsImageFetcher::finish(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsImageFetcher::progress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsImageFetcher::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QgsRasterDataProvider_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRasterDataProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRasterDataProvider_t qt_meta_stringdata_QgsRasterDataProvider = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsRasterDataProvider"
QT_MOC_LITERAL(1, 22, 13), // "statusChanged"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "QgsRasterDataProvider\0statusChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRasterDataProvider[] = {

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
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void QgsRasterDataProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRasterDataProvider *_t = static_cast<QgsRasterDataProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsRasterDataProvider::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsRasterDataProvider::statusChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsRasterDataProvider::staticMetaObject = {
    { &QgsDataProvider::staticMetaObject, qt_meta_stringdata_QgsRasterDataProvider.data,
      qt_meta_data_QgsRasterDataProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRasterDataProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRasterDataProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterDataProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsRasterInterface"))
        return static_cast< QgsRasterInterface*>(this);
    return QgsDataProvider::qt_metacast(_clname);
}

int QgsRasterDataProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataProvider::qt_metacall(_c, _id, _a);
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
void QgsRasterDataProvider::statusChanged(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< QgsRasterDataProvider *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
