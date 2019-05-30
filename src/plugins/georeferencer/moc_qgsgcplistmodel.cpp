/****************************************************************************
** Meta object code from reading C++ file 'qgsgcplistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgcplistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgcplistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGCPListModel_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGCPListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGCPListModel_t qt_meta_stringdata_QgsGCPListModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsGCPListModel"
QT_MOC_LITERAL(1, 16, 16), // "replaceDataPoint"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "QgsGeorefDataPoint*"
QT_MOC_LITERAL(4, 54, 12), // "newDataPoint"
QT_MOC_LITERAL(5, 67, 1), // "i"
QT_MOC_LITERAL(6, 69, 17), // "onGCPListModified"
QT_MOC_LITERAL(7, 87, 24) // "onTransformationModified"

    },
    "QgsGCPListModel\0replaceDataPoint\0\0"
    "QgsGeorefDataPoint*\0newDataPoint\0i\0"
    "onGCPListModified\0onTransformationModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGCPListModel[] = {

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
       1,    2,   29,    2, 0x0a /* Public */,
       6,    0,   34,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsGCPListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGCPListModel *_t = static_cast<QgsGCPListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replaceDataPoint((*reinterpret_cast< QgsGeorefDataPoint*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onGCPListModified(); break;
        case 2: _t->onTransformationModified(); break;
        default: ;
        }
    }
}

const QMetaObject QgsGCPListModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_QgsGCPListModel.data,
      qt_meta_data_QgsGCPListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGCPListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGCPListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGCPListModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int QgsGCPListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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
