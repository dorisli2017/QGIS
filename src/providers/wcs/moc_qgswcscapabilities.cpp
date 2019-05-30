/****************************************************************************
** Meta object code from reading C++ file 'qgswcscapabilities.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgswcscapabilities.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswcscapabilities.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsWcsCapabilities_t {
    QByteArrayData data[10];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWcsCapabilities_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWcsCapabilities_t qt_meta_stringdata_QgsWcsCapabilities = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsWcsCapabilities"
QT_MOC_LITERAL(1, 19, 15), // "progressChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "progress"
QT_MOC_LITERAL(4, 45, 10), // "totalSteps"
QT_MOC_LITERAL(5, 56, 13), // "statusChanged"
QT_MOC_LITERAL(6, 70, 13), // "statusQString"
QT_MOC_LITERAL(7, 84, 16), // "downloadFinished"
QT_MOC_LITERAL(8, 101, 25), // "capabilitiesReplyFinished"
QT_MOC_LITERAL(9, 127, 25) // "capabilitiesReplyProgress"

    },
    "QgsWcsCapabilities\0progressChanged\0\0"
    "progress\0totalSteps\0statusChanged\0"
    "statusQString\0downloadFinished\0"
    "capabilitiesReplyFinished\0"
    "capabilitiesReplyProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWcsCapabilities[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    1,   44,    2, 0x06 /* Public */,
       7,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   48,    2, 0x08 /* Private */,
       9,    2,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void QgsWcsCapabilities::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWcsCapabilities *_t = static_cast<QgsWcsCapabilities *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->downloadFinished(); break;
        case 3: _t->capabilitiesReplyFinished(); break;
        case 4: _t->capabilitiesReplyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsWcsCapabilities::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWcsCapabilities::progressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsWcsCapabilities::*_t)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWcsCapabilities::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsWcsCapabilities::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWcsCapabilities::downloadFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsWcsCapabilities::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsWcsCapabilities.data,
      qt_meta_data_QgsWcsCapabilities,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWcsCapabilities::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWcsCapabilities::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWcsCapabilities.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsWcsCapabilities::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsWcsCapabilities::progressChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsWcsCapabilities::statusChanged(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsWcsCapabilities::downloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
