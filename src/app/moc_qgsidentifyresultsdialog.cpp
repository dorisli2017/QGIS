/****************************************************************************
** Meta object code from reading C++ file 'qgsidentifyresultsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsidentifyresultsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsidentifyresultsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsIdentifyResultsWebView_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsIdentifyResultsWebView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsIdentifyResultsWebView_t qt_meta_stringdata_QgsIdentifyResultsWebView = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsIdentifyResultsWebView"
QT_MOC_LITERAL(1, 26, 5), // "print"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "downloadRequested"
QT_MOC_LITERAL(4, 51, 15), // "QNetworkRequest"
QT_MOC_LITERAL(5, 67, 7), // "request"
QT_MOC_LITERAL(6, 75, 18), // "unsupportedContent"
QT_MOC_LITERAL(7, 94, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 109, 5) // "reply"

    },
    "QgsIdentifyResultsWebView\0print\0\0"
    "downloadRequested\0QNetworkRequest\0"
    "request\0unsupportedContent\0QNetworkReply*\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsIdentifyResultsWebView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       6,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void QgsIdentifyResultsWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsIdentifyResultsWebView *_t = static_cast<QgsIdentifyResultsWebView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->print(); break;
        case 1: _t->downloadRequested((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 2: _t->unsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsIdentifyResultsWebView::staticMetaObject = {
    { &QgsWebView::staticMetaObject, qt_meta_stringdata_QgsIdentifyResultsWebView.data,
      qt_meta_data_QgsIdentifyResultsWebView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsIdentifyResultsWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsIdentifyResultsWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsIdentifyResultsWebView.stringdata0))
        return static_cast<void*>(this);
    return QgsWebView::qt_metacast(_clname);
}

int QgsIdentifyResultsWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_QgsIdentifyResultsWebViewItem_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsIdentifyResultsWebViewItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsIdentifyResultsWebViewItem_t qt_meta_stringdata_QgsIdentifyResultsWebViewItem = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsIdentifyResultsWebViewItem"
QT_MOC_LITERAL(1, 30, 12), // "loadFinished"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 2) // "ok"

    },
    "QgsIdentifyResultsWebViewItem\0"
    "loadFinished\0\0ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsIdentifyResultsWebViewItem[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void QgsIdentifyResultsWebViewItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsIdentifyResultsWebViewItem *_t = static_cast<QgsIdentifyResultsWebViewItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsIdentifyResultsWebViewItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsIdentifyResultsWebViewItem.data,
      qt_meta_data_QgsIdentifyResultsWebViewItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsIdentifyResultsWebViewItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsIdentifyResultsWebViewItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsIdentifyResultsWebViewItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsIdentifyResultsWebViewItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsIdentifyResultsDialog_t {
    QByteArrayData data[64];
    char stringdata0[974];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsIdentifyResultsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsIdentifyResultsDialog_t qt_meta_stringdata_QgsIdentifyResultsDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsIdentifyResultsDialog"
QT_MOC_LITERAL(1, 25, 22), // "selectedFeatureChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(4, 65, 12), // "QgsFeatureId"
QT_MOC_LITERAL(5, 78, 9), // "featureId"
QT_MOC_LITERAL(6, 88, 13), // "formatChanged"
QT_MOC_LITERAL(7, 102, 15), // "QgsRasterLayer*"
QT_MOC_LITERAL(8, 118, 5), // "layer"
QT_MOC_LITERAL(9, 124, 15), // "copyToClipboard"
QT_MOC_LITERAL(10, 140, 16), // "QgsFeatureStore&"
QT_MOC_LITERAL(11, 157, 12), // "featureStore"
QT_MOC_LITERAL(12, 170, 13), // "activateLayer"
QT_MOC_LITERAL(13, 184, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(14, 197, 20), // "selectionModeChanged"
QT_MOC_LITERAL(15, 218, 5), // "clear"
QT_MOC_LITERAL(16, 224, 15), // "updateViewModes"
QT_MOC_LITERAL(17, 240, 4), // "show"
QT_MOC_LITERAL(18, 245, 16), // "contextMenuEvent"
QT_MOC_LITERAL(19, 262, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(20, 281, 14), // "layerDestroyed"
QT_MOC_LITERAL(21, 296, 14), // "editingToggled"
QT_MOC_LITERAL(22, 311, 14), // "featureDeleted"
QT_MOC_LITERAL(23, 326, 3), // "fid"
QT_MOC_LITERAL(24, 330, 21), // "attributeValueChanged"
QT_MOC_LITERAL(25, 352, 3), // "idx"
QT_MOC_LITERAL(26, 356, 11), // "featureForm"
QT_MOC_LITERAL(27, 368, 13), // "zoomToFeature"
QT_MOC_LITERAL(28, 382, 18), // "copyAttributeValue"
QT_MOC_LITERAL(29, 401, 11), // "copyFeature"
QT_MOC_LITERAL(30, 413, 22), // "toggleFeatureSelection"
QT_MOC_LITERAL(31, 436, 21), // "copyFeatureAttributes"
QT_MOC_LITERAL(32, 458, 21), // "copyGetFeatureInfoUrl"
QT_MOC_LITERAL(33, 480, 12), // "highlightAll"
QT_MOC_LITERAL(34, 493, 14), // "highlightLayer"
QT_MOC_LITERAL(35, 508, 15), // "layerProperties"
QT_MOC_LITERAL(36, 524, 15), // "clearHighlights"
QT_MOC_LITERAL(37, 540, 9), // "expandAll"
QT_MOC_LITERAL(38, 550, 11), // "collapseAll"
QT_MOC_LITERAL(39, 562, 12), // "itemExpanded"
QT_MOC_LITERAL(40, 575, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(41, 592, 24), // "handleCurrentItemChanged"
QT_MOC_LITERAL(42, 617, 7), // "current"
QT_MOC_LITERAL(43, 625, 8), // "previous"
QT_MOC_LITERAL(44, 634, 11), // "itemClicked"
QT_MOC_LITERAL(45, 646, 3), // "lvi"
QT_MOC_LITERAL(46, 650, 6), // "column"
QT_MOC_LITERAL(47, 657, 18), // "retrieveAttributes"
QT_MOC_LITERAL(48, 676, 4), // "item"
QT_MOC_LITERAL(49, 681, 16), // "QgsAttributeMap&"
QT_MOC_LITERAL(50, 698, 10), // "attributes"
QT_MOC_LITERAL(51, 709, 4), // "int&"
QT_MOC_LITERAL(52, 714, 10), // "currentIdx"
QT_MOC_LITERAL(53, 725, 35), // "cmbIdentifyMode_currentIndexC..."
QT_MOC_LITERAL(54, 761, 5), // "index"
QT_MOC_LITERAL(55, 767, 31), // "cmbViewMode_currentIndexChanged"
QT_MOC_LITERAL(56, 799, 26), // "mExpandNewAction_triggered"
QT_MOC_LITERAL(57, 826, 7), // "checked"
QT_MOC_LITERAL(58, 834, 26), // "cbxAutoFeatureForm_toggled"
QT_MOC_LITERAL(59, 861, 23), // "mExpandAction_triggered"
QT_MOC_LITERAL(60, 885, 25), // "mCollapseAction_triggered"
QT_MOC_LITERAL(61, 911, 21), // "mActionCopy_triggered"
QT_MOC_LITERAL(62, 933, 16), // "printCurrentItem"
QT_MOC_LITERAL(63, 950, 23) // "mapLayerActionDestroyed"

    },
    "QgsIdentifyResultsDialog\0"
    "selectedFeatureChanged\0\0QgsVectorLayer*\0"
    "QgsFeatureId\0featureId\0formatChanged\0"
    "QgsRasterLayer*\0layer\0copyToClipboard\0"
    "QgsFeatureStore&\0featureStore\0"
    "activateLayer\0QgsMapLayer*\0"
    "selectionModeChanged\0clear\0updateViewModes\0"
    "show\0contextMenuEvent\0QContextMenuEvent*\0"
    "layerDestroyed\0editingToggled\0"
    "featureDeleted\0fid\0attributeValueChanged\0"
    "idx\0featureForm\0zoomToFeature\0"
    "copyAttributeValue\0copyFeature\0"
    "toggleFeatureSelection\0copyFeatureAttributes\0"
    "copyGetFeatureInfoUrl\0highlightAll\0"
    "highlightLayer\0layerProperties\0"
    "clearHighlights\0expandAll\0collapseAll\0"
    "itemExpanded\0QTreeWidgetItem*\0"
    "handleCurrentItemChanged\0current\0"
    "previous\0itemClicked\0lvi\0column\0"
    "retrieveAttributes\0item\0QgsAttributeMap&\0"
    "attributes\0int&\0currentIdx\0"
    "cmbIdentifyMode_currentIndexChanged\0"
    "index\0cmbViewMode_currentIndexChanged\0"
    "mExpandNewAction_triggered\0checked\0"
    "cbxAutoFeatureForm_toggled\0"
    "mExpandAction_triggered\0"
    "mCollapseAction_triggered\0"
    "mActionCopy_triggered\0printCurrentItem\0"
    "mapLayerActionDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsIdentifyResultsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  219,    2, 0x06 /* Public */,
       6,    1,  224,    2, 0x06 /* Public */,
       9,    1,  227,    2, 0x06 /* Public */,
      12,    1,  230,    2, 0x06 /* Public */,
      14,    0,  233,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  234,    2, 0x0a /* Public */,
      16,    0,  235,    2, 0x0a /* Public */,
      17,    0,  236,    2, 0x0a /* Public */,
      18,    1,  237,    2, 0x0a /* Public */,
      20,    0,  240,    2, 0x0a /* Public */,
      21,    0,  241,    2, 0x0a /* Public */,
      22,    1,  242,    2, 0x0a /* Public */,
      24,    3,  245,    2, 0x0a /* Public */,
      26,    0,  252,    2, 0x0a /* Public */,
      27,    0,  253,    2, 0x0a /* Public */,
      28,    0,  254,    2, 0x0a /* Public */,
      29,    0,  255,    2, 0x0a /* Public */,
      30,    0,  256,    2, 0x0a /* Public */,
      31,    0,  257,    2, 0x0a /* Public */,
      32,    0,  258,    2, 0x0a /* Public */,
      33,    0,  259,    2, 0x0a /* Public */,
      34,    0,  260,    2, 0x0a /* Public */,
      12,    0,  261,    2, 0x0a /* Public */,
      35,    0,  262,    2, 0x0a /* Public */,
      36,    0,  263,    2, 0x0a /* Public */,
      37,    0,  264,    2, 0x0a /* Public */,
      38,    0,  265,    2, 0x0a /* Public */,
      39,    1,  266,    2, 0x0a /* Public */,
      41,    2,  269,    2, 0x0a /* Public */,
      44,    2,  274,    2, 0x0a /* Public */,
      47,    3,  279,    2, 0x0a /* Public */,
      53,    1,  286,    2, 0x0a /* Public */,
      55,    1,  289,    2, 0x0a /* Public */,
      56,    1,  292,    2, 0x0a /* Public */,
      58,    1,  295,    2, 0x0a /* Public */,
      59,    1,  298,    2, 0x0a /* Public */,
      60,    1,  301,    2, 0x0a /* Public */,
      61,    1,  304,    2, 0x0a /* Public */,
       6,    1,  307,    2, 0x0a /* Public */,
      62,    0,  310,    2, 0x0a /* Public */,
      63,    0,  311,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   23,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::QVariant,   23,   25,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,    2,
    QMetaType::Void, 0x80000000 | 40, 0x80000000 | 40,   42,   43,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Int,   45,   46,
    0x80000000 | 40, 0x80000000 | 40, 0x80000000 | 49, 0x80000000 | 51,   48,   50,   52,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsIdentifyResultsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsIdentifyResultsDialog *_t = static_cast<QgsIdentifyResultsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedFeatureChanged((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2]))); break;
        case 1: _t->formatChanged((*reinterpret_cast< QgsRasterLayer*(*)>(_a[1]))); break;
        case 2: _t->copyToClipboard((*reinterpret_cast< QgsFeatureStore(*)>(_a[1]))); break;
        case 3: _t->activateLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 4: _t->selectionModeChanged(); break;
        case 5: _t->clear(); break;
        case 6: _t->updateViewModes(); break;
        case 7: _t->show(); break;
        case 8: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 9: _t->layerDestroyed(); break;
        case 10: _t->editingToggled(); break;
        case 11: _t->featureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 12: _t->attributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 13: _t->featureForm(); break;
        case 14: _t->zoomToFeature(); break;
        case 15: _t->copyAttributeValue(); break;
        case 16: _t->copyFeature(); break;
        case 17: _t->toggleFeatureSelection(); break;
        case 18: _t->copyFeatureAttributes(); break;
        case 19: _t->copyGetFeatureInfoUrl(); break;
        case 20: _t->highlightAll(); break;
        case 21: _t->highlightLayer(); break;
        case 22: _t->activateLayer(); break;
        case 23: _t->layerProperties(); break;
        case 24: _t->clearHighlights(); break;
        case 25: _t->expandAll(); break;
        case 26: _t->collapseAll(); break;
        case 27: _t->itemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 28: _t->handleCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 29: _t->itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: { QTreeWidgetItem* _r = _t->retrieveAttributes((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QgsAttributeMap(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = std::move(_r); }  break;
        case 31: _t->cmbIdentifyMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->cmbViewMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->mExpandNewAction_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->cbxAutoFeatureForm_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->mExpandAction_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->mCollapseAction_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->mActionCopy_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->formatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->printCurrentItem(); break;
        case 40: _t->mapLayerActionDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsIdentifyResultsDialog::*_t)(QgsVectorLayer * , QgsFeatureId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsIdentifyResultsDialog::selectedFeatureChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsIdentifyResultsDialog::*_t)(QgsRasterLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsIdentifyResultsDialog::formatChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsIdentifyResultsDialog::*_t)(QgsFeatureStore & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsIdentifyResultsDialog::copyToClipboard)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsIdentifyResultsDialog::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsIdentifyResultsDialog::activateLayer)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsIdentifyResultsDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsIdentifyResultsDialog::selectionModeChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QgsIdentifyResultsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsIdentifyResultsDialog.data,
      qt_meta_data_QgsIdentifyResultsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsIdentifyResultsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsIdentifyResultsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsIdentifyResultsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsIdentifyResultsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void QgsIdentifyResultsDialog::selectedFeatureChanged(QgsVectorLayer * _t1, QgsFeatureId _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsIdentifyResultsDialog::formatChanged(QgsRasterLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsIdentifyResultsDialog::copyToClipboard(QgsFeatureStore & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsIdentifyResultsDialog::activateLayer(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsIdentifyResultsDialog::selectionModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_QgsIdentifyResultsDialogMapLayerAction_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsIdentifyResultsDialogMapLayerAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsIdentifyResultsDialogMapLayerAction_t qt_meta_stringdata_QgsIdentifyResultsDialogMapLayerAction = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QgsIdentifyResultsDialogMapLa..."
QT_MOC_LITERAL(1, 39, 7), // "execute"
QT_MOC_LITERAL(2, 47, 0) // ""

    },
    "QgsIdentifyResultsDialogMapLayerAction\0"
    "execute\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsIdentifyResultsDialogMapLayerAction[] = {

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

void QgsIdentifyResultsDialogMapLayerAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsIdentifyResultsDialogMapLayerAction *_t = static_cast<QgsIdentifyResultsDialogMapLayerAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->execute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsIdentifyResultsDialogMapLayerAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_QgsIdentifyResultsDialogMapLayerAction.data,
      qt_meta_data_QgsIdentifyResultsDialogMapLayerAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsIdentifyResultsDialogMapLayerAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsIdentifyResultsDialogMapLayerAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsIdentifyResultsDialogMapLayerAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QgsIdentifyResultsDialogMapLayerAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
