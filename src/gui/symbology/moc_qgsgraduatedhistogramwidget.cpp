/****************************************************************************
** Meta object code from reading C++ file 'qgsgraduatedhistogramwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgraduatedhistogramwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgraduatedhistogramwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGraduatedHistogramWidget_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGraduatedHistogramWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGraduatedHistogramWidget_t qt_meta_stringdata_QgsGraduatedHistogramWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsGraduatedHistogramWidget"
QT_MOC_LITERAL(1, 28, 14), // "rangesModified"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "rangesAdded"
QT_MOC_LITERAL(4, 56, 10), // "mousePress"
QT_MOC_LITERAL(5, 67, 5), // "value"
QT_MOC_LITERAL(6, 73, 12) // "mouseRelease"

    },
    "QgsGraduatedHistogramWidget\0rangesModified\0"
    "\0rangesAdded\0mousePress\0value\0"
    "mouseRelease"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGraduatedHistogramWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,

       0        // eod
};

void QgsGraduatedHistogramWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGraduatedHistogramWidget *_t = static_cast<QgsGraduatedHistogramWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rangesModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->mousePress((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->mouseRelease((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGraduatedHistogramWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGraduatedHistogramWidget::rangesModified)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsGraduatedHistogramWidget::staticMetaObject = {
    { &QgsHistogramWidget::staticMetaObject, qt_meta_stringdata_QgsGraduatedHistogramWidget.data,
      qt_meta_data_QgsGraduatedHistogramWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGraduatedHistogramWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGraduatedHistogramWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGraduatedHistogramWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsHistogramWidget::qt_metacast(_clname);
}

int QgsGraduatedHistogramWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsHistogramWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsGraduatedHistogramWidget::rangesModified(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsGraduatedHistogramEventFilter_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGraduatedHistogramEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGraduatedHistogramEventFilter_t qt_meta_stringdata_QgsGraduatedHistogramEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsGraduatedHistogramEventFilter"
QT_MOC_LITERAL(1, 33, 10), // "mousePress"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 12) // "mouseRelease"

    },
    "QgsGraduatedHistogramEventFilter\0"
    "mousePress\0\0mouseRelease"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGraduatedHistogramEventFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       3,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void QgsGraduatedHistogramEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGraduatedHistogramEventFilter *_t = static_cast<QgsGraduatedHistogramEventFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePress((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->mouseRelease((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGraduatedHistogramEventFilter::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGraduatedHistogramEventFilter::mousePress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsGraduatedHistogramEventFilter::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGraduatedHistogramEventFilter::mouseRelease)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsGraduatedHistogramEventFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsGraduatedHistogramEventFilter.data,
      qt_meta_data_QgsGraduatedHistogramEventFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGraduatedHistogramEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGraduatedHistogramEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGraduatedHistogramEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsGraduatedHistogramEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QgsGraduatedHistogramEventFilter::mousePress(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGraduatedHistogramEventFilter::mouseRelease(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
