/****************************************************************************
** Meta object code from reading C++ file 'qgsvirtuallayersourceselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsvirtuallayersourceselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvirtuallayersourceselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVirtualLayerSourceSelect_t {
    QByteArrayData data[14];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVirtualLayerSourceSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVirtualLayerSourceSelect_t qt_meta_stringdata_QgsVirtualLayerSourceSelect = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsVirtualLayerSourceSelect"
QT_MOC_LITERAL(1, 28, 7), // "refresh"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "addButtonClicked"
QT_MOC_LITERAL(4, 54, 9), // "testQuery"
QT_MOC_LITERAL(5, 64, 9), // "browseCRS"
QT_MOC_LITERAL(6, 74, 17), // "layerComboChanged"
QT_MOC_LITERAL(7, 92, 8), // "addLayer"
QT_MOC_LITERAL(8, 101, 11), // "removeLayer"
QT_MOC_LITERAL(9, 113, 11), // "importLayer"
QT_MOC_LITERAL(10, 125, 15), // "tableRowChanged"
QT_MOC_LITERAL(11, 141, 7), // "current"
QT_MOC_LITERAL(12, 149, 8), // "previous"
QT_MOC_LITERAL(13, 158, 16) // "updateLayersList"

    },
    "QgsVirtualLayerSourceSelect\0refresh\0"
    "\0addButtonClicked\0testQuery\0browseCRS\0"
    "layerComboChanged\0addLayer\0removeLayer\0"
    "importLayer\0tableRowChanged\0current\0"
    "previous\0updateLayersList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVirtualLayerSourceSelect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    2,   74,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   11,   12,
    QMetaType::Void,

       0        // eod
};

void QgsVirtualLayerSourceSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVirtualLayerSourceSelect *_t = static_cast<QgsVirtualLayerSourceSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->addButtonClicked(); break;
        case 2: _t->testQuery(); break;
        case 3: _t->browseCRS(); break;
        case 4: _t->layerComboChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->addLayer(); break;
        case 6: _t->removeLayer(); break;
        case 7: _t->importLayer(); break;
        case 8: _t->tableRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 9: _t->updateLayersList(); break;
        default: ;
        }
    }
}

const QMetaObject QgsVirtualLayerSourceSelect::staticMetaObject = {
    { &QgsAbstractDataSourceWidget::staticMetaObject, qt_meta_stringdata_QgsVirtualLayerSourceSelect.data,
      qt_meta_data_QgsVirtualLayerSourceSelect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVirtualLayerSourceSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVirtualLayerSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVirtualLayerSourceSelect.stringdata0))
        return static_cast<void*>(this);
    return QgsAbstractDataSourceWidget::qt_metacast(_clname);
}

int QgsVirtualLayerSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractDataSourceWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
