/****************************************************************************
** Meta object code from reading C++ file 'qgsgeopackagerasterwritertask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeopackagerasterwritertask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeopackagerasterwritertask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeoPackageRasterWriterTask_t {
    QByteArrayData data[8];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeoPackageRasterWriterTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeoPackageRasterWriterTask_t qt_meta_stringdata_QgsGeoPackageRasterWriterTask = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsGeoPackageRasterWriterTask"
QT_MOC_LITERAL(1, 30, 13), // "writeComplete"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "newFilename"
QT_MOC_LITERAL(4, 57, 13), // "errorOccurred"
QT_MOC_LITERAL(5, 71, 38), // "QgsGeoPackageRasterWriter::Wr..."
QT_MOC_LITERAL(6, 110, 5), // "error"
QT_MOC_LITERAL(7, 116, 12) // "errorMessage"

    },
    "QgsGeoPackageRasterWriterTask\0"
    "writeComplete\0\0newFilename\0errorOccurred\0"
    "QgsGeoPackageRasterWriter::WriterError\0"
    "error\0errorMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeoPackageRasterWriterTask[] = {

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
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,

       0        // eod
};

void QgsGeoPackageRasterWriterTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeoPackageRasterWriterTask *_t = static_cast<QgsGeoPackageRasterWriterTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeComplete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->errorOccurred((*reinterpret_cast< QgsGeoPackageRasterWriter::WriterError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGeoPackageRasterWriterTask::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeoPackageRasterWriterTask::writeComplete)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsGeoPackageRasterWriterTask::*_t)(QgsGeoPackageRasterWriter::WriterError , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeoPackageRasterWriterTask::errorOccurred)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsGeoPackageRasterWriterTask::staticMetaObject = {
    { &QgsTask::staticMetaObject, qt_meta_stringdata_QgsGeoPackageRasterWriterTask.data,
      qt_meta_data_QgsGeoPackageRasterWriterTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeoPackageRasterWriterTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeoPackageRasterWriterTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeoPackageRasterWriterTask.stringdata0))
        return static_cast<void*>(this);
    return QgsTask::qt_metacast(_clname);
}

int QgsGeoPackageRasterWriterTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsTask::qt_metacall(_c, _id, _a);
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
void QgsGeoPackageRasterWriterTask::writeComplete(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGeoPackageRasterWriterTask::errorOccurred(QgsGeoPackageRasterWriter::WriterError _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
