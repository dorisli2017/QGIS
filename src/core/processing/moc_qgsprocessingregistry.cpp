/****************************************************************************
** Meta object code from reading C++ file 'qgsprocessingregistry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsprocessingregistry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprocessingregistry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProcessingRegistry_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingRegistry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingRegistry_t qt_meta_stringdata_QgsProcessingRegistry = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsProcessingRegistry"
QT_MOC_LITERAL(1, 22, 13), // "providerAdded"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 2), // "id"
QT_MOC_LITERAL(4, 40, 15), // "providerRemoved"
QT_MOC_LITERAL(5, 56, 18), // "parameterTypeAdded"
QT_MOC_LITERAL(6, 75, 27), // "QgsProcessingParameterType*"
QT_MOC_LITERAL(7, 103, 4), // "type"
QT_MOC_LITERAL(8, 108, 20) // "parameterTypeRemoved"

    },
    "QgsProcessingRegistry\0providerAdded\0"
    "\0id\0providerRemoved\0parameterTypeAdded\0"
    "QgsProcessingParameterType*\0type\0"
    "parameterTypeRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingRegistry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,
       8,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void QgsProcessingRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingRegistry *_t = static_cast<QgsProcessingRegistry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->providerAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->providerRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->parameterTypeAdded((*reinterpret_cast< QgsProcessingParameterType*(*)>(_a[1]))); break;
        case 3: _t->parameterTypeRemoved((*reinterpret_cast< QgsProcessingParameterType*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsProcessingRegistry::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingRegistry::providerAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsProcessingRegistry::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingRegistry::providerRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsProcessingRegistry::*_t)(QgsProcessingParameterType * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingRegistry::parameterTypeAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsProcessingRegistry::*_t)(QgsProcessingParameterType * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingRegistry::parameterTypeRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QgsProcessingRegistry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsProcessingRegistry.data,
      qt_meta_data_QgsProcessingRegistry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingRegistry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsProcessingRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsProcessingRegistry::providerAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsProcessingRegistry::providerRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsProcessingRegistry::parameterTypeAdded(QgsProcessingParameterType * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsProcessingRegistry::parameterTypeRemoved(QgsProcessingParameterType * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
