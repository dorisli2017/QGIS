/****************************************************************************
** Meta object code from reading C++ file 'evisimagedisplaywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "evisimagedisplaywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'evisimagedisplaywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_eVisImageDisplayWidget_t {
    QByteArrayData data[6];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_eVisImageDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_eVisImageDisplayWidget_t qt_meta_stringdata_eVisImageDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "eVisImageDisplayWidget"
QT_MOC_LITERAL(1, 23, 18), // "pbtnZoomIn_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 19), // "pbtnZoomOut_clicked"
QT_MOC_LITERAL(4, 63, 20), // "pbtnZoomFull_clicked"
QT_MOC_LITERAL(5, 84, 15) // "displayUrlImage"

    },
    "eVisImageDisplayWidget\0pbtnZoomIn_clicked\0"
    "\0pbtnZoomOut_clicked\0pbtnZoomFull_clicked\0"
    "displayUrlImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_eVisImageDisplayWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    2,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,

       0        // eod
};

void eVisImageDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        eVisImageDisplayWidget *_t = static_cast<eVisImageDisplayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pbtnZoomIn_clicked(); break;
        case 1: _t->pbtnZoomOut_clicked(); break;
        case 2: _t->pbtnZoomFull_clicked(); break;
        case 3: _t->displayUrlImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject eVisImageDisplayWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_eVisImageDisplayWidget.data,
      qt_meta_data_eVisImageDisplayWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *eVisImageDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *eVisImageDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_eVisImageDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int eVisImageDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
