/****************************************************************************
** Meta object code from reading C++ file 'qgswfsfeatureiterator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgswfsfeatureiterator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswfsfeatureiterator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsWFSFeatureHitsAsyncRequest_t {
    QByteArrayData data[4];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWFSFeatureHitsAsyncRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWFSFeatureHitsAsyncRequest_t qt_meta_stringdata_QgsWFSFeatureHitsAsyncRequest = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsWFSFeatureHitsAsyncRequest"
QT_MOC_LITERAL(1, 30, 15), // "gotHitsResponse"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17) // "hitsReplyFinished"

    },
    "QgsWFSFeatureHitsAsyncRequest\0"
    "gotHitsResponse\0\0hitsReplyFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWFSFeatureHitsAsyncRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsWFSFeatureHitsAsyncRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWFSFeatureHitsAsyncRequest *_t = static_cast<QgsWFSFeatureHitsAsyncRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotHitsResponse(); break;
        case 1: _t->hitsReplyFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsWFSFeatureHitsAsyncRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWFSFeatureHitsAsyncRequest::gotHitsResponse)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsWFSFeatureHitsAsyncRequest::staticMetaObject = {
    { &QgsWfsRequest::staticMetaObject, qt_meta_stringdata_QgsWFSFeatureHitsAsyncRequest.data,
      qt_meta_data_QgsWFSFeatureHitsAsyncRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWFSFeatureHitsAsyncRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWFSFeatureHitsAsyncRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSFeatureHitsAsyncRequest.stringdata0))
        return static_cast<void*>(this);
    return QgsWfsRequest::qt_metacast(_clname);
}

int QgsWFSFeatureHitsAsyncRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsWfsRequest::qt_metacall(_c, _id, _a);
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
void QgsWFSFeatureHitsAsyncRequest::gotHitsResponse()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsWFSProgressDialog_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWFSProgressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWFSProgressDialog_t qt_meta_stringdata_QgsWFSProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsWFSProgressDialog"
QT_MOC_LITERAL(1, 21, 11), // "hideRequest"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "QgsWFSProgressDialog\0hideRequest\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWFSProgressDialog[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QgsWFSProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWFSProgressDialog *_t = static_cast<QgsWFSProgressDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hideRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsWFSProgressDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWFSProgressDialog::hideRequest)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsWFSProgressDialog::staticMetaObject = {
    { &QProgressDialog::staticMetaObject, qt_meta_stringdata_QgsWFSProgressDialog.data,
      qt_meta_data_QgsWFSProgressDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWFSProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWFSProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSProgressDialog.stringdata0))
        return static_cast<void*>(this);
    return QProgressDialog::qt_metacast(_clname);
}

int QgsWFSProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
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
void QgsWFSProgressDialog::hideRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsWFSFeatureDownloader_t {
    QByteArrayData data[16];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWFSFeatureDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWFSFeatureDownloader_t qt_meta_stringdata_QgsWFSFeatureDownloader = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsWFSFeatureDownloader"
QT_MOC_LITERAL(1, 24, 15), // "featureReceived"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 31), // "QVector<QgsWFSFeatureGmlIdPair>"
QT_MOC_LITERAL(4, 73, 12), // "featureCount"
QT_MOC_LITERAL(5, 86, 13), // "endOfDownload"
QT_MOC_LITERAL(6, 100, 7), // "success"
QT_MOC_LITERAL(7, 108, 6), // "doStop"
QT_MOC_LITERAL(8, 115, 14), // "updateProgress"
QT_MOC_LITERAL(9, 130, 17), // "totalFeatureCount"
QT_MOC_LITERAL(10, 148, 4), // "stop"
QT_MOC_LITERAL(11, 153, 20), // "createProgressDialog"
QT_MOC_LITERAL(12, 174, 16), // "startHitsRequest"
QT_MOC_LITERAL(13, 191, 15), // "gotHitsResponse"
QT_MOC_LITERAL(14, 207, 11), // "setStopFlag"
QT_MOC_LITERAL(15, 219, 18) // "hideProgressDialog"

    },
    "QgsWFSFeatureDownloader\0featureReceived\0"
    "\0QVector<QgsWFSFeatureGmlIdPair>\0"
    "featureCount\0endOfDownload\0success\0"
    "doStop\0updateProgress\0totalFeatureCount\0"
    "stop\0createProgressDialog\0startHitsRequest\0"
    "gotHitsResponse\0setStopFlag\0"
    "hideProgressDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWFSFeatureDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       1,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,
       7,    0,   78,    2, 0x06 /* Public */,
       8,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsWFSFeatureDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWFSFeatureDownloader *_t = static_cast<QgsWFSFeatureDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->featureReceived((*reinterpret_cast< QVector<QgsWFSFeatureGmlIdPair>(*)>(_a[1]))); break;
        case 1: _t->featureReceived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->endOfDownload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->doStop(); break;
        case 4: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->stop(); break;
        case 6: _t->createProgressDialog(); break;
        case 7: _t->startHitsRequest(); break;
        case 8: _t->gotHitsResponse(); break;
        case 9: _t->setStopFlag(); break;
        case 10: _t->hideProgressDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsWFSFeatureDownloader::*_t)(QVector<QgsWFSFeatureGmlIdPair> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWFSFeatureDownloader::featureReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsWFSFeatureDownloader::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWFSFeatureDownloader::featureReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsWFSFeatureDownloader::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWFSFeatureDownloader::endOfDownload)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsWFSFeatureDownloader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWFSFeatureDownloader::doStop)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsWFSFeatureDownloader::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWFSFeatureDownloader::updateProgress)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QgsWFSFeatureDownloader::staticMetaObject = {
    { &QgsWfsRequest::staticMetaObject, qt_meta_stringdata_QgsWFSFeatureDownloader.data,
      qt_meta_data_QgsWFSFeatureDownloader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWFSFeatureDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWFSFeatureDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSFeatureDownloader.stringdata0))
        return static_cast<void*>(this);
    return QgsWfsRequest::qt_metacast(_clname);
}

int QgsWFSFeatureDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsWfsRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QgsWFSFeatureDownloader::featureReceived(QVector<QgsWFSFeatureGmlIdPair> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsWFSFeatureDownloader::featureReceived(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsWFSFeatureDownloader::endOfDownload(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsWFSFeatureDownloader::doStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QgsWFSFeatureDownloader::updateProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QgsWFSThreadedFeatureDownloader_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWFSThreadedFeatureDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWFSThreadedFeatureDownloader_t qt_meta_stringdata_QgsWFSThreadedFeatureDownloader = {
    {
QT_MOC_LITERAL(0, 0, 31) // "QgsWFSThreadedFeatureDownloader"

    },
    "QgsWFSThreadedFeatureDownloader"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWFSThreadedFeatureDownloader[] = {

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

void QgsWFSThreadedFeatureDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsWFSThreadedFeatureDownloader::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QgsWFSThreadedFeatureDownloader.data,
      qt_meta_data_QgsWFSThreadedFeatureDownloader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWFSThreadedFeatureDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWFSThreadedFeatureDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSThreadedFeatureDownloader.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QgsWFSThreadedFeatureDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsWFSFeatureIterator_t {
    QByteArrayData data[11];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWFSFeatureIterator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWFSFeatureIterator_t qt_meta_stringdata_QgsWFSFeatureIterator = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsWFSFeatureIterator"
QT_MOC_LITERAL(1, 22, 15), // "featureReceived"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "featureCount"
QT_MOC_LITERAL(4, 52, 26), // "featureReceivedSynchronous"
QT_MOC_LITERAL(5, 79, 31), // "QVector<QgsWFSFeatureGmlIdPair>"
QT_MOC_LITERAL(6, 111, 4), // "list"
QT_MOC_LITERAL(7, 116, 13), // "endOfDownload"
QT_MOC_LITERAL(8, 130, 7), // "success"
QT_MOC_LITERAL(9, 138, 17), // "checkInterruption"
QT_MOC_LITERAL(10, 156, 7) // "timeout"

    },
    "QgsWFSFeatureIterator\0featureReceived\0"
    "\0featureCount\0featureReceivedSynchronous\0"
    "QVector<QgsWFSFeatureGmlIdPair>\0list\0"
    "endOfDownload\0success\0checkInterruption\0"
    "timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWFSFeatureIterator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
       9,    0,   48,    2, 0x08 /* Private */,
      10,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsWFSFeatureIterator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWFSFeatureIterator *_t = static_cast<QgsWFSFeatureIterator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->featureReceived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->featureReceivedSynchronous((*reinterpret_cast< const QVector<QgsWFSFeatureGmlIdPair>(*)>(_a[1]))); break;
        case 2: _t->endOfDownload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->checkInterruption(); break;
        case 4: _t->timeout(); break;
        default: ;
        }
    }
}

const QMetaObject QgsWFSFeatureIterator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsWFSFeatureIterator.data,
      qt_meta_data_QgsWFSFeatureIterator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWFSFeatureIterator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWFSFeatureIterator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSFeatureIterator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsAbstractFeatureIteratorFromSource<QgsWFSFeatureSource>"))
        return static_cast< QgsAbstractFeatureIteratorFromSource<QgsWFSFeatureSource>*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsWFSFeatureIterator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
