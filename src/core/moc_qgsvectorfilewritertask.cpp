/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorfilewritertask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsvectorfilewritertask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorfilewritertask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVectorFileWriterTask_t {
    QByteArrayData data[9];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorFileWriterTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorFileWriterTask_t qt_meta_stringdata_QgsVectorFileWriterTask = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsVectorFileWriterTask"
QT_MOC_LITERAL(1, 24, 13), // "writeComplete"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "newFilename"
QT_MOC_LITERAL(4, 51, 9), // "completed"
QT_MOC_LITERAL(5, 61, 8), // "newLayer"
QT_MOC_LITERAL(6, 70, 13), // "errorOccurred"
QT_MOC_LITERAL(7, 84, 5), // "error"
QT_MOC_LITERAL(8, 90, 12) // "errorMessage"

    },
    "QgsVectorFileWriterTask\0writeComplete\0"
    "\0newFilename\0completed\0newLayer\0"
    "errorOccurred\0error\0errorMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorFileWriterTask[] = {

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
       6,    2,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    8,

       0        // eod
};

void QgsVectorFileWriterTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorFileWriterTask *_t = static_cast<QgsVectorFileWriterTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeComplete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->completed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->errorOccurred((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsVectorFileWriterTask::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorFileWriterTask::writeComplete)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsVectorFileWriterTask::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorFileWriterTask::completed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsVectorFileWriterTask::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorFileWriterTask::errorOccurred)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsVectorFileWriterTask::staticMetaObject = {
    { &QgsTask::staticMetaObject, qt_meta_stringdata_QgsVectorFileWriterTask.data,
      qt_meta_data_QgsVectorFileWriterTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorFileWriterTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorFileWriterTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorFileWriterTask.stringdata0))
        return static_cast<void*>(this);
    return QgsTask::qt_metacast(_clname);
}

int QgsVectorFileWriterTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsTask::qt_metacall(_c, _id, _a);
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
void QgsVectorFileWriterTask::writeComplete(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsVectorFileWriterTask::completed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsVectorFileWriterTask::errorOccurred(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
