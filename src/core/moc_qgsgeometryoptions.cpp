/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometryoptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometryoptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometryoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometryOptions_t {
    QByteArrayData data[6];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryOptions_t qt_meta_stringdata_QgsGeometryOptions = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsGeometryOptions"
QT_MOC_LITERAL(1, 19, 25), // "checkConfigurationChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "geometryChecksChanged"
QT_MOC_LITERAL(4, 68, 27), // "removeDuplicateNodesChanged"
QT_MOC_LITERAL(5, 96, 24) // "geometryPrecisionChanged"

    },
    "QgsGeometryOptions\0checkConfigurationChanged\0"
    "\0geometryChecksChanged\0"
    "removeDuplicateNodesChanged\0"
    "geometryPrecisionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryOptions[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsGeometryOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeometryOptions *_t = static_cast<QgsGeometryOptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkConfigurationChanged(); break;
        case 1: _t->geometryChecksChanged(); break;
        case 2: _t->removeDuplicateNodesChanged(); break;
        case 3: _t->geometryPrecisionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGeometryOptions::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryOptions::checkConfigurationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsGeometryOptions::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryOptions::geometryChecksChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsGeometryOptions::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryOptions::removeDuplicateNodesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsGeometryOptions::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryOptions::geometryPrecisionChanged)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsGeometryOptions::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsGeometryOptions.data,
      qt_meta_data_QgsGeometryOptions,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeometryOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeometryOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeometryOptions.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsGeometryOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsGeometryOptions::checkConfigurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsGeometryOptions::geometryChecksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsGeometryOptions::removeDuplicateNodesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsGeometryOptions::geometryPrecisionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
