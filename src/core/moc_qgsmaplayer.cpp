/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmaplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapLayer_t {
    QByteArrayData data[69];
    char stringdata0[1004];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapLayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapLayer_t qt_meta_stringdata_QgsMapLayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QgsMapLayer"
QT_MOC_LITERAL(1, 12, 13), // "statusChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "status"
QT_MOC_LITERAL(4, 34, 11), // "nameChanged"
QT_MOC_LITERAL(5, 46, 10), // "crsChanged"
QT_MOC_LITERAL(6, 57, 16), // "repaintRequested"
QT_MOC_LITERAL(7, 74, 14), // "deferredUpdate"
QT_MOC_LITERAL(8, 89, 18), // "recalculateExtents"
QT_MOC_LITERAL(9, 108, 11), // "dataChanged"
QT_MOC_LITERAL(10, 120, 16), // "blendModeChanged"
QT_MOC_LITERAL(11, 137, 25), // "QPainter::CompositionMode"
QT_MOC_LITERAL(12, 163, 9), // "blendMode"
QT_MOC_LITERAL(13, 173, 15), // "rendererChanged"
QT_MOC_LITERAL(14, 189, 12), // "styleChanged"
QT_MOC_LITERAL(15, 202, 13), // "legendChanged"
QT_MOC_LITERAL(16, 216, 17), // "renderer3DChanged"
QT_MOC_LITERAL(17, 234, 13), // "configChanged"
QT_MOC_LITERAL(18, 248, 19), // "dependenciesChanged"
QT_MOC_LITERAL(19, 268, 13), // "willBeDeleted"
QT_MOC_LITERAL(20, 282, 26), // "autoRefreshIntervalChanged"
QT_MOC_LITERAL(21, 309, 8), // "interval"
QT_MOC_LITERAL(22, 318, 15), // "metadataChanged"
QT_MOC_LITERAL(23, 334, 12), // "flagsChanged"
QT_MOC_LITERAL(24, 347, 17), // "dataSourceChanged"
QT_MOC_LITERAL(25, 365, 15), // "setMinimumScale"
QT_MOC_LITERAL(26, 381, 5), // "scale"
QT_MOC_LITERAL(27, 387, 15), // "setMaximumScale"
QT_MOC_LITERAL(28, 403, 23), // "setScaleBasedVisibility"
QT_MOC_LITERAL(29, 427, 7), // "enabled"
QT_MOC_LITERAL(30, 435, 14), // "triggerRepaint"
QT_MOC_LITERAL(31, 450, 16), // "emitStyleChanged"
QT_MOC_LITERAL(32, 467, 15), // "setDependencies"
QT_MOC_LITERAL(33, 483, 27), // "QSet<QgsMapLayerDependency>"
QT_MOC_LITERAL(34, 511, 6), // "layers"
QT_MOC_LITERAL(35, 518, 25), // "setRefreshOnNotifyEnabled"
QT_MOC_LITERAL(36, 544, 25), // "setRefreshOnNofifyMessage"
QT_MOC_LITERAL(37, 570, 7), // "message"
QT_MOC_LITERAL(38, 578, 19), // "setTransformContext"
QT_MOC_LITERAL(39, 598, 29), // "QgsCoordinateTransformContext"
QT_MOC_LITERAL(40, 628, 16), // "transformContext"
QT_MOC_LITERAL(41, 645, 24), // "onNotifiedTriggerRepaint"
QT_MOC_LITERAL(42, 670, 4), // "name"
QT_MOC_LITERAL(43, 675, 19), // "autoRefreshInterval"
QT_MOC_LITERAL(44, 695, 8), // "metadata"
QT_MOC_LITERAL(45, 704, 16), // "QgsLayerMetadata"
QT_MOC_LITERAL(46, 721, 3), // "crs"
QT_MOC_LITERAL(47, 725, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(48, 754, 9), // "LayerFlag"
QT_MOC_LITERAL(49, 764, 12), // "Identifiable"
QT_MOC_LITERAL(50, 777, 9), // "Removable"
QT_MOC_LITERAL(51, 787, 10), // "Searchable"
QT_MOC_LITERAL(52, 798, 10), // "LayerFlags"
QT_MOC_LITERAL(53, 809, 13), // "StyleCategory"
QT_MOC_LITERAL(54, 823, 18), // "LayerConfiguration"
QT_MOC_LITERAL(55, 842, 9), // "Symbology"
QT_MOC_LITERAL(56, 852, 11), // "Symbology3D"
QT_MOC_LITERAL(57, 864, 8), // "Labeling"
QT_MOC_LITERAL(58, 873, 6), // "Fields"
QT_MOC_LITERAL(59, 880, 5), // "Forms"
QT_MOC_LITERAL(60, 886, 7), // "Actions"
QT_MOC_LITERAL(61, 894, 7), // "MapTips"
QT_MOC_LITERAL(62, 902, 8), // "Diagrams"
QT_MOC_LITERAL(63, 911, 14), // "AttributeTable"
QT_MOC_LITERAL(64, 926, 9), // "Rendering"
QT_MOC_LITERAL(65, 936, 16), // "CustomProperties"
QT_MOC_LITERAL(66, 953, 15), // "GeometryOptions"
QT_MOC_LITERAL(67, 969, 18), // "AllStyleCategories"
QT_MOC_LITERAL(68, 988, 15) // "StyleCategories"

    },
    "QgsMapLayer\0statusChanged\0\0status\0"
    "nameChanged\0crsChanged\0repaintRequested\0"
    "deferredUpdate\0recalculateExtents\0"
    "dataChanged\0blendModeChanged\0"
    "QPainter::CompositionMode\0blendMode\0"
    "rendererChanged\0styleChanged\0legendChanged\0"
    "renderer3DChanged\0configChanged\0"
    "dependenciesChanged\0willBeDeleted\0"
    "autoRefreshIntervalChanged\0interval\0"
    "metadataChanged\0flagsChanged\0"
    "dataSourceChanged\0setMinimumScale\0"
    "scale\0setMaximumScale\0setScaleBasedVisibility\0"
    "enabled\0triggerRepaint\0emitStyleChanged\0"
    "setDependencies\0QSet<QgsMapLayerDependency>\0"
    "layers\0setRefreshOnNotifyEnabled\0"
    "setRefreshOnNofifyMessage\0message\0"
    "setTransformContext\0QgsCoordinateTransformContext\0"
    "transformContext\0onNotifiedTriggerRepaint\0"
    "name\0autoRefreshInterval\0metadata\0"
    "QgsLayerMetadata\0crs\0QgsCoordinateReferenceSystem\0"
    "LayerFlag\0Identifiable\0Removable\0"
    "Searchable\0LayerFlags\0StyleCategory\0"
    "LayerConfiguration\0Symbology\0Symbology3D\0"
    "Labeling\0Fields\0Forms\0Actions\0MapTips\0"
    "Diagrams\0AttributeTable\0Rendering\0"
    "CustomProperties\0GeometryOptions\0"
    "AllStyleCategories\0StyleCategories"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       4,  220, // properties
       4,  236, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       4,    0,  167,    2, 0x06 /* Public */,
       5,    0,  168,    2, 0x06 /* Public */,
       6,    1,  169,    2, 0x06 /* Public */,
       6,    0,  172,    2, 0x26 /* Public | MethodCloned */,
       8,    0,  173,    2, 0x06 /* Public */,
       9,    0,  174,    2, 0x06 /* Public */,
      10,    1,  175,    2, 0x06 /* Public */,
      13,    0,  178,    2, 0x06 /* Public */,
      14,    0,  179,    2, 0x06 /* Public */,
      15,    0,  180,    2, 0x06 /* Public */,
      16,    0,  181,    2, 0x06 /* Public */,
      17,    0,  182,    2, 0x06 /* Public */,
      18,    0,  183,    2, 0x06 /* Public */,
      19,    0,  184,    2, 0x06 /* Public */,
      20,    1,  185,    2, 0x06 /* Public */,
      22,    0,  188,    2, 0x06 /* Public */,
      23,    0,  189,    2, 0x06 /* Public */,
      24,    0,  190,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    1,  191,    2, 0x0a /* Public */,
      27,    1,  194,    2, 0x0a /* Public */,
      28,    1,  197,    2, 0x0a /* Public */,
      30,    1,  200,    2, 0x0a /* Public */,
      30,    0,  203,    2, 0x2a /* Public | MethodCloned */,
      31,    0,  204,    2, 0x0a /* Public */,
      32,    1,  205,    2, 0x0a /* Public */,
      35,    1,  208,    2, 0x0a /* Public */,
      36,    1,  211,    2, 0x0a /* Public */,
      38,    1,  214,    2, 0x0a /* Public */,
      41,    1,  217,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, QMetaType::QString,   37,

 // properties: name, type, flags
      42, QMetaType::QString, 0x00495103,
      43, QMetaType::Int, 0x00495103,
      44, 0x80000000 | 45, 0x0049510b,
      46, 0x80000000 | 47, 0x0049510b,

 // properties: notify_signal_id
       1,
      15,
      16,
       2,

 // enums: name, flags, count, data
      48, 0x0,    3,  252,
      52, 0x1,    3,  258,
      53, 0x0,   14,  264,
      68, 0x1,   14,  292,

 // enum data: key, value
      49, uint(QgsMapLayer::Identifiable),
      50, uint(QgsMapLayer::Removable),
      51, uint(QgsMapLayer::Searchable),
      49, uint(QgsMapLayer::Identifiable),
      50, uint(QgsMapLayer::Removable),
      51, uint(QgsMapLayer::Searchable),
      54, uint(QgsMapLayer::LayerConfiguration),
      55, uint(QgsMapLayer::Symbology),
      56, uint(QgsMapLayer::Symbology3D),
      57, uint(QgsMapLayer::Labeling),
      58, uint(QgsMapLayer::Fields),
      59, uint(QgsMapLayer::Forms),
      60, uint(QgsMapLayer::Actions),
      61, uint(QgsMapLayer::MapTips),
      62, uint(QgsMapLayer::Diagrams),
      63, uint(QgsMapLayer::AttributeTable),
      64, uint(QgsMapLayer::Rendering),
      65, uint(QgsMapLayer::CustomProperties),
      66, uint(QgsMapLayer::GeometryOptions),
      67, uint(QgsMapLayer::AllStyleCategories),
      54, uint(QgsMapLayer::LayerConfiguration),
      55, uint(QgsMapLayer::Symbology),
      56, uint(QgsMapLayer::Symbology3D),
      57, uint(QgsMapLayer::Labeling),
      58, uint(QgsMapLayer::Fields),
      59, uint(QgsMapLayer::Forms),
      60, uint(QgsMapLayer::Actions),
      61, uint(QgsMapLayer::MapTips),
      62, uint(QgsMapLayer::Diagrams),
      63, uint(QgsMapLayer::AttributeTable),
      64, uint(QgsMapLayer::Rendering),
      65, uint(QgsMapLayer::CustomProperties),
      66, uint(QgsMapLayer::GeometryOptions),
      67, uint(QgsMapLayer::AllStyleCategories),

       0        // eod
};

void QgsMapLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapLayer *_t = static_cast<QgsMapLayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->crsChanged(); break;
        case 3: _t->repaintRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->repaintRequested(); break;
        case 5: _t->recalculateExtents(); break;
        case 6: _t->dataChanged(); break;
        case 7: _t->blendModeChanged((*reinterpret_cast< QPainter::CompositionMode(*)>(_a[1]))); break;
        case 8: _t->rendererChanged(); break;
        case 9: _t->styleChanged(); break;
        case 10: _t->legendChanged(); break;
        case 11: _t->renderer3DChanged(); break;
        case 12: _t->configChanged(); break;
        case 13: _t->dependenciesChanged(); break;
        case 14: _t->willBeDeleted(); break;
        case 15: _t->autoRefreshIntervalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->metadataChanged(); break;
        case 17: _t->flagsChanged(); break;
        case 18: _t->dataSourceChanged(); break;
        case 19: _t->setMinimumScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->setMaximumScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->setScaleBasedVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->triggerRepaint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->triggerRepaint(); break;
        case 24: _t->emitStyleChanged(); break;
        case 25: { bool _r = _t->setDependencies((*reinterpret_cast< const QSet<QgsMapLayerDependency>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->setRefreshOnNotifyEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->setRefreshOnNofifyMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->setTransformContext((*reinterpret_cast< const QgsCoordinateTransformContext(*)>(_a[1]))); break;
        case 29: _t->onNotifiedTriggerRepaint((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 28:
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
            typedef void (QgsMapLayer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::crsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::repaintRequested)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::recalculateExtents)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::dataChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)(QPainter::CompositionMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::blendModeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::rendererChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::styleChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::legendChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::renderer3DChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::configChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::dependenciesChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::willBeDeleted)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::autoRefreshIntervalChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::metadataChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::flagsChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayer::dataSourceChanged)) {
                *result = 18;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCoordinateReferenceSystem >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsMapLayer *_t = static_cast<QgsMapLayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->autoRefreshInterval(); break;
        case 2: *reinterpret_cast< QgsLayerMetadata*>(_v) = _t->metadata(); break;
        case 3: *reinterpret_cast< QgsCoordinateReferenceSystem*>(_v) = _t->crs(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsMapLayer *_t = static_cast<QgsMapLayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAutoRefreshInterval(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMetadata(*reinterpret_cast< QgsLayerMetadata*>(_v)); break;
        case 3: _t->setCrs(*reinterpret_cast< QgsCoordinateReferenceSystem*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsMapLayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapLayer.data,
      qt_meta_data_QgsMapLayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsMapLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsMapLayer::statusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapLayer::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsMapLayer::crsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsMapLayer::repaintRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void QgsMapLayer::recalculateExtents()const
{
    QMetaObject::activate(const_cast< QgsMapLayer *>(this), &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QgsMapLayer::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QgsMapLayer::blendModeChanged(QPainter::CompositionMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsMapLayer::rendererChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QgsMapLayer::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QgsMapLayer::legendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QgsMapLayer::renderer3DChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QgsMapLayer::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QgsMapLayer::dependenciesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QgsMapLayer::willBeDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QgsMapLayer::autoRefreshIntervalChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QgsMapLayer::metadataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QgsMapLayer::flagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QgsMapLayer::dataSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
