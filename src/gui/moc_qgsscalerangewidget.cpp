/****************************************************************************
** Meta object code from reading C++ file 'qgsscalerangewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsscalerangewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsscalerangewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsScaleRangeWidget_t {
    QByteArrayData data[12];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsScaleRangeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsScaleRangeWidget_t qt_meta_stringdata_QgsScaleRangeWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsScaleRangeWidget"
QT_MOC_LITERAL(1, 20, 12), // "rangeChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "min"
QT_MOC_LITERAL(4, 38, 3), // "max"
QT_MOC_LITERAL(5, 42, 15), // "setMinimumScale"
QT_MOC_LITERAL(6, 58, 5), // "scale"
QT_MOC_LITERAL(7, 64, 15), // "setMaximumScale"
QT_MOC_LITERAL(8, 80, 13), // "setScaleRange"
QT_MOC_LITERAL(9, 94, 16), // "emitRangeChanged"
QT_MOC_LITERAL(10, 111, 12), // "minimumScale"
QT_MOC_LITERAL(11, 124, 12) // "maximumScale"

    },
    "QgsScaleRangeWidget\0rangeChanged\0\0min\0"
    "max\0setMinimumScale\0scale\0setMaximumScale\0"
    "setScaleRange\0emitRangeChanged\0"
    "minimumScale\0maximumScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsScaleRangeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   44,    2, 0x0a /* Public */,
       7,    1,   47,    2, 0x0a /* Public */,
       8,    2,   50,    2, 0x0a /* Public */,
       9,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Double, 0x00095103,
      11, QMetaType::Double, 0x00095103,

       0        // eod
};

void QgsScaleRangeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsScaleRangeWidget *_t = static_cast<QgsScaleRangeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rangeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->setMinimumScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setMaximumScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setScaleRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->emitRangeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsScaleRangeWidget::*_t)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsScaleRangeWidget::rangeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsScaleRangeWidget *_t = static_cast<QgsScaleRangeWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->minimumScale(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->maximumScale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsScaleRangeWidget *_t = static_cast<QgsScaleRangeWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimumScale(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMaximumScale(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsScaleRangeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsScaleRangeWidget.data,
      qt_meta_data_QgsScaleRangeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsScaleRangeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsScaleRangeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsScaleRangeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsScaleRangeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsScaleRangeWidget::rangeChanged(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
