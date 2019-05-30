/****************************************************************************
** Meta object code from reading C++ file 'qgsdecorationcopyright.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsdecorationcopyright.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdecorationcopyright.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDecorationCopyright_t {
    QByteArrayData data[14];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDecorationCopyright_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDecorationCopyright_t qt_meta_stringdata_QgsDecorationCopyright = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsDecorationCopyright"
QT_MOC_LITERAL(1, 23, 11), // "projectRead"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "saveToProject"
QT_MOC_LITERAL(4, 50, 3), // "run"
QT_MOC_LITERAL(5, 54, 6), // "render"
QT_MOC_LITERAL(6, 61, 14), // "QgsMapSettings"
QT_MOC_LITERAL(7, 76, 11), // "mapSettings"
QT_MOC_LITERAL(8, 88, 17), // "QgsRenderContext&"
QT_MOC_LITERAL(9, 106, 7), // "context"
QT_MOC_LITERAL(10, 114, 10), // "textFormat"
QT_MOC_LITERAL(11, 125, 13), // "QgsTextFormat"
QT_MOC_LITERAL(12, 139, 13), // "setTextFormat"
QT_MOC_LITERAL(13, 153, 6) // "format"

    },
    "QgsDecorationCopyright\0projectRead\0\0"
    "saveToProject\0run\0render\0QgsMapSettings\0"
    "mapSettings\0QgsRenderContext&\0context\0"
    "textFormat\0QgsTextFormat\0setTextFormat\0"
    "format"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDecorationCopyright[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    2,   47,    2, 0x0a /* Public */,
      10,    0,   52,    2, 0x0a /* Public */,
      12,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    0x80000000 | 11,
    QMetaType::Void, 0x80000000 | 11,   13,

       0        // eod
};

void QgsDecorationCopyright::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDecorationCopyright *_t = static_cast<QgsDecorationCopyright *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projectRead(); break;
        case 1: _t->saveToProject(); break;
        case 2: _t->run(); break;
        case 3: _t->render((*reinterpret_cast< const QgsMapSettings(*)>(_a[1])),(*reinterpret_cast< QgsRenderContext(*)>(_a[2]))); break;
        case 4: { QgsTextFormat _r = _t->textFormat();
            if (_a[0]) *reinterpret_cast< QgsTextFormat*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setTextFormat((*reinterpret_cast< const QgsTextFormat(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsDecorationCopyright::staticMetaObject = {
    { &QgsDecorationItem::staticMetaObject, qt_meta_stringdata_QgsDecorationCopyright.data,
      qt_meta_data_QgsDecorationCopyright,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDecorationCopyright::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDecorationCopyright::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDecorationCopyright.stringdata0))
        return static_cast<void*>(this);
    return QgsDecorationItem::qt_metacast(_clname);
}

int QgsDecorationCopyright::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDecorationItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
