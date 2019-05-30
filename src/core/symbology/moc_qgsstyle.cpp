/****************************************************************************
** Meta object code from reading C++ file 'qgsstyle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsstyle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsstyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsStyle_t {
    QByteArrayData data[22];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStyle_t qt_meta_stringdata_QgsStyle = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QgsStyle"
QT_MOC_LITERAL(1, 9, 11), // "symbolSaved"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "name"
QT_MOC_LITERAL(4, 27, 10), // "QgsSymbol*"
QT_MOC_LITERAL(5, 38, 6), // "symbol"
QT_MOC_LITERAL(6, 45, 13), // "symbolChanged"
QT_MOC_LITERAL(7, 59, 14), // "groupsModified"
QT_MOC_LITERAL(8, 74, 17), // "entityTagsChanged"
QT_MOC_LITERAL(9, 92, 21), // "QgsStyle::StyleEntity"
QT_MOC_LITERAL(10, 114, 6), // "entity"
QT_MOC_LITERAL(11, 121, 7), // "newTags"
QT_MOC_LITERAL(12, 129, 16), // "favoritedChanged"
QT_MOC_LITERAL(13, 146, 10), // "isFavorite"
QT_MOC_LITERAL(14, 157, 13), // "symbolRemoved"
QT_MOC_LITERAL(15, 171, 13), // "symbolRenamed"
QT_MOC_LITERAL(16, 185, 7), // "oldName"
QT_MOC_LITERAL(17, 193, 7), // "newName"
QT_MOC_LITERAL(18, 201, 11), // "rampRenamed"
QT_MOC_LITERAL(19, 213, 9), // "rampAdded"
QT_MOC_LITERAL(20, 223, 11), // "rampRemoved"
QT_MOC_LITERAL(21, 235, 11) // "rampChanged"

    },
    "QgsStyle\0symbolSaved\0\0name\0QgsSymbol*\0"
    "symbol\0symbolChanged\0groupsModified\0"
    "entityTagsChanged\0QgsStyle::StyleEntity\0"
    "entity\0newTags\0favoritedChanged\0"
    "isFavorite\0symbolRemoved\0symbolRenamed\0"
    "oldName\0newName\0rampRenamed\0rampAdded\0"
    "rampRemoved\0rampChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStyle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       6,    1,   74,    2, 0x06 /* Public */,
       7,    0,   77,    2, 0x06 /* Public */,
       8,    3,   78,    2, 0x06 /* Public */,
      12,    3,   85,    2, 0x06 /* Public */,
      14,    1,   92,    2, 0x06 /* Public */,
      15,    2,   95,    2, 0x06 /* Public */,
      18,    2,  100,    2, 0x06 /* Public */,
      19,    1,  105,    2, 0x06 /* Public */,
      20,    1,  108,    2, 0x06 /* Public */,
      21,    1,  111,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::QStringList,   10,    3,   11,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::Bool,   10,    3,   13,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void QgsStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsStyle *_t = static_cast<QgsStyle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->symbolSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsSymbol*(*)>(_a[2]))); break;
        case 1: _t->symbolChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->groupsModified(); break;
        case 3: _t->entityTagsChanged((*reinterpret_cast< QgsStyle::StyleEntity(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 4: _t->favoritedChanged((*reinterpret_cast< QgsStyle::StyleEntity(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->symbolRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->symbolRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->rampRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->rampAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->rampRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->rampChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsStyle::*_t)(const QString & , QgsSymbol * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::symbolSaved)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsStyle::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::symbolChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsStyle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::groupsModified)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsStyle::*_t)(QgsStyle::StyleEntity , const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::entityTagsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsStyle::*_t)(QgsStyle::StyleEntity , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::favoritedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsStyle::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::symbolRemoved)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsStyle::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::symbolRenamed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsStyle::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::rampRenamed)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgsStyle::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::rampAdded)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QgsStyle::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::rampRemoved)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QgsStyle::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyle::rampChanged)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject QgsStyle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsStyle.data,
      qt_meta_data_QgsStyle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStyle.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QgsStyle::symbolSaved(const QString & _t1, QgsSymbol * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsStyle::symbolChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsStyle::groupsModified()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsStyle::entityTagsChanged(QgsStyle::StyleEntity _t1, const QString & _t2, const QStringList & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsStyle::favoritedChanged(QgsStyle::StyleEntity _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsStyle::symbolRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsStyle::symbolRenamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsStyle::rampRenamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsStyle::rampAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsStyle::rampRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QgsStyle::rampChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
