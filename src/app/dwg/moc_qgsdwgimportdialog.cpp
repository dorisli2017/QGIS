/****************************************************************************
** Meta object code from reading C++ file 'qgsdwgimportdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsdwgimportdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdwgimportdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDwgImportDialog_t {
    QByteArrayData data[13];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDwgImportDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDwgImportDialog_t qt_meta_stringdata_QgsDwgImportDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsDwgImportDialog"
QT_MOC_LITERAL(1, 19, 18), // "buttonBox_accepted"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "pbBrowseDrawing_clicked"
QT_MOC_LITERAL(4, 63, 23), // "pbImportDrawing_clicked"
QT_MOC_LITERAL(5, 87, 22), // "pbLoadDatabase_clicked"
QT_MOC_LITERAL(6, 110, 19), // "pbSelectAll_clicked"
QT_MOC_LITERAL(7, 130, 21), // "pbDeselectAll_clicked"
QT_MOC_LITERAL(8, 152, 31), // "mDatabaseFileWidget_textChanged"
QT_MOC_LITERAL(9, 184, 8), // "filename"
QT_MOC_LITERAL(10, 193, 24), // "leLayerGroup_textChanged"
QT_MOC_LITERAL(11, 218, 4), // "text"
QT_MOC_LITERAL(12, 223, 8) // "showHelp"

    },
    "QgsDwgImportDialog\0buttonBox_accepted\0"
    "\0pbBrowseDrawing_clicked\0"
    "pbImportDrawing_clicked\0pbLoadDatabase_clicked\0"
    "pbSelectAll_clicked\0pbDeselectAll_clicked\0"
    "mDatabaseFileWidget_textChanged\0"
    "filename\0leLayerGroup_textChanged\0"
    "text\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDwgImportDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

       0        // eod
};

void QgsDwgImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDwgImportDialog *_t = static_cast<QgsDwgImportDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonBox_accepted(); break;
        case 1: _t->pbBrowseDrawing_clicked(); break;
        case 2: _t->pbImportDrawing_clicked(); break;
        case 3: _t->pbLoadDatabase_clicked(); break;
        case 4: _t->pbSelectAll_clicked(); break;
        case 5: _t->pbDeselectAll_clicked(); break;
        case 6: _t->mDatabaseFileWidget_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->leLayerGroup_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->showHelp(); break;
        default: ;
        }
    }
}

const QMetaObject QgsDwgImportDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsDwgImportDialog.data,
      qt_meta_data_QgsDwgImportDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDwgImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDwgImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDwgImportDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsDwgImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
