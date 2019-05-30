/****************************************************************************
** Meta object code from reading C++ file 'qgsmssqlsourceselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmssqlsourceselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmssqlsourceselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMssqlSourceSelectDelegate_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMssqlSourceSelectDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMssqlSourceSelectDelegate_t qt_meta_stringdata_QgsMssqlSourceSelectDelegate = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QgsMssqlSourceSelectDelegate"

    },
    "QgsMssqlSourceSelectDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMssqlSourceSelectDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsMssqlSourceSelectDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsMssqlSourceSelectDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_QgsMssqlSourceSelectDelegate.data,
      qt_meta_data_QgsMssqlSourceSelectDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMssqlSourceSelectDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMssqlSourceSelectDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMssqlSourceSelectDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int QgsMssqlSourceSelectDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsMssqlSourceSelect_t {
    QByteArrayData data[33];
    char stringdata0[607];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMssqlSourceSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMssqlSourceSelect_t qt_meta_stringdata_QgsMssqlSourceSelect = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsMssqlSourceSelect"
QT_MOC_LITERAL(1, 21, 17), // "addGeometryColumn"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "QgsMssqlLayerProperty"
QT_MOC_LITERAL(4, 62, 7), // "refresh"
QT_MOC_LITERAL(5, 70, 16), // "addButtonClicked"
QT_MOC_LITERAL(6, 87, 10), // "buildQuery"
QT_MOC_LITERAL(7, 98, 18), // "btnConnect_clicked"
QT_MOC_LITERAL(8, 117, 39), // "cbxAllowGeometrylessTables_st..."
QT_MOC_LITERAL(9, 157, 14), // "btnNew_clicked"
QT_MOC_LITERAL(10, 172, 15), // "btnEdit_clicked"
QT_MOC_LITERAL(11, 188, 17), // "btnDelete_clicked"
QT_MOC_LITERAL(12, 206, 15), // "btnSave_clicked"
QT_MOC_LITERAL(13, 222, 15), // "btnLoad_clicked"
QT_MOC_LITERAL(14, 238, 23), // "mSearchGroupBox_toggled"
QT_MOC_LITERAL(15, 262, 28), // "mSearchTableEdit_textChanged"
QT_MOC_LITERAL(16, 291, 4), // "text"
QT_MOC_LITERAL(17, 296, 41), // "mSearchColumnComboBox_current..."
QT_MOC_LITERAL(18, 338, 39), // "mSearchModeComboBox_currentIn..."
QT_MOC_LITERAL(19, 378, 6), // "setSql"
QT_MOC_LITERAL(20, 385, 5), // "index"
QT_MOC_LITERAL(21, 391, 24), // "cmbConnections_activated"
QT_MOC_LITERAL(22, 416, 12), // "setLayerType"
QT_MOC_LITERAL(23, 429, 13), // "layerProperty"
QT_MOC_LITERAL(24, 443, 23), // "mTablesTreeView_clicked"
QT_MOC_LITERAL(25, 467, 29), // "mTablesTreeView_doubleClicked"
QT_MOC_LITERAL(26, 497, 26), // "treeWidgetSelectionChanged"
QT_MOC_LITERAL(27, 524, 14), // "QItemSelection"
QT_MOC_LITERAL(28, 539, 8), // "selected"
QT_MOC_LITERAL(29, 548, 10), // "deselected"
QT_MOC_LITERAL(30, 559, 19), // "setSearchExpression"
QT_MOC_LITERAL(31, 579, 6), // "regexp"
QT_MOC_LITERAL(32, 586, 20) // "columnThreadFinished"

    },
    "QgsMssqlSourceSelect\0addGeometryColumn\0"
    "\0QgsMssqlLayerProperty\0refresh\0"
    "addButtonClicked\0buildQuery\0"
    "btnConnect_clicked\0"
    "cbxAllowGeometrylessTables_stateChanged\0"
    "btnNew_clicked\0btnEdit_clicked\0"
    "btnDelete_clicked\0btnSave_clicked\0"
    "btnLoad_clicked\0mSearchGroupBox_toggled\0"
    "mSearchTableEdit_textChanged\0text\0"
    "mSearchColumnComboBox_currentIndexChanged\0"
    "mSearchModeComboBox_currentIndexChanged\0"
    "setSql\0index\0cmbConnections_activated\0"
    "setLayerType\0layerProperty\0"
    "mTablesTreeView_clicked\0"
    "mTablesTreeView_doubleClicked\0"
    "treeWidgetSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0setSearchExpression\0"
    "regexp\0columnThreadFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMssqlSourceSelect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  132,    2, 0x0a /* Public */,
       5,    0,  133,    2, 0x0a /* Public */,
       6,    0,  134,    2, 0x0a /* Public */,
       7,    0,  135,    2, 0x0a /* Public */,
       8,    1,  136,    2, 0x0a /* Public */,
       9,    0,  139,    2, 0x0a /* Public */,
      10,    0,  140,    2, 0x0a /* Public */,
      11,    0,  141,    2, 0x0a /* Public */,
      12,    0,  142,    2, 0x0a /* Public */,
      13,    0,  143,    2, 0x0a /* Public */,
      14,    1,  144,    2, 0x0a /* Public */,
      15,    1,  147,    2, 0x0a /* Public */,
      17,    1,  150,    2, 0x0a /* Public */,
      18,    1,  153,    2, 0x0a /* Public */,
      19,    1,  156,    2, 0x0a /* Public */,
      21,    1,  159,    2, 0x0a /* Public */,
      22,    1,  162,    2, 0x0a /* Public */,
      24,    1,  165,    2, 0x0a /* Public */,
      25,    1,  168,    2, 0x0a /* Public */,
      26,    2,  171,    2, 0x0a /* Public */,
      30,    1,  176,    2, 0x0a /* Public */,
      32,    0,  179,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QModelIndex,   20,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 3,   23,
    QMetaType::Void, QMetaType::QModelIndex,   20,
    QMetaType::Void, QMetaType::QModelIndex,   20,
    QMetaType::Void, 0x80000000 | 27, 0x80000000 | 27,   28,   29,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,

       0        // eod
};

void QgsMssqlSourceSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMssqlSourceSelect *_t = static_cast<QgsMssqlSourceSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addGeometryColumn((*reinterpret_cast< const QgsMssqlLayerProperty(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        case 2: _t->addButtonClicked(); break;
        case 3: _t->buildQuery(); break;
        case 4: _t->btnConnect_clicked(); break;
        case 5: _t->cbxAllowGeometrylessTables_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->btnNew_clicked(); break;
        case 7: _t->btnEdit_clicked(); break;
        case 8: _t->btnDelete_clicked(); break;
        case 9: _t->btnSave_clicked(); break;
        case 10: _t->btnLoad_clicked(); break;
        case 11: _t->mSearchGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->mSearchTableEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->mSearchColumnComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->mSearchModeComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->setSql((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: _t->cmbConnections_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setLayerType((*reinterpret_cast< const QgsMssqlLayerProperty(*)>(_a[1]))); break;
        case 18: _t->mTablesTreeView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 19: _t->mTablesTreeView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 20: _t->treeWidgetSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 21: _t->setSearchExpression((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->columnThreadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMssqlSourceSelect::*_t)(const QgsMssqlLayerProperty & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMssqlSourceSelect::addGeometryColumn)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsMssqlSourceSelect::staticMetaObject = {
    { &QgsAbstractDataSourceWidget::staticMetaObject, qt_meta_stringdata_QgsMssqlSourceSelect.data,
      qt_meta_data_QgsMssqlSourceSelect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMssqlSourceSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMssqlSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMssqlSourceSelect.stringdata0))
        return static_cast<void*>(this);
    return QgsAbstractDataSourceWidget::qt_metacast(_clname);
}

int QgsMssqlSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractDataSourceWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void QgsMssqlSourceSelect::addGeometryColumn(const QgsMssqlLayerProperty & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
