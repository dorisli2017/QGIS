/****************************************************************************
** Meta object code from reading C++ file 'qgsauthimportcertdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsauthimportcertdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthimportcertdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthImportCertDialog_t {
    QByteArrayData data[7];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthImportCertDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthImportCertDialog_t qt_meta_stringdata_QgsAuthImportCertDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsAuthImportCertDialog"
QT_MOC_LITERAL(1, 24, 9), // "updateGui"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "validateCertificates"
QT_MOC_LITERAL(4, 56, 21), // "btnImportFile_clicked"
QT_MOC_LITERAL(5, 78, 23), // "chkAllowInvalid_toggled"
QT_MOC_LITERAL(6, 102, 7) // "checked"

    },
    "QgsAuthImportCertDialog\0updateGui\0\0"
    "validateCertificates\0btnImportFile_clicked\0"
    "chkAllowInvalid_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthImportCertDialog[] = {

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
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void QgsAuthImportCertDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthImportCertDialog *_t = static_cast<QgsAuthImportCertDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGui(); break;
        case 1: _t->validateCertificates(); break;
        case 2: _t->btnImportFile_clicked(); break;
        case 3: _t->chkAllowInvalid_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsAuthImportCertDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAuthImportCertDialog.data,
      qt_meta_data_QgsAuthImportCertDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthImportCertDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthImportCertDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthImportCertDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAuthImportCertDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
