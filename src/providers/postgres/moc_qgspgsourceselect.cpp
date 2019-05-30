/****************************************************************************
** Meta object code from reading C++ file 'qgspgsourceselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgspgsourceselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspgsourceselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPgSourceSelectDelegate_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPgSourceSelectDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPgSourceSelectDelegate_t qt_meta_stringdata_QgsPgSourceSelectDelegate = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QgsPgSourceSelectDelegate"

    },
    "QgsPgSourceSelectDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPgSourceSelectDelegate[] = {

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

void QgsPgSourceSelectDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsPgSourceSelectDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_QgsPgSourceSelectDelegate.data,
      qt_meta_data_QgsPgSourceSelectDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPgSourceSelectDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPgSourceSelectDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPgSourceSelectDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int QgsPgSourceSelectDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsPgSourceSelect_t {
    QByteArrayData data[34];
    char stringdata0[633];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPgSourceSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPgSourceSelect_t qt_meta_stringdata_QgsPgSourceSelect = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsPgSourceSelect"
QT_MOC_LITERAL(1, 18, 17), // "addGeometryColumn"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "QgsPostgresLayerProperty"
QT_MOC_LITERAL(4, 62, 15), // "progressMessage"
QT_MOC_LITERAL(5, 78, 7), // "refresh"
QT_MOC_LITERAL(6, 86, 16), // "addButtonClicked"
QT_MOC_LITERAL(7, 103, 10), // "buildQuery"
QT_MOC_LITERAL(8, 114, 18), // "btnConnect_clicked"
QT_MOC_LITERAL(9, 133, 39), // "cbxAllowGeometrylessTables_st..."
QT_MOC_LITERAL(10, 173, 14), // "btnNew_clicked"
QT_MOC_LITERAL(11, 188, 15), // "btnEdit_clicked"
QT_MOC_LITERAL(12, 204, 17), // "btnDelete_clicked"
QT_MOC_LITERAL(13, 222, 15), // "btnSave_clicked"
QT_MOC_LITERAL(14, 238, 15), // "btnLoad_clicked"
QT_MOC_LITERAL(15, 254, 23), // "mSearchGroupBox_toggled"
QT_MOC_LITERAL(16, 278, 28), // "mSearchTableEdit_textChanged"
QT_MOC_LITERAL(17, 307, 4), // "text"
QT_MOC_LITERAL(18, 312, 41), // "mSearchColumnComboBox_current..."
QT_MOC_LITERAL(19, 354, 39), // "mSearchModeComboBox_currentIn..."
QT_MOC_LITERAL(20, 394, 34), // "cmbConnections_currentIndexCh..."
QT_MOC_LITERAL(21, 429, 6), // "setSql"
QT_MOC_LITERAL(22, 436, 5), // "index"
QT_MOC_LITERAL(23, 442, 12), // "setLayerType"
QT_MOC_LITERAL(24, 455, 13), // "layerProperty"
QT_MOC_LITERAL(25, 469, 23), // "mTablesTreeView_clicked"
QT_MOC_LITERAL(26, 493, 29), // "mTablesTreeView_doubleClicked"
QT_MOC_LITERAL(27, 523, 26), // "treeWidgetSelectionChanged"
QT_MOC_LITERAL(28, 550, 14), // "QItemSelection"
QT_MOC_LITERAL(29, 565, 8), // "selected"
QT_MOC_LITERAL(30, 574, 10), // "deselected"
QT_MOC_LITERAL(31, 585, 19), // "setSearchExpression"
QT_MOC_LITERAL(32, 605, 6), // "regexp"
QT_MOC_LITERAL(33, 612, 20) // "columnThreadFinished"

    },
    "QgsPgSourceSelect\0addGeometryColumn\0"
    "\0QgsPostgresLayerProperty\0progressMessage\0"
    "refresh\0addButtonClicked\0buildQuery\0"
    "btnConnect_clicked\0"
    "cbxAllowGeometrylessTables_stateChanged\0"
    "btnNew_clicked\0btnEdit_clicked\0"
    "btnDelete_clicked\0btnSave_clicked\0"
    "btnLoad_clicked\0mSearchGroupBox_toggled\0"
    "mSearchTableEdit_textChanged\0text\0"
    "mSearchColumnComboBox_currentIndexChanged\0"
    "mSearchModeComboBox_currentIndexChanged\0"
    "cmbConnections_currentIndexChanged\0"
    "setSql\0index\0setLayerType\0layerProperty\0"
    "mTablesTreeView_clicked\0"
    "mTablesTreeView_doubleClicked\0"
    "treeWidgetSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0setSearchExpression\0"
    "regexp\0columnThreadFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPgSourceSelect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  134,    2, 0x06 /* Public */,
       4,    1,  137,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  140,    2, 0x0a /* Public */,
       6,    0,  141,    2, 0x0a /* Public */,
       7,    0,  142,    2, 0x0a /* Public */,
       8,    0,  143,    2, 0x0a /* Public */,
       9,    1,  144,    2, 0x0a /* Public */,
      10,    0,  147,    2, 0x0a /* Public */,
      11,    0,  148,    2, 0x0a /* Public */,
      12,    0,  149,    2, 0x0a /* Public */,
      13,    0,  150,    2, 0x0a /* Public */,
      14,    0,  151,    2, 0x0a /* Public */,
      15,    1,  152,    2, 0x0a /* Public */,
      16,    1,  155,    2, 0x0a /* Public */,
      18,    1,  158,    2, 0x0a /* Public */,
      19,    1,  161,    2, 0x0a /* Public */,
      20,    1,  164,    2, 0x0a /* Public */,
      21,    1,  167,    2, 0x0a /* Public */,
      23,    1,  170,    2, 0x0a /* Public */,
      25,    1,  173,    2, 0x0a /* Public */,
      26,    1,  176,    2, 0x0a /* Public */,
      27,    2,  179,    2, 0x0a /* Public */,
      31,    1,  184,    2, 0x0a /* Public */,
      33,    0,  187,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,

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
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QModelIndex,   22,
    QMetaType::Void, 0x80000000 | 3,   24,
    QMetaType::Void, QMetaType::QModelIndex,   22,
    QMetaType::Void, QMetaType::QModelIndex,   22,
    QMetaType::Void, 0x80000000 | 28, 0x80000000 | 28,   29,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void,

       0        // eod
};

void QgsPgSourceSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPgSourceSelect *_t = static_cast<QgsPgSourceSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addGeometryColumn((*reinterpret_cast< const QgsPostgresLayerProperty(*)>(_a[1]))); break;
        case 1: _t->progressMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->refresh(); break;
        case 3: _t->addButtonClicked(); break;
        case 4: _t->buildQuery(); break;
        case 5: _t->btnConnect_clicked(); break;
        case 6: _t->cbxAllowGeometrylessTables_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->btnNew_clicked(); break;
        case 8: _t->btnEdit_clicked(); break;
        case 9: _t->btnDelete_clicked(); break;
        case 10: _t->btnSave_clicked(); break;
        case 11: _t->btnLoad_clicked(); break;
        case 12: _t->mSearchGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->mSearchTableEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->mSearchColumnComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->mSearchModeComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->cmbConnections_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->setSql((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 18: _t->setLayerType((*reinterpret_cast< const QgsPostgresLayerProperty(*)>(_a[1]))); break;
        case 19: _t->mTablesTreeView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 20: _t->mTablesTreeView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 21: _t->treeWidgetSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 22: _t->setSearchExpression((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->columnThreadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsPgSourceSelect::*_t)(const QgsPostgresLayerProperty & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPgSourceSelect::addGeometryColumn)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsPgSourceSelect::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPgSourceSelect::progressMessage)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsPgSourceSelect::staticMetaObject = {
    { &QgsAbstractDataSourceWidget::staticMetaObject, qt_meta_stringdata_QgsPgSourceSelect.data,
      qt_meta_data_QgsPgSourceSelect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPgSourceSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPgSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPgSourceSelect.stringdata0))
        return static_cast<void*>(this);
    return QgsAbstractDataSourceWidget::qt_metacast(_clname);
}

int QgsPgSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractDataSourceWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void QgsPgSourceSelect::addGeometryColumn(const QgsPostgresLayerProperty & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsPgSourceSelect::progressMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
