/****************************************************************************
** Meta object code from reading C++ file 'qgsannotation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsannotation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsannotation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAnnotation_t {
    QByteArrayData data[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAnnotation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAnnotation_t qt_meta_stringdata_QgsAnnotation = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsAnnotation"
QT_MOC_LITERAL(1, 14, 17), // "appearanceChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "moved"
QT_MOC_LITERAL(4, 39, 15), // "mapLayerChanged"
QT_MOC_LITERAL(5, 55, 7), // "visible"
QT_MOC_LITERAL(6, 63, 19), // "hasFixedMapPosition"
QT_MOC_LITERAL(7, 83, 11), // "mapPosition"
QT_MOC_LITERAL(8, 95, 10), // "QgsPointXY"
QT_MOC_LITERAL(9, 106, 9) // "frameSize"

    },
    "QgsAnnotation\0appearanceChanged\0\0moved\0"
    "mapLayerChanged\0visible\0hasFixedMapPosition\0"
    "mapPosition\0QgsPointXY\0frameSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAnnotation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, 0x80000000 | 8, 0x0009510b,
       9, QMetaType::QSizeF, 0x00095103,

       0        // eod
};

void QgsAnnotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAnnotation *_t = static_cast<QgsAnnotation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appearanceChanged(); break;
        case 1: _t->moved(); break;
        case 2: _t->mapLayerChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsAnnotation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAnnotation::appearanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsAnnotation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAnnotation::moved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsAnnotation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAnnotation::mapLayerChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsAnnotation *_t = static_cast<QgsAnnotation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasFixedMapPosition(); break;
        case 2: *reinterpret_cast< QgsPointXY*>(_v) = _t->mapPosition(); break;
        case 3: *reinterpret_cast< QSizeF*>(_v) = _t->frameSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsAnnotation *_t = static_cast<QgsAnnotation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setHasFixedMapPosition(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setMapPosition(*reinterpret_cast< QgsPointXY*>(_v)); break;
        case 3: _t->setFrameSize(*reinterpret_cast< QSizeF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QgsAnnotation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsAnnotation.data,
      qt_meta_data_QgsAnnotation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAnnotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAnnotation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAnnotation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsAnnotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsAnnotation::appearanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsAnnotation::moved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsAnnotation::mapLayerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
