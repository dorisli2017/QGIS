/****************************************************************************
** Meta object code from reading C++ file 'qgsproject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsproject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProject_t {
    QByteArrayData data[96];
    char stringdata0[1543];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProject_t qt_meta_stringdata_QgsProject = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QgsProject"
QT_MOC_LITERAL(1, 11, 7), // "cleared"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "readProject"
QT_MOC_LITERAL(4, 32, 12), // "QDomDocument"
QT_MOC_LITERAL(5, 45, 22), // "readProjectWithContext"
QT_MOC_LITERAL(6, 68, 20), // "QgsReadWriteContext&"
QT_MOC_LITERAL(7, 89, 7), // "context"
QT_MOC_LITERAL(8, 97, 12), // "writeProject"
QT_MOC_LITERAL(9, 110, 13), // "QDomDocument&"
QT_MOC_LITERAL(10, 124, 12), // "readMapLayer"
QT_MOC_LITERAL(11, 137, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(12, 150, 8), // "mapLayer"
QT_MOC_LITERAL(13, 159, 11), // "QDomElement"
QT_MOC_LITERAL(14, 171, 9), // "layerNode"
QT_MOC_LITERAL(15, 181, 13), // "writeMapLayer"
QT_MOC_LITERAL(16, 195, 12), // "QDomElement&"
QT_MOC_LITERAL(17, 208, 9), // "layerElem"
QT_MOC_LITERAL(18, 218, 3), // "doc"
QT_MOC_LITERAL(19, 222, 12), // "projectSaved"
QT_MOC_LITERAL(20, 235, 24), // "oldProjectVersionWarning"
QT_MOC_LITERAL(21, 260, 11), // "layerLoaded"
QT_MOC_LITERAL(22, 272, 1), // "i"
QT_MOC_LITERAL(23, 274, 1), // "n"
QT_MOC_LITERAL(24, 276, 12), // "loadingLayer"
QT_MOC_LITERAL(25, 289, 9), // "layerName"
QT_MOC_LITERAL(26, 299, 27), // "loadingLayerMessageReceived"
QT_MOC_LITERAL(27, 327, 44), // "QList<QgsReadWriteContext::Re..."
QT_MOC_LITERAL(28, 372, 8), // "messages"
QT_MOC_LITERAL(29, 381, 28), // "nonIdentifiableLayersChanged"
QT_MOC_LITERAL(30, 410, 17), // "Q_DECL_DEPRECATED"
QT_MOC_LITERAL(31, 428, 21), // "nonIdentifiableLayers"
QT_MOC_LITERAL(32, 450, 15), // "fileNameChanged"
QT_MOC_LITERAL(33, 466, 15), // "homePathChanged"
QT_MOC_LITERAL(34, 482, 21), // "snappingConfigChanged"
QT_MOC_LITERAL(35, 504, 17), // "QgsSnappingConfig"
QT_MOC_LITERAL(36, 522, 6), // "config"
QT_MOC_LITERAL(37, 529, 22), // "customVariablesChanged"
QT_MOC_LITERAL(38, 552, 10), // "crsChanged"
QT_MOC_LITERAL(39, 563, 16), // "ellipsoidChanged"
QT_MOC_LITERAL(40, 580, 9), // "ellipsoid"
QT_MOC_LITERAL(41, 590, 23), // "transformContextChanged"
QT_MOC_LITERAL(42, 614, 22), // "missingDatumTransforms"
QT_MOC_LITERAL(43, 637, 17), // "missingTransforms"
QT_MOC_LITERAL(44, 655, 24), // "transactionGroupsChanged"
QT_MOC_LITERAL(45, 680, 25), // "topologicalEditingChanged"
QT_MOC_LITERAL(46, 706, 31), // "avoidIntersectionsLayersChanged"
QT_MOC_LITERAL(47, 738, 25), // "mapThemeCollectionChanged"
QT_MOC_LITERAL(48, 764, 29), // "labelingEngineSettingsChanged"
QT_MOC_LITERAL(49, 794, 15), // "metadataChanged"
QT_MOC_LITERAL(50, 810, 20), // "projectColorsChanged"
QT_MOC_LITERAL(51, 831, 19), // "layersWillBeRemoved"
QT_MOC_LITERAL(52, 851, 8), // "layerIds"
QT_MOC_LITERAL(53, 860, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(54, 880, 6), // "layers"
QT_MOC_LITERAL(55, 887, 18), // "layerWillBeRemoved"
QT_MOC_LITERAL(56, 906, 7), // "layerId"
QT_MOC_LITERAL(57, 914, 5), // "layer"
QT_MOC_LITERAL(58, 920, 13), // "layersRemoved"
QT_MOC_LITERAL(59, 934, 12), // "layerRemoved"
QT_MOC_LITERAL(60, 947, 9), // "removeAll"
QT_MOC_LITERAL(61, 957, 11), // "layersAdded"
QT_MOC_LITERAL(62, 969, 13), // "layerWasAdded"
QT_MOC_LITERAL(63, 983, 17), // "legendLayersAdded"
QT_MOC_LITERAL(64, 1001, 14), // "isDirtyChanged"
QT_MOC_LITERAL(65, 1016, 5), // "dirty"
QT_MOC_LITERAL(66, 1022, 17), // "setSnappingConfig"
QT_MOC_LITERAL(67, 1040, 14), // "snappingConfig"
QT_MOC_LITERAL(68, 1055, 8), // "setDirty"
QT_MOC_LITERAL(69, 1064, 1), // "b"
QT_MOC_LITERAL(70, 1066, 17), // "setPresetHomePath"
QT_MOC_LITERAL(71, 1084, 4), // "path"
QT_MOC_LITERAL(72, 1089, 30), // "registerTranslatableContainers"
QT_MOC_LITERAL(73, 1120, 22), // "QgsTranslationContext*"
QT_MOC_LITERAL(74, 1143, 18), // "translationContext"
QT_MOC_LITERAL(75, 1162, 28), // "QgsAttributeEditorContainer*"
QT_MOC_LITERAL(76, 1191, 6), // "parent"
QT_MOC_LITERAL(77, 1198, 27), // "registerTranslatableObjects"
QT_MOC_LITERAL(78, 1226, 16), // "onMapLayersAdded"
QT_MOC_LITERAL(79, 1243, 18), // "onMapLayersRemoved"
QT_MOC_LITERAL(80, 1262, 22), // "cleanTransactionGroups"
QT_MOC_LITERAL(81, 1285, 5), // "force"
QT_MOC_LITERAL(82, 1291, 8), // "fileName"
QT_MOC_LITERAL(83, 1300, 8), // "homePath"
QT_MOC_LITERAL(84, 1309, 3), // "crs"
QT_MOC_LITERAL(85, 1313, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(86, 1342, 16), // "transformContext"
QT_MOC_LITERAL(87, 1359, 29), // "QgsCoordinateTransformContext"
QT_MOC_LITERAL(88, 1389, 18), // "mapThemeCollection"
QT_MOC_LITERAL(89, 1408, 22), // "QgsMapThemeCollection*"
QT_MOC_LITERAL(90, 1431, 15), // "relationManager"
QT_MOC_LITERAL(91, 1447, 19), // "QgsRelationManager*"
QT_MOC_LITERAL(92, 1467, 24), // "avoidIntersectionsLayers"
QT_MOC_LITERAL(93, 1492, 22), // "QList<QgsVectorLayer*>"
QT_MOC_LITERAL(94, 1515, 8), // "metadata"
QT_MOC_LITERAL(95, 1524, 18) // "QgsProjectMetadata"

    },
    "QgsProject\0cleared\0\0readProject\0"
    "QDomDocument\0readProjectWithContext\0"
    "QgsReadWriteContext&\0context\0writeProject\0"
    "QDomDocument&\0readMapLayer\0QgsMapLayer*\0"
    "mapLayer\0QDomElement\0layerNode\0"
    "writeMapLayer\0QDomElement&\0layerElem\0"
    "doc\0projectSaved\0oldProjectVersionWarning\0"
    "layerLoaded\0i\0n\0loadingLayer\0layerName\0"
    "loadingLayerMessageReceived\0"
    "QList<QgsReadWriteContext::ReadWriteMessage>\0"
    "messages\0nonIdentifiableLayersChanged\0"
    "Q_DECL_DEPRECATED\0nonIdentifiableLayers\0"
    "fileNameChanged\0homePathChanged\0"
    "snappingConfigChanged\0QgsSnappingConfig\0"
    "config\0customVariablesChanged\0crsChanged\0"
    "ellipsoidChanged\0ellipsoid\0"
    "transformContextChanged\0missingDatumTransforms\0"
    "missingTransforms\0transactionGroupsChanged\0"
    "topologicalEditingChanged\0"
    "avoidIntersectionsLayersChanged\0"
    "mapThemeCollectionChanged\0"
    "labelingEngineSettingsChanged\0"
    "metadataChanged\0projectColorsChanged\0"
    "layersWillBeRemoved\0layerIds\0"
    "QList<QgsMapLayer*>\0layers\0"
    "layerWillBeRemoved\0layerId\0layer\0"
    "layersRemoved\0layerRemoved\0removeAll\0"
    "layersAdded\0layerWasAdded\0legendLayersAdded\0"
    "isDirtyChanged\0dirty\0setSnappingConfig\0"
    "snappingConfig\0setDirty\0b\0setPresetHomePath\0"
    "path\0registerTranslatableContainers\0"
    "QgsTranslationContext*\0translationContext\0"
    "QgsAttributeEditorContainer*\0parent\0"
    "registerTranslatableObjects\0"
    "onMapLayersAdded\0onMapLayersRemoved\0"
    "cleanTransactionGroups\0force\0fileName\0"
    "homePath\0crs\0QgsCoordinateReferenceSystem\0"
    "transformContext\0QgsCoordinateTransformContext\0"
    "mapThemeCollection\0QgsMapThemeCollection*\0"
    "relationManager\0QgsRelationManager*\0"
    "avoidIntersectionsLayers\0"
    "QList<QgsVectorLayer*>\0metadata\0"
    "QgsProjectMetadata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
      11,  380, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      38,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  254,    2, 0x06 /* Public */,
       3,    1,  255,    2, 0x06 /* Public */,
       5,    2,  258,    2, 0x06 /* Public */,
       8,    1,  263,    2, 0x06 /* Public */,
      10,    2,  266,    2, 0x06 /* Public */,
      15,    3,  271,    2, 0x06 /* Public */,
      19,    0,  278,    2, 0x06 /* Public */,
      20,    1,  279,    2, 0x06 /* Public */,
      21,    2,  282,    2, 0x06 /* Public */,
      24,    1,  287,    2, 0x06 /* Public */,
      26,    2,  290,    2, 0x06 /* Public */,
      29,    1,  295,   30, 0x06 /* Public */,
      32,    0,  298,    2, 0x06 /* Public */,
      33,    0,  299,    2, 0x06 /* Public */,
      34,    1,  300,    2, 0x06 /* Public */,
      37,    0,  303,    2, 0x06 /* Public */,
      38,    0,  304,    2, 0x06 /* Public */,
      39,    1,  305,    2, 0x06 /* Public */,
      41,    0,  308,    2, 0x06 /* Public */,
      42,    1,  309,    2, 0x06 /* Public */,
      44,    0,  312,    2, 0x06 /* Public */,
      45,    0,  313,    2, 0x06 /* Public */,
      46,    0,  314,    2, 0x06 /* Public */,
      47,    0,  315,    2, 0x06 /* Public */,
      48,    0,  316,    2, 0x06 /* Public */,
      49,    0,  317,    2, 0x06 /* Public */,
      50,    0,  318,    2, 0x06 /* Public */,
      51,    1,  319,    2, 0x06 /* Public */,
      51,    1,  322,    2, 0x06 /* Public */,
      55,    1,  325,    2, 0x06 /* Public */,
      55,    1,  328,    2, 0x06 /* Public */,
      58,    1,  331,    2, 0x06 /* Public */,
      59,    1,  334,    2, 0x06 /* Public */,
      60,    0,  337,    2, 0x06 /* Public */,
      61,    1,  338,    2, 0x06 /* Public */,
      62,    1,  341,    2, 0x06 /* Public */,
      63,    1,  344,    2, 0x06 /* Public */,
      64,    1,  347,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      66,    1,  350,    2, 0x0a /* Public */,
      68,    1,  353,    2, 0x0a /* Public */,
      68,    0,  356,    2, 0x2a /* Public | MethodCloned */,
      70,    1,  357,    2, 0x0a /* Public */,
      72,    3,  360,    2, 0x0a /* Public */,
      77,    1,  367,    2, 0x0a /* Public */,
      78,    1,  370,    2, 0x08 /* Private */,
      79,    1,  373,    2, 0x08 /* Private */,
      80,    1,  376,    2, 0x08 /* Private */,
      80,    0,  379,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    2,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 16, 0x80000000 | 9,   12,   17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 27,   25,   28,
    QMetaType::Void, QMetaType::QStringList,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   52,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void, 0x80000000 | 11,   57,
    QMetaType::Void, QMetaType::QStringList,   52,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 11,   57,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, QMetaType::Bool,   65,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 35,   67,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   71,
    QMetaType::Void, 0x80000000 | 73, 0x80000000 | 75, QMetaType::QString,   74,   76,   56,
    QMetaType::Void, 0x80000000 | 73,   74,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, QMetaType::Bool,   81,
    QMetaType::Void,

 // properties: name, type, flags
      31, QMetaType::QStringList, 0x00495103,
      82, QMetaType::QString, 0x00495103,
      83, QMetaType::QString, 0x00495003,
      84, 0x80000000 | 85, 0x0049510b,
      86, 0x80000000 | 87, 0x0049510b,
      40, QMetaType::QString, 0x00495103,
      88, 0x80000000 | 89, 0x00495009,
      67, 0x80000000 | 35, 0x0049510b,
      90, 0x80000000 | 91, 0x00095009,
      92, 0x80000000 | 93, 0x0049510b,
      94, 0x80000000 | 95, 0x0049510b,

 // properties: notify_signal_id
      11,
      12,
      13,
      16,
      18,
      17,
      23,
      14,
       0,
      22,
      25,

       0        // eod
};

void QgsProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProject *_t = static_cast<QgsProject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleared(); break;
        case 1: _t->readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 2: _t->readProjectWithContext((*reinterpret_cast< const QDomDocument(*)>(_a[1])),(*reinterpret_cast< QgsReadWriteContext(*)>(_a[2]))); break;
        case 3: _t->writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 4: _t->readMapLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< const QDomElement(*)>(_a[2]))); break;
        case 5: _t->writeMapLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2])),(*reinterpret_cast< QDomDocument(*)>(_a[3]))); break;
        case 6: _t->projectSaved(); break;
        case 7: _t->oldProjectVersionWarning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->layerLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->loadingLayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->loadingLayerMessageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QgsReadWriteContext::ReadWriteMessage>(*)>(_a[2]))); break;
        case 11: _t->nonIdentifiableLayersChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 12: _t->fileNameChanged(); break;
        case 13: _t->homePathChanged(); break;
        case 14: _t->snappingConfigChanged((*reinterpret_cast< const QgsSnappingConfig(*)>(_a[1]))); break;
        case 15: _t->customVariablesChanged(); break;
        case 16: _t->crsChanged(); break;
        case 17: _t->ellipsoidChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->transformContextChanged(); break;
        case 19: _t->missingDatumTransforms((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 20: _t->transactionGroupsChanged(); break;
        case 21: _t->topologicalEditingChanged(); break;
        case 22: _t->avoidIntersectionsLayersChanged(); break;
        case 23: _t->mapThemeCollectionChanged(); break;
        case 24: _t->labelingEngineSettingsChanged(); break;
        case 25: _t->metadataChanged(); break;
        case 26: _t->projectColorsChanged(); break;
        case 27: _t->layersWillBeRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 28: _t->layersWillBeRemoved((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 29: _t->layerWillBeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->layerWillBeRemoved((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 31: _t->layersRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 32: _t->layerRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->removeAll(); break;
        case 34: _t->layersAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 35: _t->layerWasAdded((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 36: _t->legendLayersAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 37: _t->isDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->setSnappingConfig((*reinterpret_cast< const QgsSnappingConfig(*)>(_a[1]))); break;
        case 39: _t->setDirty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->setDirty(); break;
        case 41: _t->setPresetHomePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: _t->registerTranslatableContainers((*reinterpret_cast< QgsTranslationContext*(*)>(_a[1])),(*reinterpret_cast< QgsAttributeEditorContainer*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 43: _t->registerTranslatableObjects((*reinterpret_cast< QgsTranslationContext*(*)>(_a[1]))); break;
        case 44: _t->onMapLayersAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 45: _t->onMapLayersRemoved((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 46: _t->cleanTransactionGroups((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->cleanTransactionGroups(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsMapLayer*> >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsMapLayer*> >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsMapLayer*> >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsMapLayer*> >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsMapLayer*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::cleared)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QDomDocument & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::readProject)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QDomDocument & , QgsReadWriteContext & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::readProjectWithContext)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(QDomDocument & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::writeProject)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(QgsMapLayer * , const QDomElement & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::readMapLayer)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(QgsMapLayer * , QDomElement & , QDomDocument & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::writeMapLayer)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::projectSaved)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::oldProjectVersionWarning)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::layerLoaded)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::loadingLayer)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QString & , const QList<QgsReadWriteContext::ReadWriteMessage> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::loadingLayerMessageReceived)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::nonIdentifiableLayersChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::fileNameChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::homePathChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QgsSnappingConfig & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::snappingConfigChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::customVariablesChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::crsChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::ellipsoidChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::transformContextChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::missingDatumTransforms)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::transactionGroupsChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::topologicalEditingChanged)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::avoidIntersectionsLayersChanged)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::mapThemeCollectionChanged)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::labelingEngineSettingsChanged)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::metadataChanged)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::projectColorsChanged)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::layersWillBeRemoved)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QList<QgsMapLayer*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::layersWillBeRemoved)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::layerWillBeRemoved)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::layerWillBeRemoved)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::layersRemoved)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::layerRemoved)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::removeAll)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QList<QgsMapLayer*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::layersAdded)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::layerWasAdded)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QList<QgsMapLayer*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::legendLayersAdded)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (QgsProject::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProject::isDirtyChanged)) {
                *result = 37;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCoordinateReferenceSystem >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCoordinateTransformContext >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsProject *_t = static_cast<QgsProject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->nonIdentifiableLayers(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->homePath(); break;
        case 3: *reinterpret_cast< QgsCoordinateReferenceSystem*>(_v) = _t->crs(); break;
        case 4: *reinterpret_cast< QgsCoordinateTransformContext*>(_v) = _t->transformContext(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->ellipsoid(); break;
        case 6: *reinterpret_cast< QgsMapThemeCollection**>(_v) = _t->mapThemeCollection(); break;
        case 7: *reinterpret_cast< QgsSnappingConfig*>(_v) = _t->snappingConfig(); break;
        case 8: *reinterpret_cast< QgsRelationManager**>(_v) = _t->relationManager(); break;
        case 9: *reinterpret_cast< QList<QgsVectorLayer*>*>(_v) = _t->avoidIntersectionsLayers(); break;
        case 10: *reinterpret_cast< QgsProjectMetadata*>(_v) = _t->metadata(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsProject *_t = static_cast<QgsProject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNonIdentifiableLayers(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPresetHomePath(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCrs(*reinterpret_cast< QgsCoordinateReferenceSystem*>(_v)); break;
        case 4: _t->setTransformContext(*reinterpret_cast< QgsCoordinateTransformContext*>(_v)); break;
        case 5: _t->setEllipsoid(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setSnappingConfig(*reinterpret_cast< QgsSnappingConfig*>(_v)); break;
        case 9: _t->setAvoidIntersectionsLayers(*reinterpret_cast< QList<QgsVectorLayer*>*>(_v)); break;
        case 10: _t->setMetadata(*reinterpret_cast< QgsProjectMetadata*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsProject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsProject.data,
      qt_meta_data_QgsProject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProject.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsExpressionContextGenerator"))
        return static_cast< QgsExpressionContextGenerator*>(this);
    if (!strcmp(_clname, "QgsProjectTranslator"))
        return static_cast< QgsProjectTranslator*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsProject::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsProject::readProject(const QDomDocument & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsProject::readProjectWithContext(const QDomDocument & _t1, QgsReadWriteContext & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsProject::writeProject(QDomDocument & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsProject::readMapLayer(QgsMapLayer * _t1, const QDomElement & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsProject::writeMapLayer(QgsMapLayer * _t1, QDomElement & _t2, QDomDocument & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsProject::projectSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QgsProject::oldProjectVersionWarning(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsProject::layerLoaded(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsProject::loadingLayer(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QgsProject::loadingLayerMessageReceived(const QString & _t1, const QList<QgsReadWriteContext::ReadWriteMessage> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgsProject::nonIdentifiableLayersChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QgsProject::fileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QgsProject::homePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QgsProject::snappingConfigChanged(const QgsSnappingConfig & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QgsProject::customVariablesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QgsProject::crsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QgsProject::ellipsoidChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QgsProject::transformContextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void QgsProject::missingDatumTransforms(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QgsProject::transactionGroupsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void QgsProject::topologicalEditingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void QgsProject::avoidIntersectionsLayersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void QgsProject::mapThemeCollectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void QgsProject::labelingEngineSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void QgsProject::metadataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void QgsProject::projectColorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void QgsProject::layersWillBeRemoved(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void QgsProject::layersWillBeRemoved(const QList<QgsMapLayer*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void QgsProject::layerWillBeRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void QgsProject::layerWillBeRemoved(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void QgsProject::layersRemoved(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void QgsProject::layerRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void QgsProject::removeAll()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void QgsProject::layersAdded(const QList<QgsMapLayer*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void QgsProject::layerWasAdded(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void QgsProject::legendLayersAdded(const QList<QgsMapLayer*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void QgsProject::isDirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
