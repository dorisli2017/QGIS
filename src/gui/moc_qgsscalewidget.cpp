/****************************************************************************
** Meta object code from reading C++ file 'qgsscalewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsscalewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsscalewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsScaleWidget_t {
    QByteArrayData data[12];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsScaleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsScaleWidget_t qt_meta_stringdata_QgsScaleWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsScaleWidget"
QT_MOC_LITERAL(1, 15, 12), // "scaleChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "scale"
QT_MOC_LITERAL(4, 35, 8), // "setScale"
QT_MOC_LITERAL(5, 44, 12), // "updateScales"
QT_MOC_LITERAL(6, 57, 6), // "scales"
QT_MOC_LITERAL(7, 64, 18), // "setScaleFromCanvas"
QT_MOC_LITERAL(8, 83, 11), // "setMinScale"
QT_MOC_LITERAL(9, 95, 7), // "setNull"
QT_MOC_LITERAL(10, 103, 22), // "showCurrentScaleButton"
QT_MOC_LITERAL(11, 126, 8) // "minScale"

    },
    "QgsScaleWidget\0scaleChanged\0\0scale\0"
    "setScale\0updateScales\0scales\0"
    "setScaleFromCanvas\0setMinScale\0setNull\0"
    "showCurrentScaleButton\0minScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsScaleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       5,    1,   55,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x2a /* Public | MethodCloned */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00095103,
       3, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void QgsScaleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsScaleWidget *_t = static_cast<QgsScaleWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->updateScales((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->updateScales(); break;
        case 4: _t->setScaleFromCanvas(); break;
        case 5: _t->setMinScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setNull(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsScaleWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsScaleWidget::scaleChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsScaleWidget *_t = static_cast<QgsScaleWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showCurrentScaleButton(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->scale(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->minScale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsScaleWidget *_t = static_cast<QgsScaleWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowCurrentScaleButton(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setScale(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setMinScale(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsScaleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsScaleWidget.data,
      qt_meta_data_QgsScaleWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsScaleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsScaleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsScaleWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsScaleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsScaleWidget::scaleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
