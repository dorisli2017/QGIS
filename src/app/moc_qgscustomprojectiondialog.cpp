/****************************************************************************
** Meta object code from reading C++ file 'qgscustomprojectiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgscustomprojectiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscustomprojectiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCustomProjectionDialog_t {
    QByteArrayData data[12];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCustomProjectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCustomProjectionDialog_t qt_meta_stringdata_QgsCustomProjectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsCustomProjectionDialog"
QT_MOC_LITERAL(1, 26, 20), // "pbnCalculate_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 14), // "pbnAdd_clicked"
QT_MOC_LITERAL(4, 63, 17), // "pbnRemove_clicked"
QT_MOC_LITERAL(5, 81, 18), // "pbnCopyCRS_clicked"
QT_MOC_LITERAL(6, 100, 29), // "leNameList_currentItemChanged"
QT_MOC_LITERAL(7, 130, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 147, 7), // "current"
QT_MOC_LITERAL(9, 155, 4), // "prev"
QT_MOC_LITERAL(10, 160, 18), // "buttonBox_accepted"
QT_MOC_LITERAL(11, 179, 25) // "updateListFromCurrentItem"

    },
    "QgsCustomProjectionDialog\0"
    "pbnCalculate_clicked\0\0pbnAdd_clicked\0"
    "pbnRemove_clicked\0pbnCopyCRS_clicked\0"
    "leNameList_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0prev\0"
    "buttonBox_accepted\0updateListFromCurrentItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCustomProjectionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    2,   53,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsCustomProjectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCustomProjectionDialog *_t = static_cast<QgsCustomProjectionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pbnCalculate_clicked(); break;
        case 1: _t->pbnAdd_clicked(); break;
        case 2: _t->pbnRemove_clicked(); break;
        case 3: _t->pbnCopyCRS_clicked(); break;
        case 4: _t->leNameList_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 5: _t->buttonBox_accepted(); break;
        case 6: _t->updateListFromCurrentItem(); break;
        default: ;
        }
    }
}

const QMetaObject QgsCustomProjectionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsCustomProjectionDialog.data,
      qt_meta_data_QgsCustomProjectionDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCustomProjectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCustomProjectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCustomProjectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsCustomProjectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
