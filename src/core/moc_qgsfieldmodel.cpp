/****************************************************************************
** Meta object code from reading C++ file 'qgsfieldmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsfieldmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfieldmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFieldModel_t {
    QByteArrayData data[9];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFieldModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFieldModel_t qt_meta_stringdata_QgsFieldModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsFieldModel"
QT_MOC_LITERAL(1, 14, 8), // "setLayer"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(4, 40, 5), // "layer"
QT_MOC_LITERAL(5, 46, 11), // "updateModel"
QT_MOC_LITERAL(6, 58, 12), // "layerDeleted"
QT_MOC_LITERAL(7, 71, 15), // "allowExpression"
QT_MOC_LITERAL(8, 87, 19) // "allowEmptyFieldName"

    },
    "QgsFieldModel\0setLayer\0\0QgsVectorLayer*\0"
    "layer\0updateModel\0layerDeleted\0"
    "allowExpression\0allowEmptyFieldName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFieldModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    0,   32,    2, 0x09 /* Protected */,
       6,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       4, 0x80000000 | 3, 0x0009510b,

       0        // eod
};

void QgsFieldModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFieldModel *_t = static_cast<QgsFieldModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setLayer((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: _t->layerDeleted(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsFieldModel *_t = static_cast<QgsFieldModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->allowExpression(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->allowEmptyFieldName(); break;
        case 2: *reinterpret_cast< QgsVectorLayer**>(_v) = _t->layer(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsFieldModel *_t = static_cast<QgsFieldModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAllowExpression(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAllowEmptyFieldName(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setLayer(*reinterpret_cast< QgsVectorLayer**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsFieldModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsFieldModel.data,
      qt_meta_data_QgsFieldModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFieldModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFieldModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFieldModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsFieldModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
