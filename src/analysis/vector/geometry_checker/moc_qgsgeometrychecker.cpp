/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometrychecker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometrychecker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometrychecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometryChecker_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryChecker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryChecker_t qt_meta_stringdata_QgsGeometryChecker = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsGeometryChecker"
QT_MOC_LITERAL(1, 19, 10), // "errorAdded"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 22), // "QgsGeometryCheckError*"
QT_MOC_LITERAL(4, 54, 5), // "error"
QT_MOC_LITERAL(5, 60, 12), // "errorUpdated"
QT_MOC_LITERAL(6, 73, 13), // "statusChanged"
QT_MOC_LITERAL(7, 87, 13), // "progressValue"
QT_MOC_LITERAL(8, 101, 5), // "value"
QT_MOC_LITERAL(9, 107, 17) // "emitProgressValue"

    },
    "QgsGeometryChecker\0errorAdded\0\0"
    "QgsGeometryCheckError*\0error\0errorUpdated\0"
    "statusChanged\0progressValue\0value\0"
    "emitProgressValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryChecker[] = {

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
       7,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    6,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsGeometryChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeometryChecker *_t = static_cast<QgsGeometryChecker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorAdded((*reinterpret_cast< QgsGeometryCheckError*(*)>(_a[1]))); break;
        case 1: _t->errorUpdated((*reinterpret_cast< QgsGeometryCheckError*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->progressValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->emitProgressValue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGeometryChecker::*_t)(QgsGeometryCheckError * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryChecker::errorAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsGeometryChecker::*_t)(QgsGeometryCheckError * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryChecker::errorUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsGeometryChecker::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryChecker::progressValue)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsGeometryChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsGeometryChecker.data,
      qt_meta_data_QgsGeometryChecker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeometryChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeometryChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeometryChecker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsGeometryChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QgsGeometryChecker::errorAdded(QgsGeometryCheckError * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGeometryChecker::errorUpdated(QgsGeometryCheckError * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsGeometryChecker::progressValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
