/****************************************************************************
** Meta object code from reading C++ file 'qgsauthesritokenedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsauthesritokenedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthesritokenedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthEsriTokenEdit_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthEsriTokenEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthEsriTokenEdit_t qt_meta_stringdata_QgsAuthEsriTokenEdit = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsAuthEsriTokenEdit"
QT_MOC_LITERAL(1, 21, 10), // "loadConfig"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "QgsStringMap"
QT_MOC_LITERAL(4, 46, 9), // "configmap"
QT_MOC_LITERAL(5, 56, 11), // "resetConfig"
QT_MOC_LITERAL(6, 68, 11), // "clearConfig"
QT_MOC_LITERAL(7, 80, 12) // "tokenChanged"

    },
    "QgsAuthEsriTokenEdit\0loadConfig\0\0"
    "QgsStringMap\0configmap\0resetConfig\0"
    "clearConfig\0tokenChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthEsriTokenEdit[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,
       6,    0,   38,    2, 0x0a /* Public */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAuthEsriTokenEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthEsriTokenEdit *_t = static_cast<QgsAuthEsriTokenEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadConfig((*reinterpret_cast< const QgsStringMap(*)>(_a[1]))); break;
        case 1: _t->resetConfig(); break;
        case 2: _t->clearConfig(); break;
        case 3: _t->tokenChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QgsAuthEsriTokenEdit::staticMetaObject = {
    { &QgsAuthMethodEdit::staticMetaObject, qt_meta_stringdata_QgsAuthEsriTokenEdit.data,
      qt_meta_data_QgsAuthEsriTokenEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthEsriTokenEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthEsriTokenEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthEsriTokenEdit.stringdata0))
        return static_cast<void*>(this);
    return QgsAuthMethodEdit::qt_metacast(_clname);
}

int QgsAuthEsriTokenEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAuthMethodEdit::qt_metacall(_c, _id, _a);
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
