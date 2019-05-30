/****************************************************************************
** Meta object code from reading C++ file 'qgisinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgisinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgisinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgisInterface_t {
    QByteArrayData data[142];
    char stringdata0[2392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgisInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgisInterface_t qt_meta_stringdata_QgisInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgisInterface"
QT_MOC_LITERAL(1, 14, 19), // "currentLayerChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(4, 48, 5), // "layer"
QT_MOC_LITERAL(5, 54, 19), // "currentThemeChanged"
QT_MOC_LITERAL(6, 74, 5), // "theme"
QT_MOC_LITERAL(7, 80, 20), // "layoutDesignerOpened"
QT_MOC_LITERAL(8, 101, 27), // "QgsLayoutDesignerInterface*"
QT_MOC_LITERAL(9, 129, 8), // "designer"
QT_MOC_LITERAL(10, 138, 26), // "layoutDesignerWillBeClosed"
QT_MOC_LITERAL(11, 165, 20), // "layoutDesignerClosed"
QT_MOC_LITERAL(12, 186, 23), // "initializationCompleted"
QT_MOC_LITERAL(13, 210, 11), // "projectRead"
QT_MOC_LITERAL(14, 222, 17), // "newProjectCreated"
QT_MOC_LITERAL(15, 240, 12), // "layerSavedAs"
QT_MOC_LITERAL(16, 253, 1), // "l"
QT_MOC_LITERAL(17, 255, 4), // "path"
QT_MOC_LITERAL(18, 260, 8), // "zoomFull"
QT_MOC_LITERAL(19, 269, 14), // "zoomToPrevious"
QT_MOC_LITERAL(20, 284, 10), // "zoomToNext"
QT_MOC_LITERAL(21, 295, 17), // "zoomToActiveLayer"
QT_MOC_LITERAL(22, 313, 14), // "addVectorLayer"
QT_MOC_LITERAL(23, 328, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(24, 344, 15), // "vectorLayerPath"
QT_MOC_LITERAL(25, 360, 8), // "baseName"
QT_MOC_LITERAL(26, 369, 11), // "providerKey"
QT_MOC_LITERAL(27, 381, 14), // "addRasterLayer"
QT_MOC_LITERAL(28, 396, 15), // "QgsRasterLayer*"
QT_MOC_LITERAL(29, 412, 15), // "rasterLayerPath"
QT_MOC_LITERAL(30, 428, 3), // "url"
QT_MOC_LITERAL(31, 432, 9), // "layerName"
QT_MOC_LITERAL(32, 442, 12), // "addMeshLayer"
QT_MOC_LITERAL(33, 455, 13), // "QgsMeshLayer*"
QT_MOC_LITERAL(34, 469, 10), // "addProject"
QT_MOC_LITERAL(35, 480, 7), // "project"
QT_MOC_LITERAL(36, 488, 10), // "newProject"
QT_MOC_LITERAL(37, 499, 16), // "promptToSaveFlag"
QT_MOC_LITERAL(38, 516, 17), // "reloadConnections"
QT_MOC_LITERAL(39, 534, 14), // "setActiveLayer"
QT_MOC_LITERAL(40, 549, 24), // "copySelectionToClipboard"
QT_MOC_LITERAL(41, 574, 18), // "pasteFromClipboard"
QT_MOC_LITERAL(42, 593, 14), // "addToolBarIcon"
QT_MOC_LITERAL(43, 608, 8), // "QAction*"
QT_MOC_LITERAL(44, 617, 7), // "qAction"
QT_MOC_LITERAL(45, 625, 16), // "addToolBarWidget"
QT_MOC_LITERAL(46, 642, 8), // "QWidget*"
QT_MOC_LITERAL(47, 651, 6), // "widget"
QT_MOC_LITERAL(48, 658, 17), // "removeToolBarIcon"
QT_MOC_LITERAL(49, 676, 22), // "addRasterToolBarWidget"
QT_MOC_LITERAL(50, 699, 20), // "addRasterToolBarIcon"
QT_MOC_LITERAL(51, 720, 23), // "removeRasterToolBarIcon"
QT_MOC_LITERAL(52, 744, 20), // "addVectorToolBarIcon"
QT_MOC_LITERAL(53, 765, 22), // "addVectorToolBarWidget"
QT_MOC_LITERAL(54, 788, 23), // "removeVectorToolBarIcon"
QT_MOC_LITERAL(55, 812, 22), // "addDatabaseToolBarIcon"
QT_MOC_LITERAL(56, 835, 24), // "addDatabaseToolBarWidget"
QT_MOC_LITERAL(57, 860, 25), // "removeDatabaseToolBarIcon"
QT_MOC_LITERAL(58, 886, 17), // "addWebToolBarIcon"
QT_MOC_LITERAL(59, 904, 19), // "addWebToolBarWidget"
QT_MOC_LITERAL(60, 924, 20), // "removeWebToolBarIcon"
QT_MOC_LITERAL(61, 945, 10), // "addToolBar"
QT_MOC_LITERAL(62, 956, 9), // "QToolBar*"
QT_MOC_LITERAL(63, 966, 4), // "name"
QT_MOC_LITERAL(64, 971, 7), // "toolbar"
QT_MOC_LITERAL(65, 979, 15), // "Qt::ToolBarArea"
QT_MOC_LITERAL(66, 995, 4), // "area"
QT_MOC_LITERAL(67, 1000, 14), // "openMessageLog"
QT_MOC_LITERAL(68, 1015, 18), // "addUserInputWidget"
QT_MOC_LITERAL(69, 1034, 17), // "showLayoutManager"
QT_MOC_LITERAL(70, 1052, 18), // "openLayoutDesigner"
QT_MOC_LITERAL(71, 1071, 25), // "QgsMasterLayoutInterface*"
QT_MOC_LITERAL(72, 1097, 6), // "layout"
QT_MOC_LITERAL(73, 1104, 17), // "showOptionsDialog"
QT_MOC_LITERAL(74, 1122, 6), // "parent"
QT_MOC_LITERAL(75, 1129, 11), // "currentPage"
QT_MOC_LITERAL(76, 1141, 15), // "buildStyleSheet"
QT_MOC_LITERAL(77, 1157, 4), // "opts"
QT_MOC_LITERAL(78, 1162, 21), // "saveStyleSheetOptions"
QT_MOC_LITERAL(79, 1184, 15), // "addPluginToMenu"
QT_MOC_LITERAL(80, 1200, 6), // "action"
QT_MOC_LITERAL(81, 1207, 16), // "removePluginMenu"
QT_MOC_LITERAL(82, 1224, 20), // "insertAddLayerAction"
QT_MOC_LITERAL(83, 1245, 20), // "removeAddLayerAction"
QT_MOC_LITERAL(84, 1266, 23), // "addPluginToDatabaseMenu"
QT_MOC_LITERAL(85, 1290, 24), // "removePluginDatabaseMenu"
QT_MOC_LITERAL(86, 1315, 21), // "addPluginToRasterMenu"
QT_MOC_LITERAL(87, 1337, 22), // "removePluginRasterMenu"
QT_MOC_LITERAL(88, 1360, 21), // "addPluginToVectorMenu"
QT_MOC_LITERAL(89, 1382, 22), // "removePluginVectorMenu"
QT_MOC_LITERAL(90, 1405, 18), // "addPluginToWebMenu"
QT_MOC_LITERAL(91, 1424, 19), // "removePluginWebMenu"
QT_MOC_LITERAL(92, 1444, 13), // "addDockWidget"
QT_MOC_LITERAL(93, 1458, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(94, 1477, 12), // "QDockWidget*"
QT_MOC_LITERAL(95, 1490, 10), // "dockwidget"
QT_MOC_LITERAL(96, 1501, 16), // "removeDockWidget"
QT_MOC_LITERAL(97, 1518, 19), // "showLayerProperties"
QT_MOC_LITERAL(98, 1538, 18), // "showAttributeTable"
QT_MOC_LITERAL(99, 1557, 8), // "QDialog*"
QT_MOC_LITERAL(100, 1566, 16), // "filterExpression"
QT_MOC_LITERAL(101, 1583, 9), // "addWindow"
QT_MOC_LITERAL(102, 1593, 12), // "removeWindow"
QT_MOC_LITERAL(103, 1606, 24), // "registerMainWindowAction"
QT_MOC_LITERAL(104, 1631, 15), // "defaultShortcut"
QT_MOC_LITERAL(105, 1647, 26), // "unregisterMainWindowAction"
QT_MOC_LITERAL(106, 1674, 35), // "registerMapLayerConfigWidgetF..."
QT_MOC_LITERAL(107, 1710, 31), // "QgsMapLayerConfigWidgetFactory*"
QT_MOC_LITERAL(108, 1742, 7), // "factory"
QT_MOC_LITERAL(109, 1750, 37), // "unregisterMapLayerConfigWidge..."
QT_MOC_LITERAL(110, 1788, 28), // "registerOptionsWidgetFactory"
QT_MOC_LITERAL(111, 1817, 24), // "QgsOptionsWidgetFactory*"
QT_MOC_LITERAL(112, 1842, 30), // "unregisterOptionsWidgetFactory"
QT_MOC_LITERAL(113, 1873, 25), // "registerCustomDropHandler"
QT_MOC_LITERAL(114, 1899, 21), // "QgsCustomDropHandler*"
QT_MOC_LITERAL(115, 1921, 7), // "handler"
QT_MOC_LITERAL(116, 1929, 27), // "unregisterCustomDropHandler"
QT_MOC_LITERAL(117, 1957, 31), // "registerCustomLayoutDropHandler"
QT_MOC_LITERAL(118, 1989, 27), // "QgsLayoutCustomDropHandler*"
QT_MOC_LITERAL(119, 2017, 33), // "unregisterCustomLayoutDropHan..."
QT_MOC_LITERAL(120, 2051, 7), // "openURL"
QT_MOC_LITERAL(121, 2059, 19), // "useQgisDocDirectory"
QT_MOC_LITERAL(122, 2079, 15), // "openFeatureForm"
QT_MOC_LITERAL(123, 2095, 11), // "QgsFeature&"
QT_MOC_LITERAL(124, 2107, 1), // "f"
QT_MOC_LITERAL(125, 2109, 17), // "updateFeatureOnly"
QT_MOC_LITERAL(126, 2127, 9), // "showModal"
QT_MOC_LITERAL(127, 2137, 14), // "getFeatureForm"
QT_MOC_LITERAL(128, 2152, 19), // "QgsAttributeDialog*"
QT_MOC_LITERAL(129, 2172, 11), // "preloadForm"
QT_MOC_LITERAL(130, 2184, 6), // "uifile"
QT_MOC_LITERAL(131, 2191, 21), // "registerLocatorFilter"
QT_MOC_LITERAL(132, 2213, 17), // "QgsLocatorFilter*"
QT_MOC_LITERAL(133, 2231, 6), // "filter"
QT_MOC_LITERAL(134, 2238, 23), // "deregisterLocatorFilter"
QT_MOC_LITERAL(135, 2262, 24), // "invalidateLocatorResults"
QT_MOC_LITERAL(136, 2287, 20), // "askForDatumTransform"
QT_MOC_LITERAL(137, 2308, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(138, 2337, 9), // "sourceCrs"
QT_MOC_LITERAL(139, 2347, 14), // "destinationCrs"
QT_MOC_LITERAL(140, 2362, 12), // "browserModel"
QT_MOC_LITERAL(141, 2375, 16) // "QgsBrowserModel*"

    },
    "QgisInterface\0currentLayerChanged\0\0"
    "QgsMapLayer*\0layer\0currentThemeChanged\0"
    "theme\0layoutDesignerOpened\0"
    "QgsLayoutDesignerInterface*\0designer\0"
    "layoutDesignerWillBeClosed\0"
    "layoutDesignerClosed\0initializationCompleted\0"
    "projectRead\0newProjectCreated\0"
    "layerSavedAs\0l\0path\0zoomFull\0"
    "zoomToPrevious\0zoomToNext\0zoomToActiveLayer\0"
    "addVectorLayer\0QgsVectorLayer*\0"
    "vectorLayerPath\0baseName\0providerKey\0"
    "addRasterLayer\0QgsRasterLayer*\0"
    "rasterLayerPath\0url\0layerName\0"
    "addMeshLayer\0QgsMeshLayer*\0addProject\0"
    "project\0newProject\0promptToSaveFlag\0"
    "reloadConnections\0setActiveLayer\0"
    "copySelectionToClipboard\0pasteFromClipboard\0"
    "addToolBarIcon\0QAction*\0qAction\0"
    "addToolBarWidget\0QWidget*\0widget\0"
    "removeToolBarIcon\0addRasterToolBarWidget\0"
    "addRasterToolBarIcon\0removeRasterToolBarIcon\0"
    "addVectorToolBarIcon\0addVectorToolBarWidget\0"
    "removeVectorToolBarIcon\0addDatabaseToolBarIcon\0"
    "addDatabaseToolBarWidget\0"
    "removeDatabaseToolBarIcon\0addWebToolBarIcon\0"
    "addWebToolBarWidget\0removeWebToolBarIcon\0"
    "addToolBar\0QToolBar*\0name\0toolbar\0"
    "Qt::ToolBarArea\0area\0openMessageLog\0"
    "addUserInputWidget\0showLayoutManager\0"
    "openLayoutDesigner\0QgsMasterLayoutInterface*\0"
    "layout\0showOptionsDialog\0parent\0"
    "currentPage\0buildStyleSheet\0opts\0"
    "saveStyleSheetOptions\0addPluginToMenu\0"
    "action\0removePluginMenu\0insertAddLayerAction\0"
    "removeAddLayerAction\0addPluginToDatabaseMenu\0"
    "removePluginDatabaseMenu\0addPluginToRasterMenu\0"
    "removePluginRasterMenu\0addPluginToVectorMenu\0"
    "removePluginVectorMenu\0addPluginToWebMenu\0"
    "removePluginWebMenu\0addDockWidget\0"
    "Qt::DockWidgetArea\0QDockWidget*\0"
    "dockwidget\0removeDockWidget\0"
    "showLayerProperties\0showAttributeTable\0"
    "QDialog*\0filterExpression\0addWindow\0"
    "removeWindow\0registerMainWindowAction\0"
    "defaultShortcut\0unregisterMainWindowAction\0"
    "registerMapLayerConfigWidgetFactory\0"
    "QgsMapLayerConfigWidgetFactory*\0factory\0"
    "unregisterMapLayerConfigWidgetFactory\0"
    "registerOptionsWidgetFactory\0"
    "QgsOptionsWidgetFactory*\0"
    "unregisterOptionsWidgetFactory\0"
    "registerCustomDropHandler\0"
    "QgsCustomDropHandler*\0handler\0"
    "unregisterCustomDropHandler\0"
    "registerCustomLayoutDropHandler\0"
    "QgsLayoutCustomDropHandler*\0"
    "unregisterCustomLayoutDropHandler\0"
    "openURL\0useQgisDocDirectory\0openFeatureForm\0"
    "QgsFeature&\0f\0updateFeatureOnly\0"
    "showModal\0getFeatureForm\0QgsAttributeDialog*\0"
    "preloadForm\0uifile\0registerLocatorFilter\0"
    "QgsLocatorFilter*\0filter\0"
    "deregisterLocatorFilter\0"
    "invalidateLocatorResults\0askForDatumTransform\0"
    "QgsCoordinateReferenceSystem\0sourceCrs\0"
    "destinationCrs\0browserModel\0"
    "QgsBrowserModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgisInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      93,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  479,    2, 0x06 /* Public */,
       5,    1,  482,    2, 0x06 /* Public */,
       7,    1,  485,    2, 0x06 /* Public */,
      10,    1,  488,    2, 0x06 /* Public */,
      11,    0,  491,    2, 0x06 /* Public */,
      12,    0,  492,    2, 0x06 /* Public */,
      13,    0,  493,    2, 0x06 /* Public */,
      14,    0,  494,    2, 0x06 /* Public */,
      15,    2,  495,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  500,    2, 0x0a /* Public */,
      19,    0,  501,    2, 0x0a /* Public */,
      20,    0,  502,    2, 0x0a /* Public */,
      21,    0,  503,    2, 0x0a /* Public */,
      22,    3,  504,    2, 0x0a /* Public */,
      27,    2,  511,    2, 0x0a /* Public */,
      27,    1,  516,    2, 0x2a /* Public | MethodCloned */,
      27,    3,  519,    2, 0x0a /* Public */,
      32,    3,  526,    2, 0x0a /* Public */,
      34,    1,  533,    2, 0x0a /* Public */,
      36,    1,  536,    2, 0x0a /* Public */,
      36,    0,  539,    2, 0x2a /* Public | MethodCloned */,
      38,    0,  540,    2, 0x0a /* Public */,
      39,    1,  541,    2, 0x0a /* Public */,
      40,    1,  544,    2, 0x0a /* Public */,
      41,    1,  547,    2, 0x0a /* Public */,
      42,    1,  550,    2, 0x0a /* Public */,
      45,    1,  553,    2, 0x0a /* Public */,
      48,    1,  556,    2, 0x0a /* Public */,
      49,    1,  559,    2, 0x0a /* Public */,
      50,    1,  562,    2, 0x0a /* Public */,
      51,    1,  565,    2, 0x0a /* Public */,
      52,    1,  568,    2, 0x0a /* Public */,
      53,    1,  571,    2, 0x0a /* Public */,
      54,    1,  574,    2, 0x0a /* Public */,
      55,    1,  577,    2, 0x0a /* Public */,
      56,    1,  580,    2, 0x0a /* Public */,
      57,    1,  583,    2, 0x0a /* Public */,
      58,    1,  586,    2, 0x0a /* Public */,
      59,    1,  589,    2, 0x0a /* Public */,
      60,    1,  592,    2, 0x0a /* Public */,
      61,    1,  595,    2, 0x0a /* Public */,
      61,    2,  598,    2, 0x0a /* Public */,
      61,    1,  603,    2, 0x2a /* Public | MethodCloned */,
      67,    0,  606,    2, 0x0a /* Public */,
      68,    1,  607,    2, 0x0a /* Public */,
      69,    0,  610,    2, 0x0a /* Public */,
      70,    1,  611,    2, 0x0a /* Public */,
      73,    2,  614,    2, 0x0a /* Public */,
      73,    1,  619,    2, 0x2a /* Public | MethodCloned */,
      73,    0,  622,    2, 0x2a /* Public | MethodCloned */,
      76,    1,  623,    2, 0x0a /* Public */,
      78,    1,  626,    2, 0x0a /* Public */,
      79,    2,  629,    2, 0x0a /* Public */,
      81,    2,  634,    2, 0x0a /* Public */,
      82,    1,  639,    2, 0x0a /* Public */,
      83,    1,  642,    2, 0x0a /* Public */,
      84,    2,  645,    2, 0x0a /* Public */,
      85,    2,  650,    2, 0x0a /* Public */,
      86,    2,  655,    2, 0x0a /* Public */,
      87,    2,  660,    2, 0x0a /* Public */,
      88,    2,  665,    2, 0x0a /* Public */,
      89,    2,  670,    2, 0x0a /* Public */,
      90,    2,  675,    2, 0x0a /* Public */,
      91,    2,  680,    2, 0x0a /* Public */,
      92,    2,  685,    2, 0x0a /* Public */,
      96,    1,  690,    2, 0x0a /* Public */,
      97,    1,  693,    2, 0x0a /* Public */,
      98,    2,  696,    2, 0x0a /* Public */,
      98,    1,  701,    2, 0x2a /* Public | MethodCloned */,
     101,    1,  704,    2, 0x0a /* Public */,
     102,    1,  707,    2, 0x0a /* Public */,
     103,    2,  710,    2, 0x0a /* Public */,
     105,    1,  715,    2, 0x0a /* Public */,
     106,    1,  718,    2, 0x0a /* Public */,
     109,    1,  721,    2, 0x0a /* Public */,
     110,    1,  724,    2, 0x0a /* Public */,
     112,    1,  727,    2, 0x0a /* Public */,
     113,    1,  730,    2, 0x0a /* Public */,
     116,    1,  733,    2, 0x0a /* Public */,
     117,    1,  736,    2, 0x0a /* Public */,
     119,    1,  739,    2, 0x0a /* Public */,
     120,    2,  742,    2, 0x0a /* Public */,
     120,    1,  747,    2, 0x2a /* Public | MethodCloned */,
     122,    4,  750,    2, 0x0a /* Public */,
     122,    3,  759,    2, 0x2a /* Public | MethodCloned */,
     122,    2,  766,    2, 0x2a /* Public | MethodCloned */,
     127,    2,  771,    2, 0x0a /* Public */,
     129,    1,  776,    2, 0x0a /* Public */,
     131,    1,  779,    2, 0x0a /* Public */,
     134,    1,  782,    2, 0x0a /* Public */,
     135,    0,  785,    2, 0x0a /* Public */,
     136,    2,  786,    2, 0x0a /* Public */,
     140,    0,  791,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,   16,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   25,   26,
    0x80000000 | 28, QMetaType::QString, QMetaType::QString,   29,   25,
    0x80000000 | 28, QMetaType::QString,   29,
    0x80000000 | 28, QMetaType::QString, QMetaType::QString, QMetaType::QString,   30,   31,   26,
    0x80000000 | 33, QMetaType::QString, QMetaType::QString, QMetaType::QString,   30,   25,   26,
    QMetaType::Bool, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Int, 0x80000000 | 43,   44,
    0x80000000 | 43, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 43,   44,
    0x80000000 | 43, 0x80000000 | 46,   47,
    QMetaType::Int, 0x80000000 | 43,   44,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Int, 0x80000000 | 43,   44,
    0x80000000 | 43, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Int, 0x80000000 | 43,   44,
    0x80000000 | 43, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Int, 0x80000000 | 43,   44,
    0x80000000 | 43, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 43,   44,
    0x80000000 | 62, QMetaType::QString,   63,
    QMetaType::Void, 0x80000000 | 62, 0x80000000 | 65,   64,   66,
    QMetaType::Void, 0x80000000 | 62,   64,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void,
    0x80000000 | 8, 0x80000000 | 71,   72,
    QMetaType::Void, 0x80000000 | 46, QMetaType::QString,   74,   75,
    QMetaType::Void, 0x80000000 | 46,   74,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,   77,
    QMetaType::Void, QMetaType::QVariantMap,   77,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   63,   80,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   63,   80,
    QMetaType::Void, 0x80000000 | 43,   80,
    QMetaType::Void, 0x80000000 | 43,   80,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   63,   80,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   63,   80,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   63,   80,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   63,   80,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   63,   80,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   63,   80,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   63,   80,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   63,   80,
    QMetaType::Void, 0x80000000 | 93, 0x80000000 | 94,   66,   95,
    QMetaType::Void, 0x80000000 | 94,   95,
    QMetaType::Void, 0x80000000 | 3,   16,
    0x80000000 | 99, 0x80000000 | 23, QMetaType::QString,   16,  100,
    0x80000000 | 99, 0x80000000 | 23,   16,
    QMetaType::Void, 0x80000000 | 43,   80,
    QMetaType::Void, 0x80000000 | 43,   80,
    QMetaType::Bool, 0x80000000 | 43, QMetaType::QString,   80,  104,
    QMetaType::Bool, 0x80000000 | 43,   80,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void, 0x80000000 | 111,  108,
    QMetaType::Void, 0x80000000 | 111,  108,
    QMetaType::Void, 0x80000000 | 114,  115,
    QMetaType::Void, 0x80000000 | 114,  115,
    QMetaType::Void, 0x80000000 | 118,  115,
    QMetaType::Void, 0x80000000 | 118,  115,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   30,  121,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Bool, 0x80000000 | 23, 0x80000000 | 123, QMetaType::Bool, QMetaType::Bool,   16,  124,  125,  126,
    QMetaType::Bool, 0x80000000 | 23, 0x80000000 | 123, QMetaType::Bool,   16,  124,  125,
    QMetaType::Bool, 0x80000000 | 23, 0x80000000 | 123,   16,  124,
    0x80000000 | 128, 0x80000000 | 23, 0x80000000 | 123,   16,  124,
    QMetaType::Void, QMetaType::QString,  130,
    QMetaType::Void, 0x80000000 | 132,  133,
    QMetaType::Void, 0x80000000 | 132,  133,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 137, 0x80000000 | 137,  138,  139,
    0x80000000 | 141,

       0        // eod
};

void QgisInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgisInterface *_t = static_cast<QgisInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: _t->currentThemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->layoutDesignerOpened((*reinterpret_cast< QgsLayoutDesignerInterface*(*)>(_a[1]))); break;
        case 3: _t->layoutDesignerWillBeClosed((*reinterpret_cast< QgsLayoutDesignerInterface*(*)>(_a[1]))); break;
        case 4: _t->layoutDesignerClosed(); break;
        case 5: _t->initializationCompleted(); break;
        case 6: _t->projectRead(); break;
        case 7: _t->newProjectCreated(); break;
        case 8: _t->layerSavedAs((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->zoomFull(); break;
        case 10: _t->zoomToPrevious(); break;
        case 11: _t->zoomToNext(); break;
        case 12: _t->zoomToActiveLayer(); break;
        case 13: { QgsVectorLayer* _r = _t->addVectorLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsVectorLayer**>(_a[0]) = std::move(_r); }  break;
        case 14: { QgsRasterLayer* _r = _t->addRasterLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QgsRasterLayer**>(_a[0]) = std::move(_r); }  break;
        case 15: { QgsRasterLayer* _r = _t->addRasterLayer((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsRasterLayer**>(_a[0]) = std::move(_r); }  break;
        case 16: { QgsRasterLayer* _r = _t->addRasterLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsRasterLayer**>(_a[0]) = std::move(_r); }  break;
        case 17: { QgsMeshLayer* _r = _t->addMeshLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsMeshLayer**>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->addProject((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->newProject((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->newProject(); break;
        case 21: _t->reloadConnections(); break;
        case 22: { bool _r = _t->setActiveLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->copySelectionToClipboard((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 24: _t->pasteFromClipboard((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 25: { int _r = _t->addToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 26: { QAction* _r = _t->addToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 27: _t->removeToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 28: { QAction* _r = _t->addRasterToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 29: { int _r = _t->addRasterToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->removeRasterToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 31: { int _r = _t->addVectorToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 32: { QAction* _r = _t->addVectorToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 33: _t->removeVectorToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 34: { int _r = _t->addDatabaseToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: { QAction* _r = _t->addDatabaseToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 36: _t->removeDatabaseToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 37: { int _r = _t->addWebToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 38: { QAction* _r = _t->addWebToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 39: _t->removeWebToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 40: { QToolBar* _r = _t->addToolBar((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QToolBar**>(_a[0]) = std::move(_r); }  break;
        case 41: _t->addToolBar((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< Qt::ToolBarArea(*)>(_a[2]))); break;
        case 42: _t->addToolBar((*reinterpret_cast< QToolBar*(*)>(_a[1]))); break;
        case 43: _t->openMessageLog(); break;
        case 44: _t->addUserInputWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 45: _t->showLayoutManager(); break;
        case 46: { QgsLayoutDesignerInterface* _r = _t->openLayoutDesigner((*reinterpret_cast< QgsMasterLayoutInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsLayoutDesignerInterface**>(_a[0]) = std::move(_r); }  break;
        case 47: _t->showOptionsDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 48: _t->showOptionsDialog((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 49: _t->showOptionsDialog(); break;
        case 50: _t->buildStyleSheet((*reinterpret_cast< const QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 51: _t->saveStyleSheetOptions((*reinterpret_cast< const QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 52: _t->addPluginToMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 53: _t->removePluginMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 54: _t->insertAddLayerAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 55: _t->removeAddLayerAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 56: _t->addPluginToDatabaseMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 57: _t->removePluginDatabaseMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 58: _t->addPluginToRasterMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 59: _t->removePluginRasterMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 60: _t->addPluginToVectorMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 61: _t->removePluginVectorMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 62: _t->addPluginToWebMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 63: _t->removePluginWebMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 64: _t->addDockWidget((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1])),(*reinterpret_cast< QDockWidget*(*)>(_a[2]))); break;
        case 65: _t->removeDockWidget((*reinterpret_cast< QDockWidget*(*)>(_a[1]))); break;
        case 66: _t->showLayerProperties((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 67: { QDialog* _r = _t->showAttributeTable((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = std::move(_r); }  break;
        case 68: { QDialog* _r = _t->showAttributeTable((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = std::move(_r); }  break;
        case 69: _t->addWindow((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 70: _t->removeWindow((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 71: { bool _r = _t->registerMainWindowAction((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 72: { bool _r = _t->unregisterMainWindowAction((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 73: _t->registerMapLayerConfigWidgetFactory((*reinterpret_cast< QgsMapLayerConfigWidgetFactory*(*)>(_a[1]))); break;
        case 74: _t->unregisterMapLayerConfigWidgetFactory((*reinterpret_cast< QgsMapLayerConfigWidgetFactory*(*)>(_a[1]))); break;
        case 75: _t->registerOptionsWidgetFactory((*reinterpret_cast< QgsOptionsWidgetFactory*(*)>(_a[1]))); break;
        case 76: _t->unregisterOptionsWidgetFactory((*reinterpret_cast< QgsOptionsWidgetFactory*(*)>(_a[1]))); break;
        case 77: _t->registerCustomDropHandler((*reinterpret_cast< QgsCustomDropHandler*(*)>(_a[1]))); break;
        case 78: _t->unregisterCustomDropHandler((*reinterpret_cast< QgsCustomDropHandler*(*)>(_a[1]))); break;
        case 79: _t->registerCustomLayoutDropHandler((*reinterpret_cast< QgsLayoutCustomDropHandler*(*)>(_a[1]))); break;
        case 80: _t->unregisterCustomLayoutDropHandler((*reinterpret_cast< QgsLayoutCustomDropHandler*(*)>(_a[1]))); break;
        case 81: _t->openURL((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 82: _t->openURL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 83: { bool _r = _t->openFeatureForm((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeature(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 84: { bool _r = _t->openFeatureForm((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeature(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 85: { bool _r = _t->openFeatureForm((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeature(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 86: { QgsAttributeDialog* _r = _t->getFeatureForm((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeature(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QgsAttributeDialog**>(_a[0]) = std::move(_r); }  break;
        case 87: _t->preloadForm((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 88: _t->registerLocatorFilter((*reinterpret_cast< QgsLocatorFilter*(*)>(_a[1]))); break;
        case 89: _t->deregisterLocatorFilter((*reinterpret_cast< QgsLocatorFilter*(*)>(_a[1]))); break;
        case 90: _t->invalidateLocatorResults(); break;
        case 91: { bool _r = _t->askForDatumTransform((*reinterpret_cast< QgsCoordinateReferenceSystem(*)>(_a[1])),(*reinterpret_cast< QgsCoordinateReferenceSystem(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 92: { QgsBrowserModel* _r = _t->browserModel();
            if (_a[0]) *reinterpret_cast< QgsBrowserModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgisInterface::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::currentLayerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgisInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::currentThemeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgisInterface::*_t)(QgsLayoutDesignerInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::layoutDesignerOpened)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgisInterface::*_t)(QgsLayoutDesignerInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::layoutDesignerWillBeClosed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgisInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::layoutDesignerClosed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgisInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::initializationCompleted)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgisInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::projectRead)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgisInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::newProjectCreated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgisInterface::*_t)(QgsMapLayer * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::layerSavedAs)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject QgisInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgisInterface.data,
      qt_meta_data_QgisInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgisInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgisInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgisInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgisInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 93)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 93;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 93)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 93;
    }
    return _id;
}

// SIGNAL 0
void QgisInterface::currentLayerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgisInterface::currentThemeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgisInterface::layoutDesignerOpened(QgsLayoutDesignerInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgisInterface::layoutDesignerWillBeClosed(QgsLayoutDesignerInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgisInterface::layoutDesignerClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QgisInterface::initializationCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QgisInterface::projectRead()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QgisInterface::newProjectCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QgisInterface::layerSavedAs(QgsMapLayer * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
