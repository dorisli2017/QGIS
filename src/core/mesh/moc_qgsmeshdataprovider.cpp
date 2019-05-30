/****************************************************************************
** Meta object code from reading C++ file 'qgsmeshdataprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmeshdataprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmeshdataprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMeshDataProvider_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshDataProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshDataProvider_t qt_meta_stringdata_QgsMeshDataProvider = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsMeshDataProvider"
QT_MOC_LITERAL(1, 20, 18), // "datasetGroupsAdded"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5) // "count"

    },
    "QgsMeshDataProvider\0datasetGroupsAdded\0"
    "\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshDataProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QgsMeshDataProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshDataProvider *_t = static_cast<QgsMeshDataProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->datasetGroupsAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMeshDataProvider::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshDataProvider::datasetGroupsAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsMeshDataProvider::staticMetaObject = {
    { &QgsDataProvider::staticMetaObject, qt_meta_stringdata_QgsMeshDataProvider.data,
      qt_meta_data_QgsMeshDataProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshDataProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshDataProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshDataProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsMeshDataSourceInterface"))
        return static_cast< QgsMeshDataSourceInterface*>(this);
    if (!strcmp(_clname, "QgsMeshDatasetSourceInterface"))
        return static_cast< QgsMeshDatasetSourceInterface*>(this);
    return QgsDataProvider::qt_metacast(_clname);
}

int QgsMeshDataProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QgsMeshDataProvider::datasetGroupsAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
