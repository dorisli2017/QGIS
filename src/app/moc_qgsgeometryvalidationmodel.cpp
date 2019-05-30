/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometryvalidationmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometryvalidationmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometryvalidationmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometryValidationModel_t {
    QByteArrayData data[20];
    char stringdata0[413];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryValidationModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryValidationModel_t qt_meta_stringdata_QgsGeometryValidationModel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsGeometryValidationModel"
QT_MOC_LITERAL(1, 27, 32), // "aboutToRemoveSingleGeometryCheck"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 15), // "setCurrentLayer"
QT_MOC_LITERAL(4, 77, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(5, 93, 12), // "currentLayer"
QT_MOC_LITERAL(6, 106, 28), // "onSingleGeometryCheckCleared"
QT_MOC_LITERAL(7, 135, 5), // "layer"
QT_MOC_LITERAL(8, 141, 24), // "onGeometryCheckCompleted"
QT_MOC_LITERAL(9, 166, 12), // "QgsFeatureId"
QT_MOC_LITERAL(10, 179, 3), // "fid"
QT_MOC_LITERAL(11, 183, 52), // "QList<std::shared_ptr<QgsSing..."
QT_MOC_LITERAL(12, 236, 6), // "errors"
QT_MOC_LITERAL(13, 243, 22), // "onGeometryCheckStarted"
QT_MOC_LITERAL(14, 266, 23), // "onTopologyChecksUpdated"
QT_MOC_LITERAL(15, 290, 46), // "QList<std::shared_ptr<QgsGeom..."
QT_MOC_LITERAL(16, 337, 23), // "onTopologyChecksCleared"
QT_MOC_LITERAL(17, 361, 22), // "onTopologyErrorUpdated"
QT_MOC_LITERAL(18, 384, 22), // "QgsGeometryCheckError*"
QT_MOC_LITERAL(19, 407, 5) // "error"

    },
    "QgsGeometryValidationModel\0"
    "aboutToRemoveSingleGeometryCheck\0\0"
    "setCurrentLayer\0QgsVectorLayer*\0"
    "currentLayer\0onSingleGeometryCheckCleared\0"
    "layer\0onGeometryCheckCompleted\0"
    "QgsFeatureId\0fid\0"
    "QList<std::shared_ptr<QgsSingleGeometryCheckError> >\0"
    "errors\0onGeometryCheckStarted\0"
    "onTopologyChecksUpdated\0"
    "QList<std::shared_ptr<QgsGeometryCheckError> >\0"
    "onTopologyChecksCleared\0onTopologyErrorUpdated\0"
    "QgsGeometryCheckError*\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryValidationModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    3,   61,    2, 0x08 /* Private */,
      13,    2,   68,    2, 0x08 /* Private */,
      14,    2,   73,    2, 0x08 /* Private */,
      16,    1,   78,    2, 0x08 /* Private */,
      17,    2,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 9, 0x80000000 | 11,    7,   10,   12,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 9,    7,   10,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 15,    7,   12,
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 18,    7,   19,

       0        // eod
};

void QgsGeometryValidationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeometryValidationModel *_t = static_cast<QgsGeometryValidationModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToRemoveSingleGeometryCheck(); break;
        case 1: _t->setCurrentLayer((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 2: _t->onSingleGeometryCheckCleared((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 3: _t->onGeometryCheckCompleted((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2])),(*reinterpret_cast< const QList<std::shared_ptr<QgsSingleGeometryCheckError> >(*)>(_a[3]))); break;
        case 4: _t->onGeometryCheckStarted((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2]))); break;
        case 5: _t->onTopologyChecksUpdated((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< const QList<std::shared_ptr<QgsGeometryCheckError> >(*)>(_a[2]))); break;
        case 6: _t->onTopologyChecksCleared((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 7: _t->onTopologyErrorUpdated((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsGeometryCheckError*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGeometryValidationModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeometryValidationModel::aboutToRemoveSingleGeometryCheck)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsGeometryValidationModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsGeometryValidationModel.data,
      qt_meta_data_QgsGeometryValidationModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeometryValidationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeometryValidationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeometryValidationModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsGeometryValidationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsGeometryValidationModel::aboutToRemoveSingleGeometryCheck()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
