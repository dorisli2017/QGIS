/****************************************************************************
** Meta object code from reading C++ file 'qgsgeoreftooladdpoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeoreftooladdpoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeoreftooladdpoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeorefToolAddPoint_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeorefToolAddPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeorefToolAddPoint_t qt_meta_stringdata_QgsGeorefToolAddPoint = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsGeorefToolAddPoint"
QT_MOC_LITERAL(1, 22, 15), // "showCoordDialog"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10) // "QgsPointXY"

    },
    "QgsGeorefToolAddPoint\0showCoordDialog\0"
    "\0QgsPointXY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeorefToolAddPoint[] = {

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
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void QgsGeorefToolAddPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeorefToolAddPoint *_t = static_cast<QgsGeorefToolAddPoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showCoordDialog((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGeorefToolAddPoint::*_t)(const QgsPointXY & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeorefToolAddPoint::showCoordDialog)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsGeorefToolAddPoint::staticMetaObject = {
    { &QgsMapToolEmitPoint::staticMetaObject, qt_meta_stringdata_QgsGeorefToolAddPoint.data,
      qt_meta_data_QgsGeorefToolAddPoint,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeorefToolAddPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeorefToolAddPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeorefToolAddPoint.stringdata0))
        return static_cast<void*>(this);
    return QgsMapToolEmitPoint::qt_metacast(_clname);
}

int QgsGeorefToolAddPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapToolEmitPoint::qt_metacall(_c, _id, _a);
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
void QgsGeorefToolAddPoint::showCoordDialog(const QgsPointXY & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
