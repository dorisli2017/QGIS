/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutItem_t {
    QByteArrayData data[20];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutItem_t qt_meta_stringdata_QgsLayoutItem = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsLayoutItem"
QT_MOC_LITERAL(1, 14, 12), // "frameChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "lockChanged"
QT_MOC_LITERAL(4, 40, 15), // "rotationChanged"
QT_MOC_LITERAL(5, 56, 11), // "newRotation"
QT_MOC_LITERAL(6, 68, 19), // "sizePositionChanged"
QT_MOC_LITERAL(7, 88, 7), // "refresh"
QT_MOC_LITERAL(8, 96, 15), // "invalidateCache"
QT_MOC_LITERAL(9, 112, 6), // "redraw"
QT_MOC_LITERAL(10, 119, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(11, 146, 36), // "QgsLayoutObject::DataDefinedP..."
QT_MOC_LITERAL(12, 183, 8), // "property"
QT_MOC_LITERAL(13, 192, 15), // "setItemRotation"
QT_MOC_LITERAL(14, 208, 8), // "rotation"
QT_MOC_LITERAL(15, 217, 14), // "adjustPosition"
QT_MOC_LITERAL(16, 232, 10), // "rotateItem"
QT_MOC_LITERAL(17, 243, 5), // "angle"
QT_MOC_LITERAL(18, 249, 15), // "transformOrigin"
QT_MOC_LITERAL(19, 265, 6) // "locked"

    },
    "QgsLayoutItem\0frameChanged\0\0lockChanged\0"
    "rotationChanged\0newRotation\0"
    "sizePositionChanged\0refresh\0invalidateCache\0"
    "redraw\0refreshDataDefinedProperty\0"
    "QgsLayoutObject::DataDefinedProperty\0"
    "property\0setItemRotation\0rotation\0"
    "adjustPosition\0rotateItem\0angle\0"
    "transformOrigin\0locked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    1,   76,    2, 0x06 /* Public */,
       6,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   80,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x0a /* Public */,
       9,    0,   82,    2, 0x0a /* Public */,
      10,    1,   83,    2, 0x0a /* Public */,
      10,    0,   86,    2, 0x2a /* Public | MethodCloned */,
      13,    2,   87,    2, 0x0a /* Public */,
      13,    1,   92,    2, 0x2a /* Public | MethodCloned */,
      16,    2,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   14,   15,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double, QMetaType::QPointF,   17,   18,

 // properties: name, type, flags
      19, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,

       0        // eod
};

void QgsLayoutItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutItem *_t = static_cast<QgsLayoutItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameChanged(); break;
        case 1: _t->lockChanged(); break;
        case 2: _t->rotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->sizePositionChanged(); break;
        case 4: _t->refresh(); break;
        case 5: _t->invalidateCache(); break;
        case 6: _t->redraw(); break;
        case 7: _t->refreshDataDefinedProperty((*reinterpret_cast< QgsLayoutObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 8: _t->refreshDataDefinedProperty(); break;
        case 9: _t->setItemRotation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->setItemRotation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->rotateItem((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayoutItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutItem::frameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsLayoutItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutItem::lockChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsLayoutItem::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutItem::rotationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsLayoutItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutItem::sizePositionChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsLayoutItem *_t = static_cast<QgsLayoutItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isLocked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsLayoutItem *_t = static_cast<QgsLayoutItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsLayoutItem::staticMetaObject = {
    { &QgsLayoutObject::staticMetaObject, qt_meta_stringdata_QgsLayoutItem.data,
      qt_meta_data_QgsLayoutItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(this);
    if (!strcmp(_clname, "QgsLayoutUndoObjectInterface"))
        return static_cast< QgsLayoutUndoObjectInterface*>(this);
    return QgsLayoutObject::qt_metacast(_clname);
}

int QgsLayoutItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsLayoutItem::frameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsLayoutItem::lockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsLayoutItem::rotationChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsLayoutItem::sizePositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
