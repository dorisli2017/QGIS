/****************************************************************************
** Meta object code from reading C++ file 'qgslayercapabilitiesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayercapabilitiesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayercapabilitiesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayerCapabilitiesModel_t {
    QByteArrayData data[7];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerCapabilitiesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerCapabilitiesModel_t qt_meta_stringdata_QgsLayerCapabilitiesModel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsLayerCapabilitiesModel"
QT_MOC_LITERAL(1, 26, 13), // "setFilterText"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "filterText"
QT_MOC_LITERAL(4, 52, 19), // "toggleSelectedItems"
QT_MOC_LITERAL(5, 72, 15), // "QModelIndexList"
QT_MOC_LITERAL(6, 88, 14) // "checkedIndexes"

    },
    "QgsLayerCapabilitiesModel\0setFilterText\0"
    "\0filterText\0toggleSelectedItems\0"
    "QModelIndexList\0checkedIndexes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerCapabilitiesModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       1,    0,   32,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void QgsLayerCapabilitiesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerCapabilitiesModel *_t = static_cast<QgsLayerCapabilitiesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFilterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setFilterText(); break;
        case 2: _t->toggleSelectedItems((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsLayerCapabilitiesModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsLayerCapabilitiesModel.data,
      qt_meta_data_QgsLayerCapabilitiesModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerCapabilitiesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerCapabilitiesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerCapabilitiesModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsLayerCapabilitiesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
