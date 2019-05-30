/****************************************************************************
** Meta object code from reading C++ file 'qgsauthbasicedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsauthbasicedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthbasicedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthBasicEdit_t {
    QByteArrayData data[11];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthBasicEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthBasicEdit_t qt_meta_stringdata_QgsAuthBasicEdit = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsAuthBasicEdit"
QT_MOC_LITERAL(1, 17, 10), // "loadConfig"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "QgsStringMap"
QT_MOC_LITERAL(4, 42, 9), // "configmap"
QT_MOC_LITERAL(5, 52, 11), // "resetConfig"
QT_MOC_LITERAL(6, 64, 11), // "clearConfig"
QT_MOC_LITERAL(7, 76, 22), // "leUsername_textChanged"
QT_MOC_LITERAL(8, 99, 3), // "txt"
QT_MOC_LITERAL(9, 103, 28), // "chkPasswordShow_stateChanged"
QT_MOC_LITERAL(10, 132, 5) // "state"

    },
    "QgsAuthBasicEdit\0loadConfig\0\0QgsStringMap\0"
    "configmap\0resetConfig\0clearConfig\0"
    "leUsername_textChanged\0txt\0"
    "chkPasswordShow_stateChanged\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthBasicEdit[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,
       7,    1,   44,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void QgsAuthBasicEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthBasicEdit *_t = static_cast<QgsAuthBasicEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadConfig((*reinterpret_cast< const QgsStringMap(*)>(_a[1]))); break;
        case 1: _t->resetConfig(); break;
        case 2: _t->clearConfig(); break;
        case 3: _t->leUsername_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->chkPasswordShow_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsAuthBasicEdit::staticMetaObject = {
    { &QgsAuthMethodEdit::staticMetaObject, qt_meta_stringdata_QgsAuthBasicEdit.data,
      qt_meta_data_QgsAuthBasicEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthBasicEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthBasicEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthBasicEdit.stringdata0))
        return static_cast<void*>(this);
    return QgsAuthMethodEdit::qt_metacast(_clname);
}

int QgsAuthBasicEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAuthMethodEdit::qt_metacall(_c, _id, _a);
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
