/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutatlas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutatlas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutatlas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutAtlas_t {
    QByteArrayData data[24];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutAtlas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutAtlas_t qt_meta_stringdata_QgsLayoutAtlas = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsLayoutAtlas"
QT_MOC_LITERAL(1, 15, 7), // "changed"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "toggled"
QT_MOC_LITERAL(4, 32, 20), // "coverageLayerChanged"
QT_MOC_LITERAL(5, 53, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(6, 69, 5), // "layer"
QT_MOC_LITERAL(7, 75, 13), // "messagePushed"
QT_MOC_LITERAL(8, 89, 7), // "message"
QT_MOC_LITERAL(9, 97, 21), // "numberFeaturesChanged"
QT_MOC_LITERAL(10, 119, 11), // "numFeatures"
QT_MOC_LITERAL(11, 131, 14), // "featureChanged"
QT_MOC_LITERAL(12, 146, 10), // "QgsFeature"
QT_MOC_LITERAL(13, 157, 7), // "feature"
QT_MOC_LITERAL(14, 165, 11), // "renderBegun"
QT_MOC_LITERAL(15, 177, 11), // "renderEnded"
QT_MOC_LITERAL(16, 189, 4), // "next"
QT_MOC_LITERAL(17, 194, 8), // "previous"
QT_MOC_LITERAL(18, 203, 4), // "last"
QT_MOC_LITERAL(19, 208, 5), // "first"
QT_MOC_LITERAL(20, 214, 6), // "seekTo"
QT_MOC_LITERAL(21, 221, 21), // "refreshCurrentFeature"
QT_MOC_LITERAL(22, 243, 12), // "removeLayers"
QT_MOC_LITERAL(23, 256, 6) // "layers"

    },
    "QgsLayoutAtlas\0changed\0\0toggled\0"
    "coverageLayerChanged\0QgsVectorLayer*\0"
    "layer\0messagePushed\0message\0"
    "numberFeaturesChanged\0numFeatures\0"
    "featureChanged\0QgsFeature\0feature\0"
    "renderBegun\0renderEnded\0next\0previous\0"
    "last\0first\0seekTo\0refreshCurrentFeature\0"
    "removeLayers\0layers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutAtlas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    1,   95,    2, 0x06 /* Public */,
       4,    1,   98,    2, 0x06 /* Public */,
       7,    1,  101,    2, 0x06 /* Public */,
       9,    1,  104,    2, 0x06 /* Public */,
      11,    1,  107,    2, 0x06 /* Public */,
      14,    0,  110,    2, 0x06 /* Public */,
      15,    0,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  112,    2, 0x0a /* Public */,
      17,    0,  113,    2, 0x0a /* Public */,
      18,    0,  114,    2, 0x0a /* Public */,
      19,    0,  115,    2, 0x0a /* Public */,
      20,    1,  116,    2, 0x0a /* Public */,
      20,    1,  119,    2, 0x0a /* Public */,
      21,    0,  122,    2, 0x0a /* Public */,
      22,    1,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,   13,
    QMetaType::Bool, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   23,

       0        // eod
};

void QgsLayoutAtlas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutAtlas *_t = static_cast<QgsLayoutAtlas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->coverageLayerChanged((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 3: _t->messagePushed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->numberFeaturesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->featureChanged((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 6: _t->renderBegun(); break;
        case 7: _t->renderEnded(); break;
        case 8: { bool _r = _t->next();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->previous();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->last();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->first();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->seekTo((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->seekTo((*reinterpret_cast< const QgsFeature(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->refreshCurrentFeature(); break;
        case 15: _t->removeLayers((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayoutAtlas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutAtlas::changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsLayoutAtlas::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutAtlas::toggled)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsLayoutAtlas::*_t)(QgsVectorLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutAtlas::coverageLayerChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsLayoutAtlas::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutAtlas::messagePushed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsLayoutAtlas::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutAtlas::numberFeaturesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsLayoutAtlas::*_t)(const QgsFeature & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutAtlas::featureChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsLayoutAtlas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutAtlas::renderBegun)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsLayoutAtlas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutAtlas::renderEnded)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject QgsLayoutAtlas::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayoutAtlas.data,
      qt_meta_data_QgsLayoutAtlas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutAtlas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutAtlas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutAtlas.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsAbstractLayoutIterator"))
        return static_cast< QgsAbstractLayoutIterator*>(this);
    if (!strcmp(_clname, "QgsLayoutSerializableObject"))
        return static_cast< QgsLayoutSerializableObject*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsLayoutAtlas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QgsLayoutAtlas::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsLayoutAtlas::toggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsLayoutAtlas::coverageLayerChanged(QgsVectorLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsLayoutAtlas::messagePushed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsLayoutAtlas::numberFeaturesChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsLayoutAtlas::featureChanged(const QgsFeature & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsLayoutAtlas::renderBegun()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QgsLayoutAtlas::renderEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
