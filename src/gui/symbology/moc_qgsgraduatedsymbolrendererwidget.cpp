/****************************************************************************
** Meta object code from reading C++ file 'qgsgraduatedsymbolrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgraduatedsymbolrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgraduatedsymbolrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGraduatedSymbolRendererModel_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGraduatedSymbolRendererModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGraduatedSymbolRendererModel_t qt_meta_stringdata_QgsGraduatedSymbolRendererModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsGraduatedSymbolRendererModel"
QT_MOC_LITERAL(1, 32, 9), // "rowsMoved"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "QgsGraduatedSymbolRendererModel\0"
    "rowsMoved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGraduatedSymbolRendererModel[] = {

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

void QgsGraduatedSymbolRendererModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGraduatedSymbolRendererModel *_t = static_cast<QgsGraduatedSymbolRendererModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rowsMoved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGraduatedSymbolRendererModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGraduatedSymbolRendererModel::rowsMoved)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsGraduatedSymbolRendererModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsGraduatedSymbolRendererModel.data,
      qt_meta_data_QgsGraduatedSymbolRendererModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGraduatedSymbolRendererModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGraduatedSymbolRendererModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGraduatedSymbolRendererModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsGraduatedSymbolRendererModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsGraduatedSymbolRendererModel::rowsMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle_t qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle = {
    {
QT_MOC_LITERAL(0, 0, 35) // "QgsGraduatedSymbolRendererVie..."

    },
    "QgsGraduatedSymbolRendererViewStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGraduatedSymbolRendererViewStyle[] = {

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

void QgsGraduatedSymbolRendererViewStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsGraduatedSymbolRendererViewStyle::staticMetaObject = {
    { &QgsProxyStyle::staticMetaObject, qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle.data,
      qt_meta_data_QgsGraduatedSymbolRendererViewStyle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGraduatedSymbolRendererViewStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGraduatedSymbolRendererViewStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle.stringdata0))
        return static_cast<void*>(this);
    return QgsProxyStyle::qt_metacast(_clname);
}

int QgsGraduatedSymbolRendererViewStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsProxyStyle::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsGraduatedSymbolRendererWidget_t {
    QByteArrayData data[33];
    char stringdata0[534];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGraduatedSymbolRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGraduatedSymbolRendererWidget_t qt_meta_stringdata_QgsGraduatedSymbolRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsGraduatedSymbolRendererWidget"
QT_MOC_LITERAL(1, 33, 21), // "changeGraduatedSymbol"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 22), // "graduatedColumnChanged"
QT_MOC_LITERAL(4, 79, 5), // "field"
QT_MOC_LITERAL(5, 85, 17), // "classifyGraduated"
QT_MOC_LITERAL(6, 103, 16), // "reapplyColorRamp"
QT_MOC_LITERAL(7, 120, 12), // "reapplySizes"
QT_MOC_LITERAL(8, 133, 19), // "rangesDoubleClicked"
QT_MOC_LITERAL(9, 153, 3), // "idx"
QT_MOC_LITERAL(10, 157, 13), // "rangesClicked"
QT_MOC_LITERAL(11, 171, 18), // "changeCurrentValue"
QT_MOC_LITERAL(12, 190, 14), // "QStandardItem*"
QT_MOC_LITERAL(13, 205, 4), // "item"
QT_MOC_LITERAL(14, 210, 8), // "addClass"
QT_MOC_LITERAL(15, 219, 13), // "deleteClasses"
QT_MOC_LITERAL(16, 233, 16), // "deleteAllClasses"
QT_MOC_LITERAL(17, 250, 20), // "toggleBoundariesLink"
QT_MOC_LITERAL(18, 271, 6), // "linked"
QT_MOC_LITERAL(19, 278, 18), // "labelFormatChanged"
QT_MOC_LITERAL(20, 297, 16), // "showSymbolLevels"
QT_MOC_LITERAL(21, 314, 9), // "rowsMoved"
QT_MOC_LITERAL(22, 324, 16), // "modelDataChanged"
QT_MOC_LITERAL(23, 341, 13), // "refreshRanges"
QT_MOC_LITERAL(24, 355, 5), // "reset"
QT_MOC_LITERAL(25, 361, 23), // "mSizeUnitWidget_changed"
QT_MOC_LITERAL(26, 385, 34), // "methodComboBox_currentIndexCh..."
QT_MOC_LITERAL(27, 420, 21), // "cleanUpSymbolSelector"
QT_MOC_LITERAL(28, 442, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(29, 458, 9), // "container"
QT_MOC_LITERAL(30, 468, 23), // "updateSymbolsFromWidget"
QT_MOC_LITERAL(31, 492, 19), // "toggleMethodWidgets"
QT_MOC_LITERAL(32, 512, 21) // "dataDefinedSizeLegend"

    },
    "QgsGraduatedSymbolRendererWidget\0"
    "changeGraduatedSymbol\0\0graduatedColumnChanged\0"
    "field\0classifyGraduated\0reapplyColorRamp\0"
    "reapplySizes\0rangesDoubleClicked\0idx\0"
    "rangesClicked\0changeCurrentValue\0"
    "QStandardItem*\0item\0addClass\0deleteClasses\0"
    "deleteAllClasses\0toggleBoundariesLink\0"
    "linked\0labelFormatChanged\0showSymbolLevels\0"
    "rowsMoved\0modelDataChanged\0refreshRanges\0"
    "reset\0mSizeUnitWidget_changed\0"
    "methodComboBox_currentIndexChanged\0"
    "cleanUpSymbolSelector\0QgsPanelWidget*\0"
    "container\0updateSymbolsFromWidget\0"
    "toggleMethodWidgets\0dataDefinedSizeLegend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGraduatedSymbolRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x0a /* Public */,
       3,    1,  135,    2, 0x0a /* Public */,
       5,    0,  138,    2, 0x0a /* Public */,
       6,    0,  139,    2, 0x0a /* Public */,
       7,    0,  140,    2, 0x0a /* Public */,
       8,    1,  141,    2, 0x0a /* Public */,
      10,    1,  144,    2, 0x0a /* Public */,
      11,    1,  147,    2, 0x0a /* Public */,
      14,    0,  150,    2, 0x0a /* Public */,
      15,    0,  151,    2, 0x0a /* Public */,
      16,    0,  152,    2, 0x0a /* Public */,
      17,    1,  153,    2, 0x0a /* Public */,
      19,    0,  156,    2, 0x0a /* Public */,
      20,    0,  157,    2, 0x0a /* Public */,
      21,    0,  158,    2, 0x0a /* Public */,
      22,    0,  159,    2, 0x0a /* Public */,
      23,    1,  160,    2, 0x0a /* Public */,
      23,    0,  163,    2, 0x2a /* Public | MethodCloned */,
      25,    0,  164,    2, 0x08 /* Private */,
      26,    1,  165,    2, 0x08 /* Private */,
      27,    1,  168,    2, 0x08 /* Private */,
      30,    0,  171,    2, 0x08 /* Private */,
      31,    1,  172,    2, 0x08 /* Private */,
      32,    0,  175,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

       0        // eod
};

void QgsGraduatedSymbolRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGraduatedSymbolRendererWidget *_t = static_cast<QgsGraduatedSymbolRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeGraduatedSymbol(); break;
        case 1: _t->graduatedColumnChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->classifyGraduated(); break;
        case 3: _t->reapplyColorRamp(); break;
        case 4: _t->reapplySizes(); break;
        case 5: _t->rangesDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->rangesClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->changeCurrentValue((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 8: _t->addClass(); break;
        case 9: _t->deleteClasses(); break;
        case 10: _t->deleteAllClasses(); break;
        case 11: _t->toggleBoundariesLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->labelFormatChanged(); break;
        case 13: _t->showSymbolLevels(); break;
        case 14: _t->rowsMoved(); break;
        case 15: _t->modelDataChanged(); break;
        case 16: _t->refreshRanges((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->refreshRanges(); break;
        case 18: _t->mSizeUnitWidget_changed(); break;
        case 19: _t->methodComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->cleanUpSymbolSelector((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 21: _t->updateSymbolsFromWidget(); break;
        case 22: _t->toggleMethodWidgets((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->dataDefinedSizeLegend(); break;
        default: ;
        }
    }
}

const QMetaObject QgsGraduatedSymbolRendererWidget::staticMetaObject = {
    { &QgsRendererWidget::staticMetaObject, qt_meta_stringdata_QgsGraduatedSymbolRendererWidget.data,
      qt_meta_data_QgsGraduatedSymbolRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGraduatedSymbolRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGraduatedSymbolRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGraduatedSymbolRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsRendererWidget::qt_metacast(_clname);
}

int QgsGraduatedSymbolRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRendererWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
