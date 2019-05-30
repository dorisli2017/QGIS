/****************************************************************************
** Meta object code from reading C++ file 'qgsowsdataitems.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsowsdataitems.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsowsdataitems.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsOWSConnectionItem_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsOWSConnectionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsOWSConnectionItem_t qt_meta_stringdata_QgsOWSConnectionItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsOWSConnectionItem"
QT_MOC_LITERAL(1, 21, 14), // "editConnection"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16) // "deleteConnection"

    },
    "QgsOWSConnectionItem\0editConnection\0"
    "\0deleteConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsOWSConnectionItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsOWSConnectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsOWSConnectionItem *_t = static_cast<QgsOWSConnectionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editConnection(); break;
        case 1: _t->deleteConnection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsOWSConnectionItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsOWSConnectionItem.data,
      qt_meta_data_QgsOWSConnectionItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsOWSConnectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsOWSConnectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsOWSConnectionItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsOWSConnectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsOWSRootItem_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsOWSRootItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsOWSRootItem_t qt_meta_stringdata_QgsOWSRootItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsOWSRootItem"
QT_MOC_LITERAL(1, 15, 20), // "onConnectionsChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13) // "newConnection"

    },
    "QgsOWSRootItem\0onConnectionsChanged\0"
    "\0newConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsOWSRootItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsOWSRootItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsOWSRootItem *_t = static_cast<QgsOWSRootItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnectionsChanged(); break;
        case 1: _t->newConnection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsOWSRootItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsOWSRootItem.data,
      qt_meta_data_QgsOWSRootItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsOWSRootItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsOWSRootItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsOWSRootItem.stringdata0))
        return static_cast<void*>(this);
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsOWSRootItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
