/****************************************************************************
** Meta object code from reading C++ file 'qgsdecorationscalebar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsdecorationscalebar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdecorationscalebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDecorationScaleBar_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDecorationScaleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDecorationScaleBar_t qt_meta_stringdata_QgsDecorationScaleBar = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsDecorationScaleBar"
QT_MOC_LITERAL(1, 22, 11), // "projectRead"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "saveToProject"
QT_MOC_LITERAL(4, 49, 6), // "render"
QT_MOC_LITERAL(5, 56, 14), // "QgsMapSettings"
QT_MOC_LITERAL(6, 71, 11), // "mapSettings"
QT_MOC_LITERAL(7, 83, 17), // "QgsRenderContext&"
QT_MOC_LITERAL(8, 101, 7), // "context"
QT_MOC_LITERAL(9, 109, 3), // "run"
QT_MOC_LITERAL(10, 113, 13) // "setupScaleBar"

    },
    "QgsDecorationScaleBar\0projectRead\0\0"
    "saveToProject\0render\0QgsMapSettings\0"
    "mapSettings\0QgsRenderContext&\0context\0"
    "run\0setupScaleBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDecorationScaleBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    2,   41,    2, 0x0a /* Public */,
       9,    0,   46,    2, 0x0a /* Public */,
      10,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsDecorationScaleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDecorationScaleBar *_t = static_cast<QgsDecorationScaleBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projectRead(); break;
        case 1: _t->saveToProject(); break;
        case 2: _t->render((*reinterpret_cast< const QgsMapSettings(*)>(_a[1])),(*reinterpret_cast< QgsRenderContext(*)>(_a[2]))); break;
        case 3: _t->run(); break;
        case 4: _t->setupScaleBar(); break;
        default: ;
        }
    }
}

const QMetaObject QgsDecorationScaleBar::staticMetaObject = {
    { &QgsDecorationItem::staticMetaObject, qt_meta_stringdata_QgsDecorationScaleBar.data,
      qt_meta_data_QgsDecorationScaleBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDecorationScaleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDecorationScaleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDecorationScaleBar.stringdata0))
        return static_cast<void*>(this);
    return QgsDecorationItem::qt_metacast(_clname);
}

int QgsDecorationScaleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDecorationItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
