/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometrycheckerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometrycheckerdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometrycheckerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometryCheckerDialog_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryCheckerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryCheckerDialog_t qt_meta_stringdata_QgsGeometryCheckerDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsGeometryCheckerDialog"
QT_MOC_LITERAL(1, 25, 16), // "onCheckerStarted"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 19), // "QgsGeometryChecker*"
QT_MOC_LITERAL(4, 63, 7), // "checker"
QT_MOC_LITERAL(5, 71, 17), // "onCheckerFinished"
QT_MOC_LITERAL(6, 89, 10), // "successful"
QT_MOC_LITERAL(7, 100, 8) // "showHelp"

    },
    "QgsGeometryCheckerDialog\0onCheckerStarted\0"
    "\0QgsGeometryChecker*\0checker\0"
    "onCheckerFinished\0successful\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryCheckerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    1,   32,    2, 0x08 /* Private */,
       7,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void QgsGeometryCheckerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeometryCheckerDialog *_t = static_cast<QgsGeometryCheckerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCheckerStarted((*reinterpret_cast< QgsGeometryChecker*(*)>(_a[1]))); break;
        case 1: _t->onCheckerFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showHelp(); break;
        default: ;
        }
    }
}

const QMetaObject QgsGeometryCheckerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsGeometryCheckerDialog.data,
      qt_meta_data_QgsGeometryCheckerDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeometryCheckerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeometryCheckerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeometryCheckerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsGeometryCheckerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
