/****************************************************************************
** Meta object code from reading C++ file 'checkDock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "checkDock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkDock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_checkDock_t {
    QByteArrayData data[15];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_checkDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_checkDock_t qt_meta_stringdata_checkDock = {
    {
QT_MOC_LITERAL(0, 0, 9), // "checkDock"
QT_MOC_LITERAL(1, 10, 9), // "configure"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 3), // "fix"
QT_MOC_LITERAL(4, 25, 11), // "validateAll"
QT_MOC_LITERAL(5, 37, 14), // "validateExtent"
QT_MOC_LITERAL(6, 52, 16), // "validateSelected"
QT_MOC_LITERAL(7, 69, 17), // "toggleErrorMarker"
QT_MOC_LITERAL(8, 87, 16), // "errorListClicked"
QT_MOC_LITERAL(9, 104, 5), // "index"
QT_MOC_LITERAL(10, 110, 12), // "deleteErrors"
QT_MOC_LITERAL(11, 123, 21), // "parseErrorListByLayer"
QT_MOC_LITERAL(12, 145, 7), // "layerId"
QT_MOC_LITERAL(13, 153, 17), // "updateRubberBands"
QT_MOC_LITERAL(14, 171, 7) // "visible"

    },
    "checkDock\0configure\0\0fix\0validateAll\0"
    "validateExtent\0validateSelected\0"
    "toggleErrorMarker\0errorListClicked\0"
    "index\0deleteErrors\0parseErrorListByLayer\0"
    "layerId\0updateRubberBands\0visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_checkDock[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void checkDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        checkDock *_t = static_cast<checkDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configure(); break;
        case 1: _t->fix(); break;
        case 2: _t->validateAll(); break;
        case 3: _t->validateExtent(); break;
        case 4: _t->validateSelected(); break;
        case 5: _t->toggleErrorMarker(); break;
        case 6: _t->errorListClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->deleteErrors(); break;
        case 8: _t->parseErrorListByLayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->updateRubberBands((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject checkDock::staticMetaObject = {
    { &QgsDockWidget::staticMetaObject, qt_meta_stringdata_checkDock.data,
      qt_meta_data_checkDock,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *checkDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *checkDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_checkDock.stringdata0))
        return static_cast<void*>(this);
    return QgsDockWidget::qt_metacast(_clname);
}

int checkDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
