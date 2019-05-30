/****************************************************************************
** Meta object code from reading C++ file 'qgsdualview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsdualview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdualview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDualView_t {
    QByteArrayData data[70];
    char stringdata0[1070];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDualView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDualView_t qt_meta_stringdata_QgsDualView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QgsDualView"
QT_MOC_LITERAL(1, 12, 24), // "displayExpressionChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 10), // "expression"
QT_MOC_LITERAL(4, 49, 13), // "filterChanged"
QT_MOC_LITERAL(5, 63, 19), // "filterExpressionSet"
QT_MOC_LITERAL(6, 83, 28), // "QgsAttributeForm::FilterType"
QT_MOC_LITERAL(7, 112, 4), // "type"
QT_MOC_LITERAL(8, 117, 15), // "formModeChanged"
QT_MOC_LITERAL(9, 133, 31), // "QgsAttributeEditorContext::Mode"
QT_MOC_LITERAL(10, 165, 4), // "mode"
QT_MOC_LITERAL(11, 170, 25), // "showContextMenuExternally"
QT_MOC_LITERAL(12, 196, 14), // "QgsActionMenu*"
QT_MOC_LITERAL(13, 211, 4), // "menu"
QT_MOC_LITERAL(14, 216, 12), // "QgsFeatureId"
QT_MOC_LITERAL(15, 229, 3), // "fid"
QT_MOC_LITERAL(16, 233, 23), // "setCurrentEditSelection"
QT_MOC_LITERAL(17, 257, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(18, 271, 4), // "fids"
QT_MOC_LITERAL(19, 276, 15), // "saveEditChanges"
QT_MOC_LITERAL(20, 292, 21), // "openConditionalStyles"
QT_MOC_LITERAL(21, 314, 19), // "setMultiEditEnabled"
QT_MOC_LITERAL(22, 334, 7), // "enabled"
QT_MOC_LITERAL(23, 342, 16), // "toggleSearchMode"
QT_MOC_LITERAL(24, 359, 15), // "copyCellContent"
QT_MOC_LITERAL(25, 375, 14), // "cancelProgress"
QT_MOC_LITERAL(26, 390, 39), // "mFeatureList_aboutToChangeEdi..."
QT_MOC_LITERAL(27, 430, 5), // "bool&"
QT_MOC_LITERAL(28, 436, 2), // "ok"
QT_MOC_LITERAL(29, 439, 40), // "mFeatureList_currentEditSelec..."
QT_MOC_LITERAL(30, 480, 10), // "QgsFeature"
QT_MOC_LITERAL(31, 491, 4), // "feat"
QT_MOC_LITERAL(32, 496, 24), // "previewExpressionBuilder"
QT_MOC_LITERAL(33, 521, 20), // "previewColumnChanged"
QT_MOC_LITERAL(34, 542, 8), // "QAction*"
QT_MOC_LITERAL(35, 551, 13), // "previewAction"
QT_MOC_LITERAL(36, 565, 23), // "viewWillShowContextMenu"
QT_MOC_LITERAL(37, 589, 6), // "QMenu*"
QT_MOC_LITERAL(38, 596, 7), // "atIndex"
QT_MOC_LITERAL(39, 604, 25), // "widgetWillShowContextMenu"
QT_MOC_LITERAL(40, 630, 18), // "showViewHeaderMenu"
QT_MOC_LITERAL(41, 649, 5), // "point"
QT_MOC_LITERAL(42, 655, 15), // "organizeColumns"
QT_MOC_LITERAL(43, 671, 18), // "tableColumnResized"
QT_MOC_LITERAL(44, 690, 6), // "column"
QT_MOC_LITERAL(45, 697, 5), // "width"
QT_MOC_LITERAL(46, 703, 10), // "hideColumn"
QT_MOC_LITERAL(47, 714, 12), // "resizeColumn"
QT_MOC_LITERAL(48, 727, 14), // "autosizeColumn"
QT_MOC_LITERAL(49, 742, 10), // "modifySort"
QT_MOC_LITERAL(50, 753, 24), // "previewExpressionChanged"
QT_MOC_LITERAL(51, 778, 19), // "onSortColumnChanged"
QT_MOC_LITERAL(52, 798, 23), // "sortByPreviewExpression"
QT_MOC_LITERAL(53, 822, 22), // "updateSelectedFeatures"
QT_MOC_LITERAL(54, 845, 13), // "extentChanged"
QT_MOC_LITERAL(55, 859, 27), // "featureFormAttributeChanged"
QT_MOC_LITERAL(56, 887, 9), // "attribute"
QT_MOC_LITERAL(57, 897, 5), // "value"
QT_MOC_LITERAL(58, 903, 16), // "attributeChanged"
QT_MOC_LITERAL(59, 920, 8), // "progress"
QT_MOC_LITERAL(60, 929, 1), // "i"
QT_MOC_LITERAL(61, 931, 6), // "cancel"
QT_MOC_LITERAL(62, 938, 8), // "finished"
QT_MOC_LITERAL(63, 947, 20), // "zoomToCurrentFeature"
QT_MOC_LITERAL(64, 968, 19), // "panToCurrentFeature"
QT_MOC_LITERAL(65, 988, 19), // "flashCurrentFeature"
QT_MOC_LITERAL(66, 1008, 21), // "rebuildFullLayerCache"
QT_MOC_LITERAL(67, 1030, 8), // "ViewMode"
QT_MOC_LITERAL(68, 1039, 14), // "AttributeTable"
QT_MOC_LITERAL(69, 1054, 15) // "AttributeEditor"

    },
    "QgsDualView\0displayExpressionChanged\0"
    "\0expression\0filterChanged\0filterExpressionSet\0"
    "QgsAttributeForm::FilterType\0type\0"
    "formModeChanged\0QgsAttributeEditorContext::Mode\0"
    "mode\0showContextMenuExternally\0"
    "QgsActionMenu*\0menu\0QgsFeatureId\0fid\0"
    "setCurrentEditSelection\0QgsFeatureIds\0"
    "fids\0saveEditChanges\0openConditionalStyles\0"
    "setMultiEditEnabled\0enabled\0"
    "toggleSearchMode\0copyCellContent\0"
    "cancelProgress\0mFeatureList_aboutToChangeEditSelection\0"
    "bool&\0ok\0mFeatureList_currentEditSelectionChanged\0"
    "QgsFeature\0feat\0previewExpressionBuilder\0"
    "previewColumnChanged\0QAction*\0"
    "previewAction\0viewWillShowContextMenu\0"
    "QMenu*\0atIndex\0widgetWillShowContextMenu\0"
    "showViewHeaderMenu\0point\0organizeColumns\0"
    "tableColumnResized\0column\0width\0"
    "hideColumn\0resizeColumn\0autosizeColumn\0"
    "modifySort\0previewExpressionChanged\0"
    "onSortColumnChanged\0sortByPreviewExpression\0"
    "updateSelectedFeatures\0extentChanged\0"
    "featureFormAttributeChanged\0attribute\0"
    "value\0attributeChanged\0progress\0i\0"
    "cancel\0finished\0zoomToCurrentFeature\0"
    "panToCurrentFeature\0flashCurrentFeature\0"
    "rebuildFullLayerCache\0ViewMode\0"
    "AttributeTable\0AttributeEditor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDualView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       1,  288, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  199,    2, 0x06 /* Public */,
       4,    0,  202,    2, 0x06 /* Public */,
       5,    2,  203,    2, 0x06 /* Public */,
       8,    1,  208,    2, 0x06 /* Public */,
      11,    2,  211,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  216,    2, 0x0a /* Public */,
      19,    0,  219,    2, 0x0a /* Public */,
      20,    0,  220,    2, 0x0a /* Public */,
      21,    1,  221,    2, 0x0a /* Public */,
      23,    1,  224,    2, 0x0a /* Public */,
      24,    0,  227,    2, 0x0a /* Public */,
      25,    0,  228,    2, 0x0a /* Public */,
      26,    1,  229,    2, 0x08 /* Private */,
      29,    1,  232,    2, 0x08 /* Private */,
      32,    0,  235,    2, 0x08 /* Private */,
      33,    2,  236,    2, 0x08 /* Private */,
      36,    2,  241,    2, 0x08 /* Private */,
      39,    2,  246,    2, 0x08 /* Private */,
      40,    1,  251,    2, 0x08 /* Private */,
      42,    0,  254,    2, 0x08 /* Private */,
      43,    2,  255,    2, 0x08 /* Private */,
      46,    0,  260,    2, 0x08 /* Private */,
      47,    0,  261,    2, 0x08 /* Private */,
      48,    0,  262,    2, 0x08 /* Private */,
      49,    0,  263,    2, 0x08 /* Private */,
      50,    1,  264,    2, 0x08 /* Private */,
      51,    0,  267,    2, 0x08 /* Private */,
      52,    0,  268,    2, 0x08 /* Private */,
      53,    0,  269,    2, 0x08 /* Private */,
      54,    0,  270,    2, 0x08 /* Private */,
      55,    3,  271,    2, 0x08 /* Private */,
      59,    2,  278,    2, 0x08 /* Private */,
      62,    0,  283,    2, 0x08 /* Private */,
      63,    0,  284,    2, 0x08 /* Private */,
      64,    0,  285,    2, 0x08 /* Private */,
      65,    0,  286,    2, 0x08 /* Private */,
      66,    0,  287,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    3,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34, QMetaType::QString,   35,    3,
    QMetaType::Void, 0x80000000 | 37, QMetaType::QModelIndex,   13,   38,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QModelIndex,   13,   38,
    QMetaType::Void, QMetaType::QPoint,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   44,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,   56,   57,   58,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 27,   60,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      67, 0x0,    2,  292,

 // enum data: key, value
      68, uint(QgsDualView::AttributeTable),
      69, uint(QgsDualView::AttributeEditor),

       0        // eod
};

