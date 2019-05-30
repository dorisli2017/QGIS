/****************************************************************************
** Meta object code from reading C++ file 'qgsmapcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmapcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapCanvas_t {
    QByteArrayData data[76];
    char stringdata0[1063];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapCanvas_t qt_meta_stringdata_QgsMapCanvas = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QgsMapCanvas"
QT_MOC_LITERAL(1, 13, 13), // "xyCoordinates"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "QgsPointXY"
QT_MOC_LITERAL(4, 39, 1), // "p"
QT_MOC_LITERAL(5, 41, 12), // "scaleChanged"
QT_MOC_LITERAL(6, 54, 14), // "extentsChanged"
QT_MOC_LITERAL(7, 69, 15), // "rotationChanged"
QT_MOC_LITERAL(8, 85, 20), // "magnificationChanged"
QT_MOC_LITERAL(9, 106, 18), // "canvasColorChanged"
QT_MOC_LITERAL(10, 125, 14), // "renderComplete"
QT_MOC_LITERAL(11, 140, 9), // "QPainter*"
QT_MOC_LITERAL(12, 150, 18), // "mapCanvasRefreshed"
QT_MOC_LITERAL(13, 169, 14), // "renderStarting"
QT_MOC_LITERAL(14, 184, 13), // "layersChanged"
QT_MOC_LITERAL(15, 198, 10), // "keyPressed"
QT_MOC_LITERAL(16, 209, 10), // "QKeyEvent*"
QT_MOC_LITERAL(17, 220, 1), // "e"
QT_MOC_LITERAL(18, 222, 11), // "keyReleased"
QT_MOC_LITERAL(19, 234, 10), // "mapToolSet"
QT_MOC_LITERAL(20, 245, 11), // "QgsMapTool*"
QT_MOC_LITERAL(21, 257, 7), // "newTool"
QT_MOC_LITERAL(22, 265, 7), // "oldTool"
QT_MOC_LITERAL(23, 273, 16), // "selectionChanged"
QT_MOC_LITERAL(24, 290, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(25, 306, 5), // "layer"
QT_MOC_LITERAL(26, 312, 21), // "zoomLastStatusChanged"
QT_MOC_LITERAL(27, 334, 21), // "zoomNextStatusChanged"
QT_MOC_LITERAL(28, 356, 21), // "destinationCrsChanged"
QT_MOC_LITERAL(29, 378, 23), // "transformContextChanged"
QT_MOC_LITERAL(30, 402, 19), // "currentLayerChanged"
QT_MOC_LITERAL(31, 422, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(32, 435, 26), // "layerStyleOverridesChanged"
QT_MOC_LITERAL(33, 462, 12), // "themeChanged"
QT_MOC_LITERAL(34, 475, 5), // "theme"
QT_MOC_LITERAL(35, 481, 14), // "messageEmitted"
QT_MOC_LITERAL(36, 496, 5), // "title"
QT_MOC_LITERAL(37, 502, 7), // "message"
QT_MOC_LITERAL(38, 510, 18), // "Qgis::MessageLevel"
QT_MOC_LITERAL(39, 529, 7), // "refresh"
QT_MOC_LITERAL(40, 537, 16), // "refreshAllLayers"
QT_MOC_LITERAL(41, 554, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(42, 575, 11), // "saveAsImage"
QT_MOC_LITERAL(43, 587, 8), // "fileName"
QT_MOC_LITERAL(44, 596, 8), // "QPixmap*"
QT_MOC_LITERAL(45, 605, 7), // "QPixmap"
QT_MOC_LITERAL(46, 613, 16), // "layerStateChange"
QT_MOC_LITERAL(47, 630, 13), // "setRenderFlag"
QT_MOC_LITERAL(48, 644, 4), // "flag"
QT_MOC_LITERAL(49, 649, 13), // "stopRendering"
QT_MOC_LITERAL(50, 663, 11), // "readProject"
QT_MOC_LITERAL(51, 675, 12), // "QDomDocument"
QT_MOC_LITERAL(52, 688, 12), // "writeProject"
QT_MOC_LITERAL(53, 701, 13), // "QDomDocument&"
QT_MOC_LITERAL(54, 715, 22), // "setMagnificationFactor"
QT_MOC_LITERAL(55, 738, 6), // "factor"
QT_MOC_LITERAL(56, 745, 14), // "setScaleLocked"
QT_MOC_LITERAL(57, 760, 8), // "isLocked"
QT_MOC_LITERAL(58, 769, 6), // "zoomIn"
QT_MOC_LITERAL(59, 776, 7), // "zoomOut"
QT_MOC_LITERAL(60, 784, 14), // "zoomToSelected"
QT_MOC_LITERAL(61, 799, 16), // "mapToolDestroyed"
QT_MOC_LITERAL(62, 816, 19), // "rendererJobFinished"
QT_MOC_LITERAL(63, 836, 18), // "previewJobFinished"
QT_MOC_LITERAL(64, 855, 16), // "mapUpdateTimeout"
QT_MOC_LITERAL(65, 872, 10), // "refreshMap"
QT_MOC_LITERAL(66, 883, 15), // "mapThemeChanged"
QT_MOC_LITERAL(67, 899, 25), // "updateCanvasItemPositions"
QT_MOC_LITERAL(68, 925, 21), // "layerRepaintRequested"
QT_MOC_LITERAL(69, 947, 8), // "deferred"
QT_MOC_LITERAL(70, 956, 20), // "autoRefreshTriggered"
QT_MOC_LITERAL(71, 977, 22), // "updateAutoRefreshTimer"
QT_MOC_LITERAL(72, 1000, 20), // "projectThemesChanged"
QT_MOC_LITERAL(73, 1021, 15), // "startPreviewJob"
QT_MOC_LITERAL(74, 1037, 6), // "number"
QT_MOC_LITERAL(75, 1044, 18) // "previewJobsEnabled"

    },
    "QgsMapCanvas\0xyCoordinates\0\0QgsPointXY\0"
    "p\0scaleChanged\0extentsChanged\0"
    "rotationChanged\0magnificationChanged\0"
    "canvasColorChanged\0renderComplete\0"
    "QPainter*\0mapCanvasRefreshed\0"
    "renderStarting\0layersChanged\0keyPressed\0"
    "QKeyEvent*\0e\0keyReleased\0mapToolSet\0"
    "QgsMapTool*\0newTool\0oldTool\0"
    "selectionChanged\0QgsVectorLayer*\0layer\0"
    "zoomLastStatusChanged\0zoomNextStatusChanged\0"
    "destinationCrsChanged\0transformContextChanged\0"
    "currentLayerChanged\0QgsMapLayer*\0"
    "layerStyleOverridesChanged\0themeChanged\0"
    "theme\0messageEmitted\0title\0message\0"
    "Qgis::MessageLevel\0refresh\0refreshAllLayers\0"
    "selectionChangedSlot\0saveAsImage\0"
    "fileName\0QPixmap*\0QPixmap\0layerStateChange\0"
    "setRenderFlag\0flag\0stopRendering\0"
    "readProject\0QDomDocument\0writeProject\0"
    "QDomDocument&\0setMagnificationFactor\0"
    "factor\0setScaleLocked\0isLocked\0zoomIn\0"
    "zoomOut\0zoomToSelected\0mapToolDestroyed\0"
    "rendererJobFinished\0previewJobFinished\0"
    "mapUpdateTimeout\0refreshMap\0mapThemeChanged\0"
    "updateCanvasItemPositions\0"
    "layerRepaintRequested\0deferred\0"
    "autoRefreshTriggered\0updateAutoRefreshTimer\0"
    "projectThemesChanged\0startPreviewJob\0"
    "number\0previewJobsEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapCanvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       2,  394, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  274,    2, 0x06 /* Public */,
       5,    1,  277,    2, 0x06 /* Public */,
       6,    0,  280,    2, 0x06 /* Public */,
       7,    1,  281,    2, 0x06 /* Public */,
       8,    1,  284,    2, 0x06 /* Public */,
       9,    0,  287,    2, 0x06 /* Public */,
      10,    1,  288,    2, 0x06 /* Public */,
      12,    0,  291,    2, 0x06 /* Public */,
      13,    0,  292,    2, 0x06 /* Public */,
      14,    0,  293,    2, 0x06 /* Public */,
      15,    1,  294,    2, 0x06 /* Public */,
      18,    1,  297,    2, 0x06 /* Public */,
      19,    2,  300,    2, 0x06 /* Public */,
      23,    1,  305,    2, 0x06 /* Public */,
      26,    1,  308,    2, 0x06 /* Public */,
      27,    1,  311,    2, 0x06 /* Public */,
      28,    0,  314,    2, 0x06 /* Public */,
      29,    0,  315,    2, 0x06 /* Public */,
      30,    1,  316,    2, 0x06 /* Public */,
      32,    0,  319,    2, 0x06 /* Public */,
      33,    1,  320,    2, 0x06 /* Public */,
      35,    3,  323,    2, 0x06 /* Public */,
      35,    2,  330,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
      39,    0,  335,    2, 0x0a /* Public */,
      40,    0,  336,    2, 0x0a /* Public */,
      41,    0,  337,    2, 0x0a /* Public */,
      42,    3,  338,    2, 0x0a /* Public */,
      42,    2,  345,    2, 0x2a /* Public | MethodCloned */,
      42,    1,  350,    2, 0x2a /* Public | MethodCloned */,
      46,    0,  353,    2, 0x0a /* Public */,
      47,    1,  354,    2, 0x0a /* Public */,
      49,    0,  357,    2, 0x0a /* Public */,
      50,    1,  358,    2, 0x0a /* Public */,
      52,    1,  361,    2, 0x0a /* Public */,
      54,    1,  364,    2, 0x0a /* Public */,
      56,    1,  367,    2, 0x0a /* Public */,
      58,    0,  370,    2, 0x0a /* Public */,
      59,    0,  371,    2, 0x0a /* Public */,
      60,    1,  372,    2, 0x0a /* Public */,
      60,    0,  375,    2, 0x2a /* Public | MethodCloned */,
      61,    0,  376,    2, 0x08 /* Private */,
      62,    0,  377,    2, 0x08 /* Private */,
      63,    0,  378,    2, 0x08 /* Private */,
      64,    0,  379,    2, 0x08 /* Private */,
      65,    0,  380,    2, 0x08 /* Private */,
      66,    1,  381,    2, 0x08 /* Private */,
      67,    0,  384,    2, 0x09 /* Protected */,
      68,    1,  385,    2, 0x08 /* Private */,
      70,    0,  388,    2, 0x08 /* Private */,
      71,    0,  389,    2, 0x08 /* Private */,
      72,    0,  390,    2, 0x08 /* Private */,
      73,    1,  391,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20,   21,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 38,   36,   37,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   36,   37,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 44, QMetaType::QString,   43,   45,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 44,   43,   45,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 53,    2,
    QMetaType::Void, QMetaType::Double,   55,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   74,

 // properties: name, type, flags
      34, QMetaType::QString, 0x00495103,
      75, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
      20,
       0,

       0        // eod
};

void QgsMapCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapCanvas *_t = static_cast<QgsMapCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xyCoordinates((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        case 1: _t->scaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->extentsChanged(); break;
        case 3: _t->rotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->magnificationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->canvasColorChanged(); break;
        case 6: _t->renderComplete((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 7: _t->mapCanvasRefreshed(); break;
        case 8: _t->renderStarting(); break;
        case 9: _t->layersChanged(); break;
        case 10: _t->keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 11: _t->keyReleased((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 12: _t->mapToolSet((*reinterpret_cast< QgsMapTool*(*)>(_a[1])),(*reinterpret_cast< QgsMapTool*(*)>(_a[2]))); break;
        case 13: _t->selectionChanged((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 14: _t->zoomLastStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->zoomNextStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->destinationCrsChanged(); break;
        case 17: _t->transformContextChanged(); break;
        case 18: _t->currentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 19: _t->layerStyleOverridesChanged(); break;
        case 20: _t->themeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->messageEmitted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qgis::MessageLevel(*)>(_a[3]))); break;
        case 22: _t->messageEmitted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: _t->refresh(); break;
        case 24: _t->refreshAllLayers(); break;
        case 25: _t->selectionChangedSlot(); break;
        case 26: _t->saveAsImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QPixmap*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 27: _t->saveAsImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QPixmap*(*)>(_a[2]))); break;
        case 28: _t->saveAsImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->layerStateChange(); break;
        case 30: _t->setRenderFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->stopRendering(); break;
        case 32: _t->readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 33: _t->writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 34: _t->setMagnificationFactor((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 35: _t->setScaleLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->zoomIn(); break;
        case 37: _t->zoomOut(); break;
        case 38: _t->zoomToSelected((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 39: _t->zoomToSelected(); break;
        case 40: _t->mapToolDestroyed(); break;
        case 41: _t->rendererJobFinished(); break;
        case 42: _t->previewJobFinished(); break;
        case 43: _t->mapUpdateTimeout(); break;
        case 44: _t->refreshMap(); break;
        case 45: _t->mapThemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: _t->updateCanvasItemPositions(); break;
        case 47: _t->layerRepaintRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->autoRefreshTriggered(); break;
        case 49: _t->updateAutoRefreshTimer(); break;
        case 50: _t->projectThemesChanged(); break;
        case 51: _t->startPreviewJob((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMapCanvas::*_t)(const QgsPointXY & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::xyCoordinates)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::scaleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::extentsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::rotationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::magnificationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::canvasColorChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QPainter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::renderComplete)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::mapCanvasRefreshed)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::renderStarting)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::layersChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::keyPressed)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::keyReleased)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QgsMapTool * , QgsMapTool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::mapToolSet)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QgsVectorLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::selectionChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::zoomLastStatusChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::zoomNextStatusChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::destinationCrsChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::transformContextChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::currentLayerChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::layerStyleOverridesChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::themeChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(const QString & , const QString & , Qgis::MessageLevel );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::messageEmitted)) {
                *result = 21;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsMapCanvas *_t = static_cast<QgsMapCanvas *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->theme(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->previewJobsEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsMapCanvas *_t = static_cast<QgsMapCanvas *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTheme(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPreviewJobsEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsMapCanvas::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QgsMapCanvas.data,
      qt_meta_data_QgsMapCanvas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapCanvas.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int QgsMapCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 52;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsMapCanvas::xyCoordinates(const QgsPointXY & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapCanvas::scaleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapCanvas::extentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsMapCanvas::rotationChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsMapCanvas::magnificationChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsMapCanvas::canvasColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QgsMapCanvas::renderComplete(QPainter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsMapCanvas::mapCanvasRefreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QgsMapCanvas::renderStarting()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QgsMapCanvas::layersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QgsMapCanvas::keyPressed(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgsMapCanvas::keyReleased(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QgsMapCanvas::mapToolSet(QgsMapTool * _t1, QgsMapTool * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QgsMapCanvas::selectionChanged(QgsVectorLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QgsMapCanvas::zoomLastStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QgsMapCanvas::zoomNextStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QgsMapCanvas::destinationCrsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QgsMapCanvas::transformContextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QgsMapCanvas::currentLayerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QgsMapCanvas::layerStyleOverridesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QgsMapCanvas::themeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QgsMapCanvas::messageEmitted(const QString & _t1, const QString & _t2, Qgis::MessageLevel _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
