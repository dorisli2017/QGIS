/****************************************************************************
** Meta object code from reading C++ file 'qgsmaptoolidentifyfeature.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmaptoolidentifyfeature.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaptoolidentifyfeature.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapToolIdentifyFeature_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapToolIdentifyFeature_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapToolIdentifyFeature_t qt_meta_stringdata_QgsMapToolIdentifyFeature = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsMapToolIdentifyFeature"
QT_MOC_LITERAL(1, 26, 17), // "featureIdentified"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "QgsFeature"
QT_MOC_LITERAL(4, 56, 12) // "QgsFeatureId"

    },
    "QgsMapToolIdentifyFeature\0featureIdentified\0"
    "\0QgsFeature\0QgsFeatureId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapToolIdentifyFeature[] = {

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
       1,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void QgsMapToolIdentifyFeature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapToolIdentifyFeature *_t = static_cast<QgsMapToolIdentifyFeature *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->featureIdentified((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 1: _t->featureIdentified((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMapToolIdentifyFeature::*_t)(const QgsFeature & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapToolIdentifyFeature::featureIdentified)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsMapToolIdentifyFeature::*_t)(QgsFeatureId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapToolIdentifyFeature::featureIdentified)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsMapToolIdentifyFeature::staticMetaObject = {
    { &QgsMapToolIdentify::staticMetaObject, qt_meta_stringdata_QgsMapToolIdentifyFeature.data,
      qt_meta_data_QgsMapToolIdentifyFeature,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapToolIdentifyFeature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapToolIdentifyFeature::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapToolIdentifyFeature.stringdata0))
        return static_cast<void*>(this);
    return QgsMapToolIdentify::qt_metacast(_clname);
}

int QgsMapToolIdentifyFeature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapToolIdentify::qt_metacall(_c, _id, _a);
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
void QgsMapToolIdentifyFeature::featureIdentified(const QgsFeature & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapToolIdentifyFeature::featureIdentified(QgsFeatureId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
