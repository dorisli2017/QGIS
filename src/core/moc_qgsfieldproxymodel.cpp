/****************************************************************************
** Meta object code from reading C++ file 'qgsfieldproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsfieldproxymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfieldproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFieldProxyModel_t {
    QByteArrayData data[11];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFieldProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFieldProxyModel_t qt_meta_stringdata_QgsFieldProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsFieldProxyModel"
QT_MOC_LITERAL(1, 19, 7), // "Filters"
QT_MOC_LITERAL(2, 27, 6), // "String"
QT_MOC_LITERAL(3, 34, 3), // "Int"
QT_MOC_LITERAL(4, 38, 8), // "LongLong"
QT_MOC_LITERAL(5, 47, 6), // "Double"
QT_MOC_LITERAL(6, 54, 7), // "Numeric"
QT_MOC_LITERAL(7, 62, 4), // "Date"
QT_MOC_LITERAL(8, 67, 4), // "Time"
QT_MOC_LITERAL(9, 72, 12), // "HideReadOnly"
QT_MOC_LITERAL(10, 85, 8) // "AllTypes"

    },
    "QgsFieldProxyModel\0Filters\0String\0Int\0"
    "LongLong\0Double\0Numeric\0Date\0Time\0"
    "HideReadOnly\0AllTypes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFieldProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x1,    9,   18,

 // enum data: key, value
       2, uint(QgsFieldProxyModel::String),
       3, uint(QgsFieldProxyModel::Int),
       4, uint(QgsFieldProxyModel::LongLong),
       5, uint(QgsFieldProxyModel::Double),
       6, uint(QgsFieldProxyModel::Numeric),
       7, uint(QgsFieldProxyModel::Date),
       8, uint(QgsFieldProxyModel::Time),
       9, uint(QgsFieldProxyModel::HideReadOnly),
      10, uint(QgsFieldProxyModel::AllTypes),

       0        // eod
};

void QgsFieldProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsFieldProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsFieldProxyModel.data,
      qt_meta_data_QgsFieldProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFieldProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFieldProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFieldProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsFieldProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
