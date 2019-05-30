/****************************************************************************
** Meta object code from reading C++ file 'qgsauthpkipathsedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsauthpkipathsedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthpkipathsedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthPkiPathsEdit_t {
    QByteArrayData data[21];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthPkiPathsEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthPkiPathsEdit_t qt_meta_stringdata_QgsAuthPkiPathsEdit = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsAuthPkiPathsEdit"
QT_MOC_LITERAL(1, 20, 10), // "loadConfig"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "QgsStringMap"
QT_MOC_LITERAL(4, 45, 9), // "configmap"
QT_MOC_LITERAL(5, 55, 11), // "resetConfig"
QT_MOC_LITERAL(6, 67, 11), // "clearConfig"
QT_MOC_LITERAL(7, 79, 15), // "clearPkiMessage"
QT_MOC_LITERAL(8, 95, 10), // "QLineEdit*"
QT_MOC_LITERAL(9, 106, 8), // "lineedit"
QT_MOC_LITERAL(10, 115, 15), // "writePkiMessage"
QT_MOC_LITERAL(11, 131, 3), // "msg"
QT_MOC_LITERAL(12, 135, 29), // "QgsAuthPkiPathsEdit::Validity"
QT_MOC_LITERAL(13, 165, 5), // "valid"
QT_MOC_LITERAL(14, 171, 21), // "clearPkiPathsCertPath"
QT_MOC_LITERAL(15, 193, 20), // "clearPkiPathsKeyPath"
QT_MOC_LITERAL(16, 214, 20), // "clearPkiPathsKeyPass"
QT_MOC_LITERAL(17, 235, 32), // "chkPkiPathsPassShow_stateChanged"
QT_MOC_LITERAL(18, 268, 5), // "state"
QT_MOC_LITERAL(19, 274, 23), // "btnPkiPathsCert_clicked"
QT_MOC_LITERAL(20, 298, 22) // "btnPkiPathsKey_clicked"

    },
    "QgsAuthPkiPathsEdit\0loadConfig\0\0"
    "QgsStringMap\0configmap\0resetConfig\0"
    "clearConfig\0clearPkiMessage\0QLineEdit*\0"
    "lineedit\0writePkiMessage\0msg\0"
    "QgsAuthPkiPathsEdit::Validity\0valid\0"
    "clearPkiPathsCertPath\0clearPkiPathsKeyPath\0"
    "clearPkiPathsKeyPass\0"
    "chkPkiPathsPassShow_stateChanged\0state\0"
    "btnPkiPathsCert_clicked\0btnPkiPathsKey_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthPkiPathsEdit[] = {

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
       1,    1,   74,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x08 /* Private */,
      10,    3,   82,    2, 0x08 /* Private */,
      10,    2,   89,    2, 0x28 /* Private | MethodCloned */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,
      16,    0,   96,    2, 0x08 /* Private */,
      17,    1,   97,    2, 0x08 /* Private */,
      19,    0,  100,    2, 0x08 /* Private */,
      20,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAuthPkiPathsEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthPkiPathsEdit *_t = static_cast<QgsAuthPkiPathsEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadConfig((*reinterpret_cast< const QgsStringMap(*)>(_a[1]))); break;
        case 1: _t->resetConfig(); break;
        case 2: _t->clearConfig(); break;
        case 3: _t->clearPkiMessage((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 4: _t->writePkiMessage((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsAuthPkiPathsEdit::Validity(*)>(_a[3]))); break;
        case 5: _t->writePkiMessage((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->clearPkiPathsCertPath(); break;
        case 7: _t->clearPkiPathsKeyPath(); break;
        case 8: _t->clearPkiPathsKeyPass(); break;
        case 9: _t->chkPkiPathsPassShow_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->btnPkiPathsCert_clicked(); break;
        case 11: _t->btnPkiPathsKey_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject QgsAuthPkiPathsEdit::staticMetaObject = {
    { &QgsAuthMethodEdit::staticMetaObject, qt_meta_stringdata_QgsAuthPkiPathsEdit.data,
      qt_meta_data_QgsAuthPkiPathsEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthPkiPathsEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthPkiPathsEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthPkiPathsEdit.stringdata0))
        return static_cast<void*>(this);
    return QgsAuthMethodEdit::qt_metacast(_clname);
}

int QgsAuthPkiPathsEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAuthMethodEdit::qt_metacall(_c, _id, _a);
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
