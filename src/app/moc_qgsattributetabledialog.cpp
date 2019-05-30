/****************************************************************************
** Meta object code from reading C++ file 'qgsattributetabledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsattributetabledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributetabledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributeTableDialog_t {
    QByteArrayData data[70];
    char stringdata0[1334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTableDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTableDialog_t qt_meta_stringdata_QgsAttributeTableDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsAttributeTableDialog"
QT_MOC_LITERAL(1, 24, 9), // "saveEdits"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(4, 48, 5), // "layer"
QT_MOC_LITERAL(5, 54, 14), // "editingToggled"
QT_MOC_LITERAL(6, 69, 19), // "setFilterExpression"
QT_MOC_LITERAL(7, 89, 12), // "filterString"
QT_MOC_LITERAL(8, 102, 28), // "QgsAttributeForm::FilterType"
QT_MOC_LITERAL(9, 131, 4), // "type"
QT_MOC_LITERAL(10, 136, 16), // "alwaysShowFilter"
QT_MOC_LITERAL(11, 153, 32), // "mActionCutSelectedRows_triggered"
QT_MOC_LITERAL(12, 186, 33), // "mActionCopySelectedRows_trigg..."
QT_MOC_LITERAL(13, 220, 30), // "mActionPasteFeatures_triggered"
QT_MOC_LITERAL(14, 251, 28), // "mActionToggleEditing_toggled"
QT_MOC_LITERAL(15, 280, 26), // "mActionSaveEdits_triggered"
QT_MOC_LITERAL(16, 307, 23), // "mActionReload_triggered"
QT_MOC_LITERAL(17, 331, 32), // "mActionInvertSelection_triggered"
QT_MOC_LITERAL(18, 364, 32), // "mActionRemoveSelection_triggered"
QT_MOC_LITERAL(19, 397, 26), // "mActionSelectAll_triggered"
QT_MOC_LITERAL(20, 424, 38), // "mActionZoomMapToSelectedRows_..."
QT_MOC_LITERAL(21, 463, 37), // "mActionPanMapToSelectedRows_t..."
QT_MOC_LITERAL(22, 501, 28), // "mActionSelectedToTop_toggled"
QT_MOC_LITERAL(23, 530, 29), // "mActionAddAttribute_triggered"
QT_MOC_LITERAL(24, 560, 32), // "mActionRemoveAttribute_triggered"
QT_MOC_LITERAL(25, 593, 36), // "mActionOpenFieldCalculator_tr..."
QT_MOC_LITERAL(26, 630, 31), // "mActionDeleteSelected_triggered"
QT_MOC_LITERAL(27, 662, 24), // "mMainView_currentChanged"
QT_MOC_LITERAL(28, 687, 27), // "mActionAddFeature_triggered"
QT_MOC_LITERAL(29, 715, 33), // "mActionExpressionSelect_trigg..."
QT_MOC_LITERAL(30, 749, 19), // "filterColumnChanged"
QT_MOC_LITERAL(31, 769, 12), // "filterAction"
QT_MOC_LITERAL(32, 782, 23), // "filterExpressionBuilder"
QT_MOC_LITERAL(33, 806, 13), // "filterShowAll"
QT_MOC_LITERAL(34, 820, 14), // "filterSelected"
QT_MOC_LITERAL(35, 835, 13), // "filterVisible"
QT_MOC_LITERAL(36, 849, 12), // "filterEdited"
QT_MOC_LITERAL(37, 862, 18), // "filterQueryChanged"
QT_MOC_LITERAL(38, 881, 5), // "query"
QT_MOC_LITERAL(39, 887, 19), // "filterQueryAccepted"
QT_MOC_LITERAL(40, 907, 21), // "openConditionalStyles"
QT_MOC_LITERAL(41, 929, 11), // "updateTitle"
QT_MOC_LITERAL(42, 941, 18), // "updateButtonStatus"
QT_MOC_LITERAL(43, 960, 9), // "fieldName"
QT_MOC_LITERAL(44, 970, 7), // "isValid"
QT_MOC_LITERAL(45, 978, 19), // "replaceSearchWidget"
QT_MOC_LITERAL(46, 998, 8), // "QWidget*"
QT_MOC_LITERAL(47, 1007, 4), // "oldw"
QT_MOC_LITERAL(48, 1012, 4), // "neww"
QT_MOC_LITERAL(49, 1017, 20), // "layerActionTriggered"
QT_MOC_LITERAL(50, 1038, 13), // "columnBoxInit"
QT_MOC_LITERAL(51, 1052, 19), // "runFieldCalculation"
QT_MOC_LITERAL(52, 1072, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(53, 1088, 10), // "expression"
QT_MOC_LITERAL(54, 1099, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(55, 1113, 11), // "filteredIds"
QT_MOC_LITERAL(56, 1125, 25), // "updateFieldFromExpression"
QT_MOC_LITERAL(57, 1151, 33), // "updateFieldFromExpressionSele..."
QT_MOC_LITERAL(58, 1185, 15), // "viewModeChanged"
QT_MOC_LITERAL(59, 1201, 31), // "QgsAttributeEditorContext::Mode"
QT_MOC_LITERAL(60, 1233, 4), // "mode"
QT_MOC_LITERAL(61, 1238, 13), // "formFilterSet"
QT_MOC_LITERAL(62, 1252, 6), // "filter"
QT_MOC_LITERAL(63, 1259, 15), // "showContextMenu"
QT_MOC_LITERAL(64, 1275, 14), // "QgsActionMenu*"
QT_MOC_LITERAL(65, 1290, 4), // "menu"
QT_MOC_LITERAL(66, 1295, 12), // "QgsFeatureId"
QT_MOC_LITERAL(67, 1308, 3), // "fid"
QT_MOC_LITERAL(68, 1312, 14), // "toggleDockMode"
QT_MOC_LITERAL(69, 1327, 6) // "docked"

    },
    "QgsAttributeTableDialog\0saveEdits\0\0"
    "QgsMapLayer*\0layer\0editingToggled\0"
    "setFilterExpression\0filterString\0"
    "QgsAttributeForm::FilterType\0type\0"
    "alwaysShowFilter\0mActionCutSelectedRows_triggered\0"
    "mActionCopySelectedRows_triggered\0"
    "mActionPasteFeatures_triggered\0"
    "mActionToggleEditing_toggled\0"
    "mActionSaveEdits_triggered\0"
    "mActionReload_triggered\0"
    "mActionInvertSelection_triggered\0"
    "mActionRemoveSelection_triggered\0"
    "mActionSelectAll_triggered\0"
    "mActionZoomMapToSelectedRows_triggered\0"
    "mActionPanMapToSelectedRows_triggered\0"
    "mActionSelectedToTop_toggled\0"
    "mActionAddAttribute_triggered\0"
    "mActionRemoveAttribute_triggered\0"
    "mActionOpenFieldCalculator_triggered\0"
    "mActionDeleteSelected_triggered\0"
    "mMainView_currentChanged\0"
    "mActionAddFeature_triggered\0"
    "mActionExpressionSelect_triggered\0"
    "filterColumnChanged\0filterAction\0"
    "filterExpressionBuilder\0filterShowAll\0"
    "filterSelected\0filterVisible\0filterEdited\0"
    "filterQueryChanged\0query\0filterQueryAccepted\0"
    "openConditionalStyles\0updateTitle\0"
    "updateButtonStatus\0fieldName\0isValid\0"
    "replaceSearchWidget\0QWidget*\0oldw\0"
    "neww\0layerActionTriggered\0columnBoxInit\0"
    "runFieldCalculation\0QgsVectorLayer*\0"
    "expression\0QgsFeatureIds\0filteredIds\0"
    "updateFieldFromExpression\0"
    "updateFieldFromExpressionSelected\0"
    "viewModeChanged\0QgsAttributeEditorContext::Mode\0"
    "mode\0formFilterSet\0filter\0showContextMenu\0"
    "QgsActionMenu*\0menu\0QgsFeatureId\0fid\0"
    "toggleDockMode\0docked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTableDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  244,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  247,    2, 0x0a /* Public */,
       6,    3,  248,    2, 0x0a /* Public */,
       6,    2,  255,    2, 0x2a /* Public | MethodCloned */,
       6,    1,  260,    2, 0x2a /* Public | MethodCloned */,
      11,    0,  263,    2, 0x08 /* Private */,
      12,    0,  264,    2, 0x08 /* Private */,
      13,    0,  265,    2, 0x08 /* Private */,
      14,    1,  266,    2, 0x08 /* Private */,
      15,    0,  269,    2, 0x08 /* Private */,
      16,    0,  270,    2, 0x08 /* Private */,
      17,    0,  271,    2, 0x08 /* Private */,
      18,    0,  272,    2, 0x08 /* Private */,
      19,    0,  273,    2, 0x08 /* Private */,
      20,    0,  274,    2, 0x08 /* Private */,
      21,    0,  275,    2, 0x08 /* Private */,
      22,    1,  276,    2, 0x08 /* Private */,
      23,    0,  279,    2, 0x08 /* Private */,
      24,    0,  280,    2, 0x08 /* Private */,
      25,    0,  281,    2, 0x08 /* Private */,
      26,    0,  282,    2, 0x08 /* Private */,
      27,    1,  283,    2, 0x08 /* Private */,
      28,    0,  286,    2, 0x08 /* Private */,
      29,    0,  287,    2, 0x08 /* Private */,
      30,    1,  288,    2, 0x08 /* Private */,
      32,    0,  291,    2, 0x08 /* Private */,
      33,    0,  292,    2, 0x08 /* Private */,
      34,    0,  293,    2, 0x08 /* Private */,
      35,    0,  294,    2, 0x08 /* Private */,
      36,    0,  295,    2, 0x08 /* Private */,
      37,    1,  296,    2, 0x08 /* Private */,
      39,    0,  299,    2, 0x08 /* Private */,
      40,    0,  300,    2, 0x08 /* Private */,
      41,    0,  301,    2, 0x08 /* Private */,
      42,    2,  302,    2, 0x08 /* Private */,
      45,    2,  307,    2, 0x08 /* Private */,
      49,    0,  312,    2, 0x08 /* Private */,
      50,    0,  313,    2, 0x08 /* Private */,
      51,    4,  314,    2, 0x08 /* Private */,
      51,    3,  323,    2, 0x28 /* Private | MethodCloned */,
      56,    0,  330,    2, 0x08 /* Private */,
      57,    0,  331,    2, 0x08 /* Private */,
      58,    1,  332,    2, 0x08 /* Private */,
      61,    2,  335,    2, 0x08 /* Private */,
      63,    2,  340,    2, 0x08 /* Private */,
      68,    1,  345,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8, QMetaType::Bool,    7,    9,   10,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   43,   44,
    QMetaType::Void, 0x80000000 | 46, 0x80000000 | 46,   47,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52, QMetaType::QString, QMetaType::QString, 0x80000000 | 54,    4,   43,   53,   55,
    QMetaType::Void, 0x80000000 | 52, QMetaType::QString, QMetaType::QString,    4,   43,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 59,   60,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,   62,    9,
    QMetaType::Void, 0x80000000 | 64, 0x80000000 | 66,   65,   67,
    QMetaType::Void, QMetaType::Bool,   69,

       0        // eod
};

void QgsAttributeTableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeTableDialog *_t = static_cast<QgsAttributeTableDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveEdits((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: _t->editingToggled(); break;
        case 2: _t->setFilterExpression((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsAttributeForm::FilterType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->setFilterExpression((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsAttributeForm::FilterType(*)>(_a[2]))); break;
        case 4: _t->setFilterExpression((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->mActionCutSelectedRows_triggered(); break;
        case 6: _t->mActionCopySelectedRows_triggered(); break;
        case 7: _t->mActionPasteFeatures_triggered(); break;
        case 8: _t->mActionToggleEditing_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->mActionSaveEdits_triggered(); break;
        case 10: _t->mActionReload_triggered(); break;
        case 11: _t->mActionInvertSelection_triggered(); break;
        case 12: _t->mActionRemoveSelection_triggered(); break;
        case 13: _t->mActionSelectAll_triggered(); break;
        case 14: _t->mActionZoomMapToSelectedRows_triggered(); break;
        case 15: _t->mActionPanMapToSelectedRows_triggered(); break;
        case 16: _t->mActionSelectedToTop_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->mActionAddAttribute_triggered(); break;
        case 18: _t->mActionRemoveAttribute_triggered(); break;
        case 19: _t->mActionOpenFieldCalculator_triggered(); break;
        case 20: _t->mActionDeleteSelected_triggered(); break;
        case 21: _t->mMainView_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->mActionAddFeature_triggered(); break;
        case 23: _t->mActionExpressionSelect_triggered(); break;
        case 24: _t->filterColumnChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 25: _t->filterExpressionBuilder(); break;
        case 26: _t->filterShowAll(); break;
        case 27: _t->filterSelected(); break;
        case 28: _t->filterVisible(); break;
        case 29: _t->filterEdited(); break;
        case 30: _t->filterQueryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->filterQueryAccepted(); break;
        case 32: _t->openConditionalStyles(); break;
        case 33: _t->updateTitle(); break;
        case 34: _t->updateButtonStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->replaceSearchWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 36: _t->layerActionTriggered(); break;
        case 37: _t->columnBoxInit(); break;
        case 38: _t->runFieldCalculation((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QgsFeatureIds(*)>(_a[4]))); break;
        case 39: _t->runFieldCalculation((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 40: _t->updateFieldFromExpression(); break;
        case 41: _t->updateFieldFromExpressionSelected(); break;
        case 42: _t->viewModeChanged((*reinterpret_cast< QgsAttributeEditorContext::Mode(*)>(_a[1]))); break;
        case 43: _t->formFilterSet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsAttributeForm::FilterType(*)>(_a[2]))); break;
        case 44: _t->showContextMenu((*reinterpret_cast< QgsActionMenu*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2]))); break;
        case 45: _t->toggleDockMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsAttributeTableDialog::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableDialog::saveEdits)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsAttributeTableDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAttributeTableDialog.data,
      qt_meta_data_QgsAttributeTableDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAttributeTableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void QgsAttributeTableDialog::saveEdits(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsAttributeTableDock_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTableDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTableDock_t qt_meta_stringdata_QgsAttributeTableDock = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QgsAttributeTableDock"

    },
    "QgsAttributeTableDock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTableDock[] = {

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

void QgsAttributeTableDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsAttributeTableDock::staticMetaObject = {
    { &QgsDockWidget::staticMetaObject, qt_meta_stringdata_QgsAttributeTableDock.data,
      qt_meta_data_QgsAttributeTableDock,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTableDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTableDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableDock.stringdata0))
        return static_cast<void*>(this);
    return QgsDockWidget::qt_metacast(_clname);
}

int QgsAttributeTableDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDockWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
