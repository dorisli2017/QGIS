/****************************************************************************
** Meta object code from reading C++ file 'qgsattributesformproperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsattributesformproperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributesformproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributesFormProperties_t {
    QByteArrayData data[11];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributesFormProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributesFormProperties_t qt_meta_stringdata_QgsAttributesFormProperties = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsAttributesFormProperties"
QT_MOC_LITERAL(1, 28, 30), // "onInvertSelectionButtonClicked"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 7), // "checked"
QT_MOC_LITERAL(4, 68, 27), // "onAttributeSelectionChanged"
QT_MOC_LITERAL(5, 96, 19), // "addTabOrGroupButton"
QT_MOC_LITERAL(6, 116, 22), // "removeTabOrGroupButton"
QT_MOC_LITERAL(7, 139, 41), // "mEditorLayoutComboBox_current..."
QT_MOC_LITERAL(8, 181, 5), // "index"
QT_MOC_LITERAL(9, 187, 25), // "pbnSelectEditForm_clicked"
QT_MOC_LITERAL(10, 213, 19) // "mTbInitCode_clicked"

    },
    "QgsAttributesFormProperties\0"
    "onInvertSelectionButtonClicked\0\0checked\0"
    "onAttributeSelectionChanged\0"
    "addTabOrGroupButton\0removeTabOrGroupButton\0"
    "mEditorLayoutComboBox_currentIndexChanged\0"
    "index\0pbnSelectEditForm_clicked\0"
    "mTbInitCode_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributesFormProperties[] = {

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
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAttributesFormProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributesFormProperties *_t = static_cast<QgsAttributesFormProperties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onInvertSelectionButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onAttributeSelectionChanged(); break;
        case 2: _t->addTabOrGroupButton(); break;
        case 3: _t->removeTabOrGroupButton(); break;
        case 4: _t->mEditorLayoutComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->pbnSelectEditForm_clicked(); break;
        case 6: _t->mTbInitCode_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject QgsAttributesFormProperties::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAttributesFormProperties.data,
      qt_meta_data_QgsAttributesFormProperties,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributesFormProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributesFormProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributesFormProperties.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAttributesFormProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_DnDTree_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DnDTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DnDTree_t qt_meta_stringdata_DnDTree = {
    {
QT_MOC_LITERAL(0, 0, 7), // "DnDTree"
QT_MOC_LITERAL(1, 8, 19), // "onItemDoubleClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 46, 4), // "item"
QT_MOC_LITERAL(5, 51, 6) // "column"

    },
    "DnDTree\0onItemDoubleClicked\0\0"
    "QTreeWidgetItem*\0item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DnDTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

       0        // eod
};

void DnDTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DnDTree *_t = static_cast<DnDTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject DnDTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_DnDTree.data,
      qt_meta_data_DnDTree,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DnDTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DnDTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DnDTree.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int DnDTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
