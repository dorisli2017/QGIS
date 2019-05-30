/****************************************************************************
** Meta object code from reading C++ file 'qgsstylegroupselectiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsstylegroupselectiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsstylegroupselectiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsStyleGroupSelectionDialog_t {
    QByteArrayData data[14];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStyleGroupSelectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStyleGroupSelectionDialog_t qt_meta_stringdata_QgsStyleGroupSelectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsStyleGroupSelectionDialog"
QT_MOC_LITERAL(1, 29, 11), // "tagSelected"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "tagName"
QT_MOC_LITERAL(4, 50, 13), // "tagDeselected"
QT_MOC_LITERAL(5, 64, 18), // "smartgroupSelected"
QT_MOC_LITERAL(6, 83, 9), // "groupName"
QT_MOC_LITERAL(7, 93, 20), // "smartgroupDeselected"
QT_MOC_LITERAL(8, 114, 13), // "allDeselected"
QT_MOC_LITERAL(9, 128, 11), // "allSelected"
QT_MOC_LITERAL(10, 140, 25), // "groupTreeSelectionChanged"
QT_MOC_LITERAL(11, 166, 14), // "QItemSelection"
QT_MOC_LITERAL(12, 181, 8), // "selected"
QT_MOC_LITERAL(13, 190, 10) // "deselected"

    },
    "QgsStyleGroupSelectionDialog\0tagSelected\0"
    "\0tagName\0tagDeselected\0smartgroupSelected\0"
    "groupName\0smartgroupDeselected\0"
    "allDeselected\0allSelected\0"
    "groupTreeSelectionChanged\0QItemSelection\0"
    "selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStyleGroupSelectionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,
       7,    1,   58,    2, 0x06 /* Public */,
       8,    0,   61,    2, 0x06 /* Public */,
       9,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,

       0        // eod
};

void QgsStyleGroupSelectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsStyleGroupSelectionDialog *_t = static_cast<QgsStyleGroupSelectionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tagSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->tagDeselected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->smartgroupSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->smartgroupDeselected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->allDeselected(); break;
        case 5: _t->allSelected(); break;
        case 6: _t->groupTreeSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsStyleGroupSelectionDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::tagSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsStyleGroupSelectionDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::tagDeselected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsStyleGroupSelectionDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::smartgroupSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsStyleGroupSelectionDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::smartgroupDeselected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsStyleGroupSelectionDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::allDeselected)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsStyleGroupSelectionDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::allSelected)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QgsStyleGroupSelectionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsStyleGroupSelectionDialog.data,
      qt_meta_data_QgsStyleGroupSelectionDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsStyleGroupSelectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStyleGroupSelectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStyleGroupSelectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsStyleGroupSelectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QgsStyleGroupSelectionDialog::tagSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsStyleGroupSelectionDialog::tagDeselected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsStyleGroupSelectionDialog::smartgroupSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsStyleGroupSelectionDialog::smartgroupDeselected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsStyleGroupSelectionDialog::allDeselected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QgsStyleGroupSelectionDialog::allSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
