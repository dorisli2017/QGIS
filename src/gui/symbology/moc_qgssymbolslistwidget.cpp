/****************************************************************************
** Meta object code from reading C++ file 'qgssymbolslistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgssymbolslistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssymbolslistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsReadOnlyStyleModel_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsReadOnlyStyleModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsReadOnlyStyleModel_t qt_meta_stringdata_QgsReadOnlyStyleModel = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QgsReadOnlyStyleModel"

    },
    "QgsReadOnlyStyleModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsReadOnlyStyleModel[] = {

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

void QgsReadOnlyStyleModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsReadOnlyStyleModel::staticMetaObject = {
    { &QgsStyleProxyModel::staticMetaObject, qt_meta_stringdata_QgsReadOnlyStyleModel.data,
      qt_meta_data_QgsReadOnlyStyleModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsReadOnlyStyleModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsReadOnlyStyleModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsReadOnlyStyleModel.stringdata0))
        return static_cast<void*>(this);
    return QgsStyleProxyModel::qt_metacast(_clname);
}

int QgsReadOnlyStyleModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsStyleProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsSymbolsListWidget_t {
    QByteArrayData data[30];
    char stringdata0[464];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSymbolsListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSymbolsListWidget_t qt_meta_stringdata_QgsSymbolsListWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsSymbolsListWidget"
QT_MOC_LITERAL(1, 21, 7), // "changed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "setSymbolFromStyle"
QT_MOC_LITERAL(4, 49, 5), // "index"
QT_MOC_LITERAL(5, 55, 14), // "setSymbolColor"
QT_MOC_LITERAL(6, 70, 5), // "color"
QT_MOC_LITERAL(7, 76, 14), // "setMarkerAngle"
QT_MOC_LITERAL(8, 91, 5), // "angle"
QT_MOC_LITERAL(9, 97, 13), // "setMarkerSize"
QT_MOC_LITERAL(10, 111, 4), // "size"
QT_MOC_LITERAL(11, 116, 12), // "setLineWidth"
QT_MOC_LITERAL(12, 129, 5), // "width"
QT_MOC_LITERAL(13, 135, 16), // "addSymbolToStyle"
QT_MOC_LITERAL(14, 152, 10), // "saveSymbol"
QT_MOC_LITERAL(15, 163, 14), // "populateGroups"
QT_MOC_LITERAL(16, 178, 16), // "openStyleManager"
QT_MOC_LITERAL(17, 195, 19), // "clipFeaturesToggled"
QT_MOC_LITERAL(18, 215, 7), // "checked"
QT_MOC_LITERAL(19, 223, 27), // "updateDataDefinedMarkerSize"
QT_MOC_LITERAL(20, 251, 28), // "updateDataDefinedMarkerAngle"
QT_MOC_LITERAL(21, 280, 26), // "updateDataDefinedLineWidth"
QT_MOC_LITERAL(22, 307, 25), // "mSymbolUnitWidget_changed"
QT_MOC_LITERAL(23, 333, 31), // "groupsCombo_currentIndexChanged"
QT_MOC_LITERAL(24, 365, 21), // "updateAssistantSymbol"
QT_MOC_LITERAL(25, 387, 14), // "opacityChanged"
QT_MOC_LITERAL(26, 402, 5), // "value"
QT_MOC_LITERAL(27, 408, 20), // "createAuxiliaryField"
QT_MOC_LITERAL(28, 429, 18), // "updateModelFilters"
QT_MOC_LITERAL(29, 448, 15) // "forceRHRToggled"

    },
    "QgsSymbolsListWidget\0changed\0\0"
    "setSymbolFromStyle\0index\0setSymbolColor\0"
    "color\0setMarkerAngle\0angle\0setMarkerSize\0"
    "size\0setLineWidth\0width\0addSymbolToStyle\0"
    "saveSymbol\0populateGroups\0openStyleManager\0"
    "clipFeaturesToggled\0checked\0"
    "updateDataDefinedMarkerSize\0"
    "updateDataDefinedMarkerAngle\0"
    "updateDataDefinedLineWidth\0"
    "mSymbolUnitWidget_changed\0"
    "groupsCombo_currentIndexChanged\0"
    "updateAssistantSymbol\0opacityChanged\0"
    "value\0createAuxiliaryField\0"
    "updateModelFilters\0forceRHRToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSymbolsListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  120,    2, 0x0a /* Public */,
       5,    1,  123,    2, 0x0a /* Public */,
       7,    1,  126,    2, 0x0a /* Public */,
       9,    1,  129,    2, 0x0a /* Public */,
      11,    1,  132,    2, 0x0a /* Public */,
      13,    0,  135,    2, 0x0a /* Public */,
      14,    0,  136,    2, 0x0a /* Public */,
      15,    0,  137,    2, 0x0a /* Public */,
      16,    0,  138,    2, 0x0a /* Public */,
      17,    1,  139,    2, 0x0a /* Public */,
      19,    0,  142,    2, 0x0a /* Public */,
      20,    0,  143,    2, 0x0a /* Public */,
      21,    0,  144,    2, 0x0a /* Public */,
      22,    0,  145,    2, 0x08 /* Private */,
      23,    1,  146,    2, 0x08 /* Private */,
      24,    0,  149,    2, 0x08 /* Private */,
      25,    1,  150,    2, 0x08 /* Private */,
      27,    0,  153,    2, 0x08 /* Private */,
      28,    0,  154,    2, 0x08 /* Private */,
      29,    1,  155,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void QgsSymbolsListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSymbolsListWidget *_t = static_cast<QgsSymbolsListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setSymbolFromStyle((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->setSymbolColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setMarkerAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setMarkerSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setLineWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->addSymbolToStyle(); break;
        case 7: _t->saveSymbol(); break;
        case 8: _t->populateGroups(); break;
        case 9: _t->openStyleManager(); break;
        case 10: _t->clipFeaturesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->updateDataDefinedMarkerSize(); break;
        case 12: _t->updateDataDefinedMarkerAngle(); break;
        case 13: _t->updateDataDefinedLineWidth(); break;
        case 14: _t->mSymbolUnitWidget_changed(); break;
        case 15: _t->groupsCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->updateAssistantSymbol(); break;
        case 17: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->createAuxiliaryField(); break;
        case 19: _t->updateModelFilters(); break;
        case 20: _t->forceRHRToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsSymbolsListWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSymbolsListWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsSymbolsListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsSymbolsListWidget.data,
      qt_meta_data_QgsSymbolsListWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSymbolsListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSymbolsListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSymbolsListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsSymbolsListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void QgsSymbolsListWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
