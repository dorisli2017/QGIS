/****************************************************************************
** Meta object code from reading C++ file 'qgsmaptooloffsetcurve.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmaptooloffsetcurve.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaptooloffsetcurve.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsOffsetUserWidget_t {
    QByteArrayData data[9];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsOffsetUserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsOffsetUserWidget_t qt_meta_stringdata_QgsOffsetUserWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsOffsetUserWidget"
QT_MOC_LITERAL(1, 20, 13), // "offsetChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "offset"
QT_MOC_LITERAL(4, 42, 21), // "offsetEditingFinished"
QT_MOC_LITERAL(5, 64, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(6, 86, 9), // "modifiers"
QT_MOC_LITERAL(7, 96, 21), // "offsetEditingCanceled"
QT_MOC_LITERAL(8, 118, 19) // "offsetConfigChanged"

    },
    "QgsOffsetUserWidget\0offsetChanged\0\0"
    "offset\0offsetEditingFinished\0"
    "Qt::KeyboardModifiers\0modifiers\0"
    "offsetEditingCanceled\0offsetConfigChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsOffsetUserWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,
       7,    0,   42,    2, 0x06 /* Public */,
       8,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 5,    3,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsOffsetUserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsOffsetUserWidget *_t = static_cast<QgsOffsetUserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->offsetChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->offsetEditingFinished((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const Qt::KeyboardModifiers(*)>(_a[2]))); break;
        case 2: _t->offsetEditingCanceled(); break;
        case 3: _t->offsetConfigChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsOffsetUserWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsOffsetUserWidget::offsetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsOffsetUserWidget::*_t)(double , const Qt::KeyboardModifiers & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsOffsetUserWidget::offsetEditingFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsOffsetUserWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsOffsetUserWidget::offsetEditingCanceled)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsOffsetUserWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsOffsetUserWidget::offsetConfigChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QgsOffsetUserWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsOffsetUserWidget.data,
      qt_meta_data_QgsOffsetUserWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsOffsetUserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsOffsetUserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsOffsetUserWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsOffsetUserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QgsOffsetUserWidget::offsetChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsOffsetUserWidget::offsetEditingFinished(double _t1, const Qt::KeyboardModifiers & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsOffsetUserWidget::offsetEditingCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsOffsetUserWidget::offsetConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_QgsMapToolOffsetCurve_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapToolOffsetCurve_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapToolOffsetCurve_t qt_meta_stringdata_QgsMapToolOffsetCurve = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsMapToolOffsetCurve"
QT_MOC_LITERAL(1, 22, 27), // "updateGeometryAndRubberBand"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 6), // "offset"
QT_MOC_LITERAL(4, 58, 11), // "applyOffset"
QT_MOC_LITERAL(5, 70, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(6, 92, 9), // "modifiers"
QT_MOC_LITERAL(7, 102, 6) // "cancel"

    },
    "QgsMapToolOffsetCurve\0updateGeometryAndRubberBand\0"
    "\0offset\0applyOffset\0Qt::KeyboardModifiers\0"
    "modifiers\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapToolOffsetCurve[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    2,   32,    2, 0x08 /* Private */,
       7,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 5,    3,    6,
    QMetaType::Void,

       0        // eod
};

void QgsMapToolOffsetCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapToolOffsetCurve *_t = static_cast<QgsMapToolOffsetCurve *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGeometryAndRubberBand((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->applyOffset((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        case 2: _t->cancel(); break;
        default: ;
        }
    }
}

const QMetaObject QgsMapToolOffsetCurve::staticMetaObject = {
    { &QgsMapToolEdit::staticMetaObject, qt_meta_stringdata_QgsMapToolOffsetCurve.data,
      qt_meta_data_QgsMapToolOffsetCurve,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapToolOffsetCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapToolOffsetCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapToolOffsetCurve.stringdata0))
        return static_cast<void*>(this);
    return QgsMapToolEdit::qt_metacast(_clname);
}

int QgsMapToolOffsetCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapToolEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
