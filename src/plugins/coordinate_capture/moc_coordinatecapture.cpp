/****************************************************************************
** Meta object code from reading C++ file 'coordinatecapture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "coordinatecapture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coordinatecapture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CoordinateCapture_t {
    QByteArrayData data[17];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoordinateCapture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoordinateCapture_t qt_meta_stringdata_CoordinateCapture = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CoordinateCapture"
QT_MOC_LITERAL(1, 18, 7), // "initGui"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "run"
QT_MOC_LITERAL(4, 31, 6), // "unload"
QT_MOC_LITERAL(5, 38, 10), // "showOrHide"
QT_MOC_LITERAL(6, 49, 4), // "help"
QT_MOC_LITERAL(7, 54, 6), // "setCRS"
QT_MOC_LITERAL(8, 61, 12), // "mouseClicked"
QT_MOC_LITERAL(9, 74, 10), // "QgsPointXY"
QT_MOC_LITERAL(10, 85, 5), // "point"
QT_MOC_LITERAL(11, 91, 10), // "mouseMoved"
QT_MOC_LITERAL(12, 102, 6), // "update"
QT_MOC_LITERAL(13, 109, 4), // "copy"
QT_MOC_LITERAL(14, 114, 12), // "setSourceCrs"
QT_MOC_LITERAL(15, 127, 15), // "setCurrentTheme"
QT_MOC_LITERAL(16, 143, 9) // "themeName"

    },
    "CoordinateCapture\0initGui\0\0run\0unload\0"
    "showOrHide\0help\0setCRS\0mouseClicked\0"
    "QgsPointXY\0point\0mouseMoved\0update\0"
    "copy\0setSourceCrs\0setCurrentTheme\0"
    "themeName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoordinateCapture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    1,   80,    2, 0x0a /* Public */,
      11,    1,   83,    2, 0x0a /* Public */,
      12,    1,   86,    2, 0x0a /* Public */,
      13,    0,   89,    2, 0x0a /* Public */,
      14,    0,   90,    2, 0x0a /* Public */,
      15,    1,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void CoordinateCapture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoordinateCapture *_t = static_cast<CoordinateCapture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initGui(); break;
        case 1: _t->run(); break;
        case 2: _t->unload(); break;
        case 3: _t->showOrHide(); break;
        case 4: _t->help(); break;
        case 5: _t->setCRS(); break;
        case 6: _t->mouseClicked((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        case 7: _t->mouseMoved((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        case 8: _t->update((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        case 9: _t->copy(); break;
        case 10: _t->setSourceCrs(); break;
        case 11: _t->setCurrentTheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CoordinateCapture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CoordinateCapture.data,
      qt_meta_data_CoordinateCapture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CoordinateCapture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoordinateCapture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoordinateCapture.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgisPlugin"))
        return static_cast< QgisPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int CoordinateCapture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
