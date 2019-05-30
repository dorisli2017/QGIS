/****************************************************************************
** Meta object code from reading C++ file 'qgsattributetablefiltermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsattributetablefiltermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributetablefiltermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributeTableFilterModel_t {
    QByteArrayData data[18];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTableFilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTableFilterModel_t qt_meta_stringdata_QgsAttributeTableFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsAttributeTableFilterModel"
QT_MOC_LITERAL(1, 29, 17), // "sortColumnChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "column"
QT_MOC_LITERAL(4, 55, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(5, 69, 5), // "order"
QT_MOC_LITERAL(6, 75, 14), // "extentsChanged"
QT_MOC_LITERAL(7, 90, 16), // "selectionChanged"
QT_MOC_LITERAL(8, 107, 16), // "onColumnsChanged"
QT_MOC_LITERAL(9, 124, 10), // "FilterMode"
QT_MOC_LITERAL(10, 135, 7), // "ShowAll"
QT_MOC_LITERAL(11, 143, 12), // "ShowSelected"
QT_MOC_LITERAL(12, 156, 11), // "ShowVisible"
QT_MOC_LITERAL(13, 168, 16), // "ShowFilteredList"
QT_MOC_LITERAL(14, 185, 10), // "ShowEdited"
QT_MOC_LITERAL(15, 196, 10), // "ColumnType"
QT_MOC_LITERAL(16, 207, 15), // "ColumnTypeField"
QT_MOC_LITERAL(17, 223, 22) // "ColumnTypeActionButton"

    },
    "QgsAttributeTableFilterModel\0"
    "sortColumnChanged\0\0column\0Qt::SortOrder\0"
    "order\0extentsChanged\0selectionChanged\0"
    "onColumnsChanged\0FilterMode\0ShowAll\0"
    "ShowSelected\0ShowVisible\0ShowFilteredList\0"
    "ShowEdited\0ColumnType\0ColumnTypeField\0"
    "ColumnTypeActionButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTableFilterModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       2,   42, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x0a /* Public */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
       9, 0x0,    5,   50,
      15, 0x0,    2,   60,

 // enum data: key, value
      10, uint(QgsAttributeTableFilterModel::ShowAll),
      11, uint(QgsAttributeTableFilterModel::ShowSelected),
      12, uint(QgsAttributeTableFilterModel::ShowVisible),
      13, uint(QgsAttributeTableFilterModel::ShowFilteredList),
      14, uint(QgsAttributeTableFilterModel::ShowEdited),
      16, uint(QgsAttributeTableFilterModel::ColumnTypeField),
      17, uint(QgsAttributeTableFilterModel::ColumnTypeActionButton),

       0        // eod
};

void QgsAttributeTableFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeTableFilterModel *_t = static_cast<QgsAttributeTableFilterModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sortColumnChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 1: _t->extentsChanged(); break;
        case 2: _t->selectionChanged(); break;
        case 3: _t->onColumnsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsAttributeTableFilterModel::*_t)(int , Qt::SortOrder );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableFilterModel::sortColumnChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsAttributeTableFilterModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsAttributeTableFilterModel.data,
      qt_meta_data_QgsAttributeTableFilterModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTableFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTableFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableFilterModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsFeatureModel"))
        return static_cast< QgsFeatureModel*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsAttributeTableFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QgsAttributeTableFilterModel::sortColumnChanged(int _t1, Qt::SortOrder _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
