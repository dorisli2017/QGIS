/****************************************************************************
** Meta object code from reading C++ file 'qgseditorwidgetwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgseditorwidgetwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgseditorwidgetwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsEditorWidgetWrapper_t {
    QByteArrayData data[20];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsEditorWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsEditorWidgetWrapper_t qt_meta_stringdata_QgsEditorWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsEditorWidgetWrapper"
QT_MOC_LITERAL(1, 23, 12), // "valueChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 23), // "constraintStatusChanged"
QT_MOC_LITERAL(5, 67, 10), // "constraint"
QT_MOC_LITERAL(6, 78, 4), // "desc"
QT_MOC_LITERAL(7, 83, 3), // "err"
QT_MOC_LITERAL(8, 87, 40), // "QgsEditorWidgetWrapper::Const..."
QT_MOC_LITERAL(9, 128, 6), // "status"
QT_MOC_LITERAL(10, 135, 30), // "constraintResultVisibleChanged"
QT_MOC_LITERAL(11, 166, 7), // "visible"
QT_MOC_LITERAL(12, 174, 10), // "setFeature"
QT_MOC_LITERAL(13, 185, 10), // "QgsFeature"
QT_MOC_LITERAL(14, 196, 7), // "feature"
QT_MOC_LITERAL(15, 204, 8), // "setValue"
QT_MOC_LITERAL(16, 213, 16), // "emitValueChanged"
QT_MOC_LITERAL(17, 230, 23), // "constraintResultVisible"
QT_MOC_LITERAL(18, 254, 16), // "constraintResult"
QT_MOC_LITERAL(19, 271, 16) // "ConstraintResult"

    },
    "QgsEditorWidgetWrapper\0valueChanged\0"
    "\0value\0constraintStatusChanged\0"
    "constraint\0desc\0err\0"
    "QgsEditorWidgetWrapper::ConstraintResult\0"
    "status\0constraintResultVisibleChanged\0"
    "visible\0setFeature\0QgsFeature\0feature\0"
    "setValue\0emitValueChanged\0"
    "constraintResultVisible\0constraintResult\0"
    "ConstraintResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsEditorWidgetWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    4,   47,    2, 0x06 /* Public */,
      10,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   59,    2, 0x0a /* Public */,
      15,    1,   62,    2, 0x0a /* Public */,
      16,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 8,    5,    6,    7,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::Bool, 0x00495103,
      18, 0x80000000 | 19, 0x00495009,

 // properties: notify_signal_id
       2,
       1,

       0        // eod
};

void QgsEditorWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsEditorWidgetWrapper *_t = static_cast<QgsEditorWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->constraintStatusChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QgsEditorWidgetWrapper::ConstraintResult(*)>(_a[4]))); break;
        case 2: _t->constraintResultVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setFeature((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 4: _t->setValue((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 5: _t->emitValueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsEditorWidgetWrapper::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsEditorWidgetWrapper::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsEditorWidgetWrapper::*_t)(const QString & , const QString & , const QString & , QgsEditorWidgetWrapper::ConstraintResult );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsEditorWidgetWrapper::constraintStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsEditorWidgetWrapper::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsEditorWidgetWrapper::constraintResultVisibleChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsEditorWidgetWrapper *_t = static_cast<QgsEditorWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->constraintResultVisible(); break;
        case 1: *reinterpret_cast< ConstraintResult*>(_v) = _t->constraintResult(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsEditorWidgetWrapper *_t = static_cast<QgsEditorWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConstraintResultVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsEditorWidgetWrapper::staticMetaObject = {
    { &QgsWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsEditorWidgetWrapper.data,
      qt_meta_data_QgsEditorWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsEditorWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsEditorWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsEditorWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    return QgsWidgetWrapper::qt_metacast(_clname);
}

int QgsEditorWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsWidgetWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void QgsEditorWidgetWrapper::valueChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsEditorWidgetWrapper::constraintStatusChanged(const QString & _t1, const QString & _t2, const QString & _t3, QgsEditorWidgetWrapper::ConstraintResult _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsEditorWidgetWrapper::constraintResultVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
