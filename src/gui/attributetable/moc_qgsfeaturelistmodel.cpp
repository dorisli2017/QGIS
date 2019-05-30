/****************************************************************************
** Meta object code from reading C++ file 'qgsfeaturelistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsfeaturelistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfeaturelistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFeatureListModel_t {
    QByteArrayData data[9];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFeatureListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFeatureListModel_t qt_meta_stringdata_QgsFeatureListModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsFeatureListModel"
QT_MOC_LITERAL(1, 20, 17), // "onBeginRemoveRows"
QT_MOC_LITERAL(2, 38, 17), // "Q_DECL_DEPRECATED"
QT_MOC_LITERAL(3, 56, 6), // "parent"
QT_MOC_LITERAL(4, 63, 5), // "first"
QT_MOC_LITERAL(5, 69, 4), // "last"
QT_MOC_LITERAL(6, 74, 15), // "onEndRemoveRows"
QT_MOC_LITERAL(7, 90, 17), // "onBeginInsertRows"
QT_MOC_LITERAL(8, 108, 15) // "onEndInsertRows"

    },
    "QgsFeatureListModel\0onBeginRemoveRows\0"
    "Q_DECL_DEPRECATED\0parent\0first\0last\0"
    "onEndRemoveRows\0onBeginInsertRows\0"
    "onEndInsertRows"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFeatureListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       6,    3,   41,    2, 0x0a /* Public */,
       7,    3,   48,    2, 0x0a /* Public */,
       8,    3,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,

       0        // eod
};

void QgsFeatureListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFeatureListModel *_t = static_cast<QgsFeatureListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onBeginRemoveRows((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->onEndRemoveRows((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->onBeginInsertRows((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->onEndInsertRows((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsFeatureListModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsFeatureListModel.data,
      qt_meta_data_QgsFeatureListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFeatureListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFeatureListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFeatureListModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsFeatureModel"))
        return static_cast< QgsFeatureModel*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsFeatureListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
