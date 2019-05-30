/****************************************************************************
** Meta object code from reading C++ file 'qgsfiledownloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsfiledownloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfiledownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFileDownloader_t {
    QByteArrayData data[21];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFileDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFileDownloader_t qt_meta_stringdata_QgsFileDownloader = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsFileDownloader"
QT_MOC_LITERAL(1, 18, 17), // "downloadCompleted"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "downloadExited"
QT_MOC_LITERAL(4, 52, 16), // "downloadCanceled"
QT_MOC_LITERAL(5, 69, 13), // "downloadError"
QT_MOC_LITERAL(6, 83, 13), // "errorMessages"
QT_MOC_LITERAL(7, 97, 16), // "downloadProgress"
QT_MOC_LITERAL(8, 114, 13), // "bytesReceived"
QT_MOC_LITERAL(9, 128, 10), // "bytesTotal"
QT_MOC_LITERAL(10, 139, 14), // "cancelDownload"
QT_MOC_LITERAL(11, 154, 13), // "startDownload"
QT_MOC_LITERAL(12, 168, 11), // "onReadyRead"
QT_MOC_LITERAL(13, 180, 10), // "onFinished"
QT_MOC_LITERAL(14, 191, 18), // "onDownloadProgress"
QT_MOC_LITERAL(15, 210, 17), // "onRequestTimedOut"
QT_MOC_LITERAL(16, 228, 14), // "QNetworkReply*"
QT_MOC_LITERAL(17, 243, 5), // "reply"
QT_MOC_LITERAL(18, 249, 11), // "onSslErrors"
QT_MOC_LITERAL(19, 261, 16), // "QList<QSslError>"
QT_MOC_LITERAL(20, 278, 6) // "errors"

    },
    "QgsFileDownloader\0downloadCompleted\0"
    "\0downloadExited\0downloadCanceled\0"
    "downloadError\0errorMessages\0"
    "downloadProgress\0bytesReceived\0"
    "bytesTotal\0cancelDownload\0startDownload\0"
    "onReadyRead\0onFinished\0onDownloadProgress\0"
    "onRequestTimedOut\0QNetworkReply*\0reply\0"
    "onSslErrors\0QList<QSslError>\0errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFileDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       7,    2,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   85,    2, 0x0a /* Public */,
      11,    0,   86,    2, 0x0a /* Public */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    2,   89,    2, 0x08 /* Private */,
      15,    1,   94,    2, 0x08 /* Private */,
      18,    2,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 19,   17,   20,

       0        // eod
};

void QgsFileDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFileDownloader *_t = static_cast<QgsFileDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadCompleted(); break;
        case 1: _t->downloadExited(); break;
        case 2: _t->downloadCanceled(); break;
        case 3: _t->downloadError((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->cancelDownload(); break;
        case 6: _t->startDownload(); break;
        case 7: _t->onReadyRead(); break;
        case 8: _t->onFinished(); break;
        case 9: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 10: _t->onRequestTimedOut((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->onSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsFileDownloader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileDownloader::downloadCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsFileDownloader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileDownloader::downloadExited)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsFileDownloader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileDownloader::downloadCanceled)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsFileDownloader::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileDownloader::downloadError)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsFileDownloader::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileDownloader::downloadProgress)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QgsFileDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsFileDownloader.data,
      qt_meta_data_QgsFileDownloader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFileDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFileDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFileDownloader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsFileDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QgsFileDownloader::downloadCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsFileDownloader::downloadExited()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsFileDownloader::downloadCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsFileDownloader::downloadError(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsFileDownloader::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
