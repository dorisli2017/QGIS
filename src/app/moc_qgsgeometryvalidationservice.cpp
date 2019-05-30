/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometryvalidationservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometryvalidationservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometryvalidationservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometryValidationService_t {
    QByteArrayData data[30];
    char stringdata0[521];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryValidationService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryValidationService_t qt_meta_stringdata_QgsGeometryValidationService = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsGeometryValidationService"
QT_MOC_LITERAL(1, 29, 26), // "singleGeometryCheckCleared"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(4, 73, 5), // "layer"
QT_MOC_LITERAL(5, 79, 20), // "geometryCheckStarted"
QT_MOC_LITERAL(6, 100, 12), // "QgsFeatureId"
QT_MOC_LITERAL(7, 113, 3), // "fid"
QT_MOC_LITERAL(8, 117, 22), // "geometryCheckCompleted"
QT_MOC_LITERAL(9, 140, 52), // "QList<std::shared_ptr<QgsSing..."
QT_MOC_LITERAL(10, 193, 6), // "errors"
QT_MOC_LITERAL(11, 200, 21), // "topologyChecksUpdated"
QT_MOC_LITERAL(12, 222, 46), // "QList<std::shared_ptr<QgsGeom..."
QT_MOC_LITERAL(13, 269, 21), // "topologyChecksCleared"
QT_MOC_LITERAL(14, 291, 20), // "topologyErrorUpdated"
QT_MOC_LITERAL(15, 312, 22), // "QgsGeometryCheckError*"
QT_MOC_LITERAL(16, 335, 5), // "error"
QT_MOC_LITERAL(17, 341, 7), // "warning"
QT_MOC_LITERAL(18, 349, 7), // "message"
QT_MOC_LITERAL(19, 357, 12), // "clearWarning"
QT_MOC_LITERAL(20, 370, 13), // "onLayersAdded"
QT_MOC_LITERAL(21, 384, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(22, 404, 6), // "layers"
QT_MOC_LITERAL(23, 411, 14), // "onFeatureAdded"
QT_MOC_LITERAL(24, 426, 17), // "onGeometryChanged"
QT_MOC_LITERAL(25, 444, 11), // "QgsGeometry"
QT_MOC_LITERAL(26, 456, 8), // "geometry"
QT_MOC_LITERAL(27, 465, 16), // "onFeatureDeleted"
QT_MOC_LITERAL(28, 482, 21), // "onBeforeCommitChanges"
QT_MOC_LITERAL(29, 504, 16) // "onEditingStopped"

    },
    "QgsGeometryValidationService\0"
    "singleGeometryCheckCleared\0\0QgsVectorLayer*\0"
    "layer\0geometryCheckStarted\0QgsFeatureId\0"
    "fid\0geometryCheckCompleted\0"
    "QList<std::shared_ptr<QgsSingleGeometryCheckError> >\0"
    "errors\0topologyChecksUpdated\0"
    "QList<std::shared_ptr<QgsGeometryCheckError> >\0"
    "topologyChecksCleared\0topologyErrorUpdated\0"
    "QgsGeometryCheckError*\0error\0warning\0"
    "message\0clearWarning\0onLayersAdded\0"
    "QList<QgsMapLayer*>\0layers\0onFeatureAdded\0"
    "onGeometryChanged\0QgsGeometry\0geometry\0"
    "onFeatureDeleted\0onBeforeCommitChanges\0"
    "onEditingStopped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryValidationService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    2,   87,    2, 0x06 /* Public */,
       8,    3,   92,    2, 0x06 /* Public */,
      11,    2,   99,    2, 0x06 /* Public */,
      13,    1,  104,    2, 0x06 /* Public */,
      14,    2,  107,    2, 0x06 /* Public */,
      17,    1,  112,    2, 0x06 /* Public */,
      19,    0,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,  116,    2, 0x08 /* Private */,
      23,    2,  119,    2, 0x08 /* Private */,
      24,    3,  124,    2, 0x08 /* Private */,
      27,    2,  131,    2, 0x08 /* Private */,
      28,    1,  136,    2, 0x08 /* Private */,
      29,    1,  139,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6, 0x80000000 | 9,    4,    7,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12,    4,   10,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6, 0x80000000 | 25,    4,    7,   26,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QgsGeometryValidationService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeometryValidationService *_t = static_cast<QgsGeometryValidationService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->singleGeometryCheckCleared((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 1: _t->geometryCheckStarted((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2]))); break;
        case 2: _t->geometryCheckCompleted((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2])),(*reinterpret_cast< const QList<std::shared_ptr<QgsSingleGeometryCheckError> >(*)>(_a[3]))); break;
        case 3: _t->topologyChecksUpdated((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< const QList<std::shared_ptr<QgsGeometryCheckError> >(*)>(_a[2]))); break;
        case 4: _t->topologyChecksCleared((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 5: _t->topologyErrorUpdated((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsGeometryCheckError*(*)>(_a[2]))); break;
        case 6: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->clearWarning(); break;
        case 8: _t->onLayersAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 9: _t->onFeatureAdded((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2]))); break;
        case 10: _t->onGeometryChanged((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2])),(*reinterpret_cast< const QgsGeometry(*)>(_a[3]))); break;
        case 11: _t->onFeatureDeleted((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2]))); break;
        case 12: _t->onBeforeCommitChanges((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 13: _t->onEditingStopped((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGeometryValidationService::*_t)(QgsVectorLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryValidationService::singleGeometryCheckCleared)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsGeometryValidationService::*_t)(QgsVectorLayer * , QgsFeatureId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryValidationService::geometryCheckStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsGeometryValidationService::*_t)(QgsVectorLayer * , QgsFeatureId , const QList<std::shared_ptr<QgsSingleGeometryCheckError>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryValidationService::geometryCheckCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsGeometryValidationService::*_t)(QgsVectorLayer * , const QList<std::shared_ptr<QgsGeometryCheckError> > & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryValidationService::topologyChecksUpdated)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsGeometryValidationService::*_t)(QgsVectorLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryValidationService::topologyChecksCleared)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsGeometryValidationService::*_t)(QgsVectorLayer * , QgsGeometryCheckError * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryValidationService::topologyErrorUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsGeometryValidationService::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryValidationService::warning)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsGeometryValidationService::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryValidationService::clearWarning)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject QgsGeometryValidationService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsGeometryValidationService.data,
      qt_meta_data_QgsGeometryValidationService,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeometryValidationService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeometryValidationService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeometryValidationService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsGeometryValidationService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QgsGeometryValidationService::singleGeometryCheckCleared(QgsVectorLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGeometryValidationService::geometryCheckStarted(QgsVectorLayer * _t1, QgsFeatureId _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsGeometryValidationService::geometryCheckCompleted(QgsVectorLayer * _t1, QgsFeatureId _t2, const QList<std::shared_ptr<QgsSingleGeometryCheckError>> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsGeometryValidationService::topologyChecksUpdated(QgsVectorLayer * _t1, const QList<std::shared_ptr<QgsGeometryCheckError> > & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsGeometryValidationService::topologyChecksCleared(QgsVectorLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsGeometryValidationService::topologyErrorUpdated(QgsVectorLayer * _t1, QgsGeometryCheckError * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsGeometryValidationService::warning(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsGeometryValidationService::clearWarning()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
