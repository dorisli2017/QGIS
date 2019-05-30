/****************************************************************************
** Meta object code from reading C++ file 'qgscategorizedsymbolrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgscategorizedsymbolrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscategorizedsymbolrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCategorizedSymbolRendererModel_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCategorizedSymbolRendererModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCategorizedSymbolRendererModel_t qt_meta_stringdata_QgsCategorizedSymbolRendererModel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QgsCategorizedSymbolRendererM..."
QT_MOC_LITERAL(1, 34, 9), // "rowsMoved"
QT_MOC_LITERAL(2, 44, 0) // ""

    },
    "QgsCategorizedSymbolRendererModel\0"
    "rowsMoved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCategorizedSymbolRendererModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QgsCategorizedSymbolRendererModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCategorizedSymbolRendererModel *_t = static_cast<QgsCategorizedSymbolRendererModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rowsMoved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsCategorizedSymbolRendererModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsCategorizedSymbolRendererModel::rowsMoved)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsCategorizedSymbolRendererModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsCategorizedSymbolRendererModel.data,
      qt_meta_data_QgsCategorizedSymbolRendererModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCategorizedSymbolRendererModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCategorizedSymbolRendererModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCategorizedSymbolRendererModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsCategorizedSymbolRendererModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsCategorizedSymbolRendererModel::rowsMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle_t qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle = {
    {
QT_MOC_LITERAL(0, 0, 37) // "QgsCategorizedSymbolRendererV..."

    },
    "QgsCategorizedSymbolRendererViewStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCategorizedSymbolRendererViewStyle[] = {

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

void QgsCategorizedSymbolRendererViewStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsCategorizedSymbolRendererViewStyle::staticMetaObject = {
    { &QgsProxyStyle::staticMetaObject, qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle.data,
      qt_meta_data_QgsCategorizedSymbolRendererViewStyle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCategorizedSymbolRendererViewStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCategorizedSymbolRendererViewStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle.stringdata0))
        return static_cast<void*>(this);
    return QgsProxyStyle::qt_metacast(_clname);
}

int QgsCategorizedSymbolRendererViewStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsProxyStyle::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsCategorizedSymbolRendererWidget_t {
    QByteArrayData data[25];
    char stringdata0[431];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCategorizedSymbolRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCategorizedSymbolRendererWidget_t qt_meta_stringdata_QgsCategorizedSymbolRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QgsCategorizedSymbolRendererW..."
QT_MOC_LITERAL(1, 35, 23), // "changeCategorizedSymbol"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 21), // "categoryColumnChanged"
QT_MOC_LITERAL(4, 82, 5), // "field"
QT_MOC_LITERAL(5, 88, 23), // "categoriesDoubleClicked"
QT_MOC_LITERAL(6, 112, 3), // "idx"
QT_MOC_LITERAL(7, 116, 11), // "addCategory"
QT_MOC_LITERAL(8, 128, 13), // "addCategories"
QT_MOC_LITERAL(9, 142, 14), // "applyColorRamp"
QT_MOC_LITERAL(10, 157, 16), // "deleteCategories"
QT_MOC_LITERAL(11, 174, 19), // "deleteAllCategories"
QT_MOC_LITERAL(12, 194, 16), // "showSymbolLevels"
QT_MOC_LITERAL(13, 211, 9), // "rowsMoved"
QT_MOC_LITERAL(14, 221, 25), // "matchToSymbolsFromLibrary"
QT_MOC_LITERAL(15, 247, 21), // "matchToSymbolsFromXml"
QT_MOC_LITERAL(16, 269, 21), // "cleanUpSymbolSelector"
QT_MOC_LITERAL(17, 291, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(18, 307, 9), // "container"
QT_MOC_LITERAL(19, 317, 23), // "updateSymbolsFromWidget"
QT_MOC_LITERAL(20, 341, 21), // "dataDefinedSizeLegend"
QT_MOC_LITERAL(21, 363, 23), // "mergeSelectedCategories"
QT_MOC_LITERAL(22, 387, 25), // "unmergeSelectedCategories"
QT_MOC_LITERAL(23, 413, 15), // "showContextMenu"
QT_MOC_LITERAL(24, 429, 1) // "p"

    },
    "QgsCategorizedSymbolRendererWidget\0"
    "changeCategorizedSymbol\0\0categoryColumnChanged\0"
    "field\0categoriesDoubleClicked\0idx\0"
    "addCategory\0addCategories\0applyColorRamp\0"
    "deleteCategories\0deleteAllCategories\0"
    "showSymbolLevels\0rowsMoved\0"
    "matchToSymbolsFromLibrary\0"
    "matchToSymbolsFromXml\0cleanUpSymbolSelector\0"
    "QgsPanelWidget*\0container\0"
    "updateSymbolsFromWidget\0dataDefinedSizeLegend\0"
    "mergeSelectedCategories\0"
    "unmergeSelectedCategories\0showContextMenu\0"
    "p"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCategorizedSymbolRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    1,  105,    2, 0x0a /* Public */,
       5,    1,  108,    2, 0x0a /* Public */,
       7,    0,  111,    2, 0x0a /* Public */,
       8,    0,  112,    2, 0x0a /* Public */,
       9,    0,  113,    2, 0x0a /* Public */,
      10,    0,  114,    2, 0x0a /* Public */,
      11,    0,  115,    2, 0x0a /* Public */,
      12,    0,  116,    2, 0x0a /* Public */,
      13,    0,  117,    2, 0x0a /* Public */,
      14,    0,  118,    2, 0x0a /* Public */,
      15,    0,  119,    2, 0x0a /* Public */,
      16,    1,  120,    2, 0x08 /* Private */,
      19,    0,  123,    2, 0x08 /* Private */,
      20,    0,  124,    2, 0x08 /* Private */,
      21,    0,  125,    2, 0x08 /* Private */,
      22,    0,  126,    2, 0x08 /* Private */,
      23,    1,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   24,

       0        // eod
};

void QgsCategorizedSymbolRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCategorizedSymbolRendererWidget *_t = static_cast<QgsCategorizedSymbolRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCategorizedSymbol(); break;
        case 1: _t->categoryColumnChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->categoriesDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->addCategory(); break;
        case 4: _t->addCategories(); break;
        case 5: _t->applyColorRamp(); break;
        case 6: _t->deleteCategories(); break;
        case 7: _t->deleteAllCategories(); break;
        case 8: _t->showSymbolLevels(); break;
        case 9: _t->rowsMoved(); break;
        case 10: _t->matchToSymbolsFromLibrary(); break;
        case 11: _t->matchToSymbolsFromXml(); break;
        case 12: _t->cleanUpSymbolSelector((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 13: _t->updateSymbolsFromWidget(); break;
        case 14: _t->dataDefinedSizeLegend(); break;
        case 15: _t->mergeSelectedCategories(); break;
        case 16: _t->unmergeSelectedCategories(); break;
        case 17: _t->showContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsCategorizedSymbolRendererWidget::staticMetaObject = {
    { &QgsRendererWidget::staticMetaObject, qt_meta_stringdata_QgsCategorizedSymbolRendererWidget.data,
      qt_meta_data_QgsCategorizedSymbolRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCategorizedSymbolRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCategorizedSymbolRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCategorizedSymbolRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsRendererWidget::qt_metacast(_clname);
}

int QgsCategorizedSymbolRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRendererWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
