/****************************************************************************
** Meta object code from reading C++ file 'qgscolumntypethread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgscolumntypethread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscolumntypethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeomColumnTypeThread_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeomColumnTypeThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeomColumnTypeThread_t qt_meta_stringdata_QgsGeomColumnTypeThread = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsGeomColumnTypeThread"
QT_MOC_LITERAL(1, 24, 12), // "setLayerType"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 24), // "QgsPostgresLayerProperty"
QT_MOC_LITERAL(4, 63, 13), // "layerProperty"
QT_MOC_LITERAL(5, 77, 8), // "progress"
QT_MOC_LITERAL(6, 86, 15), // "progressMessage"
QT_MOC_LITERAL(7, 102, 4) // "stop"

    },
    "QgsGeomColumnTypeThread\0setLayerType\0"
    "\0QgsPostgresLayerProperty\0layerProperty\0"
    "progress\0progressMessage\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeomColumnTypeThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    2,   37,    2, 0x06 /* Public */,
       6,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsGeomColumnTypeThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeomColumnTypeThread *_t = static_cast<QgsGeomColumnTypeThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setLayerType((*reinterpret_cast< const QgsPostgresLayerProperty(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->progressMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGeomColumnTypeThread::*_t)(const QgsPostgresLayerProperty & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeomColumnTypeThread::setLayerType)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsGeomColumnTypeThread::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeomColumnTypeThread::progress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsGeomColumnTypeThread::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeomColumnTypeThread::progressMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsGeomColumnTypeThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QgsGeomColumnTypeThread.data,
      qt_meta_data_QgsGeomColumnTypeThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeomColumnTypeThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeomColumnTypeThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeomColumnTypeThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QgsGeomColumnTypeThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsGeomColumnTypeThread::setLayerType(const QgsPostgresLayerProperty & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGeomColumnTypeThread::progress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsGeomColumnTypeThread::progressMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
