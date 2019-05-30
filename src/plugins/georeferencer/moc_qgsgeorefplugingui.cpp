/****************************************************************************
** Meta object code from reading C++ file 'qgsgeorefplugingui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeorefplugingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeorefplugingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeorefDockWidget_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeorefDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeorefDockWidget_t qt_meta_stringdata_QgsGeorefDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QgsGeorefDockWidget"

    },
    "QgsGeorefDockWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeorefDockWidget[] = {

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

void QgsGeorefDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsGeorefDockWidget::staticMetaObject = {
    { &QgsDockWidget::staticMetaObject, qt_meta_stringdata_QgsGeorefDockWidget.data,
      qt_meta_data_QgsGeorefDockWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeorefDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeorefDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeorefDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsDockWidget::qt_metacast(_clname);
}

int QgsGeorefDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDockWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsGeorefPluginGui_t {
    QByteArrayData data[51];
    char stringdata0[734];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeorefPluginGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeorefPluginGui_t qt_meta_stringdata_QgsGeorefPluginGui = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsGeorefPluginGui"
QT_MOC_LITERAL(1, 19, 5), // "reset"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "openRaster"
QT_MOC_LITERAL(4, 37, 14), // "doGeoreference"
QT_MOC_LITERAL(5, 52, 18), // "generateGDALScript"
QT_MOC_LITERAL(6, 71, 20), // "getTransformSettings"
QT_MOC_LITERAL(7, 92, 15), // "setAddPointTool"
QT_MOC_LITERAL(8, 108, 18), // "setDeletePointTool"
QT_MOC_LITERAL(9, 127, 16), // "setMovePointTool"
QT_MOC_LITERAL(10, 144, 13), // "setZoomInTool"
QT_MOC_LITERAL(11, 158, 14), // "setZoomOutTool"
QT_MOC_LITERAL(12, 173, 15), // "zoomToLayerTool"
QT_MOC_LITERAL(13, 189, 10), // "zoomToLast"
QT_MOC_LITERAL(14, 200, 10), // "zoomToNext"
QT_MOC_LITERAL(15, 211, 10), // "setPanTool"
QT_MOC_LITERAL(16, 222, 16), // "linkGeorefToQGis"
QT_MOC_LITERAL(17, 239, 4), // "link"
QT_MOC_LITERAL(18, 244, 16), // "linkQGisToGeoref"
QT_MOC_LITERAL(19, 261, 8), // "addPoint"
QT_MOC_LITERAL(20, 270, 10), // "QgsPointXY"
QT_MOC_LITERAL(21, 281, 11), // "pixelCoords"
QT_MOC_LITERAL(22, 293, 9), // "mapCoords"
QT_MOC_LITERAL(23, 303, 6), // "enable"
QT_MOC_LITERAL(24, 310, 8), // "finalize"
QT_MOC_LITERAL(25, 319, 15), // "deleteDataPoint"
QT_MOC_LITERAL(26, 335, 5), // "index"
QT_MOC_LITERAL(27, 341, 15), // "showCoordDialog"
QT_MOC_LITERAL(28, 357, 11), // "selectPoint"
QT_MOC_LITERAL(29, 369, 9), // "movePoint"
QT_MOC_LITERAL(30, 379, 12), // "releasePoint"
QT_MOC_LITERAL(31, 392, 14), // "loadGCPsDialog"
QT_MOC_LITERAL(32, 407, 14), // "saveGCPsDialog"
QT_MOC_LITERAL(33, 422, 26), // "showRasterPropertiesDialog"
QT_MOC_LITERAL(34, 449, 22), // "showGeorefConfigDialog"
QT_MOC_LITERAL(35, 472, 8), // "showHelp"
QT_MOC_LITERAL(36, 481, 9), // "jumpToGCP"
QT_MOC_LITERAL(37, 491, 11), // "theGCPIndex"
QT_MOC_LITERAL(38, 503, 26), // "extentsChangedGeorefCanvas"
QT_MOC_LITERAL(39, 530, 24), // "extentsChangedQGisCanvas"
QT_MOC_LITERAL(40, 555, 15), // "showMouseCoords"
QT_MOC_LITERAL(41, 571, 2), // "pt"
QT_MOC_LITERAL(42, 574, 30), // "updateMouseCoordinatePrecision"
QT_MOC_LITERAL(43, 605, 21), // "localHistogramStretch"
QT_MOC_LITERAL(44, 627, 20), // "fullHistogramStretch"
QT_MOC_LITERAL(45, 648, 18), // "layerWillBeRemoved"
QT_MOC_LITERAL(46, 667, 7), // "layerId"
QT_MOC_LITERAL(47, 675, 14), // "extentsChanged"
QT_MOC_LITERAL(48, 690, 21), // "updateGeorefTransform"
QT_MOC_LITERAL(49, 712, 15), // "updateIconTheme"
QT_MOC_LITERAL(50, 728, 5) // "theme"

    },
    "QgsGeorefPluginGui\0reset\0\0openRaster\0"
    "doGeoreference\0generateGDALScript\0"
    "getTransformSettings\0setAddPointTool\0"
    "setDeletePointTool\0setMovePointTool\0"
    "setZoomInTool\0setZoomOutTool\0"
    "zoomToLayerTool\0zoomToLast\0zoomToNext\0"
    "setPanTool\0linkGeorefToQGis\0link\0"
    "linkQGisToGeoref\0addPoint\0QgsPointXY\0"
    "pixelCoords\0mapCoords\0enable\0finalize\0"
    "deleteDataPoint\0index\0showCoordDialog\0"
    "selectPoint\0movePoint\0releasePoint\0"
    "loadGCPsDialog\0saveGCPsDialog\0"
    "showRasterPropertiesDialog\0"
    "showGeorefConfigDialog\0showHelp\0"
    "jumpToGCP\0theGCPIndex\0extentsChangedGeorefCanvas\0"
    "extentsChangedQGisCanvas\0showMouseCoords\0"
    "pt\0updateMouseCoordinatePrecision\0"
    "localHistogramStretch\0fullHistogramStretch\0"
    "layerWillBeRemoved\0layerId\0extentsChanged\0"
    "updateGeorefTransform\0updateIconTheme\0"
    "theme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeorefPluginGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x08 /* Private */,
       3,    0,  220,    2, 0x08 /* Private */,
       4,    0,  221,    2, 0x08 /* Private */,
       5,    0,  222,    2, 0x08 /* Private */,
       6,    0,  223,    2, 0x08 /* Private */,
       7,    0,  224,    2, 0x08 /* Private */,
       8,    0,  225,    2, 0x08 /* Private */,
       9,    0,  226,    2, 0x08 /* Private */,
      10,    0,  227,    2, 0x08 /* Private */,
      11,    0,  228,    2, 0x08 /* Private */,
      12,    0,  229,    2, 0x08 /* Private */,
      13,    0,  230,    2, 0x08 /* Private */,
      14,    0,  231,    2, 0x08 /* Private */,
      15,    0,  232,    2, 0x08 /* Private */,
      16,    1,  233,    2, 0x08 /* Private */,
      18,    1,  236,    2, 0x08 /* Private */,
      19,    4,  239,    2, 0x08 /* Private */,
      19,    3,  248,    2, 0x28 /* Private | MethodCloned */,
      19,    2,  255,    2, 0x28 /* Private | MethodCloned */,
      25,    1,  260,    2, 0x08 /* Private */,
      25,    1,  263,    2, 0x08 /* Private */,
      27,    1,  266,    2, 0x08 /* Private */,
      28,    1,  269,    2, 0x08 /* Private */,
      29,    1,  272,    2, 0x08 /* Private */,
      30,    1,  275,    2, 0x08 /* Private */,
      31,    0,  278,    2, 0x08 /* Private */,
      32,    0,  279,    2, 0x08 /* Private */,
      33,    0,  280,    2, 0x08 /* Private */,
      34,    0,  281,    2, 0x08 /* Private */,
      35,    0,  282,    2, 0x08 /* Private */,
      36,    1,  283,    2, 0x08 /* Private */,
      38,    0,  286,    2, 0x08 /* Private */,
      39,    0,  287,    2, 0x08 /* Private */,
      40,    1,  288,    2, 0x08 /* Private */,
      42,    0,  291,    2, 0x08 /* Private */,
      43,    0,  292,    2, 0x08 /* Private */,
      44,    0,  293,    2, 0x08 /* Private */,
      45,    1,  294,    2, 0x08 /* Private */,
      47,    0,  297,    2, 0x08 /* Private */,
      48,    0,  298,    2, 0x08 /* Private */,
      49,    1,  299,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20, QMetaType::Bool, QMetaType::Bool,   21,   22,   23,   24,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20, QMetaType::Bool,   21,   22,   23,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20,   21,   22,
    QMetaType::Void, QMetaType::QPoint,   21,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   50,

       0        // eod
};

void QgsGeorefPluginGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeorefPluginGui *_t = static_cast<QgsGeorefPluginGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->openRaster(); break;
        case 2: _t->doGeoreference(); break;
        case 3: _t->generateGDALScript(); break;
        case 4: { bool _r = _t->getTransformSettings();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setAddPointTool(); break;
        case 6: _t->setDeletePointTool(); break;
        case 7: _t->setMovePointTool(); break;
        case 8: _t->setZoomInTool(); break;
        case 9: _t->setZoomOutTool(); break;
        case 10: _t->zoomToLayerTool(); break;
        case 11: _t->zoomToLast(); break;
        case 12: _t->zoomToNext(); break;
        case 13: _t->setPanTool(); break;
        case 14: _t->linkGeorefToQGis((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->linkQGisToGeoref((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->addPoint((*reinterpret_cast< const QgsPointXY(*)>(_a[1])),(*reinterpret_cast< const QgsPointXY(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 17: _t->addPoint((*reinterpret_cast< const QgsPointXY(*)>(_a[1])),(*reinterpret_cast< const QgsPointXY(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 18: _t->addPoint((*reinterpret_cast< const QgsPointXY(*)>(_a[1])),(*reinterpret_cast< const QgsPointXY(*)>(_a[2]))); break;
        case 19: _t->deleteDataPoint((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 20: _t->deleteDataPoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->showCoordDialog((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        case 22: _t->selectPoint((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 23: _t->movePoint((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 24: _t->releasePoint((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 25: _t->loadGCPsDialog(); break;
        case 26: _t->saveGCPsDialog(); break;
        case 27: _t->showRasterPropertiesDialog(); break;
        case 28: _t->showGeorefConfigDialog(); break;
        case 29: _t->showHelp(); break;
        case 30: _t->jumpToGCP((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 31: _t->extentsChangedGeorefCanvas(); break;
        case 32: _t->extentsChangedQGisCanvas(); break;
        case 33: _t->showMouseCoords((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        case 34: _t->updateMouseCoordinatePrecision(); break;
        case 35: _t->localHistogramStretch(); break;
        case 36: _t->fullHistogramStretch(); break;
        case 37: _t->layerWillBeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->extentsChanged(); break;
        case 39: { bool _r = _t->updateGeorefTransform();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->updateIconTheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsGeorefPluginGui::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QgsGeorefPluginGui.data,
      qt_meta_data_QgsGeorefPluginGui,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeorefPluginGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeorefPluginGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeorefPluginGui.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QgsGeorefPluginGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
