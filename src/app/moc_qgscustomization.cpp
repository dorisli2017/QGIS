/****************************************************************************
** Meta object code from reading C++ file 'qgscustomization.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgscustomization.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscustomization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCustomizationDialog_t {
    QByteArrayData data[14];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCustomizationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCustomizationDialog_t qt_meta_stringdata_QgsCustomizationDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsCustomizationDialog"
QT_MOC_LITERAL(1, 23, 2), // "ok"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "apply"
QT_MOC_LITERAL(4, 33, 6), // "cancel"
QT_MOC_LITERAL(5, 40, 8), // "showHelp"
QT_MOC_LITERAL(6, 49, 5), // "reset"
QT_MOC_LITERAL(7, 55, 20), // "actionSave_triggered"
QT_MOC_LITERAL(8, 76, 7), // "checked"
QT_MOC_LITERAL(9, 84, 20), // "actionLoad_triggered"
QT_MOC_LITERAL(10, 105, 25), // "actionExpandAll_triggered"
QT_MOC_LITERAL(11, 131, 27), // "actionCollapseAll_triggered"
QT_MOC_LITERAL(12, 159, 25), // "actionSelectAll_triggered"
QT_MOC_LITERAL(13, 185, 37) // "mCustomizationEnabledCheckBox..."

    },
    "QgsCustomizationDialog\0ok\0\0apply\0"
    "cancel\0showHelp\0reset\0actionSave_triggered\0"
    "checked\0actionLoad_triggered\0"
    "actionExpandAll_triggered\0"
    "actionCollapseAll_triggered\0"
    "actionSelectAll_triggered\0"
    "mCustomizationEnabledCheckBox_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCustomizationDialog[] = {

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
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      12,    1,   86,    2, 0x08 /* Private */,
      13,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void QgsCustomizationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCustomizationDialog *_t = static_cast<QgsCustomizationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ok(); break;
        case 1: _t->apply(); break;
        case 2: _t->cancel(); break;
        case 3: _t->showHelp(); break;
        case 4: _t->reset(); break;
        case 5: _t->actionSave_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->actionLoad_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->actionExpandAll_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->actionCollapseAll_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->actionSelectAll_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->mCustomizationEnabledCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsCustomizationDialog::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QgsCustomizationDialog.data,
      qt_meta_data_QgsCustomizationDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCustomizationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCustomizationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCustomizationDialog.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QgsCustomizationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsCustomization_t {
    QByteArrayData data[12];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCustomization_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCustomization_t qt_meta_stringdata_QgsCustomization = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsCustomization"
QT_MOC_LITERAL(1, 17, 9), // "preNotify"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "receiver"
QT_MOC_LITERAL(4, 37, 7), // "QEvent*"
QT_MOC_LITERAL(5, 45, 5), // "event"
QT_MOC_LITERAL(6, 51, 5), // "bool*"
QT_MOC_LITERAL(7, 57, 4), // "done"
QT_MOC_LITERAL(8, 62, 6), // "Status"
QT_MOC_LITERAL(9, 69, 6), // "NotSet"
QT_MOC_LITERAL(10, 76, 4), // "User"
QT_MOC_LITERAL(11, 81, 7) // "Default"

    },
    "QgsCustomization\0preNotify\0\0receiver\0"
    "QEvent*\0event\0bool*\0done\0Status\0NotSet\0"
    "User\0Default"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCustomization[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,

 // enums: name, flags, count, data
       8, 0x0,    3,   30,

 // enum data: key, value
       9, uint(QgsCustomization::NotSet),
      10, uint(QgsCustomization::User),
      11, uint(QgsCustomization::Default),

       0        // eod
};

void QgsCustomization::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCustomization *_t = static_cast<QgsCustomization *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->preNotify((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsCustomization::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsCustomization.data,
      qt_meta_data_QgsCustomization,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCustomization::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCustomization::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCustomization.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsCustomization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