void QgsDualView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDualView *_t = static_cast<QgsDualView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayExpressionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->filterChanged(); break;
        case 2: _t->filterExpressionSet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsAttributeForm::FilterType(*)>(_a[2]))); break;
        case 3: _t->formModeChanged((*reinterpret_cast< QgsAttributeEditorContext::Mode(*)>(_a[1]))); break;
        case 4: _t->showContextMenuExternally((*reinterpret_cast< QgsActionMenu*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2]))); break;
        case 5: _t->setCurrentEditSelection((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 6: { bool _r = _t->saveEditChanges();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->openConditionalStyles(); break;
        case 8: _t->setMultiEditEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toggleSearchMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->copyCellContent(); break;
        case 11: _t->cancelProgress(); break;
        case 12: _t->mFeatureList_aboutToChangeEditSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->mFeatureList_currentEditSelectionChanged((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 14: _t->previewExpressionBuilder(); break;
        case 15: _t->previewColumnChanged((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->viewWillShowContextMenu((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 17: _t->widgetWillShowContextMenu((*reinterpret_cast< QgsActionMenu*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 18: _t->showViewHeaderMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 19: _t->organizeColumns(); break;
        case 20: _t->tableColumnResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->hideColumn(); break;
        case 22: _t->resizeColumn(); break;
        case 23: _t->autosizeColumn(); break;
        case 24: _t->modifySort(); break;
        case 25: _t->previewExpressionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->onSortColumnChanged(); break;
        case 27: _t->sortByPreviewExpression(); break;
        case 28: _t->updateSelectedFeatures(); break;
        case 29: _t->extentChanged(); break;
        case 30: _t->featureFormAttributeChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 31: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->finished(); break;
        case 33: _t->zoomToCurrentFeature(); break;
        case 34: _t->panToCurrentFeature(); break;
        case 35: _t->flashCurrentFeature(); break;
        case 36: _t->rebuildFullLayerCache(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsDualView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDualView::displayExpressionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsDualView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDualView::filterChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsDualView::*_t)(const QString & , QgsAttributeForm::FilterType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDualView::filterExpressionSet)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsDualView::*_t)(QgsAttributeEditorContext::Mode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDualView::formModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsDualView::*_t)(QgsActionMenu * , QgsFeatureId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDualView::showContextMenuExternally)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QgsDualView::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_QgsDualView.data,
      qt_meta_data_QgsDualView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDualView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDualView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDualView.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int QgsDualView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void QgsDualView::displayExpressionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsDualView::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsDualView::filterExpressionSet(const QString & _t1, QgsAttributeForm::FilterType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsDualView::formModeChanged(QgsAttributeEditorContext::Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsDualView::showContextMenuExternally(QgsActionMenu * _t1, QgsFeatureId _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QgsAttributeTableAction_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTableAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTableAction_t qt_meta_stringdata_QgsAttributeTableAction = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsAttributeTableAction"
QT_MOC_LITERAL(1, 24, 7), // "execute"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11) // "featureForm"

    },
    "QgsAttributeTableAction\0execute\0\0"
    "featureForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTableAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAttributeTableAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeTableAction *_t = static_cast<QgsAttributeTableAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->execute(); break;
        case 1: _t->featureForm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsAttributeTableAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_QgsAttributeTableAction.data,
      qt_meta_data_QgsAttributeTableAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTableAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTableAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QgsAttributeTableAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_QgsAttributeTableMapLayerAction_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTableMapLayerAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTableMapLayerAction_t qt_meta_stringdata_QgsAttributeTableMapLayerAction = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsAttributeTableMapLayerAction"
QT_MOC_LITERAL(1, 32, 7), // "execute"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "QgsAttributeTableMapLayerAction\0execute\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTableMapLayerAction[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsAttributeTableMapLayerAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeTableMapLayerAction *_t = static_cast<QgsAttributeTableMapLayerAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->execute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsAttributeTableMapLayerAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_QgsAttributeTableMapLayerAction.data,
      qt_meta_data_QgsAttributeTableMapLayerAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTableMapLayerAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTableMapLayerAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableMapLayerAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QgsAttributeTableMapLayerAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
