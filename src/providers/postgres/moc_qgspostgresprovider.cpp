/****************************************************************************
** Meta object code from reading C++ file 'qgspostgresprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgspostgresprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspostgresprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPostgresProvider_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPostgresProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPostgresProvider_t qt_meta_stringdata_QgsPostgresProvider = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsPostgresProvider"
QT_MOC_LITERAL(1, 20, 7), // "Relkind"
QT_MOC_LITERAL(2, 28, 7), // "Unknown"
QT_MOC_LITERAL(3, 36, 13), // "OrdinaryTable"
QT_MOC_LITERAL(4, 50, 5), // "Index"
QT_MOC_LITERAL(5, 56, 8), // "Sequence"
QT_MOC_LITERAL(6, 65, 4), // "View"
QT_MOC_LITERAL(7, 70, 16), // "MaterializedView"
QT_MOC_LITERAL(8, 87, 13), // "CompositeType"
QT_MOC_LITERAL(9, 101, 10), // "ToastTable"
QT_MOC_LITERAL(10, 112, 12), // "ForeignTable"
QT_MOC_LITERAL(11, 125, 16) // "PartitionedTable"

    },
    "QgsPostgresProvider\0Relkind\0Unknown\0"
    "OrdinaryTable\0Index\0Sequence\0View\0"
    "MaterializedView\0CompositeType\0"
    "ToastTable\0ForeignTable\0PartitionedTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPostgresProvider[] = {

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
       1, 0x0,   10,   18,

 // enum data: key, value
       2, uint(QgsPostgresProvider::Unknown),
       3, uint(QgsPostgresProvider::OrdinaryTable),
       4, uint(QgsPostgresProvider::Index),
       5, uint(QgsPostgresProvider::Sequence),
       6, uint(QgsPostgresProvider::View),
       7, uint(QgsPostgresProvider::MaterializedView),
       8, uint(QgsPostgresProvider::CompositeType),
       9, uint(QgsPostgresProvider::ToastTable),
      10, uint(QgsPostgresProvider::ForeignTable),
      11, uint(QgsPostgresProvider::PartitionedTable),

       0        // eod
};

void QgsPostgresProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsPostgresProvider::staticMetaObject = {
    { &QgsVectorDataProvider::staticMetaObject, qt_meta_stringdata_QgsPostgresProvider.data,
      qt_meta_data_QgsPostgresProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPostgresProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPostgresProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPostgresProvider.stringdata0))
        return static_cast<void*>(this);
    return QgsVectorDataProvider::qt_metacast(_clname);
}

int QgsPostgresProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsVectorDataProvider::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
