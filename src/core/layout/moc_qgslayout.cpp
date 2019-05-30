/****************************************************************************
** Meta object code from reading C++ file 'qgslayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayout_t {
    QByteArrayData data[10];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayout_t qt_meta_stringdata_QgsLayout = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QgsLayout"
QT_MOC_LITERAL(1, 10, 7), // "changed"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 16), // "variablesChanged"
QT_MOC_LITERAL(4, 36, 19), // "selectedItemChanged"
QT_MOC_LITERAL(5, 56, 14), // "QgsLayoutItem*"
QT_MOC_LITERAL(6, 71, 8), // "selected"
QT_MOC_LITERAL(7, 80, 9), // "refreshed"
QT_MOC_LITERAL(8, 90, 7), // "refresh"
QT_MOC_LITERAL(9, 98, 12) // "updateBounds"

    },
    "QgsLayout\0changed\0\0variablesChanged\0"
    "selectedItemChanged\0QgsLayoutItem*\0"
    "selected\0refreshed\0refresh\0updateBounds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   50,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayout *_t = static_cast<QgsLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->variablesChanged(); break;
        case 2: _t->selectedItemChanged((*reinterpret_cast< QgsLayoutItem*(*)>(_a[1]))); break;
        case 3: _t->refreshed(); break;
        case 4: _t->refresh(); break;
        case 5: _t->updateBounds(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayoutItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayout::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayout::changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsLayout::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayout::variablesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsLayout::*_t)(QgsLayoutItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayout::selectedItemChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsLayout::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayout::refreshed)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QgsLayout::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_QgsLayout.data,
      qt_meta_data_QgsLayout,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayout.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsExpressionContextGenerator"))
        return static_cast< QgsExpressionContextGenerator*>(this);
    if (!strcmp(_clname, "QgsLayoutUndoObjectInterface"))
        return static_cast< QgsLayoutUndoObjectInterface*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int QgsLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QgsLayout::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsLayout::variablesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsLayout::selectedItemChanged(QgsLayoutItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsLayout::refreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
