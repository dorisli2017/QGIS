/****************************************************************************
** Meta object code from reading C++ file 'qgshtmlannotationdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgshtmlannotationdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgshtmlannotationdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsHtmlAnnotationDialog_t {
    QByteArrayData data[9];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsHtmlAnnotationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsHtmlAnnotationDialog_t qt_meta_stringdata_QgsHtmlAnnotationDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsHtmlAnnotationDialog"
QT_MOC_LITERAL(1, 24, 19), // "applySettingsToItem"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 25), // "mBrowseToolButton_clicked"
QT_MOC_LITERAL(4, 71, 10), // "deleteItem"
QT_MOC_LITERAL(5, 82, 18), // "mButtonBox_clicked"
QT_MOC_LITERAL(6, 101, 16), // "QAbstractButton*"
QT_MOC_LITERAL(7, 118, 6), // "button"
QT_MOC_LITERAL(8, 125, 8) // "showHelp"

    },
    "QgsHtmlAnnotationDialog\0applySettingsToItem\0"
    "\0mBrowseToolButton_clicked\0deleteItem\0"
    "mButtonBox_clicked\0QAbstractButton*\0"
    "button\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsHtmlAnnotationDialog[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void QgsHtmlAnnotationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsHtmlAnnotationDialog *_t = static_cast<QgsHtmlAnnotationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applySettingsToItem(); break;
        case 1: _t->mBrowseToolButton_clicked(); break;
        case 2: _t->deleteItem(); break;
        case 3: _t->mButtonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 4: _t->showHelp(); break;
        default: ;
        }
    }
}

const QMetaObject QgsHtmlAnnotationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsHtmlAnnotationDialog.data,
      qt_meta_data_QgsHtmlAnnotationDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsHtmlAnnotationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsHtmlAnnotationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHtmlAnnotationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsHtmlAnnotationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
