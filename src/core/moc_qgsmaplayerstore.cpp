/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayerstore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmaplayerstore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayerstore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapLayerStore_t {
    QByteArrayData data[17];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapLayerStore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapLayerStore_t qt_meta_stringdata_QgsMapLayerStore = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsMapLayerStore"
QT_MOC_LITERAL(1, 17, 19), // "layersWillBeRemoved"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "layerIds"
QT_MOC_LITERAL(4, 47, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(5, 67, 6), // "layers"
QT_MOC_LITERAL(6, 74, 18), // "layerWillBeRemoved"
QT_MOC_LITERAL(7, 93, 7), // "layerId"
QT_MOC_LITERAL(8, 101, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(9, 114, 5), // "layer"
QT_MOC_LITERAL(10, 120, 13), // "layersRemoved"
QT_MOC_LITERAL(11, 134, 12), // "layerRemoved"
QT_MOC_LITERAL(12, 147, 16), // "allLayersRemoved"
QT_MOC_LITERAL(13, 164, 11), // "layersAdded"
QT_MOC_LITERAL(14, 176, 13), // "layerWasAdded"
QT_MOC_LITERAL(15, 190, 17), // "onMapLayerDeleted"
QT_MOC_LITERAL(16, 208, 3) // "obj"

    },
    "QgsMapLayerStore\0layersWillBeRemoved\0"
    "\0layerIds\0QList<QgsMapLayer*>\0layers\0"
    "layerWillBeRemoved\0layerId\0QgsMapLayer*\0"
    "layer\0layersRemoved\0layerRemoved\0"
    "allLayersRemoved\0layersAdded\0layerWasAdded\0"
    "onMapLayerDeleted\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapLayerStore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       1,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,
      11,    1,   79,    2, 0x06 /* Public */,
      12,    0,   82,    2, 0x06 /* Public */,
      13,    1,   83,    2, 0x06 /* Public */,
      14,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,   16,

       0        // eod
};

void QgsMapLayerStore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapLayerStore *_t = static_cast<QgsMapLayerStore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layersWillBeRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->layersWillBeRemoved((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 2: _t->layerWillBeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->layerWillBeRemoved((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 4: _t->layersRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->layerRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->allLayersRemoved(); break;
        case 7: _t->layersAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 8: _t->layerWasAdded((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 9: _t->onMapLayerDeleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsMapLayer*> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsMapLayer*> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMapLayerStore::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayerStore::layersWillBeRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsMapLayerStore::*_t)(const QList<QgsMapLayer*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayerStore::layersWillBeRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsMapLayerStore::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayerStore::layerWillBeRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsMapLayerStore::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayerStore::layerWillBeRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsMapLayerStore::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayerStore::layersRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsMapLayerStore::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayerStore::layerRemoved)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsMapLayerStore::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayerStore::allLayersRemoved)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsMapLayerStore::*_t)(const QList<QgsMapLayer*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayerStore::layersAdded)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgsMapLayerStore::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayerStore::layerWasAdded)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject QgsMapLayerStore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapLayerStore.data,
      qt_meta_data_QgsMapLayerStore,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapLayerStore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapLayerStore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayerStore.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsMapLayerStore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QgsMapLayerStore::layersWillBeRemoved(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapLayerStore::layersWillBeRemoved(const QList<QgsMapLayer*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapLayerStore::layerWillBeRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsMapLayerStore::layerWillBeRemoved(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsMapLayerStore::layersRemoved(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsMapLayerStore::layerRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsMapLayerStore::allLayersRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QgsMapLayerStore::layersAdded(const QList<QgsMapLayer*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsMapLayerStore::layerWasAdded(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
