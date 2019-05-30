/****************************************************************************
** Meta object code from reading C++ file 'qgsexpressionbuilderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsexpressionbuilderwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsexpressionbuilderwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsExpressionItemSearchProxy_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExpressionItemSearchProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExpressionItemSearchProxy_t qt_meta_stringdata_QgsExpressionItemSearchProxy = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QgsExpressionItemSearchProxy"

    },
    "QgsExpressionItemSearchProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExpressionItemSearchProxy[] = {

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

void QgsExpressionItemSearchProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsExpressionItemSearchProxy::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsExpressionItemSearchProxy.data,
      qt_meta_data_QgsExpressionItemSearchProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsExpressionItemSearchProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExpressionItemSearchProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExpressionItemSearchProxy.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsExpressionItemSearchProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsExpressionBuilderWidget_t {
    QByteArrayData data[34];
    char stringdata0[575];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExpressionBuilderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExpressionBuilderWidget_t qt_meta_stringdata_QgsExpressionBuilderWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsExpressionBuilderWidget"
QT_MOC_LITERAL(1, 27, 16), // "expressionParsed"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "isValid"
QT_MOC_LITERAL(4, 53, 16), // "evalErrorChanged"
QT_MOC_LITERAL(5, 70, 18), // "parserErrorChanged"
QT_MOC_LITERAL(6, 89, 16), // "loadSampleValues"
QT_MOC_LITERAL(7, 106, 13), // "loadAllValues"
QT_MOC_LITERAL(8, 120, 8), // "autosave"
QT_MOC_LITERAL(9, 129, 11), // "setAutoSave"
QT_MOC_LITERAL(10, 141, 7), // "enabled"
QT_MOC_LITERAL(11, 149, 16), // "indicatorClicked"
QT_MOC_LITERAL(12, 166, 4), // "line"
QT_MOC_LITERAL(13, 171, 5), // "index"
QT_MOC_LITERAL(14, 177, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(15, 199, 5), // "state"
QT_MOC_LITERAL(16, 205, 15), // "showContextMenu"
QT_MOC_LITERAL(17, 221, 18), // "setExpressionState"
QT_MOC_LITERAL(18, 240, 14), // "currentChanged"
QT_MOC_LITERAL(19, 255, 21), // "operatorButtonClicked"
QT_MOC_LITERAL(20, 277, 14), // "btnRun_pressed"
QT_MOC_LITERAL(21, 292, 18), // "btnNewFile_pressed"
QT_MOC_LITERAL(22, 311, 31), // "cmbFileNames_currentItemChanged"
QT_MOC_LITERAL(23, 343, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(24, 360, 4), // "item"
QT_MOC_LITERAL(25, 365, 8), // "lastitem"
QT_MOC_LITERAL(26, 374, 28), // "expressionTree_doubleClicked"
QT_MOC_LITERAL(27, 403, 31), // "txtExpressionString_textChanged"
QT_MOC_LITERAL(28, 435, 25), // "txtSearchEdit_textChanged"
QT_MOC_LITERAL(29, 461, 31), // "txtSearchEditValues_textChanged"
QT_MOC_LITERAL(30, 493, 24), // "lblPreview_linkActivated"
QT_MOC_LITERAL(31, 518, 4), // "link"
QT_MOC_LITERAL(32, 523, 29), // "mValuesListView_doubleClicked"
QT_MOC_LITERAL(33, 553, 21) // "txtPython_textChanged"

    },
    "QgsExpressionBuilderWidget\0expressionParsed\0"
    "\0isValid\0evalErrorChanged\0parserErrorChanged\0"
    "loadSampleValues\0loadAllValues\0autosave\0"
    "setAutoSave\0enabled\0indicatorClicked\0"
    "line\0index\0Qt::KeyboardModifiers\0state\0"
    "showContextMenu\0setExpressionState\0"
    "currentChanged\0operatorButtonClicked\0"
    "btnRun_pressed\0btnNewFile_pressed\0"
    "cmbFileNames_currentItemChanged\0"
    "QListWidgetItem*\0item\0lastitem\0"
    "expressionTree_doubleClicked\0"
    "txtExpressionString_textChanged\0"
    "txtSearchEdit_textChanged\0"
    "txtSearchEditValues_textChanged\0"
    "lblPreview_linkActivated\0link\0"
    "mValuesListView_doubleClicked\0"
    "txtPython_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExpressionBuilderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       4,    0,  127,    2, 0x06 /* Public */,
       5,    0,  128,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  129,    2, 0x0a /* Public */,
       7,    0,  130,    2, 0x0a /* Public */,
       8,    0,  131,    2, 0x0a /* Public */,
       9,    1,  132,    2, 0x0a /* Public */,
      11,    3,  135,    2, 0x08 /* Private */,
      16,    1,  142,    2, 0x08 /* Private */,
      17,    1,  145,    2, 0x08 /* Private */,
      18,    2,  148,    2, 0x08 /* Private */,
      19,    0,  153,    2, 0x08 /* Private */,
      20,    0,  154,    2, 0x08 /* Private */,
      21,    0,  155,    2, 0x08 /* Private */,
      22,    2,  156,    2, 0x08 /* Private */,
      26,    1,  161,    2, 0x08 /* Private */,
      27,    0,  164,    2, 0x08 /* Private */,
      28,    0,  165,    2, 0x08 /* Private */,
      29,    0,  166,    2, 0x08 /* Private */,
      30,    1,  167,    2, 0x08 /* Private */,
      32,    1,  170,    2, 0x08 /* Private */,
      33,    0,  173,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 14,   12,   13,   15,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   13,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 23,   24,   25,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void,

       0        // eod
};

void QgsExpressionBuilderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsExpressionBuilderWidget *_t = static_cast<QgsExpressionBuilderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expressionParsed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->evalErrorChanged(); break;
        case 2: _t->parserErrorChanged(); break;
        case 3: _t->loadSampleValues(); break;
        case 4: _t->loadAllValues(); break;
        case 5: _t->autosave(); break;
        case 6: _t->setAutoSave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->indicatorClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        case 8: _t->showContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 9: _t->setExpressionState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->operatorButtonClicked(); break;
        case 12: _t->btnRun_pressed(); break;
        case 13: _t->btnNewFile_pressed(); break;
        case 14: _t->cmbFileNames_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 15: _t->expressionTree_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: _t->txtExpressionString_textChanged(); break;
        case 17: _t->txtSearchEdit_textChanged(); break;
        case 18: _t->txtSearchEditValues_textChanged(); break;
        case 19: _t->lblPreview_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->mValuesListView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 21: _t->txtPython_textChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsExpressionBuilderWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionBuilderWidget::expressionParsed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsExpressionBuilderWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionBuilderWidget::evalErrorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsExpressionBuilderWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionBuilderWidget::parserErrorChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsExpressionBuilderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsExpressionBuilderWidget.data,
      qt_meta_data_QgsExpressionBuilderWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsExpressionBuilderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExpressionBuilderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExpressionBuilderWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsExpressionBuilderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void QgsExpressionBuilderWidget::expressionParsed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsExpressionBuilderWidget::evalErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsExpressionBuilderWidget::parserErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
