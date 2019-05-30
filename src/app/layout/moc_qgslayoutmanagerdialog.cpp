/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutmanagerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutmanagerdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutmanagerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutManagerDialog_t {
    QByteArrayData data[17];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutManagerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutManagerDialog_t qt_meta_stringdata_QgsLayoutManagerDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsLayoutManagerDialog"
QT_MOC_LITERAL(1, 23, 8), // "activate"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "toggleButtons"
QT_MOC_LITERAL(4, 47, 18), // "mAddButton_clicked"
QT_MOC_LITERAL(5, 66, 29), // "mTemplate_currentIndexChanged"
QT_MOC_LITERAL(6, 96, 4), // "indx"
QT_MOC_LITERAL(7, 101, 31), // "mTemplatesDefaultDirBtn_pressed"
QT_MOC_LITERAL(8, 133, 28), // "mTemplatesUserDirBtn_pressed"
QT_MOC_LITERAL(9, 162, 8), // "showHelp"
QT_MOC_LITERAL(10, 171, 12), // "createReport"
QT_MOC_LITERAL(11, 184, 13), // "removeClicked"
QT_MOC_LITERAL(12, 198, 11), // "showClicked"
QT_MOC_LITERAL(13, 210, 16), // "duplicateClicked"
QT_MOC_LITERAL(14, 227, 13), // "renameClicked"
QT_MOC_LITERAL(15, 241, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(16, 259, 5) // "index"

    },
    "QgsLayoutManagerDialog\0activate\0\0"
    "toggleButtons\0mAddButton_clicked\0"
    "mTemplate_currentIndexChanged\0indx\0"
    "mTemplatesDefaultDirBtn_pressed\0"
    "mTemplatesUserDirBtn_pressed\0showHelp\0"
    "createReport\0removeClicked\0showClicked\0"
    "duplicateClicked\0renameClicked\0"
    "itemDoubleClicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutManagerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   16,

       0        // eod
};

void QgsLayoutManagerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutManagerDialog *_t = static_cast<QgsLayoutManagerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activate(); break;
        case 1: _t->toggleButtons(); break;
        case 2: _t->mAddButton_clicked(); break;
        case 3: _t->mTemplate_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->mTemplatesDefaultDirBtn_pressed(); break;
        case 5: _t->mTemplatesUserDirBtn_pressed(); break;
        case 6: _t->showHelp(); break;
        case 7: _t->createReport(); break;
        case 8: _t->removeClicked(); break;
        case 9: _t->showClicked(); break;
        case 10: _t->duplicateClicked(); break;
        case 11: _t->renameClicked(); break;
        case 12: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsLayoutManagerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsLayoutManagerDialog.data,
      qt_meta_data_QgsLayoutManagerDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutManagerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutManagerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutManagerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsLayoutManagerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
