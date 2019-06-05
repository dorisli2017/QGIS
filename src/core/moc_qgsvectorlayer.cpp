/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsvectorlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVectorLayer_t {
    QByteArrayData data[109];
    char stringdata0[1732];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorLayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorLayer_t qt_meta_stringdata_QgsVectorLayer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsVectorLayer"
QT_MOC_LITERAL(1, 15, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(4, 47, 8), // "selected"
QT_MOC_LITERAL(5, 56, 10), // "deselected"
QT_MOC_LITERAL(6, 67, 14), // "clearAndSelect"
QT_MOC_LITERAL(7, 82, 13), // "layerModified"
QT_MOC_LITERAL(8, 96, 18), // "allowCommitChanged"
QT_MOC_LITERAL(9, 115, 19), // "beforeModifiedCheck"
QT_MOC_LITERAL(10, 135, 20), // "beforeEditingStarted"
QT_MOC_LITERAL(11, 156, 14), // "editingStarted"
QT_MOC_LITERAL(12, 171, 14), // "editingStopped"
QT_MOC_LITERAL(13, 186, 19), // "beforeCommitChanges"
QT_MOC_LITERAL(14, 206, 14), // "beforeRollBack"
QT_MOC_LITERAL(15, 221, 13), // "afterRollBack"
QT_MOC_LITERAL(16, 235, 14), // "attributeAdded"
QT_MOC_LITERAL(17, 250, 3), // "idx"
QT_MOC_LITERAL(18, 254, 27), // "beforeAddingExpressionField"
QT_MOC_LITERAL(19, 282, 9), // "fieldName"
QT_MOC_LITERAL(20, 292, 16), // "attributeDeleted"
QT_MOC_LITERAL(21, 309, 29), // "beforeRemovingExpressionField"
QT_MOC_LITERAL(22, 339, 12), // "featureAdded"
QT_MOC_LITERAL(23, 352, 12), // "QgsFeatureId"
QT_MOC_LITERAL(24, 365, 3), // "fid"
QT_MOC_LITERAL(25, 369, 14), // "featureDeleted"
QT_MOC_LITERAL(26, 384, 15), // "featuresDeleted"
QT_MOC_LITERAL(27, 400, 4), // "fids"
QT_MOC_LITERAL(28, 405, 13), // "updatedFields"
QT_MOC_LITERAL(29, 419, 19), // "subsetStringChanged"
QT_MOC_LITERAL(30, 439, 21), // "attributeValueChanged"
QT_MOC_LITERAL(31, 461, 5), // "value"
QT_MOC_LITERAL(32, 467, 15), // "geometryChanged"
QT_MOC_LITERAL(33, 483, 11), // "QgsGeometry"
QT_MOC_LITERAL(34, 495, 8), // "geometry"
QT_MOC_LITERAL(35, 504, 26), // "committedAttributesDeleted"
QT_MOC_LITERAL(36, 531, 7), // "layerId"
QT_MOC_LITERAL(37, 539, 16), // "QgsAttributeList"
QT_MOC_LITERAL(38, 556, 17), // "deletedAttributes"
QT_MOC_LITERAL(39, 574, 24), // "committedAttributesAdded"
QT_MOC_LITERAL(40, 599, 15), // "QList<QgsField>"
QT_MOC_LITERAL(41, 615, 15), // "addedAttributes"
QT_MOC_LITERAL(42, 631, 22), // "committedFeaturesAdded"
QT_MOC_LITERAL(43, 654, 14), // "QgsFeatureList"
QT_MOC_LITERAL(44, 669, 13), // "addedFeatures"
QT_MOC_LITERAL(45, 683, 24), // "committedFeaturesRemoved"
QT_MOC_LITERAL(46, 708, 17), // "deletedFeatureIds"
QT_MOC_LITERAL(47, 726, 31), // "committedAttributeValuesChanges"
QT_MOC_LITERAL(48, 758, 23), // "QgsChangedAttributesMap"
QT_MOC_LITERAL(49, 782, 23), // "changedAttributesValues"
QT_MOC_LITERAL(50, 806, 26), // "committedGeometriesChanges"
QT_MOC_LITERAL(51, 833, 14), // "QgsGeometryMap"
QT_MOC_LITERAL(52, 848, 17), // "changedGeometries"
QT_MOC_LITERAL(53, 866, 20), // "labelingFontNotFound"
QT_MOC_LITERAL(54, 887, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(55, 903, 5), // "layer"
QT_MOC_LITERAL(56, 909, 10), // "fontfamily"
QT_MOC_LITERAL(57, 920, 23), // "featureBlendModeChanged"
QT_MOC_LITERAL(58, 944, 25), // "QPainter::CompositionMode"
QT_MOC_LITERAL(59, 970, 9), // "blendMode"
QT_MOC_LITERAL(60, 980, 14), // "opacityChanged"
QT_MOC_LITERAL(61, 995, 7), // "opacity"
QT_MOC_LITERAL(62, 1003, 18), // "editCommandStarted"
QT_MOC_LITERAL(63, 1022, 4), // "text"
QT_MOC_LITERAL(64, 1027, 16), // "editCommandEnded"
QT_MOC_LITERAL(65, 1044, 20), // "editCommandDestroyed"
QT_MOC_LITERAL(66, 1065, 19), // "readCustomSymbology"
QT_MOC_LITERAL(67, 1085, 11), // "QDomElement"
QT_MOC_LITERAL(68, 1097, 7), // "element"
QT_MOC_LITERAL(69, 1105, 8), // "QString&"
QT_MOC_LITERAL(70, 1114, 12), // "errorMessage"
QT_MOC_LITERAL(71, 1127, 20), // "writeCustomSymbology"
QT_MOC_LITERAL(72, 1148, 12), // "QDomElement&"
QT_MOC_LITERAL(73, 1161, 13), // "QDomDocument&"
QT_MOC_LITERAL(74, 1175, 3), // "doc"
QT_MOC_LITERAL(75, 1179, 21), // "mapTipTemplateChanged"
QT_MOC_LITERAL(76, 1201, 24), // "displayExpressionChanged"
QT_MOC_LITERAL(77, 1226, 10), // "raiseError"
QT_MOC_LITERAL(78, 1237, 3), // "msg"
QT_MOC_LITERAL(79, 1241, 21), // "editFormConfigChanged"
QT_MOC_LITERAL(80, 1263, 15), // "readOnlyChanged"
QT_MOC_LITERAL(81, 1279, 28), // "symbolFeatureCountMapChanged"
QT_MOC_LITERAL(82, 1308, 6), // "select"
QT_MOC_LITERAL(83, 1315, 9), // "featureId"
QT_MOC_LITERAL(84, 1325, 10), // "featureIds"
QT_MOC_LITERAL(85, 1336, 8), // "deselect"
QT_MOC_LITERAL(86, 1345, 15), // "removeSelection"
QT_MOC_LITERAL(87, 1361, 13), // "updateExtents"
QT_MOC_LITERAL(88, 1375, 5), // "force"
QT_MOC_LITERAL(89, 1381, 12), // "startEditing"
QT_MOC_LITERAL(90, 1394, 19), // "setTransformContext"
QT_MOC_LITERAL(91, 1414, 29), // "QgsCoordinateTransformContext"
QT_MOC_LITERAL(92, 1444, 16), // "transformContext"
QT_MOC_LITERAL(93, 1461, 27), // "invalidateSymbolCountedFlag"
QT_MOC_LITERAL(94, 1489, 25), // "onFeatureCounterCompleted"
QT_MOC_LITERAL(95, 1515, 26), // "onFeatureCounterTerminated"
QT_MOC_LITERAL(96, 1542, 21), // "onJoinedFieldsChanged"
QT_MOC_LITERAL(97, 1564, 16), // "onFeatureDeleted"
QT_MOC_LITERAL(98, 1581, 17), // "onRelationsLoaded"
QT_MOC_LITERAL(99, 1599, 16), // "onSymbolsCounted"
QT_MOC_LITERAL(100, 1616, 18), // "onDirtyTransaction"
QT_MOC_LITERAL(101, 1635, 3), // "sql"
QT_MOC_LITERAL(102, 1639, 4), // "name"
QT_MOC_LITERAL(103, 1644, 12), // "subsetString"
QT_MOC_LITERAL(104, 1657, 17), // "displayExpression"
QT_MOC_LITERAL(105, 1675, 14), // "mapTipTemplate"
QT_MOC_LITERAL(106, 1690, 14), // "editFormConfig"
QT_MOC_LITERAL(107, 1705, 17), // "QgsEditFormConfig"
QT_MOC_LITERAL(108, 1723, 8) // "readOnly"

    },
    "QgsVectorLayer\0selectionChanged\0\0"
    "QgsFeatureIds\0selected\0deselected\0"
    "clearAndSelect\0layerModified\0"
    "allowCommitChanged\0beforeModifiedCheck\0"
    "beforeEditingStarted\0editingStarted\0"
    "editingStopped\0beforeCommitChanges\0"
    "beforeRollBack\0afterRollBack\0"
    "attributeAdded\0idx\0beforeAddingExpressionField\0"
    "fieldName\0attributeDeleted\0"
    "beforeRemovingExpressionField\0"
    "featureAdded\0QgsFeatureId\0fid\0"
    "featureDeleted\0featuresDeleted\0fids\0"
    "updatedFields\0subsetStringChanged\0"
    "attributeValueChanged\0value\0geometryChanged\0"
    "QgsGeometry\0geometry\0committedAttributesDeleted\0"
    "layerId\0QgsAttributeList\0deletedAttributes\0"
    "committedAttributesAdded\0QList<QgsField>\0"
    "addedAttributes\0committedFeaturesAdded\0"
    "QgsFeatureList\0addedFeatures\0"
    "committedFeaturesRemoved\0deletedFeatureIds\0"
    "committedAttributeValuesChanges\0"
    "QgsChangedAttributesMap\0changedAttributesValues\0"
    "committedGeometriesChanges\0QgsGeometryMap\0"
    "changedGeometries\0labelingFontNotFound\0"
    "QgsVectorLayer*\0layer\0fontfamily\0"
    "featureBlendModeChanged\0"
    "QPainter::CompositionMode\0blendMode\0"
    "opacityChanged\0opacity\0editCommandStarted\0"
    "text\0editCommandEnded\0editCommandDestroyed\0"
    "readCustomSymbology\0QDomElement\0element\0"
    "QString&\0errorMessage\0writeCustomSymbology\0"
    "QDomElement&\0QDomDocument&\0doc\0"
    "mapTipTemplateChanged\0displayExpressionChanged\0"
    "raiseError\0msg\0editFormConfigChanged\0"
    "readOnlyChanged\0symbolFeatureCountMapChanged\0"
    "select\0featureId\0featureIds\0deselect\0"
    "removeSelection\0updateExtents\0force\0"
    "startEditing\0setTransformContext\0"
    "QgsCoordinateTransformContext\0"
    "transformContext\0invalidateSymbolCountedFlag\0"
    "onFeatureCounterCompleted\0"
    "onFeatureCounterTerminated\0"
    "onJoinedFieldsChanged\0onFeatureDeleted\0"
    "onRelationsLoaded\0onSymbolsCounted\0"
    "onDirtyTransaction\0sql\0name\0subsetString\0"
    "displayExpression\0mapTipTemplate\0"
    "editFormConfig\0QgsEditFormConfig\0"
    "readOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       6,  456, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      41,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  304,    2, 0x06 /* Public */,
       7,    0,  311,    2, 0x06 /* Public */,
       8,    0,  312,    2, 0x06 /* Public */,
       9,    0,  313,    2, 0x06 /* Public */,
      10,    0,  314,    2, 0x06 /* Public */,
      11,    0,  315,    2, 0x06 /* Public */,
      12,    0,  316,    2, 0x06 /* Public */,
      13,    0,  317,    2, 0x06 /* Public */,
      14,    0,  318,    2, 0x06 /* Public */,
      15,    0,  319,    2, 0x06 /* Public */,
      16,    1,  320,    2, 0x06 /* Public */,
      18,    1,  323,    2, 0x06 /* Public */,
      20,    1,  326,    2, 0x06 /* Public */,
      21,    1,  329,    2, 0x06 /* Public */,
      22,    1,  332,    2, 0x06 /* Public */,
      25,    1,  335,    2, 0x06 /* Public */,
      26,    1,  338,    2, 0x06 /* Public */,
      28,    0,  341,    2, 0x06 /* Public */,
      29,    0,  342,    2, 0x06 /* Public */,
      30,    3,  343,    2, 0x06 /* Public */,
      32,    2,  350,    2, 0x06 /* Public */,
      35,    2,  355,    2, 0x06 /* Public */,
      39,    2,  360,    2, 0x06 /* Public */,
      42,    2,  365,    2, 0x06 /* Public */,
      45,    2,  370,    2, 0x06 /* Public */,
      47,    2,  375,    2, 0x06 /* Public */,
      50,    2,  380,    2, 0x06 /* Public */,
      53,    2,  385,    2, 0x06 /* Public */,
      57,    1,  390,    2, 0x06 /* Public */,
      60,    1,  393,    2, 0x06 /* Public */,
      62,    1,  396,    2, 0x06 /* Public */,
      64,    0,  399,    2, 0x06 /* Public */,
      65,    0,  400,    2, 0x06 /* Public */,
      66,    2,  401,    2, 0x06 /* Public */,
      71,    3,  406,    2, 0x06 /* Public */,
      75,    0,  413,    2, 0x06 /* Public */,
      76,    0,  414,    2, 0x06 /* Public */,
      77,    1,  415,    2, 0x06 /* Public */,
      79,    0,  418,    2, 0x06 /* Public */,
      80,    0,  419,    2, 0x06 /* Public */,
      81,    0,  420,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      82,    1,  421,    2, 0x0a /* Public */,
      82,    1,  424,    2, 0x0a /* Public */,
      85,    1,  427,    2, 0x0a /* Public */,
      85,    1,  430,    2, 0x0a /* Public */,
      86,    0,  433,    2, 0x0a /* Public */,
      87,    1,  434,    2, 0x0a /* Public */,
      87,    0,  437,    2, 0x2a /* Public | MethodCloned */,
      89,    0,  438,    2, 0x0a /* Public */,
      90,    1,  439,    2, 0x0a /* Public */,
      93,    0,  442,    2, 0x08 /* Private */,
      94,    0,  443,    2, 0x08 /* Private */,
      95,    0,  444,    2, 0x08 /* Private */,
      96,    0,  445,    2, 0x08 /* Private */,
      97,    1,  446,    2, 0x08 /* Private */,
      98,    0,  449,    2, 0x08 /* Private */,
      99,    0,  450,    2, 0x08 /* Private */,
     100,    2,  451,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 3,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23, QMetaType::Int, QMetaType::QVariant,   24,   17,   31,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 33,   24,   34,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 37,   36,   38,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 40,   36,   41,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   36,   44,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,   36,   46,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 48,   36,   49,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 51,   36,   52,
    QMetaType::Void, 0x80000000 | 54, QMetaType::QString,   55,   56,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, QMetaType::Double,   61,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 67, 0x80000000 | 69,   68,   70,
    QMetaType::Void, 0x80000000 | 72, 0x80000000 | 73, 0x80000000 | 69,   68,   74,   70,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   78,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 23,   83,
    QMetaType::Void, 0x80000000 | 3,   84,
    QMetaType::Void, 0x80000000 | 23,   83,
    QMetaType::Void, 0x80000000 | 3,   84,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   88,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 91,   92,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  101,  102,

 // properties: name, type, flags
     103, QMetaType::QString, 0x00495103,
     104, QMetaType::QString, 0x00495103,
     105, QMetaType::QString, 0x00495103,
     106, 0x80000000 | 107, 0x0049510b,
     108, QMetaType::Bool, 0x00495103,
      61, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
      18,
      36,
      35,
      38,
      39,
      29,

       0        // eod
};

void QgsVectorLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorLayer *_t = static_cast<QgsVectorLayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureIds(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->layerModified(); break;
        case 2: _t->allowCommitChanged(); break;
        case 3: _t->beforeModifiedCheck(); break;
        case 4: _t->beforeEditingStarted(); break;
        case 5: _t->editingStarted(); break;
        case 6: _t->editingStopped(); break;
        case 7: _t->beforeCommitChanges(); break;
        case 8: _t->beforeRollBack(); break;
        case 9: _t->afterRollBack(); break;
        case 10: _t->attributeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->beforeAddingExpressionField((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->attributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->beforeRemovingExpressionField((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->featureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 15: _t->featureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 16: _t->featuresDeleted((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 17: _t->updatedFields(); break;
        case 18: _t->subsetStringChanged(); break;
        case 19: _t->attributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 20: _t->geometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< const QgsGeometry(*)>(_a[2]))); break;
        case 21: _t->committedAttributesDeleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsAttributeList(*)>(_a[2]))); break;
        case 22: _t->committedAttributesAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QgsField>(*)>(_a[2]))); break;
        case 23: _t->committedFeaturesAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureList(*)>(_a[2]))); break;
        case 24: _t->committedFeaturesRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureIds(*)>(_a[2]))); break;
        case 25: _t->committedAttributeValuesChanges((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsChangedAttributesMap(*)>(_a[2]))); break;
        case 26: _t->committedGeometriesChanges((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsGeometryMap(*)>(_a[2]))); break;
        case 27: _t->labelingFontNotFound((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 28: _t->featureBlendModeChanged((*reinterpret_cast< QPainter::CompositionMode(*)>(_a[1]))); break;
        case 29: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 30: _t->editCommandStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->editCommandEnded(); break;
        case 32: _t->editCommandDestroyed(); break;
        case 33: _t->readCustomSymbology((*reinterpret_cast< const QDomElement(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 34: _t->writeCustomSymbology((*reinterpret_cast< QDomElement(*)>(_a[1])),(*reinterpret_cast< QDomDocument(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 35: _t->mapTipTemplateChanged(); break;
        case 36: _t->displayExpressionChanged(); break;
        case 37: _t->raiseError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->editFormConfigChanged(); break;
        case 39: _t->readOnlyChanged(); break;
        case 40: _t->symbolFeatureCountMapChanged(); break;
        case 41: _t->select((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 42: _t->select((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 43: _t->deselect((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 44: _t->deselect((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 45: _t->removeSelection(); break;
        case 46: _t->updateExtents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->updateExtents(); break;
        case 48: { bool _r = _t->startEditing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->setTransformContext((*reinterpret_cast< const QgsCoordinateTransformContext(*)>(_a[1]))); break;
        case 50: _t->invalidateSymbolCountedFlag(); break;
        case 51: _t->onFeatureCounterCompleted(); break;
        case 52: _t->onFeatureCounterTerminated(); break;
        case 53: _t->onJoinedFieldsChanged(); break;
        case 54: _t->onFeatureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 55: _t->onRelationsLoaded(); break;
        case 56: _t->onSymbolsCounted(); break;
        case 57: _t->onDirtyTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsField> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFeatureList >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsVectorLayer* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCoordinateTransformContext >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsVectorLayer::*_t)(const QgsFeatureIds & , const QgsFeatureIds & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::layerModified)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::allowCommitChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::beforeModifiedCheck)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::beforeEditingStarted)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::editingStarted)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::editingStopped)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::beforeCommitChanges)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::beforeRollBack)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::afterRollBack)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::attributeAdded)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::beforeAddingExpressionField)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::attributeDeleted)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::beforeRemovingExpressionField)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QgsFeatureId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::featureAdded)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QgsFeatureId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::featureDeleted)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QgsFeatureIds & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::featuresDeleted)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::updatedFields)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::subsetStringChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QgsFeatureId , int , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::attributeValueChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QgsFeatureId , const QgsGeometry & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::geometryChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QgsAttributeList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::committedAttributesDeleted)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QList<QgsField> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::committedAttributesAdded)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QgsFeatureList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::committedFeaturesAdded)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QgsFeatureIds & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::committedFeaturesRemoved)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QgsChangedAttributesMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::committedAttributeValuesChanges)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QgsGeometryMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::committedGeometriesChanges)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QgsVectorLayer * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::labelingFontNotFound)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QPainter::CompositionMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::featureBlendModeChanged)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::opacityChanged)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::editCommandStarted)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::editCommandEnded)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::editCommandDestroyed)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QDomElement & , QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::readCustomSymbology)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QDomElement & , QDomDocument & , QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::writeCustomSymbology)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::mapTipTemplateChanged)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::displayExpressionChanged)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::raiseError)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::editFormConfigChanged)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::readOnlyChanged)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsVectorLayer::symbolFeatureCountMapChanged)) {
                *result = 40;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsVectorLayer *_t = static_cast<QgsVectorLayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->subsetString(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->displayExpression(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->mapTipTemplate(); break;
        case 3: *reinterpret_cast< QgsEditFormConfig*>(_v) = _t->editFormConfig(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->opacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsVectorLayer *_t = static_cast<QgsVectorLayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSubsetString(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDisplayExpression(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setMapTipTemplate(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setEditFormConfig(*reinterpret_cast< QgsEditFormConfig*>(_v)); break;
        case 4: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setOpacity(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsVectorLayer::staticMetaObject = {
    { &QgsMapLayer::staticMetaObject, qt_meta_stringdata_QgsVectorLayer.data,
      qt_meta_data_QgsVectorLayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorLayer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsExpressionContextGenerator"))
        return static_cast< QgsExpressionContextGenerator*>(this);
    if (!strcmp(_clname, "QgsExpressionContextScopeGenerator"))
        return static_cast< QgsExpressionContextScopeGenerator*>(this);
    if (!strcmp(_clname, "QgsFeatureSink"))
        return static_cast< QgsFeatureSink*>(this);
    if (!strcmp(_clname, "QgsFeatureSource"))
        return static_cast< QgsFeatureSource*>(this);
    return QgsMapLayer::qt_metacast(_clname);
}

int QgsVectorLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsVectorLayer::selectionChanged(const QgsFeatureIds & _t1, const QgsFeatureIds & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsVectorLayer::layerModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsVectorLayer::allowCommitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsVectorLayer::beforeModifiedCheck()const
{
    QMetaObject::activate(const_cast< QgsVectorLayer *>(this), &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QgsVectorLayer::beforeEditingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QgsVectorLayer::editingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QgsVectorLayer::editingStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QgsVectorLayer::beforeCommitChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QgsVectorLayer::beforeRollBack()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QgsVectorLayer::afterRollBack()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QgsVectorLayer::attributeAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgsVectorLayer::beforeAddingExpressionField(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QgsVectorLayer::attributeDeleted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QgsVectorLayer::beforeRemovingExpressionField(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QgsVectorLayer::featureAdded(QgsFeatureId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QgsVectorLayer::featureDeleted(QgsFeatureId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QgsVectorLayer::featuresDeleted(const QgsFeatureIds & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QgsVectorLayer::updatedFields()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QgsVectorLayer::subsetStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void QgsVectorLayer::attributeValueChanged(QgsFeatureId _t1, int _t2, const QVariant & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QgsVectorLayer::geometryChanged(QgsFeatureId _t1, const QgsGeometry & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QgsVectorLayer::committedAttributesDeleted(const QString & _t1, const QgsAttributeList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QgsVectorLayer::committedAttributesAdded(const QString & _t1, const QList<QgsField> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void QgsVectorLayer::committedFeaturesAdded(const QString & _t1, const QgsFeatureList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void QgsVectorLayer::committedFeaturesRemoved(const QString & _t1, const QgsFeatureIds & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void QgsVectorLayer::committedAttributeValuesChanges(const QString & _t1, const QgsChangedAttributesMap & _t2)
{
    std::cout<< "in QgsVectorLayer::committedAttributeValuesChanges"<< endl;
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
    std::cout<< "out QgsVectorLayer::committedAttributeValuesChanges"<< endl;
}

// SIGNAL 26
void QgsVectorLayer::committedGeometriesChanges(const QString & _t1, const QgsGeometryMap & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void QgsVectorLayer::labelingFontNotFound(QgsVectorLayer * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void QgsVectorLayer::featureBlendModeChanged(QPainter::CompositionMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void QgsVectorLayer::opacityChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void QgsVectorLayer::editCommandStarted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void QgsVectorLayer::editCommandEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void QgsVectorLayer::editCommandDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void QgsVectorLayer::readCustomSymbology(const QDomElement & _t1, QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void QgsVectorLayer::writeCustomSymbology(QDomElement & _t1, QDomDocument & _t2, QString & _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< QgsVectorLayer *>(this), &staticMetaObject, 34, _a);
}

// SIGNAL 35
void QgsVectorLayer::mapTipTemplateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void QgsVectorLayer::displayExpressionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void QgsVectorLayer::raiseError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void QgsVectorLayer::editFormConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void QgsVectorLayer::readOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void QgsVectorLayer::symbolFeatureCountMapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
