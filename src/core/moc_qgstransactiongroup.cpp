/****************************************************************************
** Meta object code from reading C++ file 'qgstransactiongroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgstransactiongroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstransactiongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTransactionGroup_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTransactionGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTransactionGroup_t qt_meta_stringdata_QgsTransactionGroup = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsTransactionGroup"
QT_MOC_LITERAL(1, 20, 11), // "commitError"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "msg"
QT_MOC_LITERAL(4, 37, 16), // "onEditingStarted"
QT_MOC_LITERAL(5, 54, 14), // "onLayerDeleted"
QT_MOC_LITERAL(6, 69, 15), // "onCommitChanges"
QT_MOC_LITERAL(7, 85, 10) // "onRollback"

    },
    "QgsTransactionGroup\0commitError\0\0msg\0"
    "onEditingStarted\0onLayerDeleted\0"
    "onCommitChanges\0onRollback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTransactionGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsTransactionGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTransactionGroup *_t = static_cast<QgsTransactionGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commitError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onEditingStarted(); break;
        case 2: _t->onLayerDeleted(); break;
        case 3: _t->onCommitChanges(); break;
        case 4: _t->onRollback(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsTransactionGroup::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTransactionGroup::commitError)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsTransactionGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsTransactionGroup.data,
      qt_meta_data_QgsTransactionGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTransactionGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTransactionGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTransactionGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsTransactionGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsTransactionGroup::commitError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
