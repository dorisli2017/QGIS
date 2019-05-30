/****************************************************************************
** Meta object code from reading C++ file 'qgsamsprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsamsprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsamsprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAmsLegendFetcher_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAmsLegendFetcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAmsLegendFetcher_t qt_meta_stringdata_QgsAmsLegendFetcher = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsAmsLegendFetcher"
QT_MOC_LITERAL(1, 20, 14), // "handleFinished"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "handleError"
QT_MOC_LITERAL(4, 48, 10), // "errorTitle"
QT_MOC_LITERAL(5, 59, 8) // "errorMsg"

    },
    "QgsAmsLegendFetcher\0handleFinished\0\0"
    "handleError\0errorTitle\0errorMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAmsLegendFetcher[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,

       0        // eod
};

void QgsAmsLegendFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAmsLegendFetcher *_t = static_cast<QgsAmsLegendFetcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleFinished(); break;
        case 1: _t->handleError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsAmsLegendFetcher::staticMetaObject = {
    { &QgsImageFetcher::staticMetaObject, qt_meta_stringdata_QgsAmsLegendFetcher.data,
      qt_meta_data_QgsAmsLegendFetcher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAmsLegendFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAmsLegendFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAmsLegendFetcher.stringdata0))
        return static_cast<void*>(this);
    return QgsImageFetcher::qt_metacast(_clname);
}

int QgsAmsLegendFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsImageFetcher::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsAmsProvider_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAmsProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAmsProvider_t qt_meta_stringdata_QgsAmsProvider = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QgsAmsProvider"

    },
    "QgsAmsProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAmsProvider[] = {

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

void QgsAmsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsAmsProvider::staticMetaObject = {
    { &QgsRasterDataProvider::staticMetaObject, qt_meta_stringdata_QgsAmsProvider.data,
      qt_meta_data_QgsAmsProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAmsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAmsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAmsProvider.stringdata0))
        return static_cast<void*>(this);
    return QgsRasterDataProvider::qt_metacast(_clname);
}

int QgsAmsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRasterDataProvider::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
