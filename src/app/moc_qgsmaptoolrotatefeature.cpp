/****************************************************************************
** Meta object code from reading C++ file 'qgsmaptoolrotatefeature.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmaptoolrotatefeature.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaptoolrotatefeature.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAngleMagnetWidget_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAngleMagnetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAngleMagnetWidget_t qt_meta_stringdata_QgsAngleMagnetWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsAngleMagnetWidget"
QT_MOC_LITERAL(1, 21, 12), // "angleChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "angle"
QT_MOC_LITERAL(4, 41, 20), // "angleEditingFinished"
QT_MOC_LITERAL(5, 62, 20), // "angleEditingCanceled"
QT_MOC_LITERAL(6, 83, 24) // "angleSpinBoxValueChanged"

    },
    "QgsAngleMagnetWidget\0angleChanged\0\0"
    "angle\0angleEditingFinished\0"
    "angleEditingCanceled\0angleSpinBoxValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAngleMagnetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void QgsAngleMagnetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAngleMagnetWidget *_t = static_cast<QgsAngleMagnetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->angleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->angleEditingFinished((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->angleEditingCanceled(); break;
        case 3: _t->angleSpinBoxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsAngleMagnetWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAngleMagnetWidget::angleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsAngleMagnetWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAngleMagnetWidget::angleEditingFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsAngleMagnetWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAngleMagnetWidget::angleEditingCanceled)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsAngleMagnetWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAngleMagnetWidget.data,
      qt_meta_data_QgsAngleMagnetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAngleMagnetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAngleMagnetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAngleMagnetWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAngleMagnetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsAngleMagnetWidget::angleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsAngleMagnetWidget::angleEditingFinished(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsAngleMagnetWidget::angleEditingCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QgsMapToolRotateFeature_t {
    QByteArrayData data[6];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapToolRotateFeature_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapToolRotateFeature_t qt_meta_stringdata_QgsMapToolRotateFeature = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsMapToolRotateFeature"
QT_MOC_LITERAL(1, 24, 16), // "updateRubberband"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 8), // "rotation"
QT_MOC_LITERAL(4, 51, 13), // "applyRotation"
QT_MOC_LITERAL(5, 65, 6) // "cancel"

    },
    "QgsMapToolRotateFeature\0updateRubberband\0"
    "\0rotation\0applyRotation\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapToolRotateFeature[] = {

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
       4,    1,   32,    2, 0x08 /* Private */,
       5,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

       0        // eod
};

void QgsMapToolRotateFeature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapToolRotateFeature *_t = static_cast<QgsMapToolRotateFeature *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateRubberband((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->applyRotation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->cancel(); break;
        default: ;
        }
    }
}

const QMetaObject QgsMapToolRotateFeature::staticMetaObject = {
    { &QgsMapToolEdit::staticMetaObject, qt_meta_stringdata_QgsMapToolRotateFeature.data,
      qt_meta_data_QgsMapToolRotateFeature,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapToolRotateFeature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapToolRotateFeature::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapToolRotateFeature.stringdata0))
        return static_cast<void*>(this);
    return QgsMapToolEdit::qt_metacast(_clname);
}

int QgsMapToolRotateFeature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
