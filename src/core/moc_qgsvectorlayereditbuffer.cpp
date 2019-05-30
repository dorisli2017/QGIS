/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayereditbuffer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsvectorlayereditbuffer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorlayereditbuffer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVectorLayerEditBuffer_t {
    QByteArrayData data[40];
    char stringdata0[661];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorLayerEditBuffer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorLayerEditBuffer_t qt_meta_stringdata_QgsVectorLayerEditBuffer = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsVectorLayerEditBuffer"
QT_MOC_LITERAL(1, 25, 13), // "layerModified"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "featureAdded"
QT_MOC_LITERAL(4, 53, 12), // "QgsFeatureId"
QT_MOC_LITERAL(5, 66, 3), // "fid"
QT_MOC_LITERAL(6, 70, 14), // "featureDeleted"
QT_MOC_LITERAL(7, 85, 15), // "geometryChanged"
QT_MOC_LITERAL(8, 101, 11), // "QgsGeometry"
QT_MOC_LITERAL(9, 113, 4), // "geom"
QT_MOC_LITERAL(10, 118, 21), // "attributeValueChanged"
QT_MOC_LITERAL(11, 140, 3), // "idx"
QT_MOC_LITERAL(12, 144, 14), // "attributeAdded"
QT_MOC_LITERAL(13, 159, 16), // "attributeDeleted"
QT_MOC_LITERAL(14, 176, 16), // "attributeRenamed"
QT_MOC_LITERAL(15, 193, 7), // "newName"
QT_MOC_LITERAL(16, 201, 26), // "committedAttributesDeleted"
QT_MOC_LITERAL(17, 228, 7), // "layerId"
QT_MOC_LITERAL(18, 236, 16), // "QgsAttributeList"
QT_MOC_LITERAL(19, 253, 17), // "deletedAttributes"
QT_MOC_LITERAL(20, 271, 24), // "committedAttributesAdded"
QT_MOC_LITERAL(21, 296, 15), // "QList<QgsField>"
QT_MOC_LITERAL(22, 312, 15), // "addedAttributes"
QT_MOC_LITERAL(23, 328, 26), // "committedAttributesRenamed"
QT_MOC_LITERAL(24, 355, 15), // "QgsFieldNameMap"
QT_MOC_LITERAL(25, 371, 17), // "renamedAttributes"
QT_MOC_LITERAL(26, 389, 22), // "committedFeaturesAdded"
QT_MOC_LITERAL(27, 412, 14), // "QgsFeatureList"
QT_MOC_LITERAL(28, 427, 13), // "addedFeatures"
QT_MOC_LITERAL(29, 441, 24), // "committedFeaturesRemoved"
QT_MOC_LITERAL(30, 466, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(31, 480, 17), // "deletedFeatureIds"
QT_MOC_LITERAL(32, 498, 31), // "committedAttributeValuesChanges"
QT_MOC_LITERAL(33, 530, 23), // "QgsChangedAttributesMap"
QT_MOC_LITERAL(34, 554, 23), // "changedAttributesValues"
QT_MOC_LITERAL(35, 578, 26), // "committedGeometriesChanges"
QT_MOC_LITERAL(36, 605, 14), // "QgsGeometryMap"
QT_MOC_LITERAL(37, 620, 17), // "changedGeometries"
QT_MOC_LITERAL(38, 638, 16), // "undoIndexChanged"
QT_MOC_LITERAL(39, 655, 5) // "index"

    },
    "QgsVectorLayerEditBuffer\0layerModified\0"
    "\0featureAdded\0QgsFeatureId\0fid\0"
    "featureDeleted\0geometryChanged\0"
    "QgsGeometry\0geom\0attributeValueChanged\0"
    "idx\0attributeAdded\0attributeDeleted\0"
    "attributeRenamed\0newName\0"
    "committedAttributesDeleted\0layerId\0"
    "QgsAttributeList\0deletedAttributes\0"
    "committedAttributesAdded\0QList<QgsField>\0"
    "addedAttributes\0committedAttributesRenamed\0"
    "QgsFieldNameMap\0renamedAttributes\0"
    "committedFeaturesAdded\0QgsFeatureList\0"
    "addedFeatures\0committedFeaturesRemoved\0"
    "QgsFeatureIds\0deletedFeatureIds\0"
    "committedAttributeValuesChanges\0"
    "QgsChangedAttributesMap\0changedAttributesValues\0"
    "committedGeometriesChanges\0QgsGeometryMap\0"
    "changedGeometries\0undoIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorLayerEditBuffer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    1,   95,    2, 0x06 /* Public */,
       6,    1,   98,    2, 0x06 /* Public */,
       7,    2,  101,    2, 0x06 /* Public */,
      10,    3,  106,    2, 0x06 /* Public */,
      12,    1,  113,    2, 0x06 /* Public */,
      13,    1,  116,    2, 0x06 /* Public */,
      14,    2,  119,    2, 0x06 /* Public */,
      16,    2,  124,    2, 0x06 /* Public */,
      20,    2,  129,    2, 0x06 /* Public */,
      23,    2,  134,    2, 0x06 /* Public */,
      26,    2,  139,    2, 0x06 /* Public */,
      29,    2,  144,    2, 0x06 /* Public */,
      32,    2,  149,    2, 0x06 /* Public */,
      35,    2,  154,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      38,    1,  159,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 8,    5,    9,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::QVariant,    5,   11,    2,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,   17,   19,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 21,   17,   22,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 24,   17,   25,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 27,   17,   28,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30,   17,   31,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 33,   17,   34,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 36,   17,   37,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   39,

       0        // eod
};

void QgsVectorLayerEditBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorLayerEditBuffer *_t = static_cast<QgsVectorLayerEditBuffer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerModified(); break;
        case 1: _t->featureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 2: _t->featureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 3: _t->geometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< const QgsGeometry(*)>(_a[2]))); break;
        case 4: _t->attributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 5: _t->attributeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->attributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->attributeRenamed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->committedAttributesDeleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsAttributeList(*)>(_a[2]))); break;
        case 9: _t->committedAttributesAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QgsField>(*)>(_a[2]))); break;
        case 10: _t->committedAttributesRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFieldNameMap(*)>(_a[2]))); break;
        case 11: _t->committedFeaturesAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureList(*)>(_a[2]))); break;
        case 12: _t->committedFeaturesRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureIds(*)>(_a[2]))); break;
        case 13: _t->committedAttributeValuesChanges((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsChangedAttributesMap(*)>(_a[2]))); break;
        case 14: _t->committedGeometriesChanges((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsGeometryMap(*)>(_a[2]))); break;
        case 15: _t->undoIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsField> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFeatureList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::layerModified)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(QgsFeatureId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::featureAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(QgsFeatureId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::featureDeleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(QgsFeatureId , const QgsGeometry & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::geometryChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(QgsFeatureId , int , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::attributeValueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::attributeAdded)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::attributeDeleted)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::attributeRenamed)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsAttributeList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedAttributesDeleted)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QList<QgsField> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedAttributesAdded)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsFieldNameMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedAttributesRenamed)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsFeatureList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedFeaturesAdded)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsFeatureIds & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedFeaturesRemoved)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsChangedAttributesMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedAttributeValuesChanges)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsGeometryMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedGeometriesChanges)) {
                *result = 14;
                return;
            }
        }
    }
}

const QMetaObject QgsVectorLayerEditBuffer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsVectorLayerEditBuffer.data,
      qt_meta_data_QgsVectorLayerEditBuffer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorLayerEditBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorLayerEditBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorLayerEditBuffer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsVectorLayerEditBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QgsVectorLayerEditBuffer::layerModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsVectorLayerEditBuffer::featureAdded(QgsFeatureId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsVectorLayerEditBuffer::featureDeleted(QgsFeatureId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsVectorLayerEditBuffer::geometryChanged(QgsFeatureId _t1, const QgsGeometry & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsVectorLayerEditBuffer::attributeValueChanged(QgsFeatureId _t1, int _t2, const QVariant & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsVectorLayerEditBuffer::attributeAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsVectorLayerEditBuffer::attributeDeleted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsVectorLayerEditBuffer::attributeRenamed(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsVectorLayerEditBuffer::committedAttributesDeleted(const QString & _t1, const QgsAttributeList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsVectorLayerEditBuffer::committedAttributesAdded(const QString & _t1, const QList<QgsField> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QgsVectorLayerEditBuffer::committedAttributesRenamed(const QString & _t1, const QgsFieldNameMap & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgsVectorLayerEditBuffer::committedFeaturesAdded(const QString & _t1, const QgsFeatureList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QgsVectorLayerEditBuffer::committedFeaturesRemoved(const QString & _t1, const QgsFeatureIds & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QgsVectorLayerEditBuffer::committedAttributeValuesChanges(const QString & _t1, const QgsChangedAttributesMap & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QgsVectorLayerEditBuffer::committedGeometriesChanges(const QString & _t1, const QgsGeometryMap & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
