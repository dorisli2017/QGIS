/****************************************************************************
** Meta object code from reading C++ file 'qgsmaptoolsimplify.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmaptoolsimplify.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaptoolsimplify.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapToolSimplify_t {
    QByteArrayData data[12];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapToolSimplify_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapToolSimplify_t qt_meta_stringdata_QgsMapToolSimplify = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsMapToolSimplify"
QT_MOC_LITERAL(1, 19, 12), // "setTolerance"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "tolerance"
QT_MOC_LITERAL(4, 43, 17), // "setToleranceUnits"
QT_MOC_LITERAL(5, 61, 22), // "QgsTolerance::UnitType"
QT_MOC_LITERAL(6, 84, 5), // "units"
QT_MOC_LITERAL(7, 90, 15), // "storeSimplified"
QT_MOC_LITERAL(8, 106, 14), // "clearSelection"
QT_MOC_LITERAL(9, 121, 9), // "setMethod"
QT_MOC_LITERAL(10, 131, 6), // "Method"
QT_MOC_LITERAL(11, 138, 6) // "method"

    },
    "QgsMapToolSimplify\0setTolerance\0\0"
    "tolerance\0setToleranceUnits\0"
    "QgsTolerance::UnitType\0units\0"
    "storeSimplified\0clearSelection\0setMethod\0"
    "Method\0method"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapToolSimplify[] = {

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
       4,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,
       8,    0,   46,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void QgsMapToolSimplify::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapToolSimplify *_t = static_cast<QgsMapToolSimplify *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTolerance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setToleranceUnits((*reinterpret_cast< QgsTolerance::UnitType(*)>(_a[1]))); break;
        case 2: _t->storeSimplified(); break;
        case 3: _t->clearSelection(); break;
        case 4: _t->setMethod((*reinterpret_cast< Method(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsMapToolSimplify::staticMetaObject = {
    { &QgsMapToolEdit::staticMetaObject, qt_meta_stringdata_QgsMapToolSimplify.data,
      qt_meta_data_QgsMapToolSimplify,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapToolSimplify::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapToolSimplify::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapToolSimplify.stringdata0))
        return static_cast<void*>(this);
    return QgsMapToolEdit::qt_metacast(_clname);
}

int QgsMapToolSimplify::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapToolEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsSimplifyUserInputWidget_t {
    QByteArrayData data[16];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSimplifyUserInputWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSimplifyUserInputWidget_t qt_meta_stringdata_QgsSimplifyUserInputWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsSimplifyUserInputWidget"
QT_MOC_LITERAL(1, 27, 8), // "accepted"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "rejected"
QT_MOC_LITERAL(4, 46, 16), // "toleranceChanged"
QT_MOC_LITERAL(5, 63, 9), // "tolerance"
QT_MOC_LITERAL(6, 73, 21), // "toleranceUnitsChanged"
QT_MOC_LITERAL(7, 95, 22), // "QgsTolerance::UnitType"
QT_MOC_LITERAL(8, 118, 5), // "units"
QT_MOC_LITERAL(9, 124, 13), // "methodChanged"
QT_MOC_LITERAL(10, 138, 26), // "QgsMapToolSimplify::Method"
QT_MOC_LITERAL(11, 165, 6), // "method"
QT_MOC_LITERAL(12, 172, 19), // "smoothOffsetChanged"
QT_MOC_LITERAL(13, 192, 6), // "offset"
QT_MOC_LITERAL(14, 199, 23), // "smoothIterationsChanged"
QT_MOC_LITERAL(15, 223, 10) // "iterations"

    },
    "QgsSimplifyUserInputWidget\0accepted\0"
    "\0rejected\0toleranceChanged\0tolerance\0"
    "toleranceUnitsChanged\0QgsTolerance::UnitType\0"
    "units\0methodChanged\0QgsMapToolSimplify::Method\0"
    "method\0smoothOffsetChanged\0offset\0"
    "smoothIterationsChanged\0iterations"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSimplifyUserInputWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,
       6,    1,   54,    2, 0x06 /* Public */,
       9,    1,   57,    2, 0x06 /* Public */,
      12,    1,   60,    2, 0x06 /* Public */,
      14,    1,   63,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void QgsSimplifyUserInputWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSimplifyUserInputWidget *_t = static_cast<QgsSimplifyUserInputWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->rejected(); break;
        case 2: _t->toleranceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->toleranceUnitsChanged((*reinterpret_cast< QgsTolerance::UnitType(*)>(_a[1]))); break;
        case 4: _t->methodChanged((*reinterpret_cast< QgsMapToolSimplify::Method(*)>(_a[1]))); break;
        case 5: _t->smoothOffsetChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->smoothIterationsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsSimplifyUserInputWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSimplifyUserInputWidget::accepted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsSimplifyUserInputWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSimplifyUserInputWidget::rejected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsSimplifyUserInputWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSimplifyUserInputWidget::toleranceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsSimplifyUserInputWidget::*_t)(QgsTolerance::UnitType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSimplifyUserInputWidget::toleranceUnitsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsSimplifyUserInputWidget::*_t)(QgsMapToolSimplify::Method );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSimplifyUserInputWidget::methodChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsSimplifyUserInputWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSimplifyUserInputWidget::smoothOffsetChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsSimplifyUserInputWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSimplifyUserInputWidget::smoothIterationsChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QgsSimplifyUserInputWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsSimplifyUserInputWidget.data,
      qt_meta_data_QgsSimplifyUserInputWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSimplifyUserInputWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSimplifyUserInputWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSimplifyUserInputWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsSimplifyUserInputWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QgsSimplifyUserInputWidget::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsSimplifyUserInputWidget::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsSimplifyUserInputWidget::toleranceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsSimplifyUserInputWidget::toleranceUnitsChanged(QgsTolerance::UnitType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsSimplifyUserInputWidget::methodChanged(QgsMapToolSimplify::Method _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsSimplifyUserInputWidget::smoothOffsetChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsSimplifyUserInputWidget::smoothIterationsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
