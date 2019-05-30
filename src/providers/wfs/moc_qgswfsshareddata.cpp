/****************************************************************************
** Meta object code from reading C++ file 'qgswfsshareddata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgswfsshareddata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswfsshareddata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsWFSSharedData_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWFSSharedData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWFSSharedData_t qt_meta_stringdata_QgsWFSSharedData = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsWFSSharedData"
QT_MOC_LITERAL(1, 17, 10), // "raiseError"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "errorMsg"
QT_MOC_LITERAL(4, 38, 13) // "extentUpdated"

    },
    "QgsWFSSharedData\0raiseError\0\0errorMsg\0"
    "extentUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWFSSharedData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void QgsWFSSharedData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWFSSharedData *_t = static_cast<QgsWFSSharedData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->raiseError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->extentUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsWFSSharedData::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWFSSharedData::raiseError)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsWFSSharedData::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWFSSharedData::extentUpdated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsWFSSharedData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsWFSSharedData.data,
      qt_meta_data_QgsWFSSharedData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWFSSharedData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWFSSharedData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSSharedData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsWFSSharedData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QgsWFSSharedData::raiseError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsWFSSharedData::extentUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QgsWFSFeatureHitsRequest_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWFSFeatureHitsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWFSFeatureHitsRequest_t qt_meta_stringdata_QgsWFSFeatureHitsRequest = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QgsWFSFeatureHitsRequest"

    },
    "QgsWFSFeatureHitsRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWFSFeatureHitsRequest[] = {

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

void QgsWFSFeatureHitsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsWFSFeatureHitsRequest::staticMetaObject = {
    { &QgsWfsRequest::staticMetaObject, qt_meta_stringdata_QgsWFSFeatureHitsRequest.data,
      qt_meta_data_QgsWFSFeatureHitsRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWFSFeatureHitsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWFSFeatureHitsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSFeatureHitsRequest.stringdata0))
        return static_cast<void*>(this);
    return QgsWfsRequest::qt_metacast(_clname);
}

int QgsWFSFeatureHitsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsWfsRequest::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsWFSSingleFeatureRequest_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWFSSingleFeatureRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWFSSingleFeatureRequest_t qt_meta_stringdata_QgsWFSSingleFeatureRequest = {
    {
QT_MOC_LITERAL(0, 0, 26) // "QgsWFSSingleFeatureRequest"

    },
    "QgsWFSSingleFeatureRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWFSSingleFeatureRequest[] = {

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

void QgsWFSSingleFeatureRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsWFSSingleFeatureRequest::staticMetaObject = {
    { &QgsWfsRequest::staticMetaObject, qt_meta_stringdata_QgsWFSSingleFeatureRequest.data,
      qt_meta_data_QgsWFSSingleFeatureRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWFSSingleFeatureRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWFSSingleFeatureRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSSingleFeatureRequest.stringdata0))
        return static_cast<void*>(this);
    return QgsWfsRequest::qt_metacast(_clname);
}

int QgsWFSSingleFeatureRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsWfsRequest::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
