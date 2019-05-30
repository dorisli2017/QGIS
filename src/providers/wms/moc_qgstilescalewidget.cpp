/****************************************************************************
** Meta object code from reading C++ file 'qgstilescalewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgstilescalewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstilescalewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTileScaleWidget_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTileScaleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTileScaleWidget_t qt_meta_stringdata_QgsTileScaleWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsTileScaleWidget"
QT_MOC_LITERAL(1, 19, 12), // "layerChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(4, 46, 5), // "layer"
QT_MOC_LITERAL(5, 52, 12), // "scaleChanged"
QT_MOC_LITERAL(6, 65, 20), // "mSlider_valueChanged"
QT_MOC_LITERAL(7, 86, 12), // "scaleEnabled"
QT_MOC_LITERAL(8, 99, 15), // "locationChanged"
QT_MOC_LITERAL(9, 115, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(10, 134, 4) // "area"

    },
    "QgsTileScaleWidget\0layerChanged\0\0"
    "QgsMapLayer*\0layer\0scaleChanged\0"
    "mSlider_valueChanged\0scaleEnabled\0"
    "locationChanged\0Qt::DockWidgetArea\0"
    "area"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTileScaleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void QgsTileScaleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTileScaleWidget *_t = static_cast<QgsTileScaleWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: _t->scaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->mSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->scaleEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->locationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsTileScaleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsTileScaleWidget.data,
      qt_meta_data_QgsTileScaleWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTileScaleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTileScaleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTileScaleWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsTileScaleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
