/****************************************************************************
** Meta object code from reading C++ file 'qgswelcomepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgswelcomepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswelcomepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsWelcomePage_t {
    QByteArrayData data[11];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWelcomePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWelcomePage_t qt_meta_stringdata_QgsWelcomePage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsWelcomePage"
QT_MOC_LITERAL(1, 15, 14), // "projectRemoved"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "row"
QT_MOC_LITERAL(4, 35, 13), // "projectPinned"
QT_MOC_LITERAL(5, 49, 15), // "projectUnpinned"
QT_MOC_LITERAL(6, 65, 13), // "itemActivated"
QT_MOC_LITERAL(7, 79, 5), // "index"
QT_MOC_LITERAL(8, 85, 19), // "versionInfoReceived"
QT_MOC_LITERAL(9, 105, 26), // "showContextMenuForProjects"
QT_MOC_LITERAL(10, 132, 5) // "point"

    },
    "QgsWelcomePage\0projectRemoved\0\0row\0"
    "projectPinned\0projectUnpinned\0"
    "itemActivated\0index\0versionInfoReceived\0"
    "showContextMenuForProjects\0point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWelcomePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,

       0        // eod
};

void QgsWelcomePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWelcomePage *_t = static_cast<QgsWelcomePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projectRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->projectPinned((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->projectUnpinned((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->itemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->versionInfoReceived(); break;
        case 5: _t->showContextMenuForProjects((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsWelcomePage::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWelcomePage::projectRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsWelcomePage::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWelcomePage::projectPinned)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsWelcomePage::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsWelcomePage::projectUnpinned)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsWelcomePage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsWelcomePage.data,
      qt_meta_data_QgsWelcomePage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWelcomePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWelcomePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWelcomePage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsWelcomePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QgsWelcomePage::projectRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsWelcomePage::projectPinned(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsWelcomePage::projectUnpinned(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
