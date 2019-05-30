/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreenode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayertreenode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreenode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayerTreeNode_t {
    QByteArrayData data[17];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeNode_t qt_meta_stringdata_QgsLayerTreeNode = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsLayerTreeNode"
QT_MOC_LITERAL(1, 17, 15), // "willAddChildren"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(4, 52, 4), // "node"
QT_MOC_LITERAL(5, 57, 9), // "indexFrom"
QT_MOC_LITERAL(6, 67, 7), // "indexTo"
QT_MOC_LITERAL(7, 75, 13), // "addedChildren"
QT_MOC_LITERAL(8, 89, 18), // "willRemoveChildren"
QT_MOC_LITERAL(9, 108, 15), // "removedChildren"
QT_MOC_LITERAL(10, 124, 17), // "visibilityChanged"
QT_MOC_LITERAL(11, 142, 21), // "customPropertyChanged"
QT_MOC_LITERAL(12, 164, 3), // "key"
QT_MOC_LITERAL(13, 168, 15), // "expandedChanged"
QT_MOC_LITERAL(14, 184, 8), // "expanded"
QT_MOC_LITERAL(15, 193, 11), // "nameChanged"
QT_MOC_LITERAL(16, 205, 4) // "name"

    },
    "QgsLayerTreeNode\0willAddChildren\0\0"
    "QgsLayerTreeNode*\0node\0indexFrom\0"
    "indexTo\0addedChildren\0willRemoveChildren\0"
    "removedChildren\0visibilityChanged\0"
    "customPropertyChanged\0key\0expandedChanged\0"
    "expanded\0nameChanged\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       7,    3,   61,    2, 0x06 /* Public */,
       8,    3,   68,    2, 0x06 /* Public */,
       9,    3,   75,    2, 0x06 /* Public */,
      10,    1,   82,    2, 0x06 /* Public */,
      11,    2,   85,    2, 0x06 /* Public */,
      13,    2,   90,    2, 0x06 /* Public */,
      15,    2,   95,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   14,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   16,

       0        // eod
};

void QgsLayerTreeNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeNode *_t = static_cast<QgsLayerTreeNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->willAddChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->addedChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->willRemoveChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->removedChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->visibilityChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1]))); break;
        case 5: _t->customPropertyChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->expandedChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->nameChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeNode::willAddChildren)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeNode::addedChildren)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeNode::willRemoveChildren)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeNode::removedChildren)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeNode::visibilityChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeNode::customPropertyChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeNode::expandedChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeNode::nameChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject QgsLayerTreeNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayerTreeNode.data,
      qt_meta_data_QgsLayerTreeNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerTreeNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeNode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsLayerTreeNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsLayerTreeNode::willAddChildren(QgsLayerTreeNode * _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsLayerTreeNode::addedChildren(QgsLayerTreeNode * _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsLayerTreeNode::willRemoveChildren(QgsLayerTreeNode * _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsLayerTreeNode::removedChildren(QgsLayerTreeNode * _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsLayerTreeNode::visibilityChanged(QgsLayerTreeNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsLayerTreeNode::customPropertyChanged(QgsLayerTreeNode * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsLayerTreeNode::expandedChanged(QgsLayerTreeNode * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsLayerTreeNode::nameChanged(QgsLayerTreeNode * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
