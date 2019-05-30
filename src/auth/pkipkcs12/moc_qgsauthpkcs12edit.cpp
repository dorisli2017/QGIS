/****************************************************************************
** Meta object code from reading C++ file 'qgsauthpkcs12edit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsauthpkcs12edit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthpkcs12edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthPkcs12Edit_t {
    QByteArrayData data[21];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthPkcs12Edit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthPkcs12Edit_t qt_meta_stringdata_QgsAuthPkcs12Edit = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsAuthPkcs12Edit"
QT_MOC_LITERAL(1, 18, 10), // "loadConfig"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "QgsStringMap"
QT_MOC_LITERAL(4, 43, 9), // "configmap"
QT_MOC_LITERAL(5, 53, 11), // "resetConfig"
QT_MOC_LITERAL(6, 65, 11), // "clearConfig"
QT_MOC_LITERAL(7, 77, 15), // "clearPkiMessage"
QT_MOC_LITERAL(8, 93, 10), // "QLineEdit*"
QT_MOC_LITERAL(9, 104, 8), // "lineedit"
QT_MOC_LITERAL(10, 113, 15), // "writePkiMessage"
QT_MOC_LITERAL(11, 129, 3), // "msg"
QT_MOC_LITERAL(12, 133, 27), // "QgsAuthPkcs12Edit::Validity"
QT_MOC_LITERAL(13, 161, 5), // "valid"
QT_MOC_LITERAL(14, 167, 21), // "clearPkcs12BundlePath"
QT_MOC_LITERAL(15, 189, 21), // "clearPkcs12BundlePass"
QT_MOC_LITERAL(16, 211, 27), // "lePkcs12KeyPass_textChanged"
QT_MOC_LITERAL(17, 239, 4), // "pass"
QT_MOC_LITERAL(18, 244, 30), // "chkPkcs12PassShow_stateChanged"
QT_MOC_LITERAL(19, 275, 5), // "state"
QT_MOC_LITERAL(20, 281, 23) // "btnPkcs12Bundle_clicked"

    },
    "QgsAuthPkcs12Edit\0loadConfig\0\0"
    "QgsStringMap\0configmap\0resetConfig\0"
    "clearConfig\0clearPkiMessage\0QLineEdit*\0"
    "lineedit\0writePkiMessage\0msg\0"
    "QgsAuthPkcs12Edit::Validity\0valid\0"
    "clearPkcs12BundlePath\0clearPkcs12BundlePass\0"
    "lePkcs12KeyPass_textChanged\0pass\0"
    "chkPkcs12PassShow_stateChanged\0state\0"
    "btnPkcs12Bundle_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthPkcs12Edit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    1,   74,    2, 0x08 /* Private */,
      10,    3,   77,    2, 0x08 /* Private */,
      10,    2,   84,    2, 0x28 /* Private | MethodCloned */,
      14,    0,   89,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    1,   91,    2, 0x08 /* Private */,
      18,    1,   94,    2, 0x08 /* Private */,
      20,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,

       0        // eod
};

void QgsAuthPkcs12Edit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthPkcs12Edit *_t = static_cast<QgsAuthPkcs12Edit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadConfig((*reinterpret_cast< const QgsStringMap(*)>(_a[1]))); break;
        case 1: _t->resetConfig(); break;
        case 2: _t->clearConfig(); break;
        case 3: _t->clearPkiMessage((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 4: _t->writePkiMessage((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsAuthPkcs12Edit::Validity(*)>(_a[3]))); break;
        case 5: _t->writePkiMessage((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->clearPkcs12BundlePath(); break;
        case 7: _t->clearPkcs12BundlePass(); break;
        case 8: _t->lePkcs12KeyPass_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->chkPkcs12PassShow_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->btnPkcs12Bundle_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject QgsAuthPkcs12Edit::staticMetaObject = {
    { &QgsAuthMethodEdit::staticMetaObject, qt_meta_stringdata_QgsAuthPkcs12Edit.data,
      qt_meta_data_QgsAuthPkcs12Edit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthPkcs12Edit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthPkcs12Edit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthPkcs12Edit.stringdata0))
        return static_cast<void*>(this);
    return QgsAuthMethodEdit::qt_metacast(_clname);
}

int QgsAuthPkcs12Edit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAuthMethodEdit::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
