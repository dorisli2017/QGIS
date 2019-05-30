/****************************************************************************
** Meta object code from reading C++ file 'qgisapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgisapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgisapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgisApp_t {
    QByteArrayData data[451];
    char stringdata0[7228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgisApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgisApp_t qt_meta_stringdata_QgisApp = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QgisApp"
QT_MOC_LITERAL(1, 8, 18), // "connectionsChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "keyPressed"
QT_MOC_LITERAL(4, 39, 10), // "QKeyEvent*"
QT_MOC_LITERAL(5, 50, 1), // "e"
QT_MOC_LITERAL(6, 52, 11), // "projectRead"
QT_MOC_LITERAL(7, 64, 10), // "newProject"
QT_MOC_LITERAL(8, 75, 19), // "currentThemeChanged"
QT_MOC_LITERAL(9, 95, 20), // "layoutDesignerOpened"
QT_MOC_LITERAL(10, 116, 27), // "QgsLayoutDesignerInterface*"
QT_MOC_LITERAL(11, 144, 8), // "designer"
QT_MOC_LITERAL(12, 153, 26), // "layoutDesignerWillBeClosed"
QT_MOC_LITERAL(13, 180, 20), // "layoutDesignerClosed"
QT_MOC_LITERAL(14, 201, 23), // "initializationCompleted"
QT_MOC_LITERAL(15, 225, 19), // "customCrsValidation"
QT_MOC_LITERAL(16, 245, 29), // "QgsCoordinateReferenceSystem&"
QT_MOC_LITERAL(17, 275, 3), // "crs"
QT_MOC_LITERAL(18, 279, 12), // "layerSavedAs"
QT_MOC_LITERAL(19, 292, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(20, 305, 1), // "l"
QT_MOC_LITERAL(21, 307, 4), // "path"
QT_MOC_LITERAL(22, 312, 18), // "activeLayerChanged"
QT_MOC_LITERAL(23, 331, 5), // "layer"
QT_MOC_LITERAL(24, 337, 10), // "saveAsFile"
QT_MOC_LITERAL(25, 348, 12), // "onlySelected"
QT_MOC_LITERAL(26, 361, 17), // "defaultToAddToMap"
QT_MOC_LITERAL(27, 379, 24), // "makeMemoryLayerPermanent"
QT_MOC_LITERAL(28, 404, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(29, 420, 13), // "saveStyleFile"
QT_MOC_LITERAL(30, 434, 21), // "saveAsLayerDefinition"
QT_MOC_LITERAL(31, 456, 16), // "saveAsRasterFile"
QT_MOC_LITERAL(32, 473, 15), // "QgsRasterLayer*"
QT_MOC_LITERAL(33, 489, 18), // "defaultAddToCanvas"
QT_MOC_LITERAL(34, 508, 17), // "handleDropUriList"
QT_MOC_LITERAL(35, 526, 25), // "QgsMimeDataUtils::UriList"
QT_MOC_LITERAL(36, 552, 3), // "lst"
QT_MOC_LITERAL(37, 556, 8), // "openFile"
QT_MOC_LITERAL(38, 565, 8), // "fileName"
QT_MOC_LITERAL(39, 574, 12), // "fileTypeHint"
QT_MOC_LITERAL(40, 587, 26), // "layerTreeViewDoubleClicked"
QT_MOC_LITERAL(41, 614, 5), // "index"
QT_MOC_LITERAL(42, 620, 28), // "updateNewLayerInsertionPoint"
QT_MOC_LITERAL(43, 649, 20), // "autoSelectAddedLayer"
QT_MOC_LITERAL(44, 670, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(45, 690, 6), // "layers"
QT_MOC_LITERAL(46, 697, 8), // "zoomFull"
QT_MOC_LITERAL(47, 706, 14), // "zoomToPrevious"
QT_MOC_LITERAL(48, 721, 10), // "zoomToNext"
QT_MOC_LITERAL(49, 732, 14), // "zoomToSelected"
QT_MOC_LITERAL(50, 747, 13), // "panToSelected"
QT_MOC_LITERAL(51, 761, 15), // "layerProperties"
QT_MOC_LITERAL(52, 777, 14), // "attributeTable"
QT_MOC_LITERAL(53, 792, 40), // "QgsAttributeTableFilterModel:..."
QT_MOC_LITERAL(54, 833, 6), // "filter"
QT_MOC_LITERAL(55, 840, 15), // "fieldCalculator"
QT_MOC_LITERAL(56, 856, 9), // "markDirty"
QT_MOC_LITERAL(57, 866, 15), // "layersWereAdded"
QT_MOC_LITERAL(58, 882, 14), // "removingLayers"
QT_MOC_LITERAL(59, 897, 13), // "toggleEditing"
QT_MOC_LITERAL(60, 911, 11), // "allowCancel"
QT_MOC_LITERAL(61, 923, 20), // "saveActiveLayerEdits"
QT_MOC_LITERAL(62, 944, 9), // "saveEdits"
QT_MOC_LITERAL(63, 954, 13), // "leaveEditable"
QT_MOC_LITERAL(64, 968, 14), // "triggerRepaint"
QT_MOC_LITERAL(65, 983, 11), // "cancelEdits"
QT_MOC_LITERAL(66, 995, 12), // "saveAllEdits"
QT_MOC_LITERAL(67, 1008, 12), // "verifyAction"
QT_MOC_LITERAL(68, 1021, 13), // "rollbackEdits"
QT_MOC_LITERAL(69, 1035, 16), // "rollbackAllEdits"
QT_MOC_LITERAL(70, 1052, 14), // "cancelAllEdits"
QT_MOC_LITERAL(71, 1067, 17), // "updateUndoActions"
QT_MOC_LITERAL(72, 1085, 23), // "cutSelectionToClipboard"
QT_MOC_LITERAL(73, 1109, 24), // "layerContainingSelection"
QT_MOC_LITERAL(74, 1134, 24), // "copySelectionToClipboard"
QT_MOC_LITERAL(75, 1159, 18), // "pasteFromClipboard"
QT_MOC_LITERAL(76, 1178, 16), // "destinationLayer"
QT_MOC_LITERAL(77, 1195, 16), // "pasteAsNewVector"
QT_MOC_LITERAL(78, 1212, 22), // "pasteAsNewMemoryVector"
QT_MOC_LITERAL(79, 1235, 9), // "layerName"
QT_MOC_LITERAL(80, 1245, 9), // "copyStyle"
QT_MOC_LITERAL(81, 1255, 11), // "sourceLayer"
QT_MOC_LITERAL(82, 1267, 28), // "QgsMapLayer::StyleCategories"
QT_MOC_LITERAL(83, 1296, 10), // "categories"
QT_MOC_LITERAL(84, 1307, 10), // "pasteStyle"
QT_MOC_LITERAL(85, 1318, 9), // "copyLayer"
QT_MOC_LITERAL(86, 1328, 10), // "pasteLayer"
QT_MOC_LITERAL(87, 1339, 17), // "applyStyleToGroup"
QT_MOC_LITERAL(88, 1357, 11), // "setLayerCrs"
QT_MOC_LITERAL(89, 1369, 22), // "setProjectCrsFromLayer"
QT_MOC_LITERAL(90, 1392, 12), // "copyFeatures"
QT_MOC_LITERAL(91, 1405, 16), // "QgsFeatureStore&"
QT_MOC_LITERAL(92, 1422, 12), // "featureStore"
QT_MOC_LITERAL(93, 1435, 17), // "loadGDALSublayers"
QT_MOC_LITERAL(94, 1453, 3), // "uri"
QT_MOC_LITERAL(95, 1457, 4), // "list"
QT_MOC_LITERAL(96, 1462, 14), // "deleteSelected"
QT_MOC_LITERAL(97, 1477, 8), // "QWidget*"
QT_MOC_LITERAL(98, 1486, 6), // "parent"
QT_MOC_LITERAL(99, 1493, 20), // "checkFeaturesVisible"
QT_MOC_LITERAL(100, 1514, 12), // "writeProject"
QT_MOC_LITERAL(101, 1527, 13), // "QDomDocument&"
QT_MOC_LITERAL(102, 1541, 11), // "readProject"
QT_MOC_LITERAL(103, 1553, 12), // "QDomDocument"
QT_MOC_LITERAL(104, 1566, 16), // "setAppStyleSheet"
QT_MOC_LITERAL(105, 1583, 10), // "stylesheet"
QT_MOC_LITERAL(106, 1594, 30), // "namProxyAuthenticationRequired"
QT_MOC_LITERAL(107, 1625, 13), // "QNetworkProxy"
QT_MOC_LITERAL(108, 1639, 5), // "proxy"
QT_MOC_LITERAL(109, 1645, 15), // "QAuthenticator*"
QT_MOC_LITERAL(110, 1661, 4), // "auth"
QT_MOC_LITERAL(111, 1666, 18), // "namRequestTimedOut"
QT_MOC_LITERAL(112, 1685, 27), // "QgsNetworkRequestParameters"
QT_MOC_LITERAL(113, 1713, 7), // "request"
QT_MOC_LITERAL(114, 1721, 27), // "eraseAuthenticationDatabase"
QT_MOC_LITERAL(115, 1749, 14), // "authMessageOut"
QT_MOC_LITERAL(116, 1764, 7), // "message"
QT_MOC_LITERAL(117, 1772, 7), // "authtag"
QT_MOC_LITERAL(118, 1780, 28), // "QgsAuthManager::MessageLevel"
QT_MOC_LITERAL(119, 1809, 5), // "level"
QT_MOC_LITERAL(120, 1815, 25), // "toolButtonActionTriggered"
QT_MOC_LITERAL(121, 1841, 8), // "QAction*"
QT_MOC_LITERAL(122, 1850, 27), // "legendLayerSelectionChanged"
QT_MOC_LITERAL(123, 1878, 21), // "legendLayerZoomNative"
QT_MOC_LITERAL(124, 1900, 36), // "legendLayerStretchUsingCurren..."
QT_MOC_LITERAL(125, 1937, 5), // "event"
QT_MOC_LITERAL(126, 1943, 7), // "QEvent*"
QT_MOC_LITERAL(127, 1951, 17), // "legendGroupSetCrs"
QT_MOC_LITERAL(128, 1969, 21), // "legendGroupSetWmsData"
QT_MOC_LITERAL(129, 1991, 17), // "dataSourceManager"
QT_MOC_LITERAL(130, 2009, 8), // "pageName"
QT_MOC_LITERAL(131, 2018, 15), // "addVirtualLayer"
QT_MOC_LITERAL(132, 2034, 11), // "removeLayer"
QT_MOC_LITERAL(133, 2046, 15), // "duplicateLayers"
QT_MOC_LITERAL(134, 2062, 7), // "lyrList"
QT_MOC_LITERAL(135, 2070, 17), // "layerSubsetString"
QT_MOC_LITERAL(136, 2088, 23), // "setLayerScaleVisibility"
QT_MOC_LITERAL(137, 2112, 16), // "zoomToLayerScale"
QT_MOC_LITERAL(138, 2129, 12), // "browserModel"
QT_MOC_LITERAL(139, 2142, 16), // "QgsBrowserModel*"
QT_MOC_LITERAL(140, 2159, 16), // "changeDataSource"
QT_MOC_LITERAL(141, 2176, 14), // "addRasterLayer"
QT_MOC_LITERAL(142, 2191, 8), // "baseName"
QT_MOC_LITERAL(143, 2200, 11), // "providerKey"
QT_MOC_LITERAL(144, 2212, 14), // "addVectorLayer"
QT_MOC_LITERAL(145, 2227, 15), // "vectorLayerPath"
QT_MOC_LITERAL(146, 2243, 12), // "addMeshLayer"
QT_MOC_LITERAL(147, 2256, 13), // "QgsMeshLayer*"
QT_MOC_LITERAL(148, 2270, 3), // "url"
QT_MOC_LITERAL(149, 2274, 15), // "addVectorLayers"
QT_MOC_LITERAL(150, 2290, 16), // "layerQStringList"
QT_MOC_LITERAL(151, 2307, 3), // "enc"
QT_MOC_LITERAL(152, 2311, 14), // "dataSourceType"
QT_MOC_LITERAL(153, 2326, 15), // "addRasterLayers"
QT_MOC_LITERAL(154, 2342, 10), // "guiWarning"
QT_MOC_LITERAL(155, 2353, 14), // "addPluginLayer"
QT_MOC_LITERAL(156, 2368, 15), // "QgsPluginLayer*"
QT_MOC_LITERAL(157, 2384, 20), // "versionReplyFinished"
QT_MOC_LITERAL(158, 2405, 9), // "logViewer"
QT_MOC_LITERAL(159, 2415, 20), // "QgsMessageLogViewer*"
QT_MOC_LITERAL(160, 2436, 26), // "updateProjectFromTemplates"
QT_MOC_LITERAL(161, 2463, 15), // "optionsPagesMap"
QT_MOC_LITERAL(162, 2479, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(163, 2497, 25), // "projectPropertiesPagesMap"
QT_MOC_LITERAL(164, 2523, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(165, 2545, 15), // "settingPagesMap"
QT_MOC_LITERAL(166, 2561, 21), // "showProjectProperties"
QT_MOC_LITERAL(167, 2583, 4), // "page"
QT_MOC_LITERAL(168, 2588, 12), // "showSettings"
QT_MOC_LITERAL(169, 2601, 17), // "showOptionsDialog"
QT_MOC_LITERAL(170, 2619, 11), // "currentPage"
QT_MOC_LITERAL(171, 2631, 10), // "pageNumber"
QT_MOC_LITERAL(172, 2642, 26), // "refreshActionFeatureAction"
QT_MOC_LITERAL(173, 2669, 9), // "panelMenu"
QT_MOC_LITERAL(174, 2679, 6), // "QMenu*"
QT_MOC_LITERAL(175, 2686, 10), // "renameView"
QT_MOC_LITERAL(176, 2697, 17), // "showStatusMessage"
QT_MOC_LITERAL(177, 2715, 20), // "loadingLayerMessages"
QT_MOC_LITERAL(178, 2736, 44), // "QList<QgsReadWriteContext::Re..."
QT_MOC_LITERAL(179, 2781, 8), // "messages"
QT_MOC_LITERAL(180, 2790, 14), // "setActiveLayer"
QT_MOC_LITERAL(181, 2805, 17), // "reloadConnections"
QT_MOC_LITERAL(182, 2823, 17), // "showLayoutManager"
QT_MOC_LITERAL(183, 2841, 15), // "snappingOptions"
QT_MOC_LITERAL(184, 2857, 15), // "setMapTipsDelay"
QT_MOC_LITERAL(185, 2873, 13), // "timerInterval"
QT_MOC_LITERAL(186, 2887, 19), // "triggerCrashHandler"
QT_MOC_LITERAL(187, 2907, 10), // "newProfile"
QT_MOC_LITERAL(188, 2918, 24), // "onTaskCompleteShowNotify"
QT_MOC_LITERAL(189, 2943, 6), // "taskId"
QT_MOC_LITERAL(190, 2950, 6), // "status"
QT_MOC_LITERAL(191, 2957, 26), // "onTransactionGroupsChanged"
QT_MOC_LITERAL(192, 2984, 27), // "transactionGroupCommitError"
QT_MOC_LITERAL(193, 3012, 5), // "error"
QT_MOC_LITERAL(194, 3018, 23), // "onSnappingConfigChanged"
QT_MOC_LITERAL(195, 3042, 11), // "validateCrs"
QT_MOC_LITERAL(196, 3054, 8), // "sponsors"
QT_MOC_LITERAL(197, 3063, 5), // "about"
QT_MOC_LITERAL(198, 3069, 17), // "addDatabaseLayers"
QT_MOC_LITERAL(199, 3087, 13), // "layerPathList"
QT_MOC_LITERAL(200, 3101, 22), // "addSelectedVectorLayer"
QT_MOC_LITERAL(201, 3124, 8), // "provider"
QT_MOC_LITERAL(202, 3133, 26), // "replaceSelectedVectorLayer"
QT_MOC_LITERAL(203, 3160, 5), // "oldId"
QT_MOC_LITERAL(204, 3166, 12), // "isInOverview"
QT_MOC_LITERAL(205, 3179, 21), // "saveLastMousePosition"
QT_MOC_LITERAL(206, 3201, 10), // "QgsPointXY"
QT_MOC_LITERAL(207, 3212, 9), // "showScale"
QT_MOC_LITERAL(208, 3222, 5), // "scale"
QT_MOC_LITERAL(209, 3228, 12), // "userRotation"
QT_MOC_LITERAL(210, 3241, 17), // "zoomToLayerExtent"
QT_MOC_LITERAL(211, 3259, 14), // "zoomActualSize"
QT_MOC_LITERAL(212, 3274, 21), // "localHistogramStretch"
QT_MOC_LITERAL(213, 3296, 20), // "fullHistogramStretch"
QT_MOC_LITERAL(214, 3317, 25), // "localCumulativeCutStretch"
QT_MOC_LITERAL(215, 3343, 24), // "fullCumulativeCutStretch"
QT_MOC_LITERAL(216, 3368, 18), // "increaseBrightness"
QT_MOC_LITERAL(217, 3387, 18), // "decreaseBrightness"
QT_MOC_LITERAL(218, 3406, 16), // "increaseContrast"
QT_MOC_LITERAL(219, 3423, 16), // "decreaseContrast"
QT_MOC_LITERAL(220, 3440, 17), // "showPluginManager"
QT_MOC_LITERAL(221, 3458, 17), // "loadPythonSupport"
QT_MOC_LITERAL(222, 3476, 13), // "getPluginMenu"
QT_MOC_LITERAL(223, 3490, 8), // "menuName"
QT_MOC_LITERAL(224, 3499, 15), // "addPluginToMenu"
QT_MOC_LITERAL(225, 3515, 4), // "name"
QT_MOC_LITERAL(226, 3520, 6), // "action"
QT_MOC_LITERAL(227, 3527, 16), // "removePluginMenu"
QT_MOC_LITERAL(228, 3544, 15), // "getDatabaseMenu"
QT_MOC_LITERAL(229, 3560, 23), // "addPluginToDatabaseMenu"
QT_MOC_LITERAL(230, 3584, 24), // "removePluginDatabaseMenu"
QT_MOC_LITERAL(231, 3609, 13), // "getRasterMenu"
QT_MOC_LITERAL(232, 3623, 21), // "addPluginToRasterMenu"
QT_MOC_LITERAL(233, 3645, 22), // "removePluginRasterMenu"
QT_MOC_LITERAL(234, 3668, 13), // "getVectorMenu"
QT_MOC_LITERAL(235, 3682, 21), // "addPluginToVectorMenu"
QT_MOC_LITERAL(236, 3704, 22), // "removePluginVectorMenu"
QT_MOC_LITERAL(237, 3727, 10), // "getWebMenu"
QT_MOC_LITERAL(238, 3738, 18), // "addPluginToWebMenu"
QT_MOC_LITERAL(239, 3757, 19), // "removePluginWebMenu"
QT_MOC_LITERAL(240, 3777, 20), // "insertAddLayerAction"
QT_MOC_LITERAL(241, 3798, 20), // "removeAddLayerAction"
QT_MOC_LITERAL(242, 3819, 20), // "addPluginToolBarIcon"
QT_MOC_LITERAL(243, 3840, 7), // "qAction"
QT_MOC_LITERAL(244, 3848, 22), // "addPluginToolBarWidget"
QT_MOC_LITERAL(245, 3871, 6), // "widget"
QT_MOC_LITERAL(246, 3878, 23), // "removePluginToolBarIcon"
QT_MOC_LITERAL(247, 3902, 20), // "addRasterToolBarIcon"
QT_MOC_LITERAL(248, 3923, 22), // "addRasterToolBarWidget"
QT_MOC_LITERAL(249, 3946, 23), // "removeRasterToolBarIcon"
QT_MOC_LITERAL(250, 3970, 20), // "addVectorToolBarIcon"
QT_MOC_LITERAL(251, 3991, 22), // "addVectorToolBarWidget"
QT_MOC_LITERAL(252, 4014, 23), // "removeVectorToolBarIcon"
QT_MOC_LITERAL(253, 4038, 22), // "addDatabaseToolBarIcon"
QT_MOC_LITERAL(254, 4061, 19), // "onVirtualLayerAdded"
QT_MOC_LITERAL(255, 4081, 24), // "addDatabaseToolBarWidget"
QT_MOC_LITERAL(256, 4106, 25), // "removeDatabaseToolBarIcon"
QT_MOC_LITERAL(257, 4132, 17), // "addWebToolBarIcon"
QT_MOC_LITERAL(258, 4150, 19), // "addWebToolBarWidget"
QT_MOC_LITERAL(259, 4170, 20), // "removeWebToolBarIcon"
QT_MOC_LITERAL(260, 4191, 15), // "saveWindowState"
QT_MOC_LITERAL(261, 4207, 18), // "restoreWindowState"
QT_MOC_LITERAL(262, 4226, 8), // "fileSave"
QT_MOC_LITERAL(263, 4235, 10), // "fileSaveAs"
QT_MOC_LITERAL(264, 4246, 9), // "dxfExport"
QT_MOC_LITERAL(265, 4256, 9), // "dwgImport"
QT_MOC_LITERAL(266, 4266, 11), // "openProject"
QT_MOC_LITERAL(267, 4278, 14), // "saveMapAsImage"
QT_MOC_LITERAL(268, 4293, 12), // "saveMapAsPdf"
QT_MOC_LITERAL(269, 4306, 8), // "fileOpen"
QT_MOC_LITERAL(270, 4315, 10), // "fileRevert"
QT_MOC_LITERAL(271, 4326, 7), // "fileNew"
QT_MOC_LITERAL(272, 4334, 12), // "fileNewBlank"
QT_MOC_LITERAL(273, 4347, 9), // "fileClose"
QT_MOC_LITERAL(274, 4357, 16), // "promptToSaveFlag"
QT_MOC_LITERAL(275, 4374, 10), // "forceBlank"
QT_MOC_LITERAL(276, 4385, 19), // "fileOpenAfterLaunch"
QT_MOC_LITERAL(277, 4405, 23), // "fileOpenedOKAfterLaunch"
QT_MOC_LITERAL(278, 4429, 19), // "fileNewFromTemplate"
QT_MOC_LITERAL(279, 4449, 25), // "fileNewFromTemplateAction"
QT_MOC_LITERAL(280, 4475, 26), // "fileNewFromDefaultTemplate"
QT_MOC_LITERAL(281, 4502, 20), // "showRasterCalculator"
QT_MOC_LITERAL(282, 4523, 18), // "showMeshCalculator"
QT_MOC_LITERAL(283, 4542, 19), // "showAlignRasterTool"
QT_MOC_LITERAL(284, 4562, 11), // "embedLayers"
QT_MOC_LITERAL(285, 4574, 12), // "newMapCanvas"
QT_MOC_LITERAL(286, 4587, 14), // "new3DMapCanvas"
QT_MOC_LITERAL(287, 4602, 14), // "newVectorLayer"
QT_MOC_LITERAL(288, 4617, 14), // "newMemoryLayer"
QT_MOC_LITERAL(289, 4632, 18), // "newSpatialiteLayer"
QT_MOC_LITERAL(290, 4651, 18), // "newGeoPackageLayer"
QT_MOC_LITERAL(291, 4670, 14), // "newPrintLayout"
QT_MOC_LITERAL(292, 4685, 9), // "newReport"
QT_MOC_LITERAL(293, 4695, 22), // "layoutsMenuAboutToShow"
QT_MOC_LITERAL(294, 4718, 16), // "addAllToOverview"
QT_MOC_LITERAL(295, 4735, 21), // "removeAllFromOverview"
QT_MOC_LITERAL(296, 4757, 13), // "hideAllLayers"
QT_MOC_LITERAL(297, 4771, 13), // "showAllLayers"
QT_MOC_LITERAL(298, 4785, 18), // "hideSelectedLayers"
QT_MOC_LITERAL(299, 4804, 20), // "hideDeselectedLayers"
QT_MOC_LITERAL(300, 4825, 18), // "showSelectedLayers"
QT_MOC_LITERAL(301, 4844, 12), // "helpContents"
QT_MOC_LITERAL(302, 4857, 16), // "apiDocumentation"
QT_MOC_LITERAL(303, 4874, 10), // "reportaBug"
QT_MOC_LITERAL(304, 4885, 16), // "supportProviders"
QT_MOC_LITERAL(305, 4902, 16), // "helpQgisHomePage"
QT_MOC_LITERAL(306, 4919, 7), // "openURL"
QT_MOC_LITERAL(307, 4927, 19), // "useQgisDocDirectory"
QT_MOC_LITERAL(308, 4947, 16), // "checkQgisVersion"
QT_MOC_LITERAL(309, 4964, 16), // "customProjection"
QT_MOC_LITERAL(310, 4981, 18), // "configureShortcuts"
QT_MOC_LITERAL(311, 5000, 9), // "customize"
QT_MOC_LITERAL(312, 5010, 7), // "options"
QT_MOC_LITERAL(313, 5018, 28), // "projectPropertiesProjections"
QT_MOC_LITERAL(314, 5047, 13), // "showBookmarks"
QT_MOC_LITERAL(315, 5061, 4), // "show"
QT_MOC_LITERAL(316, 5066, 11), // "newBookmark"
QT_MOC_LITERAL(317, 5078, 10), // "addFeature"
QT_MOC_LITERAL(318, 5089, 11), // "moveFeature"
QT_MOC_LITERAL(319, 5101, 15), // "moveFeatureCopy"
QT_MOC_LITERAL(320, 5117, 11), // "offsetCurve"
QT_MOC_LITERAL(321, 5129, 15), // "reshapeFeatures"
QT_MOC_LITERAL(322, 5145, 13), // "splitFeatures"
QT_MOC_LITERAL(323, 5159, 10), // "splitParts"
QT_MOC_LITERAL(324, 5170, 7), // "addRing"
QT_MOC_LITERAL(325, 5178, 8), // "fillRing"
QT_MOC_LITERAL(326, 5187, 7), // "addPart"
QT_MOC_LITERAL(327, 5195, 15), // "simplifyFeature"
QT_MOC_LITERAL(328, 5211, 10), // "deleteRing"
QT_MOC_LITERAL(329, 5222, 10), // "deletePart"
QT_MOC_LITERAL(330, 5233, 21), // "mergeSelectedFeatures"
QT_MOC_LITERAL(331, 5255, 33), // "mergeAttributesOfSelectedFeat..."
QT_MOC_LITERAL(332, 5289, 34), // "modifyAttributesOfSelectedFea..."
QT_MOC_LITERAL(333, 5324, 10), // "vertexTool"
QT_MOC_LITERAL(334, 5335, 21), // "vertexToolActiveLayer"
QT_MOC_LITERAL(335, 5357, 18), // "rotatePointSymbols"
QT_MOC_LITERAL(336, 5376, 17), // "offsetPointSymbol"
QT_MOC_LITERAL(337, 5394, 11), // "reverseLine"
QT_MOC_LITERAL(338, 5406, 10), // "setMapTool"
QT_MOC_LITERAL(339, 5417, 11), // "QgsMapTool*"
QT_MOC_LITERAL(340, 5429, 4), // "tool"
QT_MOC_LITERAL(341, 5434, 5), // "clean"
QT_MOC_LITERAL(342, 5440, 14), // "selectFeatures"
QT_MOC_LITERAL(343, 5455, 15), // "selectByPolygon"
QT_MOC_LITERAL(344, 5471, 16), // "selectByFreehand"
QT_MOC_LITERAL(345, 5488, 14), // "selectByRadius"
QT_MOC_LITERAL(346, 5503, 11), // "deselectAll"
QT_MOC_LITERAL(347, 5515, 9), // "selectAll"
QT_MOC_LITERAL(348, 5525, 15), // "invertSelection"
QT_MOC_LITERAL(349, 5541, 18), // "selectByExpression"
QT_MOC_LITERAL(350, 5560, 12), // "selectByForm"
QT_MOC_LITERAL(351, 5573, 16), // "refreshMapCanvas"
QT_MOC_LITERAL(352, 5590, 20), // "canvasRefreshStarted"
QT_MOC_LITERAL(353, 5611, 21), // "canvasRefreshFinished"
QT_MOC_LITERAL(354, 5633, 23), // "verifyEditsActionDialog"
QT_MOC_LITERAL(355, 5657, 3), // "act"
QT_MOC_LITERAL(356, 5661, 4), // "upon"
QT_MOC_LITERAL(357, 5666, 26), // "updateLayerModifiedActions"
QT_MOC_LITERAL(358, 5693, 14), // "mapToolChanged"
QT_MOC_LITERAL(359, 5708, 7), // "newTool"
QT_MOC_LITERAL(360, 5716, 7), // "oldTool"
QT_MOC_LITERAL(361, 5724, 13), // "showMapCanvas"
QT_MOC_LITERAL(362, 5738, 20), // "toggleLogMessageIcon"
QT_MOC_LITERAL(363, 5759, 13), // "hasLogMessage"
QT_MOC_LITERAL(364, 5773, 21), // "layerEditStateChanged"
QT_MOC_LITERAL(365, 5795, 22), // "updateLabelToolButtons"
QT_MOC_LITERAL(366, 5818, 37), // "activateDeactivateLayerRelate..."
QT_MOC_LITERAL(367, 5856, 16), // "selectionChanged"
QT_MOC_LITERAL(368, 5873, 13), // "extentChanged"
QT_MOC_LITERAL(369, 5887, 12), // "showRotation"
QT_MOC_LITERAL(370, 5900, 21), // "displayMapToolMessage"
QT_MOC_LITERAL(371, 5922, 18), // "Qgis::MessageLevel"
QT_MOC_LITERAL(372, 5941, 14), // "displayMessage"
QT_MOC_LITERAL(373, 5956, 5), // "title"
QT_MOC_LITERAL(374, 5962, 20), // "removeMapToolMessage"
QT_MOC_LITERAL(375, 5983, 30), // "updateMouseCoordinatePrecision"
QT_MOC_LITERAL(376, 6014, 18), // "addLayerDefinition"
QT_MOC_LITERAL(377, 6033, 8), // "fileExit"
QT_MOC_LITERAL(378, 6042, 7), // "zoomOut"
QT_MOC_LITERAL(379, 6050, 6), // "zoomIn"
QT_MOC_LITERAL(380, 6057, 3), // "pan"
QT_MOC_LITERAL(381, 6061, 8), // "identify"
QT_MOC_LITERAL(382, 6070, 7), // "measure"
QT_MOC_LITERAL(383, 6078, 11), // "measureArea"
QT_MOC_LITERAL(384, 6090, 12), // "measureAngle"
QT_MOC_LITERAL(385, 6103, 15), // "doFeatureAction"
QT_MOC_LITERAL(386, 6119, 26), // "updateDefaultFeatureAction"
QT_MOC_LITERAL(387, 6146, 21), // "refreshFeatureActions"
QT_MOC_LITERAL(388, 6168, 17), // "addFormAnnotation"
QT_MOC_LITERAL(389, 6186, 17), // "addTextAnnotation"
QT_MOC_LITERAL(390, 6204, 17), // "addHtmlAnnotation"
QT_MOC_LITERAL(391, 6222, 16), // "addSvgAnnotation"
QT_MOC_LITERAL(392, 6239, 16), // "modifyAnnotation"
QT_MOC_LITERAL(393, 6256, 20), // "reprojectAnnotations"
QT_MOC_LITERAL(394, 6277, 20), // "labelingFontNotFound"
QT_MOC_LITERAL(395, 6298, 6), // "vlayer"
QT_MOC_LITERAL(396, 6305, 10), // "fontfamily"
QT_MOC_LITERAL(397, 6316, 11), // "commitError"
QT_MOC_LITERAL(398, 6328, 26), // "labelingDialogFontNotFound"
QT_MOC_LITERAL(399, 6355, 8), // "labeling"
QT_MOC_LITERAL(400, 6364, 12), // "mapStyleDock"
QT_MOC_LITERAL(401, 6377, 7), // "enabled"
QT_MOC_LITERAL(402, 6385, 17), // "diagramProperties"
QT_MOC_LITERAL(403, 6403, 17), // "setCadDockVisible"
QT_MOC_LITERAL(404, 6421, 7), // "visible"
QT_MOC_LITERAL(405, 6429, 16), // "showPythonDialog"
QT_MOC_LITERAL(406, 6446, 24), // "oldProjectVersionWarning"
QT_MOC_LITERAL(407, 6471, 13), // "toggleMapTips"
QT_MOC_LITERAL(408, 6485, 10), // "showMapTip"
QT_MOC_LITERAL(409, 6496, 16), // "toggleFullScreen"
QT_MOC_LITERAL(410, 6513, 22), // "togglePanelsVisibility"
QT_MOC_LITERAL(411, 6536, 13), // "toggleMapOnly"
QT_MOC_LITERAL(412, 6550, 17), // "toggleReducedView"
QT_MOC_LITERAL(413, 6568, 11), // "viewMapOnly"
QT_MOC_LITERAL(414, 6580, 25), // "showActiveWindowMinimized"
QT_MOC_LITERAL(415, 6606, 27), // "toggleActiveWindowMaximized"
QT_MOC_LITERAL(416, 6634, 8), // "activate"
QT_MOC_LITERAL(417, 6643, 15), // "bringAllToFront"
QT_MOC_LITERAL(418, 6659, 13), // "stopRendering"
QT_MOC_LITERAL(419, 6673, 16), // "showStyleManager"
QT_MOC_LITERAL(420, 6690, 16), // "showPinnedLabels"
QT_MOC_LITERAL(421, 6707, 9), // "pinLabels"
QT_MOC_LITERAL(422, 6717, 14), // "showHideLabels"
QT_MOC_LITERAL(423, 6732, 9), // "moveLabel"
QT_MOC_LITERAL(424, 6742, 13), // "rotateFeature"
QT_MOC_LITERAL(425, 6756, 11), // "rotateLabel"
QT_MOC_LITERAL(426, 6768, 21), // "changeLabelProperties"
QT_MOC_LITERAL(427, 6790, 21), // "renderDecorationItems"
QT_MOC_LITERAL(428, 6812, 9), // "QPainter*"
QT_MOC_LITERAL(429, 6822, 1), // "p"
QT_MOC_LITERAL(430, 6824, 26), // "projectReadDecorationItems"
QT_MOC_LITERAL(431, 6851, 12), // "closeProject"
QT_MOC_LITERAL(432, 6864, 19), // "enableProjectMacros"
QT_MOC_LITERAL(433, 6884, 16), // "clipboardChanged"
QT_MOC_LITERAL(434, 6901, 20), // "mapCanvas_keyPressed"
QT_MOC_LITERAL(435, 6922, 18), // "disablePreviewMode"
QT_MOC_LITERAL(436, 6941, 24), // "activateGrayscalePreview"
QT_MOC_LITERAL(437, 6966, 19), // "activateMonoPreview"
QT_MOC_LITERAL(438, 6986, 24), // "activateProtanopePreview"
QT_MOC_LITERAL(439, 7011, 26), // "activateDeuteranopePreview"
QT_MOC_LITERAL(440, 7038, 30), // "toggleFilterLegendByExpression"
QT_MOC_LITERAL(441, 7069, 18), // "updateFilterLegend"
QT_MOC_LITERAL(442, 7088, 12), // "onLayerError"
QT_MOC_LITERAL(443, 7101, 3), // "msg"
QT_MOC_LITERAL(444, 7105, 20), // "setMapStyleDockLayer"
QT_MOC_LITERAL(445, 7126, 17), // "annotationCreated"
QT_MOC_LITERAL(446, 7144, 14), // "QgsAnnotation*"
QT_MOC_LITERAL(447, 7159, 10), // "annotation"
QT_MOC_LITERAL(448, 7170, 18), // "updateCrsStatusBar"
QT_MOC_LITERAL(449, 7189, 17), // "projectCrsChanged"
QT_MOC_LITERAL(450, 7207, 20) // "onActiveLayerChanged"

    },
    "QgisApp\0connectionsChanged\0\0keyPressed\0"
    "QKeyEvent*\0e\0projectRead\0newProject\0"
    "currentThemeChanged\0layoutDesignerOpened\0"
    "QgsLayoutDesignerInterface*\0designer\0"
    "layoutDesignerWillBeClosed\0"
    "layoutDesignerClosed\0initializationCompleted\0"
    "customCrsValidation\0QgsCoordinateReferenceSystem&\0"
    "crs\0layerSavedAs\0QgsMapLayer*\0l\0path\0"
    "activeLayerChanged\0layer\0saveAsFile\0"
    "onlySelected\0defaultToAddToMap\0"
    "makeMemoryLayerPermanent\0QgsVectorLayer*\0"
    "saveStyleFile\0saveAsLayerDefinition\0"
    "saveAsRasterFile\0QgsRasterLayer*\0"
    "defaultAddToCanvas\0handleDropUriList\0"
    "QgsMimeDataUtils::UriList\0lst\0openFile\0"
    "fileName\0fileTypeHint\0layerTreeViewDoubleClicked\0"
    "index\0updateNewLayerInsertionPoint\0"
    "autoSelectAddedLayer\0QList<QgsMapLayer*>\0"
    "layers\0zoomFull\0zoomToPrevious\0"
    "zoomToNext\0zoomToSelected\0panToSelected\0"
    "layerProperties\0attributeTable\0"
    "QgsAttributeTableFilterModel::FilterMode\0"
    "filter\0fieldCalculator\0markDirty\0"
    "layersWereAdded\0removingLayers\0"
    "toggleEditing\0allowCancel\0"
    "saveActiveLayerEdits\0saveEdits\0"
    "leaveEditable\0triggerRepaint\0cancelEdits\0"
    "saveAllEdits\0verifyAction\0rollbackEdits\0"
    "rollbackAllEdits\0cancelAllEdits\0"
    "updateUndoActions\0cutSelectionToClipboard\0"
    "layerContainingSelection\0"
    "copySelectionToClipboard\0pasteFromClipboard\0"
    "destinationLayer\0pasteAsNewVector\0"
    "pasteAsNewMemoryVector\0layerName\0"
    "copyStyle\0sourceLayer\0"
    "QgsMapLayer::StyleCategories\0categories\0"
    "pasteStyle\0copyLayer\0pasteLayer\0"
    "applyStyleToGroup\0setLayerCrs\0"
    "setProjectCrsFromLayer\0copyFeatures\0"
    "QgsFeatureStore&\0featureStore\0"
    "loadGDALSublayers\0uri\0list\0deleteSelected\0"
    "QWidget*\0parent\0checkFeaturesVisible\0"
    "writeProject\0QDomDocument&\0readProject\0"
    "QDomDocument\0setAppStyleSheet\0stylesheet\0"
    "namProxyAuthenticationRequired\0"
    "QNetworkProxy\0proxy\0QAuthenticator*\0"
    "auth\0namRequestTimedOut\0"
    "QgsNetworkRequestParameters\0request\0"
    "eraseAuthenticationDatabase\0authMessageOut\0"
    "message\0authtag\0QgsAuthManager::MessageLevel\0"
    "level\0toolButtonActionTriggered\0"
    "QAction*\0legendLayerSelectionChanged\0"
    "legendLayerZoomNative\0"
    "legendLayerStretchUsingCurrentExtent\0"
    "event\0QEvent*\0legendGroupSetCrs\0"
    "legendGroupSetWmsData\0dataSourceManager\0"
    "pageName\0addVirtualLayer\0removeLayer\0"
    "duplicateLayers\0lyrList\0layerSubsetString\0"
    "setLayerScaleVisibility\0zoomToLayerScale\0"
    "browserModel\0QgsBrowserModel*\0"
    "changeDataSource\0addRasterLayer\0"
    "baseName\0providerKey\0addVectorLayer\0"
    "vectorLayerPath\0addMeshLayer\0QgsMeshLayer*\0"
    "url\0addVectorLayers\0layerQStringList\0"
    "enc\0dataSourceType\0addRasterLayers\0"
    "guiWarning\0addPluginLayer\0QgsPluginLayer*\0"
    "versionReplyFinished\0logViewer\0"
    "QgsMessageLogViewer*\0updateProjectFromTemplates\0"
    "optionsPagesMap\0QMap<QString,int>\0"
    "projectPropertiesPagesMap\0"
    "QMap<QString,QString>\0settingPagesMap\0"
    "showProjectProperties\0page\0showSettings\0"
    "showOptionsDialog\0currentPage\0pageNumber\0"
    "refreshActionFeatureAction\0panelMenu\0"
    "QMenu*\0renameView\0showStatusMessage\0"
    "loadingLayerMessages\0"
    "QList<QgsReadWriteContext::ReadWriteMessage>\0"
    "messages\0setActiveLayer\0reloadConnections\0"
    "showLayoutManager\0snappingOptions\0"
    "setMapTipsDelay\0timerInterval\0"
    "triggerCrashHandler\0newProfile\0"
    "onTaskCompleteShowNotify\0taskId\0status\0"
    "onTransactionGroupsChanged\0"
    "transactionGroupCommitError\0error\0"
    "onSnappingConfigChanged\0validateCrs\0"
    "sponsors\0about\0addDatabaseLayers\0"
    "layerPathList\0addSelectedVectorLayer\0"
    "provider\0replaceSelectedVectorLayer\0"
    "oldId\0isInOverview\0saveLastMousePosition\0"
    "QgsPointXY\0showScale\0scale\0userRotation\0"
    "zoomToLayerExtent\0zoomActualSize\0"
    "localHistogramStretch\0fullHistogramStretch\0"
    "localCumulativeCutStretch\0"
    "fullCumulativeCutStretch\0increaseBrightness\0"
    "decreaseBrightness\0increaseContrast\0"
    "decreaseContrast\0showPluginManager\0"
    "loadPythonSupport\0getPluginMenu\0"
    "menuName\0addPluginToMenu\0name\0action\0"
    "removePluginMenu\0getDatabaseMenu\0"
    "addPluginToDatabaseMenu\0"
    "removePluginDatabaseMenu\0getRasterMenu\0"
    "addPluginToRasterMenu\0removePluginRasterMenu\0"
    "getVectorMenu\0addPluginToVectorMenu\0"
    "removePluginVectorMenu\0getWebMenu\0"
    "addPluginToWebMenu\0removePluginWebMenu\0"
    "insertAddLayerAction\0removeAddLayerAction\0"
    "addPluginToolBarIcon\0qAction\0"
    "addPluginToolBarWidget\0widget\0"
    "removePluginToolBarIcon\0addRasterToolBarIcon\0"
    "addRasterToolBarWidget\0removeRasterToolBarIcon\0"
    "addVectorToolBarIcon\0addVectorToolBarWidget\0"
    "removeVectorToolBarIcon\0addDatabaseToolBarIcon\0"
    "onVirtualLayerAdded\0addDatabaseToolBarWidget\0"
    "removeDatabaseToolBarIcon\0addWebToolBarIcon\0"
    "addWebToolBarWidget\0removeWebToolBarIcon\0"
    "saveWindowState\0restoreWindowState\0"
    "fileSave\0fileSaveAs\0dxfExport\0dwgImport\0"
    "openProject\0saveMapAsImage\0saveMapAsPdf\0"
    "fileOpen\0fileRevert\0fileNew\0fileNewBlank\0"
    "fileClose\0promptToSaveFlag\0forceBlank\0"
    "fileOpenAfterLaunch\0fileOpenedOKAfterLaunch\0"
    "fileNewFromTemplate\0fileNewFromTemplateAction\0"
    "fileNewFromDefaultTemplate\0"
    "showRasterCalculator\0showMeshCalculator\0"
    "showAlignRasterTool\0embedLayers\0"
    "newMapCanvas\0new3DMapCanvas\0newVectorLayer\0"
    "newMemoryLayer\0newSpatialiteLayer\0"
    "newGeoPackageLayer\0newPrintLayout\0"
    "newReport\0layoutsMenuAboutToShow\0"
    "addAllToOverview\0removeAllFromOverview\0"
    "hideAllLayers\0showAllLayers\0"
    "hideSelectedLayers\0hideDeselectedLayers\0"
    "showSelectedLayers\0helpContents\0"
    "apiDocumentation\0reportaBug\0"
    "supportProviders\0helpQgisHomePage\0"
    "openURL\0useQgisDocDirectory\0"
    "checkQgisVersion\0customProjection\0"
    "configureShortcuts\0customize\0options\0"
    "projectPropertiesProjections\0showBookmarks\0"
    "show\0newBookmark\0addFeature\0moveFeature\0"
    "moveFeatureCopy\0offsetCurve\0reshapeFeatures\0"
    "splitFeatures\0splitParts\0addRing\0"
    "fillRing\0addPart\0simplifyFeature\0"
    "deleteRing\0deletePart\0mergeSelectedFeatures\0"
    "mergeAttributesOfSelectedFeatures\0"
    "modifyAttributesOfSelectedFeatures\0"
    "vertexTool\0vertexToolActiveLayer\0"
    "rotatePointSymbols\0offsetPointSymbol\0"
    "reverseLine\0setMapTool\0QgsMapTool*\0"
    "tool\0clean\0selectFeatures\0selectByPolygon\0"
    "selectByFreehand\0selectByRadius\0"
    "deselectAll\0selectAll\0invertSelection\0"
    "selectByExpression\0selectByForm\0"
    "refreshMapCanvas\0canvasRefreshStarted\0"
    "canvasRefreshFinished\0verifyEditsActionDialog\0"
    "act\0upon\0updateLayerModifiedActions\0"
    "mapToolChanged\0newTool\0oldTool\0"
    "showMapCanvas\0toggleLogMessageIcon\0"
    "hasLogMessage\0layerEditStateChanged\0"
    "updateLabelToolButtons\0"
    "activateDeactivateLayerRelatedActions\0"
    "selectionChanged\0extentChanged\0"
    "showRotation\0displayMapToolMessage\0"
    "Qgis::MessageLevel\0displayMessage\0"
    "title\0removeMapToolMessage\0"
    "updateMouseCoordinatePrecision\0"
    "addLayerDefinition\0fileExit\0zoomOut\0"
    "zoomIn\0pan\0identify\0measure\0measureArea\0"
    "measureAngle\0doFeatureAction\0"
    "updateDefaultFeatureAction\0"
    "refreshFeatureActions\0addFormAnnotation\0"
    "addTextAnnotation\0addHtmlAnnotation\0"
    "addSvgAnnotation\0modifyAnnotation\0"
    "reprojectAnnotations\0labelingFontNotFound\0"
    "vlayer\0fontfamily\0commitError\0"
    "labelingDialogFontNotFound\0labeling\0"
    "mapStyleDock\0enabled\0diagramProperties\0"
    "setCadDockVisible\0visible\0showPythonDialog\0"
    "oldProjectVersionWarning\0toggleMapTips\0"
    "showMapTip\0toggleFullScreen\0"
    "togglePanelsVisibility\0toggleMapOnly\0"
    "toggleReducedView\0viewMapOnly\0"
    "showActiveWindowMinimized\0"
    "toggleActiveWindowMaximized\0activate\0"
    "bringAllToFront\0stopRendering\0"
    "showStyleManager\0showPinnedLabels\0"
    "pinLabels\0showHideLabels\0moveLabel\0"
    "rotateFeature\0rotateLabel\0"
    "changeLabelProperties\0renderDecorationItems\0"
    "QPainter*\0p\0projectReadDecorationItems\0"
    "closeProject\0enableProjectMacros\0"
    "clipboardChanged\0mapCanvas_keyPressed\0"
    "disablePreviewMode\0activateGrayscalePreview\0"
    "activateMonoPreview\0activateProtanopePreview\0"
    "activateDeuteranopePreview\0"
    "toggleFilterLegendByExpression\0"
    "updateFilterLegend\0onLayerError\0msg\0"
    "setMapStyleDockLayer\0annotationCreated\0"
    "QgsAnnotation*\0annotation\0updateCrsStatusBar\0"
    "projectCrsChanged\0onActiveLayerChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgisApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     376,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0, 1894,    2, 0x06 /* Public */,
       3,    1, 1895,    2, 0x06 /* Public */,
       6,    0, 1898,    2, 0x06 /* Public */,
       7,    0, 1899,    2, 0x06 /* Public */,
       8,    1, 1900,    2, 0x06 /* Public */,
       9,    1, 1903,    2, 0x06 /* Public */,
      12,    1, 1906,    2, 0x06 /* Public */,
      13,    0, 1909,    2, 0x06 /* Public */,
      14,    0, 1910,    2, 0x06 /* Public */,
      15,    1, 1911,    2, 0x06 /* Public */,
      18,    2, 1914,    2, 0x06 /* Public */,
      22,    1, 1919,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    3, 1922,    2, 0x0a /* Public */,
      24,    2, 1929,    2, 0x2a /* Public | MethodCloned */,
      24,    1, 1934,    2, 0x2a /* Public | MethodCloned */,
      24,    0, 1937,    2, 0x2a /* Public | MethodCloned */,
      27,    1, 1938,    2, 0x0a /* Public */,
      29,    1, 1941,    2, 0x0a /* Public */,
      29,    0, 1944,    2, 0x2a /* Public | MethodCloned */,
      30,    0, 1945,    2, 0x0a /* Public */,
      31,    2, 1946,    2, 0x0a /* Public */,
      31,    1, 1951,    2, 0x2a /* Public | MethodCloned */,
      31,    0, 1954,    2, 0x2a /* Public | MethodCloned */,
      34,    1, 1955,    2, 0x0a /* Public */,
      37,    2, 1958,    2, 0x0a /* Public */,
      37,    1, 1963,    2, 0x2a /* Public | MethodCloned */,
      40,    1, 1966,    2, 0x0a /* Public */,
      42,    0, 1969,    2, 0x0a /* Public */,
      43,    1, 1970,    2, 0x0a /* Public */,
      46,    0, 1973,    2, 0x0a /* Public */,
      47,    0, 1974,    2, 0x0a /* Public */,
      48,    0, 1975,    2, 0x0a /* Public */,
      49,    0, 1976,    2, 0x0a /* Public */,
      50,    0, 1977,    2, 0x0a /* Public */,
      51,    0, 1978,    2, 0x0a /* Public */,
      52,    1, 1979,    2, 0x0a /* Public */,
      52,    0, 1982,    2, 0x2a /* Public | MethodCloned */,
      55,    0, 1983,    2, 0x0a /* Public */,
      56,    0, 1984,    2, 0x0a /* Public */,
      57,    1, 1985,    2, 0x0a /* Public */,
      58,    1, 1988,    2, 0x0a /* Public */,
      59,    0, 1991,    2, 0x0a /* Public */,
      59,    2, 1992,    2, 0x0a /* Public */,
      59,    1, 1997,    2, 0x2a /* Public | MethodCloned */,
      61,    0, 2000,    2, 0x0a /* Public */,
      62,    3, 2001,    2, 0x0a /* Public */,
      62,    2, 2008,    2, 0x2a /* Public | MethodCloned */,
      62,    1, 2013,    2, 0x2a /* Public | MethodCloned */,
      65,    3, 2016,    2, 0x0a /* Public */,
      65,    2, 2023,    2, 0x2a /* Public | MethodCloned */,
      65,    1, 2028,    2, 0x2a /* Public | MethodCloned */,
      62,    0, 2031,    2, 0x0a /* Public */,
      66,    1, 2032,    2, 0x0a /* Public */,
      66,    0, 2035,    2, 0x2a /* Public | MethodCloned */,
      68,    0, 2036,    2, 0x0a /* Public */,
      69,    1, 2037,    2, 0x0a /* Public */,
      69,    0, 2040,    2, 0x2a /* Public | MethodCloned */,
      65,    0, 2041,    2, 0x0a /* Public */,
      70,    1, 2042,    2, 0x0a /* Public */,
      70,    0, 2045,    2, 0x2a /* Public | MethodCloned */,
      71,    0, 2046,    2, 0x0a /* Public */,
      72,    1, 2047,    2, 0x0a /* Public */,
      72,    0, 2050,    2, 0x2a /* Public | MethodCloned */,
      74,    1, 2051,    2, 0x0a /* Public */,
      74,    0, 2054,    2, 0x2a /* Public | MethodCloned */,
      75,    1, 2055,    2, 0x0a /* Public */,
      75,    0, 2058,    2, 0x2a /* Public | MethodCloned */,
      77,    0, 2059,    2, 0x0a /* Public */,
      78,    1, 2060,    2, 0x0a /* Public */,
      78,    0, 2063,    2, 0x2a /* Public | MethodCloned */,
      80,    2, 2064,    2, 0x0a /* Public */,
      80,    1, 2069,    2, 0x2a /* Public | MethodCloned */,
      80,    0, 2072,    2, 0x2a /* Public | MethodCloned */,
      84,    2, 2073,    2, 0x0a /* Public */,
      84,    1, 2078,    2, 0x2a /* Public | MethodCloned */,
      84,    0, 2081,    2, 0x2a /* Public | MethodCloned */,
      85,    0, 2082,    2, 0x0a /* Public */,
      86,    0, 2083,    2, 0x0a /* Public */,
      87,    0, 2084,    2, 0x0a /* Public */,
      88,    0, 2085,    2, 0x0a /* Public */,
      89,    0, 2086,    2, 0x0a /* Public */,
      90,    1, 2087,    2, 0x0a /* Public */,
      93,    2, 2090,    2, 0x0a /* Public */,
      96,    3, 2095,    2, 0x0a /* Public */,
      96,    2, 2102,    2, 0x2a /* Public | MethodCloned */,
      96,    1, 2107,    2, 0x2a /* Public | MethodCloned */,
      96,    0, 2110,    2, 0x2a /* Public | MethodCloned */,
     100,    1, 2111,    2, 0x0a /* Public */,
     102,    1, 2114,    2, 0x0a /* Public */,
     104,    1, 2117,    2, 0x0a /* Public */,
     106,    2, 2120,    2, 0x0a /* Public */,
     111,    1, 2125,    2, 0x0a /* Public */,
     114,    0, 2128,    2, 0x0a /* Public */,
     115,    3, 2129,    2, 0x0a /* Public */,
     120,    1, 2136,    2, 0x0a /* Public */,
     122,    0, 2139,    2, 0x0a /* Public */,
     123,    0, 2140,    2, 0x0a /* Public */,
     124,    0, 2141,    2, 0x0a /* Public */,
     125,    1, 2142,    2, 0x0a /* Public */,
     127,    0, 2145,    2, 0x0a /* Public */,
     128,    0, 2146,    2, 0x0a /* Public */,
     129,    1, 2147,    2, 0x0a /* Public */,
     129,    0, 2150,    2, 0x2a /* Public | MethodCloned */,
     131,    0, 2151,    2, 0x0a /* Public */,
     132,    0, 2152,    2, 0x0a /* Public */,
     133,    1, 2153,    2, 0x0a /* Public */,
     133,    0, 2156,    2, 0x2a /* Public | MethodCloned */,
     135,    0, 2157,    2, 0x0a /* Public */,
     136,    0, 2158,    2, 0x0a /* Public */,
     137,    0, 2159,    2, 0x0a /* Public */,
     138,    0, 2160,    2, 0x0a /* Public */,
     140,    1, 2161,    2, 0x0a /* Public */,
     141,    3, 2164,    2, 0x0a /* Public */,
     144,    3, 2171,    2, 0x0a /* Public */,
     146,    3, 2178,    2, 0x0a /* Public */,
     149,    3, 2185,    2, 0x0a /* Public */,
     153,    2, 2192,    2, 0x0a /* Public */,
     153,    1, 2197,    2, 0x2a /* Public | MethodCloned */,
     155,    3, 2200,    2, 0x0a /* Public */,
     157,    0, 2207,    2, 0x0a /* Public */,
     158,    0, 2208,    2, 0x0a /* Public */,
     160,    0, 2209,    2, 0x0a /* Public */,
     161,    0, 2210,    2, 0x0a /* Public */,
     163,    0, 2211,    2, 0x0a /* Public */,
     165,    0, 2212,    2, 0x0a /* Public */,
     166,    1, 2213,    2, 0x0a /* Public */,
     166,    0, 2216,    2, 0x2a /* Public | MethodCloned */,
     168,    1, 2217,    2, 0x0a /* Public */,
     169,    3, 2220,    2, 0x0a /* Public */,
     169,    2, 2227,    2, 0x2a /* Public | MethodCloned */,
     169,    1, 2232,    2, 0x2a /* Public | MethodCloned */,
     169,    0, 2235,    2, 0x2a /* Public | MethodCloned */,
     172,    0, 2236,    2, 0x0a /* Public */,
     173,    0, 2237,    2, 0x0a /* Public */,
     175,    0, 2238,    2, 0x0a /* Public */,
     176,    1, 2239,    2, 0x0a /* Public */,
     177,    2, 2242,    2, 0x0a /* Public */,
     180,    1, 2247,    2, 0x0a /* Public */,
     181,    0, 2250,    2, 0x0a /* Public */,
     182,    0, 2251,    2, 0x0a /* Public */,
     183,    0, 2252,    2, 0x0a /* Public */,
     184,    1, 2253,    2, 0x0a /* Public */,
     186,    0, 2256,    2, 0x0a /* Public */,
     187,    0, 2257,    2, 0x08 /* Private */,
     188,    2, 2258,    2, 0x08 /* Private */,
     191,    0, 2263,    2, 0x08 /* Private */,
     192,    1, 2264,    2, 0x08 /* Private */,
     194,    0, 2267,    2, 0x08 /* Private */,
     195,    1, 2268,    2, 0x08 /* Private */,
     196,    0, 2271,    2, 0x08 /* Private */,
     197,    0, 2272,    2, 0x08 /* Private */,
     198,    2, 2273,    2, 0x08 /* Private */,
     200,    3, 2278,    2, 0x08 /* Private */,
     202,    4, 2285,    2, 0x08 /* Private */,
     204,    0, 2294,    2, 0x08 /* Private */,
     205,    1, 2295,    2, 0x08 /* Private */,
     207,    1, 2298,    2, 0x08 /* Private */,
     209,    0, 2301,    2, 0x08 /* Private */,
     210,    0, 2302,    2, 0x08 /* Private */,
     211,    0, 2303,    2, 0x08 /* Private */,
     212,    0, 2304,    2, 0x08 /* Private */,
     213,    0, 2305,    2, 0x08 /* Private */,
     214,    0, 2306,    2, 0x08 /* Private */,
     215,    0, 2307,    2, 0x08 /* Private */,
     216,    0, 2308,    2, 0x08 /* Private */,
     217,    0, 2309,    2, 0x08 /* Private */,
     218,    0, 2310,    2, 0x08 /* Private */,
     219,    0, 2311,    2, 0x08 /* Private */,
     220,    0, 2312,    2, 0x08 /* Private */,
     221,    0, 2313,    2, 0x08 /* Private */,
     222,    1, 2314,    2, 0x08 /* Private */,
     224,    2, 2317,    2, 0x08 /* Private */,
     227,    2, 2322,    2, 0x08 /* Private */,
     228,    1, 2327,    2, 0x08 /* Private */,
     229,    2, 2330,    2, 0x08 /* Private */,
     230,    2, 2335,    2, 0x08 /* Private */,
     231,    1, 2340,    2, 0x08 /* Private */,
     232,    2, 2343,    2, 0x08 /* Private */,
     233,    2, 2348,    2, 0x08 /* Private */,
     234,    1, 2353,    2, 0x08 /* Private */,
     235,    2, 2356,    2, 0x08 /* Private */,
     236,    2, 2361,    2, 0x08 /* Private */,
     237,    1, 2366,    2, 0x08 /* Private */,
     238,    2, 2369,    2, 0x08 /* Private */,
     239,    2, 2374,    2, 0x08 /* Private */,
     240,    1, 2379,    2, 0x08 /* Private */,
     241,    1, 2382,    2, 0x08 /* Private */,
     242,    1, 2385,    2, 0x08 /* Private */,
     244,    1, 2388,    2, 0x08 /* Private */,
     246,    1, 2391,    2, 0x08 /* Private */,
     247,    1, 2394,    2, 0x08 /* Private */,
     248,    1, 2397,    2, 0x08 /* Private */,
     249,    1, 2400,    2, 0x08 /* Private */,
     250,    1, 2403,    2, 0x08 /* Private */,
     251,    1, 2406,    2, 0x08 /* Private */,
     252,    1, 2409,    2, 0x08 /* Private */,
     253,    1, 2412,    2, 0x08 /* Private */,
     254,    2, 2415,    2, 0x08 /* Private */,
     255,    1, 2420,    2, 0x08 /* Private */,
     256,    1, 2423,    2, 0x08 /* Private */,
     257,    1, 2426,    2, 0x08 /* Private */,
     258,    1, 2429,    2, 0x08 /* Private */,
     259,    1, 2432,    2, 0x08 /* Private */,
     260,    0, 2435,    2, 0x08 /* Private */,
     261,    0, 2436,    2, 0x08 /* Private */,
     262,    0, 2437,    2, 0x08 /* Private */,
     263,    0, 2438,    2, 0x08 /* Private */,
     264,    0, 2439,    2, 0x08 /* Private */,
     265,    0, 2440,    2, 0x08 /* Private */,
     266,    1, 2441,    2, 0x08 /* Private */,
     267,    0, 2444,    2, 0x08 /* Private */,
     268,    0, 2445,    2, 0x08 /* Private */,
     269,    0, 2446,    2, 0x08 /* Private */,
     270,    0, 2447,    2, 0x08 /* Private */,
     271,    0, 2448,    2, 0x08 /* Private */,
     272,    0, 2449,    2, 0x08 /* Private */,
     273,    0, 2450,    2, 0x08 /* Private */,
     271,    2, 2451,    2, 0x08 /* Private */,
     271,    1, 2456,    2, 0x28 /* Private | MethodCloned */,
     276,    0, 2459,    2, 0x08 /* Private */,
     277,    0, 2460,    2, 0x08 /* Private */,
     278,    1, 2461,    2, 0x08 /* Private */,
     279,    1, 2464,    2, 0x08 /* Private */,
     280,    0, 2467,    2, 0x08 /* Private */,
     281,    0, 2468,    2, 0x08 /* Private */,
     282,    0, 2469,    2, 0x08 /* Private */,
     283,    0, 2470,    2, 0x08 /* Private */,
     284,    0, 2471,    2, 0x08 /* Private */,
     285,    0, 2472,    2, 0x08 /* Private */,
     286,    0, 2473,    2, 0x08 /* Private */,
     287,    0, 2474,    2, 0x08 /* Private */,
     288,    0, 2475,    2, 0x08 /* Private */,
     289,    0, 2476,    2, 0x08 /* Private */,
     290,    0, 2477,    2, 0x08 /* Private */,
     291,    0, 2478,    2, 0x08 /* Private */,
     292,    0, 2479,    2, 0x08 /* Private */,
     293,    0, 2480,    2, 0x08 /* Private */,
     294,    0, 2481,    2, 0x08 /* Private */,
     295,    0, 2482,    2, 0x08 /* Private */,
     296,    0, 2483,    2, 0x08 /* Private */,
     297,    0, 2484,    2, 0x08 /* Private */,
     298,    0, 2485,    2, 0x08 /* Private */,
     299,    0, 2486,    2, 0x08 /* Private */,
     300,    0, 2487,    2, 0x08 /* Private */,
     301,    0, 2488,    2, 0x08 /* Private */,
     302,    0, 2489,    2, 0x08 /* Private */,
     303,    0, 2490,    2, 0x08 /* Private */,
     304,    0, 2491,    2, 0x08 /* Private */,
     305,    0, 2492,    2, 0x08 /* Private */,
     306,    2, 2493,    2, 0x08 /* Private */,
     306,    1, 2498,    2, 0x28 /* Private | MethodCloned */,
     308,    0, 2501,    2, 0x08 /* Private */,
     309,    0, 2502,    2, 0x08 /* Private */,
     310,    0, 2503,    2, 0x08 /* Private */,
     311,    0, 2504,    2, 0x08 /* Private */,
     312,    0, 2505,    2, 0x08 /* Private */,
     313,    0, 2506,    2, 0x08 /* Private */,
     314,    1, 2507,    2, 0x08 /* Private */,
     316,    0, 2510,    2, 0x08 /* Private */,
     317,    0, 2511,    2, 0x08 /* Private */,
     318,    0, 2512,    2, 0x08 /* Private */,
     319,    0, 2513,    2, 0x08 /* Private */,
     320,    0, 2514,    2, 0x08 /* Private */,
     321,    0, 2515,    2, 0x08 /* Private */,
     322,    0, 2516,    2, 0x08 /* Private */,
     323,    0, 2517,    2, 0x08 /* Private */,
     324,    0, 2518,    2, 0x08 /* Private */,
     325,    0, 2519,    2, 0x08 /* Private */,
     326,    0, 2520,    2, 0x08 /* Private */,
     327,    0, 2521,    2, 0x08 /* Private */,
     328,    0, 2522,    2, 0x08 /* Private */,
     329,    0, 2523,    2, 0x08 /* Private */,
     330,    0, 2524,    2, 0x08 /* Private */,
     331,    0, 2525,    2, 0x08 /* Private */,
     332,    0, 2526,    2, 0x08 /* Private */,
     333,    0, 2527,    2, 0x08 /* Private */,
     334,    0, 2528,    2, 0x08 /* Private */,
     335,    0, 2529,    2, 0x08 /* Private */,
     336,    0, 2530,    2, 0x08 /* Private */,
     337,    0, 2531,    2, 0x08 /* Private */,
     338,    2, 2532,    2, 0x08 /* Private */,
     338,    1, 2537,    2, 0x28 /* Private | MethodCloned */,
     342,    0, 2540,    2, 0x08 /* Private */,
     343,    0, 2541,    2, 0x08 /* Private */,
     344,    0, 2542,    2, 0x08 /* Private */,
     345,    0, 2543,    2, 0x08 /* Private */,
     346,    0, 2544,    2, 0x08 /* Private */,
     347,    0, 2545,    2, 0x08 /* Private */,
     348,    0, 2546,    2, 0x08 /* Private */,
     349,    0, 2547,    2, 0x08 /* Private */,
     350,    0, 2548,    2, 0x08 /* Private */,
     351,    0, 2549,    2, 0x08 /* Private */,
     352,    0, 2550,    2, 0x08 /* Private */,
     353,    0, 2551,    2, 0x08 /* Private */,
     354,    2, 2552,    2, 0x08 /* Private */,
     357,    0, 2557,    2, 0x08 /* Private */,
     358,    2, 2558,    2, 0x08 /* Private */,
     361,    0, 2563,    2, 0x08 /* Private */,
     362,    1, 2564,    2, 0x08 /* Private */,
     364,    0, 2567,    2, 0x08 /* Private */,
     365,    0, 2568,    2, 0x08 /* Private */,
     366,    1, 2569,    2, 0x08 /* Private */,
     141,    0, 2572,    2, 0x08 /* Private */,
     367,    1, 2573,    2, 0x08 /* Private */,
     368,    0, 2576,    2, 0x08 /* Private */,
     369,    0, 2577,    2, 0x08 /* Private */,
     370,    2, 2578,    2, 0x08 /* Private */,
     370,    1, 2583,    2, 0x28 /* Private | MethodCloned */,
     372,    3, 2586,    2, 0x08 /* Private */,
     374,    0, 2593,    2, 0x08 /* Private */,
     375,    0, 2594,    2, 0x08 /* Private */,
     376,    0, 2595,    2, 0x08 /* Private */,
     377,    0, 2596,    2, 0x08 /* Private */,
     378,    0, 2597,    2, 0x08 /* Private */,
     379,    0, 2598,    2, 0x08 /* Private */,
     380,    0, 2599,    2, 0x08 /* Private */,
     381,    0, 2600,    2, 0x08 /* Private */,
     382,    0, 2601,    2, 0x08 /* Private */,
     383,    0, 2602,    2, 0x08 /* Private */,
     384,    0, 2603,    2, 0x08 /* Private */,
     385,    0, 2604,    2, 0x08 /* Private */,
     386,    1, 2605,    2, 0x08 /* Private */,
     387,    0, 2608,    2, 0x08 /* Private */,
     388,    0, 2609,    2, 0x08 /* Private */,
     389,    0, 2610,    2, 0x08 /* Private */,
     390,    0, 2611,    2, 0x08 /* Private */,
     391,    0, 2612,    2, 0x08 /* Private */,
     392,    0, 2613,    2, 0x08 /* Private */,
     393,    0, 2614,    2, 0x08 /* Private */,
     394,    2, 2615,    2, 0x08 /* Private */,
     397,    1, 2620,    2, 0x08 /* Private */,
     398,    1, 2623,    2, 0x08 /* Private */,
     399,    0, 2626,    2, 0x08 /* Private */,
     400,    1, 2627,    2, 0x08 /* Private */,
     402,    0, 2630,    2, 0x08 /* Private */,
     403,    1, 2631,    2, 0x08 /* Private */,
     405,    0, 2634,    2, 0x08 /* Private */,
     406,    1, 2635,    2, 0x08 /* Private */,
     407,    1, 2638,    2, 0x08 /* Private */,
     408,    0, 2641,    2, 0x08 /* Private */,
     409,    0, 2642,    2, 0x08 /* Private */,
     410,    0, 2643,    2, 0x08 /* Private */,
     411,    0, 2644,    2, 0x08 /* Private */,
     412,    1, 2645,    2, 0x08 /* Private */,
     414,    0, 2648,    2, 0x08 /* Private */,
     415,    0, 2649,    2, 0x08 /* Private */,
     416,    0, 2650,    2, 0x08 /* Private */,
     417,    0, 2651,    2, 0x08 /* Private */,
     418,    0, 2652,    2, 0x08 /* Private */,
     419,    0, 2653,    2, 0x08 /* Private */,
     420,    1, 2654,    2, 0x08 /* Private */,
     421,    0, 2657,    2, 0x08 /* Private */,
     422,    0, 2658,    2, 0x08 /* Private */,
     423,    0, 2659,    2, 0x08 /* Private */,
     424,    0, 2660,    2, 0x08 /* Private */,
     425,    0, 2661,    2, 0x08 /* Private */,
     426,    0, 2662,    2, 0x08 /* Private */,
     427,    1, 2663,    2, 0x08 /* Private */,
     430,    0, 2666,    2, 0x08 /* Private */,
     431,    0, 2667,    2, 0x08 /* Private */,
     432,    0, 2668,    2, 0x08 /* Private */,
     433,    0, 2669,    2, 0x08 /* Private */,
     434,    1, 2670,    2, 0x08 /* Private */,
     435,    0, 2673,    2, 0x08 /* Private */,
     436,    0, 2674,    2, 0x08 /* Private */,
     437,    0, 2675,    2, 0x08 /* Private */,
     438,    0, 2676,    2, 0x08 /* Private */,
     439,    0, 2677,    2, 0x08 /* Private */,
     440,    1, 2678,    2, 0x08 /* Private */,
     441,    0, 2681,    2, 0x08 /* Private */,
     442,    1, 2682,    2, 0x08 /* Private */,
     444,    1, 2685,    2, 0x08 /* Private */,
     445,    1, 2688,    2, 0x08 /* Private */,
     448,    0, 2691,    2, 0x08 /* Private */,
     449,    0, 2692,    2, 0x08 /* Private */,
     450,    1, 2693,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,   21,
    QMetaType::Void, 0x80000000 | 19,   23,

 // slots: parameters
    QMetaType::QString, 0x80000000 | 19, QMetaType::Bool, QMetaType::Bool,   23,   25,   26,
    QMetaType::QString, 0x80000000 | 19, QMetaType::Bool,   23,   25,
    QMetaType::QString, 0x80000000 | 19,   23,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 28,   23,
    QMetaType::Void, 0x80000000 | 19,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 32, QMetaType::Bool,   23,   33,
    QMetaType::QString, 0x80000000 | 32,   23,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   38,   39,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QModelIndex,   41,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 19, QMetaType::Bool,   23,   60,
    QMetaType::Bool, 0x80000000 | 19,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Bool, QMetaType::Bool,   23,   63,   64,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Bool,   23,   63,
    QMetaType::Void, 0x80000000 | 19,   23,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Bool, QMetaType::Bool,   23,   63,   64,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Bool,   23,   63,
    QMetaType::Void, 0x80000000 | 19,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   73,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   73,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   76,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 28, QMetaType::QString,   79,
    0x80000000 | 28,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 82,   81,   83,
    QMetaType::Void, 0x80000000 | 19,   81,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 82,   76,   83,
    QMetaType::Void, 0x80000000 | 19,   76,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 91,   92,
    0x80000000 | 44, QMetaType::QString, QMetaType::QStringList,   94,   95,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 97, QMetaType::Bool,   23,   98,   99,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 97,   23,   98,
    QMetaType::Void, 0x80000000 | 19,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 101,    2,
    QMetaType::Void, 0x80000000 | 103,    2,
    QMetaType::Void, QMetaType::QString,  105,
    QMetaType::Void, 0x80000000 | 107, 0x80000000 | 109,  108,  110,
    QMetaType::Void, 0x80000000 | 112,  113,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 118,  116,  117,  119,
    QMetaType::Void, 0x80000000 | 121,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 126,  125,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  130,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,  134,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 139,
    QMetaType::Void, 0x80000000 | 19,   23,
    0x80000000 | 32, QMetaType::QString, QMetaType::QString, QMetaType::QString,   94,  142,  143,
    0x80000000 | 28, QMetaType::QString, QMetaType::QString, QMetaType::QString,  145,  142,  143,
    0x80000000 | 147, QMetaType::QString, QMetaType::QString, QMetaType::QString,  148,  142,  143,
    QMetaType::Bool, QMetaType::QStringList, QMetaType::QString, QMetaType::QString,  150,  151,  152,
    QMetaType::Bool, QMetaType::QStringList, QMetaType::Bool,  150,  154,
    QMetaType::Bool, QMetaType::QStringList,  150,
    0x80000000 | 156, QMetaType::QString, QMetaType::QString, QMetaType::QString,   94,  142,  143,
    QMetaType::Void,
    0x80000000 | 159,
    QMetaType::Void,
    0x80000000 | 162,
    0x80000000 | 164,
    0x80000000 | 164,
    QMetaType::Void, QMetaType::QString,  167,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  167,
    QMetaType::Void, 0x80000000 | 97, QMetaType::QString, QMetaType::Int,   98,  170,  171,
    QMetaType::Void, 0x80000000 | 97, QMetaType::QString,   98,  170,
    QMetaType::Void, 0x80000000 | 97,   98,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 174,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  116,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 178,   79,  179,
    QMetaType::Bool, 0x80000000 | 19,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  185,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long, QMetaType::Int,  189,  190,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  193,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,  199,  143,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   94,   79,  201,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,  203,   94,   79,  201,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 206,    2,
    QMetaType::Void, QMetaType::Double,  208,
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
    0x80000000 | 174, QMetaType::QString,  223,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 121,  225,  226,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 121,  225,  226,
    0x80000000 | 174, QMetaType::QString,  223,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 121,  225,  226,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 121,  225,  226,
    0x80000000 | 174, QMetaType::QString,  223,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 121,  225,  226,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 121,  225,  226,
    0x80000000 | 174, QMetaType::QString,  223,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 121,  225,  226,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 121,  225,  226,
    0x80000000 | 174, QMetaType::QString,  223,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 121,  225,  226,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 121,  225,  226,
    QMetaType::Void, 0x80000000 | 121,  226,
    QMetaType::Void, 0x80000000 | 121,  226,
    QMetaType::Int, 0x80000000 | 121,  243,
    0x80000000 | 121, 0x80000000 | 97,  245,
    QMetaType::Void, 0x80000000 | 121,  243,
    QMetaType::Int, 0x80000000 | 121,  243,
    0x80000000 | 121, 0x80000000 | 97,  245,
    QMetaType::Void, 0x80000000 | 121,  243,
    QMetaType::Int, 0x80000000 | 121,  243,
    0x80000000 | 121, 0x80000000 | 97,  245,
    QMetaType::Void, 0x80000000 | 121,  243,
    QMetaType::Int, 0x80000000 | 121,  243,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   94,   79,
    0x80000000 | 121, 0x80000000 | 97,  245,
    QMetaType::Void, 0x80000000 | 121,  243,
    QMetaType::Int, 0x80000000 | 121,  243,
    0x80000000 | 121, 0x80000000 | 97,  245,
    QMetaType::Void, 0x80000000 | 121,  243,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 121,  226,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  274,  275,
    QMetaType::Bool, QMetaType::Bool,  274,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   38,
    QMetaType::Void, 0x80000000 | 121,  243,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,  148,  307,
    QMetaType::Void, QMetaType::QString,  148,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  315,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 339, QMetaType::Bool,  340,  341,
    QMetaType::Void, 0x80000000 | 339,  340,
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
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,  355,  356,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 339, 0x80000000 | 339,  359,  360,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  363,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 371,  116,  119,
    QMetaType::Void, QMetaType::QString,  116,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 371,  373,  116,  119,
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
    QMetaType::Void, 0x80000000 | 121,  226,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28, QMetaType::QString,  395,  396,
    QMetaType::Void, 0x80000000 | 28,  395,
    QMetaType::Void, 0x80000000 | 121,  355,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  401,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  404,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,  401,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  413,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  315,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 428,  429,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  443,
    QMetaType::Void, 0x80000000 | 19,   23,
    QMetaType::Void, 0x80000000 | 446,  447,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   23,

       0        // eod
};

void QgisApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgisApp *_t = static_cast<QgisApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionsChanged(); break;
        case 1: _t->keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: _t->projectRead(); break;
        case 3: _t->newProject(); break;
        case 4: _t->currentThemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->layoutDesignerOpened((*reinterpret_cast< QgsLayoutDesignerInterface*(*)>(_a[1]))); break;
        case 6: _t->layoutDesignerWillBeClosed((*reinterpret_cast< QgsLayoutDesignerInterface*(*)>(_a[1]))); break;
        case 7: _t->layoutDesignerClosed(); break;
        case 8: _t->initializationCompleted(); break;
        case 9: _t->customCrsValidation((*reinterpret_cast< QgsCoordinateReferenceSystem(*)>(_a[1]))); break;
        case 10: _t->layerSavedAs((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->activeLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 12: { QString _r = _t->saveAsFile((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->saveAsFile((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->saveAsFile((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->saveAsFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->makeMemoryLayerPermanent((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 17: _t->saveStyleFile((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 18: _t->saveStyleFile(); break;
        case 19: _t->saveAsLayerDefinition(); break;
        case 20: { QString _r = _t->saveAsRasterFile((*reinterpret_cast< QgsRasterLayer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 21: { QString _r = _t->saveAsRasterFile((*reinterpret_cast< QgsRasterLayer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 22: { QString _r = _t->saveAsRasterFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->handleDropUriList((*reinterpret_cast< const QgsMimeDataUtils::UriList(*)>(_a[1]))); break;
        case 24: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->layerTreeViewDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 27: _t->updateNewLayerInsertionPoint(); break;
        case 28: _t->autoSelectAddedLayer((*reinterpret_cast< QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 29: _t->zoomFull(); break;
        case 30: _t->zoomToPrevious(); break;
        case 31: _t->zoomToNext(); break;
        case 32: _t->zoomToSelected(); break;
        case 33: _t->panToSelected(); break;
        case 34: _t->layerProperties(); break;
        case 35: _t->attributeTable((*reinterpret_cast< QgsAttributeTableFilterModel::FilterMode(*)>(_a[1]))); break;
        case 36: _t->attributeTable(); break;
        case 37: _t->fieldCalculator(); break;
        case 38: _t->markDirty(); break;
        case 39: _t->layersWereAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 40: _t->removingLayers((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 41: _t->toggleEditing(); break;
        case 42: { bool _r = _t->toggleEditing((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->toggleEditing((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: _t->saveActiveLayerEdits(); break;
        case 45: _t->saveEdits((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 46: _t->saveEdits((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: _t->saveEdits((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 48: _t->cancelEdits((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 49: _t->cancelEdits((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 50: _t->cancelEdits((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 51: _t->saveEdits(); break;
        case 52: _t->saveAllEdits((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->saveAllEdits(); break;
        case 54: _t->rollbackEdits(); break;
        case 55: _t->rollbackAllEdits((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->rollbackAllEdits(); break;
        case 57: _t->cancelEdits(); break;
        case 58: _t->cancelAllEdits((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->cancelAllEdits(); break;
        case 60: _t->updateUndoActions(); break;
        case 61: _t->cutSelectionToClipboard((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 62: _t->cutSelectionToClipboard(); break;
        case 63: _t->copySelectionToClipboard((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 64: _t->copySelectionToClipboard(); break;
        case 65: _t->pasteFromClipboard((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 66: _t->pasteFromClipboard(); break;
        case 67: _t->pasteAsNewVector(); break;
        case 68: { QgsVectorLayer* _r = _t->pasteAsNewMemoryVector((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsVectorLayer**>(_a[0]) = std::move(_r); }  break;
        case 69: { QgsVectorLayer* _r = _t->pasteAsNewMemoryVector();
            if (_a[0]) *reinterpret_cast< QgsVectorLayer**>(_a[0]) = std::move(_r); }  break;
        case 70: _t->copyStyle((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< QgsMapLayer::StyleCategories(*)>(_a[2]))); break;
        case 71: _t->copyStyle((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 72: _t->copyStyle(); break;
        case 73: _t->pasteStyle((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< QgsMapLayer::StyleCategories(*)>(_a[2]))); break;
        case 74: _t->pasteStyle((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 75: _t->pasteStyle(); break;
        case 76: _t->copyLayer(); break;
        case 77: _t->pasteLayer(); break;
        case 78: _t->applyStyleToGroup(); break;
        case 79: _t->setLayerCrs(); break;
        case 80: _t->setProjectCrsFromLayer(); break;
        case 81: _t->copyFeatures((*reinterpret_cast< QgsFeatureStore(*)>(_a[1]))); break;
        case 82: { QList<QgsMapLayer*> _r = _t->loadGDALSublayers((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QgsMapLayer*>*>(_a[0]) = std::move(_r); }  break;
        case 83: _t->deleteSelected((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 84: _t->deleteSelected((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 85: _t->deleteSelected((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 86: _t->deleteSelected(); break;
        case 87: _t->writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 88: _t->readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 89: _t->setAppStyleSheet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 90: _t->namProxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 91: _t->namRequestTimedOut((*reinterpret_cast< const QgsNetworkRequestParameters(*)>(_a[1]))); break;
        case 92: _t->eraseAuthenticationDatabase(); break;
        case 93: _t->authMessageOut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsAuthManager::MessageLevel(*)>(_a[3]))); break;
        case 94: _t->toolButtonActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 95: _t->legendLayerSelectionChanged(); break;
        case 96: _t->legendLayerZoomNative(); break;
        case 97: _t->legendLayerStretchUsingCurrentExtent(); break;
        case 98: { bool _r = _t->event((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 99: _t->legendGroupSetCrs(); break;
        case 100: _t->legendGroupSetWmsData(); break;
        case 101: _t->dataSourceManager((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 102: _t->dataSourceManager(); break;
        case 103: _t->addVirtualLayer(); break;
        case 104: _t->removeLayer(); break;
        case 105: _t->duplicateLayers((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 106: _t->duplicateLayers(); break;
        case 107: _t->layerSubsetString(); break;
        case 108: _t->setLayerScaleVisibility(); break;
        case 109: _t->zoomToLayerScale(); break;
        case 110: { QgsBrowserModel* _r = _t->browserModel();
            if (_a[0]) *reinterpret_cast< QgsBrowserModel**>(_a[0]) = std::move(_r); }  break;
        case 111: _t->changeDataSource((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 112: { QgsRasterLayer* _r = _t->addRasterLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsRasterLayer**>(_a[0]) = std::move(_r); }  break;
        case 113: { QgsVectorLayer* _r = _t->addVectorLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsVectorLayer**>(_a[0]) = std::move(_r); }  break;
        case 114: { QgsMeshLayer* _r = _t->addMeshLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsMeshLayer**>(_a[0]) = std::move(_r); }  break;
        case 115: { bool _r = _t->addVectorLayers((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 116: { bool _r = _t->addRasterLayers((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 117: { bool _r = _t->addRasterLayers((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 118: { QgsPluginLayer* _r = _t->addPluginLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsPluginLayer**>(_a[0]) = std::move(_r); }  break;
        case 119: _t->versionReplyFinished(); break;
        case 120: { QgsMessageLogViewer* _r = _t->logViewer();
            if (_a[0]) *reinterpret_cast< QgsMessageLogViewer**>(_a[0]) = std::move(_r); }  break;
        case 121: _t->updateProjectFromTemplates(); break;
        case 122: { QMap<QString,int> _r = _t->optionsPagesMap();
            if (_a[0]) *reinterpret_cast< QMap<QString,int>*>(_a[0]) = std::move(_r); }  break;
        case 123: { QMap<QString,QString> _r = _t->projectPropertiesPagesMap();
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 124: { QMap<QString,QString> _r = _t->settingPagesMap();
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 125: _t->showProjectProperties((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 126: _t->showProjectProperties(); break;
        case 127: _t->showSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 128: _t->showOptionsDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 129: _t->showOptionsDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 130: _t->showOptionsDialog((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 131: _t->showOptionsDialog(); break;
        case 132: _t->refreshActionFeatureAction(); break;
        case 133: { QMenu* _r = _t->panelMenu();
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = std::move(_r); }  break;
        case 134: _t->renameView(); break;
        case 135: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 136: _t->loadingLayerMessages((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QgsReadWriteContext::ReadWriteMessage>(*)>(_a[2]))); break;
        case 137: { bool _r = _t->setActiveLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 138: _t->reloadConnections(); break;
        case 139: _t->showLayoutManager(); break;
        case 140: _t->snappingOptions(); break;
        case 141: _t->setMapTipsDelay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 142: _t->triggerCrashHandler(); break;
        case 143: _t->newProfile(); break;
        case 144: _t->onTaskCompleteShowNotify((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 145: _t->onTransactionGroupsChanged(); break;
        case 146: _t->transactionGroupCommitError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 147: _t->onSnappingConfigChanged(); break;
        case 148: _t->validateCrs((*reinterpret_cast< QgsCoordinateReferenceSystem(*)>(_a[1]))); break;
        case 149: _t->sponsors(); break;
        case 150: _t->about(); break;
        case 151: _t->addDatabaseLayers((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 152: _t->addSelectedVectorLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 153: _t->replaceSelectedVectorLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 154: _t->isInOverview(); break;
        case 155: _t->saveLastMousePosition((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        case 156: _t->showScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 157: _t->userRotation(); break;
        case 158: _t->zoomToLayerExtent(); break;
        case 159: _t->zoomActualSize(); break;
        case 160: _t->localHistogramStretch(); break;
        case 161: _t->fullHistogramStretch(); break;
        case 162: _t->localCumulativeCutStretch(); break;
        case 163: _t->fullCumulativeCutStretch(); break;
        case 164: _t->increaseBrightness(); break;
        case 165: _t->decreaseBrightness(); break;
        case 166: _t->increaseContrast(); break;
        case 167: _t->decreaseContrast(); break;
        case 168: _t->showPluginManager(); break;
        case 169: _t->loadPythonSupport(); break;
        case 170: { QMenu* _r = _t->getPluginMenu((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = std::move(_r); }  break;
        case 171: _t->addPluginToMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 172: _t->removePluginMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 173: { QMenu* _r = _t->getDatabaseMenu((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = std::move(_r); }  break;
        case 174: _t->addPluginToDatabaseMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 175: _t->removePluginDatabaseMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 176: { QMenu* _r = _t->getRasterMenu((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = std::move(_r); }  break;
        case 177: _t->addPluginToRasterMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 178: _t->removePluginRasterMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 179: { QMenu* _r = _t->getVectorMenu((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = std::move(_r); }  break;
        case 180: _t->addPluginToVectorMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 181: _t->removePluginVectorMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 182: { QMenu* _r = _t->getWebMenu((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = std::move(_r); }  break;
        case 183: _t->addPluginToWebMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 184: _t->removePluginWebMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 185: _t->insertAddLayerAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 186: _t->removeAddLayerAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 187: { int _r = _t->addPluginToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 188: { QAction* _r = _t->addPluginToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 189: _t->removePluginToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 190: { int _r = _t->addRasterToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 191: { QAction* _r = _t->addRasterToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 192: _t->removeRasterToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 193: { int _r = _t->addVectorToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 194: { QAction* _r = _t->addVectorToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 195: _t->removeVectorToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 196: { int _r = _t->addDatabaseToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 197: _t->onVirtualLayerAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 198: { QAction* _r = _t->addDatabaseToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 199: _t->removeDatabaseToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 200: { int _r = _t->addWebToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 201: { QAction* _r = _t->addWebToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 202: _t->removeWebToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 203: _t->saveWindowState(); break;
        case 204: _t->restoreWindowState(); break;
        case 205: { bool _r = _t->fileSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 206: _t->fileSaveAs(); break;
        case 207: _t->dxfExport(); break;
        case 208: _t->dwgImport(); break;
        case 209: _t->openProject((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 210: _t->saveMapAsImage(); break;
        case 211: _t->saveMapAsPdf(); break;
        case 212: _t->fileOpen(); break;
        case 213: _t->fileRevert(); break;
        case 214: { bool _r = _t->fileNew();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 215: { bool _r = _t->fileNewBlank();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 216: _t->fileClose(); break;
        case 217: { bool _r = _t->fileNew((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 218: { bool _r = _t->fileNew((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 219: _t->fileOpenAfterLaunch(); break;
        case 220: _t->fileOpenedOKAfterLaunch(); break;
        case 221: { bool _r = _t->fileNewFromTemplate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 222: _t->fileNewFromTemplateAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 223: _t->fileNewFromDefaultTemplate(); break;
        case 224: _t->showRasterCalculator(); break;
        case 225: _t->showMeshCalculator(); break;
        case 226: _t->showAlignRasterTool(); break;
        case 227: _t->embedLayers(); break;
        case 228: _t->newMapCanvas(); break;
        case 229: _t->new3DMapCanvas(); break;
        case 230: _t->newVectorLayer(); break;
        case 231: _t->newMemoryLayer(); break;
        case 232: _t->newSpatialiteLayer(); break;
        case 233: _t->newGeoPackageLayer(); break;
        case 234: _t->newPrintLayout(); break;
        case 235: _t->newReport(); break;
        case 236: _t->layoutsMenuAboutToShow(); break;
        case 237: _t->addAllToOverview(); break;
        case 238: _t->removeAllFromOverview(); break;
        case 239: _t->hideAllLayers(); break;
        case 240: _t->showAllLayers(); break;
        case 241: _t->hideSelectedLayers(); break;
        case 242: _t->hideDeselectedLayers(); break;
        case 243: _t->showSelectedLayers(); break;
        case 244: _t->helpContents(); break;
        case 245: _t->apiDocumentation(); break;
        case 246: _t->reportaBug(); break;
        case 247: _t->supportProviders(); break;
        case 248: _t->helpQgisHomePage(); break;
        case 249: _t->openURL((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 250: _t->openURL((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 251: _t->checkQgisVersion(); break;
        case 252: _t->customProjection(); break;
        case 253: _t->configureShortcuts(); break;
        case 254: _t->customize(); break;
        case 255: _t->options(); break;
        case 256: _t->projectPropertiesProjections(); break;
        case 257: _t->showBookmarks((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 258: _t->newBookmark(); break;
        case 259: _t->addFeature(); break;
        case 260: _t->moveFeature(); break;
        case 261: _t->moveFeatureCopy(); break;
        case 262: _t->offsetCurve(); break;
        case 263: _t->reshapeFeatures(); break;
        case 264: _t->splitFeatures(); break;
        case 265: _t->splitParts(); break;
        case 266: _t->addRing(); break;
        case 267: _t->fillRing(); break;
        case 268: _t->addPart(); break;
        case 269: _t->simplifyFeature(); break;
        case 270: _t->deleteRing(); break;
        case 271: _t->deletePart(); break;
        case 272: _t->mergeSelectedFeatures(); break;
        case 273: _t->mergeAttributesOfSelectedFeatures(); break;
        case 274: _t->modifyAttributesOfSelectedFeatures(); break;
        case 275: _t->vertexTool(); break;
        case 276: _t->vertexToolActiveLayer(); break;
        case 277: _t->rotatePointSymbols(); break;
        case 278: _t->offsetPointSymbol(); break;
        case 279: _t->reverseLine(); break;
        case 280: _t->setMapTool((*reinterpret_cast< QgsMapTool*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 281: _t->setMapTool((*reinterpret_cast< QgsMapTool*(*)>(_a[1]))); break;
        case 282: _t->selectFeatures(); break;
        case 283: _t->selectByPolygon(); break;
        case 284: _t->selectByFreehand(); break;
        case 285: _t->selectByRadius(); break;
        case 286: _t->deselectAll(); break;
        case 287: _t->selectAll(); break;
        case 288: _t->invertSelection(); break;
        case 289: _t->selectByExpression(); break;
        case 290: _t->selectByForm(); break;
        case 291: _t->refreshMapCanvas(); break;
        case 292: _t->canvasRefreshStarted(); break;
        case 293: _t->canvasRefreshFinished(); break;
        case 294: { bool _r = _t->verifyEditsActionDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 295: _t->updateLayerModifiedActions(); break;
        case 296: _t->mapToolChanged((*reinterpret_cast< QgsMapTool*(*)>(_a[1])),(*reinterpret_cast< QgsMapTool*(*)>(_a[2]))); break;
        case 297: _t->showMapCanvas(); break;
        case 298: _t->toggleLogMessageIcon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 299: _t->layerEditStateChanged(); break;
        case 300: _t->updateLabelToolButtons(); break;
        case 301: _t->activateDeactivateLayerRelatedActions((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 302: _t->addRasterLayer(); break;
        case 303: _t->selectionChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 304: _t->extentChanged(); break;
        case 305: _t->showRotation(); break;
        case 306: _t->displayMapToolMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qgis::MessageLevel(*)>(_a[2]))); break;
        case 307: _t->displayMapToolMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 308: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qgis::MessageLevel(*)>(_a[3]))); break;
        case 309: _t->removeMapToolMessage(); break;
        case 310: _t->updateMouseCoordinatePrecision(); break;
        case 311: _t->addLayerDefinition(); break;
        case 312: _t->fileExit(); break;
        case 313: _t->zoomOut(); break;
        case 314: _t->zoomIn(); break;
        case 315: _t->pan(); break;
        case 316: _t->identify(); break;
        case 317: _t->measure(); break;
        case 318: _t->measureArea(); break;
        case 319: _t->measureAngle(); break;
        case 320: _t->doFeatureAction(); break;
        case 321: _t->updateDefaultFeatureAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 322: _t->refreshFeatureActions(); break;
        case 323: _t->addFormAnnotation(); break;
        case 324: _t->addTextAnnotation(); break;
        case 325: _t->addHtmlAnnotation(); break;
        case 326: _t->addSvgAnnotation(); break;
        case 327: _t->modifyAnnotation(); break;
        case 328: _t->reprojectAnnotations(); break;
        case 329: _t->labelingFontNotFound((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 330: _t->commitError((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 331: _t->labelingDialogFontNotFound((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 332: _t->labeling(); break;
        case 333: _t->mapStyleDock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 334: _t->diagramProperties(); break;
        case 335: _t->setCadDockVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 336: _t->showPythonDialog(); break;
        case 337: _t->oldProjectVersionWarning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 338: _t->toggleMapTips((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 339: _t->showMapTip(); break;
        case 340: _t->toggleFullScreen(); break;
        case 341: _t->togglePanelsVisibility(); break;
        case 342: _t->toggleMapOnly(); break;
        case 343: _t->toggleReducedView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 344: _t->showActiveWindowMinimized(); break;
        case 345: _t->toggleActiveWindowMaximized(); break;
        case 346: _t->activate(); break;
        case 347: _t->bringAllToFront(); break;
        case 348: _t->stopRendering(); break;
        case 349: _t->showStyleManager(); break;
        case 350: _t->showPinnedLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 351: _t->pinLabels(); break;
        case 352: _t->showHideLabels(); break;
        case 353: _t->moveLabel(); break;
        case 354: _t->rotateFeature(); break;
        case 355: _t->rotateLabel(); break;
        case 356: _t->changeLabelProperties(); break;
        case 357: _t->renderDecorationItems((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 358: _t->projectReadDecorationItems(); break;
        case 359: _t->closeProject(); break;
        case 360: _t->enableProjectMacros(); break;
        case 361: _t->clipboardChanged(); break;
        case 362: _t->mapCanvas_keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 363: _t->disablePreviewMode(); break;
        case 364: _t->activateGrayscalePreview(); break;
        case 365: _t->activateMonoPreview(); break;
        case 366: _t->activateProtanopePreview(); break;
        case 367: _t->activateDeuteranopePreview(); break;
        case 368: _t->toggleFilterLegendByExpression((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 369: _t->updateFilterLegend(); break;
        case 370: _t->onLayerError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 371: _t->setMapStyleDockLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 372: _t->annotationCreated((*reinterpret_cast< QgsAnnotation*(*)>(_a[1]))); break;
        case 373: _t->updateCrsStatusBar(); break;
        case 374: _t->projectCrsChanged(); break;
        case 375: _t->onActiveLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgisApp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::connectionsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::keyPressed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::projectRead)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::newProject)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::currentThemeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)(QgsLayoutDesignerInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::layoutDesignerOpened)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)(QgsLayoutDesignerInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::layoutDesignerWillBeClosed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::layoutDesignerClosed)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::initializationCompleted)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)(QgsCoordinateReferenceSystem & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::customCrsValidation)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)(QgsMapLayer * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::layerSavedAs)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QgisApp::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisApp::activeLayerChanged)) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject QgisApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QgisApp.data,
      qt_meta_data_QgisApp,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgisApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgisApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgisApp.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QgisApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 376)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 376;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 376)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 376;
    }
    return _id;
}

// SIGNAL 0
void QgisApp::connectionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgisApp::keyPressed(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgisApp::projectRead()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgisApp::newProject()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QgisApp::currentThemeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgisApp::layoutDesignerOpened(QgsLayoutDesignerInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgisApp::layoutDesignerWillBeClosed(QgsLayoutDesignerInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgisApp::layoutDesignerClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QgisApp::initializationCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QgisApp::customCrsValidation(QgsCoordinateReferenceSystem & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QgisApp::layerSavedAs(QgsMapLayer * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgisApp::activeLayerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
