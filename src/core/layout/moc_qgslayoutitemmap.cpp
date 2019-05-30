/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutitemmap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutitemmap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutitemmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutItemMap_t {
    QByteArrayData data[21];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutItemMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutItemMap_t qt_meta_stringdata_QgsLayoutItemMap = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsLayoutItemMap"
QT_MOC_LITERAL(1, 17, 13), // "extentChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "mapRotationChanged"
QT_MOC_LITERAL(4, 51, 11), // "newRotation"
QT_MOC_LITERAL(5, 63, 16), // "preparedForAtlas"
QT_MOC_LITERAL(6, 80, 26), // "layerStyleOverridesChanged"
QT_MOC_LITERAL(7, 107, 7), // "refresh"
QT_MOC_LITERAL(8, 115, 15), // "invalidateCache"
QT_MOC_LITERAL(9, 131, 18), // "updateBoundingRect"
QT_MOC_LITERAL(10, 150, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(11, 177, 36), // "QgsLayoutObject::DataDefinedP..."
QT_MOC_LITERAL(12, 214, 8), // "property"
QT_MOC_LITERAL(13, 223, 22), // "layersAboutToBeRemoved"
QT_MOC_LITERAL(14, 246, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(15, 266, 6), // "layers"
QT_MOC_LITERAL(16, 273, 18), // "painterJobFinished"
QT_MOC_LITERAL(17, 292, 12), // "shapeChanged"
QT_MOC_LITERAL(18, 305, 15), // "mapThemeChanged"
QT_MOC_LITERAL(19, 321, 5), // "theme"
QT_MOC_LITERAL(20, 327, 31) // "recreateCachedImageInBackground"

    },
    "QgsLayoutItemMap\0extentChanged\0\0"
    "mapRotationChanged\0newRotation\0"
    "preparedForAtlas\0layerStyleOverridesChanged\0"
    "refresh\0invalidateCache\0updateBoundingRect\0"
    "refreshDataDefinedProperty\0"
    "QgsLayoutObject::DataDefinedProperty\0"
    "property\0layersAboutToBeRemoved\0"
    "QList<QgsMapLayer*>\0layers\0"
    "painterJobFinished\0shapeChanged\0"
    "mapThemeChanged\0theme\0"
    "recreateCachedImageInBackground"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutItemMap[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,
       6,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   90,    2, 0x0a /* Public */,
       8,    0,   91,    2, 0x0a /* Public */,
       9,    0,   92,    2, 0x0a /* Public */,
      10,    1,   93,    2, 0x0a /* Public */,
      10,    0,   96,    2, 0x2a /* Public | MethodCloned */,
      13,    1,   97,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,
      18,    1,  102,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutItemMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutItemMap *_t = static_cast<QgsLayoutItemMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->extentChanged(); break;
        case 1: _t->mapRotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->preparedForAtlas(); break;
        case 3: _t->layerStyleOverridesChanged(); break;
        case 4: _t->refresh(); break;
        case 5: _t->invalidateCache(); break;
        case 6: _t->updateBoundingRect(); break;
        case 7: _t->refreshDataDefinedProperty((*reinterpret_cast< QgsLayoutObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 8: _t->refreshDataDefinedProperty(); break;
        case 9: _t->layersAboutToBeRemoved((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 10: _t->painterJobFinished(); break;
        case 11: _t->shapeChanged(); break;
        case 12: _t->mapThemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->recreateCachedImageInBackground(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayoutItemMap::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutItemMap::extentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsLayoutItemMap::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutItemMap::mapRotationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsLayoutItemMap::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutItemMap::preparedForAtlas)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsLayoutItemMap::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutItemMap::layerStyleOverridesChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QgsLayoutItemMap::staticMetaObject = {
    { &QgsLayoutItem::staticMetaObject, qt_meta_stringdata_QgsLayoutItemMap.data,
      qt_meta_data_QgsLayoutItemMap,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutItemMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutItemMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutItemMap.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItem::qt_metacast(_clname);
}

int QgsLayoutItemMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QgsLayoutItemMap::extentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsLayoutItemMap::mapRotationChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsLayoutItemMap::preparedForAtlas()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsLayoutItemMap::layerStyleOverridesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
