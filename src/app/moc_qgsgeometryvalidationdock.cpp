/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometryvalidationdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometryvalidationdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometryvalidationdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometryValidationDock_t {
    QByteArrayData data[23];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryValidationDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryValidationDock_t qt_meta_stringdata_QgsGeometryValidationDock = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsGeometryValidationDock"
QT_MOC_LITERAL(1, 26, 18), // "updateCurrentError"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "onCurrentErrorChanged"
QT_MOC_LITERAL(4, 68, 7), // "current"
QT_MOC_LITERAL(5, 76, 8), // "previous"
QT_MOC_LITERAL(6, 85, 21), // "updateMapCanvasExtent"
QT_MOC_LITERAL(7, 107, 21), // "onCurrentLayerChanged"
QT_MOC_LITERAL(8, 129, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(9, 142, 5), // "layer"
QT_MOC_LITERAL(10, 148, 27), // "onLayerEditingStatusChanged"
QT_MOC_LITERAL(11, 176, 16), // "onLayerDestroyed"
QT_MOC_LITERAL(12, 193, 13), // "gotoNextError"
QT_MOC_LITERAL(13, 207, 17), // "gotoPreviousError"
QT_MOC_LITERAL(14, 225, 13), // "zoomToProblem"
QT_MOC_LITERAL(15, 239, 13), // "zoomToFeature"
QT_MOC_LITERAL(16, 253, 20), // "updateLayerTransform"
QT_MOC_LITERAL(17, 274, 13), // "onDataChanged"
QT_MOC_LITERAL(18, 288, 7), // "topLeft"
QT_MOC_LITERAL(19, 296, 11), // "bottomRight"
QT_MOC_LITERAL(20, 308, 12), // "QVector<int>"
QT_MOC_LITERAL(21, 321, 5), // "roles"
QT_MOC_LITERAL(22, 327, 14) // "onRowsInserted"

    },
    "QgsGeometryValidationDock\0updateCurrentError\0"
    "\0onCurrentErrorChanged\0current\0previous\0"
    "updateMapCanvasExtent\0onCurrentLayerChanged\0"
    "QgsMapLayer*\0layer\0onLayerEditingStatusChanged\0"
    "onLayerDestroyed\0gotoNextError\0"
    "gotoPreviousError\0zoomToProblem\0"
    "zoomToFeature\0updateLayerTransform\0"
    "onDataChanged\0topLeft\0bottomRight\0"
    "QVector<int>\0roles\0onRowsInserted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryValidationDock[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    2,   80,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    1,   86,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    3,   98,    2, 0x08 /* Private */,
      22,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 20,   18,   19,   21,
    QMetaType::Void,

       0        // eod
};

void QgsGeometryValidationDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeometryValidationDock *_t = static_cast<QgsGeometryValidationDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCurrentError(); break;
        case 1: _t->onCurrentErrorChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: _t->updateMapCanvasExtent(); break;
        case 3: _t->onCurrentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 4: _t->onLayerEditingStatusChanged(); break;
        case 5: _t->onLayerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->gotoNextError(); break;
        case 7: _t->gotoPreviousError(); break;
        case 8: _t->zoomToProblem(); break;
        case 9: _t->zoomToFeature(); break;
        case 10: _t->updateLayerTransform(); break;
        case 11: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 12: _t->onRowsInserted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject QgsGeometryValidationDock::staticMetaObject = {
    { &QgsDockWidget::staticMetaObject, qt_meta_stringdata_QgsGeometryValidationDock.data,
      qt_meta_data_QgsGeometryValidationDock,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeometryValidationDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeometryValidationDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeometryValidationDock.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_QgsGeometryValidationDockBase"))
        return static_cast< Ui_QgsGeometryValidationDockBase*>(this);
    return QgsDockWidget::qt_metacast(_clname);
}

int QgsGeometryValidationDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
