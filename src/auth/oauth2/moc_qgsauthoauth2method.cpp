/****************************************************************************
** Meta object code from reading C++ file 'qgsauthoauth2method.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsauthoauth2method.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthoauth2method.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthOAuth2Method_t {
    QByteArrayData data[16];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthOAuth2Method_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthOAuth2Method_t qt_meta_stringdata_QgsAuthOAuth2Method = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsAuthOAuth2Method"
QT_MOC_LITERAL(1, 20, 11), // "setAuthCode"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "code"
QT_MOC_LITERAL(4, 38, 15), // "onLinkedChanged"
QT_MOC_LITERAL(5, 54, 15), // "onLinkingFailed"
QT_MOC_LITERAL(6, 70, 18), // "onLinkingSucceeded"
QT_MOC_LITERAL(7, 89, 13), // "onOpenBrowser"
QT_MOC_LITERAL(8, 103, 3), // "url"
QT_MOC_LITERAL(9, 107, 14), // "onCloseBrowser"
QT_MOC_LITERAL(10, 122, 15), // "onReplyFinished"
QT_MOC_LITERAL(11, 138, 14), // "onNetworkError"
QT_MOC_LITERAL(12, 153, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(13, 181, 3), // "err"
QT_MOC_LITERAL(14, 185, 17), // "onRefreshFinished"
QT_MOC_LITERAL(15, 203, 10) // "onAuthCode"

    },
    "QgsAuthOAuth2Method\0setAuthCode\0\0code\0"
    "onLinkedChanged\0onLinkingFailed\0"
    "onLinkingSucceeded\0onOpenBrowser\0url\0"
    "onCloseBrowser\0onReplyFinished\0"
    "onNetworkError\0QNetworkReply::NetworkError\0"
    "err\0onRefreshFinished\0onAuthCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthOAuth2Method[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    1,   70,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,
      14,    1,   78,    2, 0x0a /* Public */,
      15,    0,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

void QgsAuthOAuth2Method::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthOAuth2Method *_t = static_cast<QgsAuthOAuth2Method *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAuthCode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onLinkedChanged(); break;
        case 2: _t->onLinkingFailed(); break;
        case 3: _t->onLinkingSucceeded(); break;
        case 4: _t->onOpenBrowser((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->onCloseBrowser(); break;
        case 6: _t->onReplyFinished(); break;
        case 7: _t->onNetworkError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 8: _t->onRefreshFinished((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 9: _t->onAuthCode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsAuthOAuth2Method::*_t)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Method::setAuthCode)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsAuthOAuth2Method::staticMetaObject = {
    { &QgsAuthMethod::staticMetaObject, qt_meta_stringdata_QgsAuthOAuth2Method.data,
      qt_meta_data_QgsAuthOAuth2Method,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthOAuth2Method::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthOAuth2Method::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthOAuth2Method.stringdata0))
        return static_cast<void*>(this);
    return QgsAuthMethod::qt_metacast(_clname);
}

int QgsAuthOAuth2Method::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAuthMethod::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QgsAuthOAuth2Method::setAuthCode(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
