/****************************************************************************
** Meta object code from reading C++ file 'qgstextannotationdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgstextannotationdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstextannotationdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTextAnnotationDialog_t {
    QByteArrayData data[13];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTextAnnotationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTextAnnotationDialog_t qt_meta_stringdata_QgsTextAnnotationDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsTextAnnotationDialog"
QT_MOC_LITERAL(1, 24, 15), // "applyTextToItem"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "changeCurrentFormat"
QT_MOC_LITERAL(4, 61, 29), // "mFontColorButton_colorChanged"
QT_MOC_LITERAL(5, 91, 5), // "color"
QT_MOC_LITERAL(6, 97, 29), // "setCurrentFontPropertiesToGui"
QT_MOC_LITERAL(7, 127, 10), // "deleteItem"
QT_MOC_LITERAL(8, 138, 18), // "mButtonBox_clicked"
QT_MOC_LITERAL(9, 157, 16), // "QAbstractButton*"
QT_MOC_LITERAL(10, 174, 6), // "button"
QT_MOC_LITERAL(11, 181, 22), // "backgroundColorChanged"
QT_MOC_LITERAL(12, 204, 8) // "showHelp"

    },
    "QgsTextAnnotationDialog\0applyTextToItem\0"
    "\0changeCurrentFormat\0mFontColorButton_colorChanged\0"
    "color\0setCurrentFontPropertiesToGui\0"
    "deleteItem\0mButtonBox_clicked\0"
    "QAbstractButton*\0button\0backgroundColorChanged\0"
    "showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTextAnnotationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
      11,    1,   64,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void,

       0        // eod
};

void QgsTextAnnotationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTextAnnotationDialog *_t = static_cast<QgsTextAnnotationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applyTextToItem(); break;
        case 1: _t->changeCurrentFormat(); break;
        case 2: _t->mFontColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setCurrentFontPropertiesToGui(); break;
        case 4: _t->deleteItem(); break;
        case 5: _t->mButtonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 6: _t->backgroundColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->showHelp(); break;
        default: ;
        }
    }
}

const QMetaObject QgsTextAnnotationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsTextAnnotationDialog.data,
      qt_meta_data_QgsTextAnnotationDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTextAnnotationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTextAnnotationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTextAnnotationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsTextAnnotationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
