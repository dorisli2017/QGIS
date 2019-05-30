/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutdesignerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutdesignerdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutdesignerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAppLayoutDesignerInterface_t {
    QByteArrayData data[5];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAppLayoutDesignerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAppLayoutDesignerInterface_t qt_meta_stringdata_QgsAppLayoutDesignerInterface = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsAppLayoutDesignerInterface"
QT_MOC_LITERAL(1, 30, 5), // "close"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "showRulers"
QT_MOC_LITERAL(4, 48, 7) // "visible"

    },
    "QgsAppLayoutDesignerInterface\0close\0"
    "\0showRulers\0visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAppLayoutDesignerInterface[] = {

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
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void QgsAppLayoutDesignerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAppLayoutDesignerInterface *_t = static_cast<QgsAppLayoutDesignerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->close(); break;
        case 1: _t->showRulers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsAppLayoutDesignerInterface::staticMetaObject = {
    { &QgsLayoutDesignerInterface::staticMetaObject, qt_meta_stringdata_QgsAppLayoutDesignerInterface.data,
      qt_meta_data_QgsAppLayoutDesignerInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAppLayoutDesignerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAppLayoutDesignerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAppLayoutDesignerInterface.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutDesignerInterface::qt_metacast(_clname);
}

int QgsAppLayoutDesignerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutDesignerInterface::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsLayoutDesignerDialog_t {
    QByteArrayData data[77];
    char stringdata0[1096];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutDesignerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutDesignerDialog_t qt_meta_stringdata_QgsLayoutDesignerDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsLayoutDesignerDialog"
QT_MOC_LITERAL(1, 24, 12), // "aboutToClose"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "open"
QT_MOC_LITERAL(4, 43, 8), // "activate"
QT_MOC_LITERAL(5, 52, 10), // "showRulers"
QT_MOC_LITERAL(6, 63, 7), // "visible"
QT_MOC_LITERAL(7, 71, 8), // "showGrid"
QT_MOC_LITERAL(8, 80, 9), // "showBoxes"
QT_MOC_LITERAL(9, 90, 9), // "showPages"
QT_MOC_LITERAL(10, 100, 10), // "snapToGrid"
QT_MOC_LITERAL(11, 111, 7), // "enabled"
QT_MOC_LITERAL(12, 119, 10), // "showGuides"
QT_MOC_LITERAL(13, 130, 12), // "snapToGuides"
QT_MOC_LITERAL(14, 143, 11), // "snapToItems"
QT_MOC_LITERAL(15, 155, 14), // "unlockAllItems"
QT_MOC_LITERAL(16, 170, 17), // "lockSelectedItems"
QT_MOC_LITERAL(17, 188, 18), // "setPanelVisibility"
QT_MOC_LITERAL(18, 207, 6), // "hidden"
QT_MOC_LITERAL(19, 214, 18), // "raiseSelectedItems"
QT_MOC_LITERAL(20, 233, 18), // "lowerSelectedItems"
QT_MOC_LITERAL(21, 252, 22), // "moveSelectedItemsToTop"
QT_MOC_LITERAL(22, 275, 25), // "moveSelectedItemsToBottom"
QT_MOC_LITERAL(23, 301, 13), // "refreshLayout"
QT_MOC_LITERAL(24, 315, 5), // "paste"
QT_MOC_LITERAL(25, 321, 12), // "pasteInPlace"
QT_MOC_LITERAL(26, 334, 8), // "setTitle"
QT_MOC_LITERAL(27, 343, 5), // "title"
QT_MOC_LITERAL(28, 349, 13), // "itemTypeAdded"
QT_MOC_LITERAL(29, 363, 2), // "id"
QT_MOC_LITERAL(30, 366, 35), // "statusZoomCombo_currentIndexC..."
QT_MOC_LITERAL(31, 402, 5), // "index"
QT_MOC_LITERAL(32, 408, 27), // "statusZoomCombo_zoomEntered"
QT_MOC_LITERAL(33, 436, 17), // "sliderZoomChanged"
QT_MOC_LITERAL(34, 454, 5), // "value"
QT_MOC_LITERAL(35, 460, 16), // "updateStatusZoom"
QT_MOC_LITERAL(36, 477, 21), // "updateStatusCursorPos"
QT_MOC_LITERAL(37, 499, 8), // "position"
QT_MOC_LITERAL(38, 508, 16), // "toggleFullScreen"
QT_MOC_LITERAL(39, 525, 8), // "addPages"
QT_MOC_LITERAL(40, 534, 21), // "statusMessageReceived"
QT_MOC_LITERAL(41, 556, 7), // "message"
QT_MOC_LITERAL(42, 564, 21), // "dockVisibilityChanged"
QT_MOC_LITERAL(43, 586, 24), // "undoRedoOccurredForItems"
QT_MOC_LITERAL(44, 611, 13), // "QSet<QString>"
QT_MOC_LITERAL(45, 625, 9), // "itemUuids"
QT_MOC_LITERAL(46, 635, 14), // "saveAsTemplate"
QT_MOC_LITERAL(47, 650, 20), // "addItemsFromTemplate"
QT_MOC_LITERAL(48, 671, 9), // "duplicate"
QT_MOC_LITERAL(49, 681, 11), // "saveProject"
QT_MOC_LITERAL(50, 693, 9), // "newLayout"
QT_MOC_LITERAL(51, 703, 11), // "showManager"
QT_MOC_LITERAL(52, 715, 12), // "renameLayout"
QT_MOC_LITERAL(53, 728, 12), // "deleteLayout"
QT_MOC_LITERAL(54, 741, 5), // "print"
QT_MOC_LITERAL(55, 747, 14), // "exportToRaster"
QT_MOC_LITERAL(56, 762, 11), // "exportToPdf"
QT_MOC_LITERAL(57, 774, 11), // "exportToSvg"
QT_MOC_LITERAL(58, 786, 21), // "atlasPreviewTriggered"
QT_MOC_LITERAL(59, 808, 7), // "checked"
QT_MOC_LITERAL(60, 816, 29), // "atlasPageComboEditingFinished"
QT_MOC_LITERAL(61, 846, 9), // "atlasNext"
QT_MOC_LITERAL(62, 856, 13), // "atlasPrevious"
QT_MOC_LITERAL(63, 870, 10), // "atlasFirst"
QT_MOC_LITERAL(64, 881, 9), // "atlasLast"
QT_MOC_LITERAL(65, 891, 10), // "printAtlas"
QT_MOC_LITERAL(66, 902, 19), // "exportAtlasToRaster"
QT_MOC_LITERAL(67, 922, 16), // "exportAtlasToSvg"
QT_MOC_LITERAL(68, 939, 16), // "exportAtlasToPdf"
QT_MOC_LITERAL(69, 956, 20), // "exportReportToRaster"
QT_MOC_LITERAL(70, 977, 17), // "exportReportToSvg"
QT_MOC_LITERAL(71, 995, 17), // "exportReportToPdf"
QT_MOC_LITERAL(72, 1013, 11), // "printReport"
QT_MOC_LITERAL(73, 1025, 9), // "pageSetup"
QT_MOC_LITERAL(74, 1035, 22), // "pageOrientationChanged"
QT_MOC_LITERAL(75, 1058, 19), // "populateLayoutsMenu"
QT_MOC_LITERAL(76, 1078, 17) // "updateWindowTitle"

    },
    "QgsLayoutDesignerDialog\0aboutToClose\0"
    "\0open\0activate\0showRulers\0visible\0"
    "showGrid\0showBoxes\0showPages\0snapToGrid\0"
    "enabled\0showGuides\0snapToGuides\0"
    "snapToItems\0unlockAllItems\0lockSelectedItems\0"
    "setPanelVisibility\0hidden\0raiseSelectedItems\0"
    "lowerSelectedItems\0moveSelectedItemsToTop\0"
    "moveSelectedItemsToBottom\0refreshLayout\0"
    "paste\0pasteInPlace\0setTitle\0title\0"
    "itemTypeAdded\0id\0statusZoomCombo_currentIndexChanged\0"
    "index\0statusZoomCombo_zoomEntered\0"
    "sliderZoomChanged\0value\0updateStatusZoom\0"
    "updateStatusCursorPos\0position\0"
    "toggleFullScreen\0addPages\0"
    "statusMessageReceived\0message\0"
    "dockVisibilityChanged\0undoRedoOccurredForItems\0"
    "QSet<QString>\0itemUuids\0saveAsTemplate\0"
    "addItemsFromTemplate\0duplicate\0"
    "saveProject\0newLayout\0showManager\0"
    "renameLayout\0deleteLayout\0print\0"
    "exportToRaster\0exportToPdf\0exportToSvg\0"
    "atlasPreviewTriggered\0checked\0"
    "atlasPageComboEditingFinished\0atlasNext\0"
    "atlasPrevious\0atlasFirst\0atlasLast\0"
    "printAtlas\0exportAtlasToRaster\0"
    "exportAtlasToSvg\0exportAtlasToPdf\0"
    "exportReportToRaster\0exportReportToSvg\0"
    "exportReportToPdf\0printReport\0pageSetup\0"
    "pageOrientationChanged\0populateLayoutsMenu\0"
    "updateWindowTitle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutDesignerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  329,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  330,    2, 0x0a /* Public */,
       4,    0,  331,    2, 0x0a /* Public */,
       5,    1,  332,    2, 0x0a /* Public */,
       7,    1,  335,    2, 0x0a /* Public */,
       8,    1,  338,    2, 0x0a /* Public */,
       9,    1,  341,    2, 0x0a /* Public */,
      10,    1,  344,    2, 0x0a /* Public */,
      12,    1,  347,    2, 0x0a /* Public */,
      13,    1,  350,    2, 0x0a /* Public */,
      14,    1,  353,    2, 0x0a /* Public */,
      15,    0,  356,    2, 0x0a /* Public */,
      16,    0,  357,    2, 0x0a /* Public */,
      17,    1,  358,    2, 0x0a /* Public */,
      19,    0,  361,    2, 0x0a /* Public */,
      20,    0,  362,    2, 0x0a /* Public */,
      21,    0,  363,    2, 0x0a /* Public */,
      22,    0,  364,    2, 0x0a /* Public */,
      23,    0,  365,    2, 0x0a /* Public */,
      24,    0,  366,    2, 0x0a /* Public */,
      25,    0,  367,    2, 0x0a /* Public */,
      26,    1,  368,    2, 0x08 /* Private */,
      28,    1,  371,    2, 0x08 /* Private */,
      30,    1,  374,    2, 0x08 /* Private */,
      32,    0,  377,    2, 0x08 /* Private */,
      33,    1,  378,    2, 0x08 /* Private */,
      35,    0,  381,    2, 0x08 /* Private */,
      36,    1,  382,    2, 0x08 /* Private */,
      38,    1,  385,    2, 0x08 /* Private */,
      39,    0,  388,    2, 0x08 /* Private */,
      40,    1,  389,    2, 0x08 /* Private */,
      42,    1,  392,    2, 0x08 /* Private */,
      43,    1,  395,    2, 0x08 /* Private */,
      46,    0,  398,    2, 0x08 /* Private */,
      47,    0,  399,    2, 0x08 /* Private */,
      48,    0,  400,    2, 0x08 /* Private */,
      49,    0,  401,    2, 0x08 /* Private */,
      50,    0,  402,    2, 0x08 /* Private */,
      51,    0,  403,    2, 0x08 /* Private */,
      52,    0,  404,    2, 0x08 /* Private */,
      53,    0,  405,    2, 0x08 /* Private */,
      54,    0,  406,    2, 0x08 /* Private */,
      55,    0,  407,    2, 0x08 /* Private */,
      56,    0,  408,    2, 0x08 /* Private */,
      57,    0,  409,    2, 0x08 /* Private */,
      58,    1,  410,    2, 0x08 /* Private */,
      60,    0,  413,    2, 0x08 /* Private */,
      61,    0,  414,    2, 0x08 /* Private */,
      62,    0,  415,    2, 0x08 /* Private */,
      63,    0,  416,    2, 0x08 /* Private */,
      64,    0,  417,    2, 0x08 /* Private */,
      65,    0,  418,    2, 0x08 /* Private */,
      66,    0,  419,    2, 0x08 /* Private */,
      67,    0,  420,    2, 0x08 /* Private */,
      68,    0,  421,    2, 0x08 /* Private */,
      69,    0,  422,    2, 0x08 /* Private */,
      70,    0,  423,    2, 0x08 /* Private */,
      71,    0,  424,    2, 0x08 /* Private */,
      72,    0,  425,    2, 0x08 /* Private */,
      73,    0,  426,    2, 0x08 /* Private */,
      74,    0,  427,    2, 0x08 /* Private */,
      75,    0,  428,    2, 0x08 /* Private */,
      76,    0,  429,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   37,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 44,   45,
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
    QMetaType::Void, QMetaType::Bool,   59,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutDesignerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutDesignerDialog *_t = static_cast<QgsLayoutDesignerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToClose(); break;
        case 1: _t->open(); break;
        case 2: _t->activate(); break;
        case 3: _t->showRulers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showBoxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showPages((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->snapToGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showGuides((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->snapToGuides((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->snapToItems((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->unlockAllItems(); break;
        case 12: _t->lockSelectedItems(); break;
        case 13: _t->setPanelVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->raiseSelectedItems(); break;
        case 15: _t->lowerSelectedItems(); break;
        case 16: _t->moveSelectedItemsToTop(); break;
        case 17: _t->moveSelectedItemsToBottom(); break;
        case 18: _t->refreshLayout(); break;
        case 19: _t->paste(); break;
        case 20: _t->pasteInPlace(); break;
        case 21: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->itemTypeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->statusZoomCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->statusZoomCombo_zoomEntered(); break;
        case 25: _t->sliderZoomChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->updateStatusZoom(); break;
        case 27: _t->updateStatusCursorPos((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 28: _t->toggleFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->addPages(); break;
        case 30: _t->statusMessageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->dockVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->undoRedoOccurredForItems((*reinterpret_cast< const QSet<QString>(*)>(_a[1]))); break;
        case 33: _t->saveAsTemplate(); break;
        case 34: _t->addItemsFromTemplate(); break;
        case 35: _t->duplicate(); break;
        case 36: _t->saveProject(); break;
        case 37: _t->newLayout(); break;
        case 38: _t->showManager(); break;
        case 39: _t->renameLayout(); break;
        case 40: _t->deleteLayout(); break;
        case 41: _t->print(); break;
        case 42: _t->exportToRaster(); break;
        case 43: _t->exportToPdf(); break;
        case 44: _t->exportToSvg(); break;
        case 45: _t->atlasPreviewTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->atlasPageComboEditingFinished(); break;
        case 47: _t->atlasNext(); break;
        case 48: _t->atlasPrevious(); break;
        case 49: _t->atlasFirst(); break;
        case 50: _t->atlasLast(); break;
        case 51: _t->printAtlas(); break;
        case 52: _t->exportAtlasToRaster(); break;
        case 53: _t->exportAtlasToSvg(); break;
        case 54: _t->exportAtlasToPdf(); break;
        case 55: _t->exportReportToRaster(); break;
        case 56: _t->exportReportToSvg(); break;
        case 57: _t->exportReportToPdf(); break;
        case 58: _t->printReport(); break;
        case 59: _t->pageSetup(); break;
        case 60: _t->pageOrientationChanged(); break;
        case 61: _t->populateLayoutsMenu(); break;
        case 62: _t->updateWindowTitle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayoutDesignerDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutDesignerDialog::aboutToClose)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsLayoutDesignerDialog::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QgsLayoutDesignerDialog.data,
      qt_meta_data_QgsLayoutDesignerDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutDesignerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutDesignerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutDesignerDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::QgsLayoutDesignerBase"))
        return static_cast< Ui::QgsLayoutDesignerBase*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QgsLayoutDesignerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    }
    return _id;
}

// SIGNAL 0
void QgsLayoutDesignerDialog::aboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
