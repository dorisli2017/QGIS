/****************************************************************************
** Meta object code from reading C++ file 'qgsoptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsoptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsOptions_t {
    QByteArrayData data[74];
    char stringdata0[1296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsOptions_t qt_meta_stringdata_QgsOptions = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QgsOptions"
QT_MOC_LITERAL(1, 11, 28), // "cbxProjectDefaultNew_toggled"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "checked"
QT_MOC_LITERAL(4, 49, 24), // "setCurrentProjectDefault"
QT_MOC_LITERAL(5, 74, 19), // "resetProjectDefault"
QT_MOC_LITERAL(6, 94, 20), // "browseTemplateFolder"
QT_MOC_LITERAL(7, 115, 19), // "resetTemplateFolder"
QT_MOC_LITERAL(8, 135, 29), // "leProjectGlobalCrs_crsChanged"
QT_MOC_LITERAL(9, 165, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(10, 194, 3), // "crs"
QT_MOC_LITERAL(11, 198, 27), // "leLayerGlobalCrs_crsChanged"
QT_MOC_LITERAL(12, 226, 32), // "lstGdalDrivers_itemDoubleClicked"
QT_MOC_LITERAL(13, 259, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(14, 276, 4), // "item"
QT_MOC_LITERAL(15, 281, 6), // "column"
QT_MOC_LITERAL(16, 288, 17), // "editCreateOptions"
QT_MOC_LITERAL(17, 306, 19), // "editPyramidsOptions"
QT_MOC_LITERAL(18, 326, 14), // "editGdalDriver"
QT_MOC_LITERAL(19, 341, 10), // "driverName"
QT_MOC_LITERAL(20, 352, 11), // "saveOptions"
QT_MOC_LITERAL(21, 364, 13), // "rejectOptions"
QT_MOC_LITERAL(22, 378, 15), // "iconSizeChanged"
QT_MOC_LITERAL(23, 394, 8), // "iconSize"
QT_MOC_LITERAL(24, 403, 14), // "uiThemeChanged"
QT_MOC_LITERAL(25, 418, 5), // "theme"
QT_MOC_LITERAL(26, 424, 41), // "mProjectOnLaunchCmbBx_current..."
QT_MOC_LITERAL(27, 466, 4), // "indx"
QT_MOC_LITERAL(28, 471, 21), // "selectProjectOnLaunch"
QT_MOC_LITERAL(29, 493, 10), // "newVisible"
QT_MOC_LITERAL(30, 504, 25), // "spinFontSize_valueChanged"
QT_MOC_LITERAL(31, 530, 8), // "fontSize"
QT_MOC_LITERAL(32, 539, 27), // "mFontFamilyRadioQt_released"
QT_MOC_LITERAL(33, 567, 31), // "mFontFamilyRadioCustom_released"
QT_MOC_LITERAL(34, 599, 38), // "mFontFamilyComboBox_currentFo..."
QT_MOC_LITERAL(35, 638, 4), // "font"
QT_MOC_LITERAL(36, 643, 38), // "mProxyTypeComboBox_currentInd..."
QT_MOC_LITERAL(37, 682, 3), // "idx"
QT_MOC_LITERAL(38, 686, 14), // "addExcludedUrl"
QT_MOC_LITERAL(39, 701, 17), // "removeExcludedUrl"
QT_MOC_LITERAL(40, 719, 25), // "restoreDefaultWindowState"
QT_MOC_LITERAL(41, 745, 29), // "mCustomVariablesChkBx_toggled"
QT_MOC_LITERAL(42, 775, 4), // "chkd"
QT_MOC_LITERAL(43, 780, 17), // "addCustomVariable"
QT_MOC_LITERAL(44, 798, 20), // "removeCustomVariable"
QT_MOC_LITERAL(45, 819, 34), // "mCurrentVariablesQGISChxBx_to..."
QT_MOC_LITERAL(46, 854, 12), // "qgisSpecific"
QT_MOC_LITERAL(47, 867, 13), // "addPluginPath"
QT_MOC_LITERAL(48, 881, 16), // "removePluginPath"
QT_MOC_LITERAL(49, 898, 11), // "addHelpPath"
QT_MOC_LITERAL(50, 910, 14), // "removeHelpPath"
QT_MOC_LITERAL(51, 925, 14), // "moveHelpPathUp"
QT_MOC_LITERAL(52, 940, 16), // "moveHelpPathDown"
QT_MOC_LITERAL(53, 957, 15), // "addTemplatePath"
QT_MOC_LITERAL(54, 973, 18), // "removeTemplatePath"
QT_MOC_LITERAL(55, 992, 10), // "addSVGPath"
QT_MOC_LITERAL(56, 1003, 13), // "removeSVGPath"
QT_MOC_LITERAL(57, 1017, 16), // "removeHiddenPath"
QT_MOC_LITERAL(58, 1034, 20), // "browseCacheDirectory"
QT_MOC_LITERAL(59, 1055, 10), // "clearCache"
QT_MOC_LITERAL(60, 1066, 16), // "clearAccessCache"
QT_MOC_LITERAL(61, 1083, 8), // "addScale"
QT_MOC_LITERAL(62, 1092, 11), // "removeScale"
QT_MOC_LITERAL(63, 1104, 25), // "restoreDefaultScaleValues"
QT_MOC_LITERAL(64, 1130, 12), // "importScales"
QT_MOC_LITERAL(65, 1143, 12), // "exportScales"
QT_MOC_LITERAL(66, 1156, 35), // "optionsStackedWidget_CurrentC..."
QT_MOC_LITERAL(67, 1192, 5), // "index"
QT_MOC_LITERAL(68, 1198, 16), // "scaleItemChanged"
QT_MOC_LITERAL(69, 1215, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(70, 1232, 16), // "changedScaleItem"
QT_MOC_LITERAL(71, 1249, 18), // "loadGdalDriverList"
QT_MOC_LITERAL(72, 1268, 18), // "saveGdalDriverList"
QT_MOC_LITERAL(73, 1287, 8) // "addColor"

    },
    "QgsOptions\0cbxProjectDefaultNew_toggled\0"
    "\0checked\0setCurrentProjectDefault\0"
    "resetProjectDefault\0browseTemplateFolder\0"
    "resetTemplateFolder\0leProjectGlobalCrs_crsChanged\0"
    "QgsCoordinateReferenceSystem\0crs\0"
    "leLayerGlobalCrs_crsChanged\0"
    "lstGdalDrivers_itemDoubleClicked\0"
    "QTreeWidgetItem*\0item\0column\0"
    "editCreateOptions\0editPyramidsOptions\0"
    "editGdalDriver\0driverName\0saveOptions\0"
    "rejectOptions\0iconSizeChanged\0iconSize\0"
    "uiThemeChanged\0theme\0"
    "mProjectOnLaunchCmbBx_currentIndexChanged\0"
    "indx\0selectProjectOnLaunch\0newVisible\0"
    "spinFontSize_valueChanged\0fontSize\0"
    "mFontFamilyRadioQt_released\0"
    "mFontFamilyRadioCustom_released\0"
    "mFontFamilyComboBox_currentFontChanged\0"
    "font\0mProxyTypeComboBox_currentIndexChanged\0"
    "idx\0addExcludedUrl\0removeExcludedUrl\0"
    "restoreDefaultWindowState\0"
    "mCustomVariablesChkBx_toggled\0chkd\0"
    "addCustomVariable\0removeCustomVariable\0"
    "mCurrentVariablesQGISChxBx_toggled\0"
    "qgisSpecific\0addPluginPath\0removePluginPath\0"
    "addHelpPath\0removeHelpPath\0moveHelpPathUp\0"
    "moveHelpPathDown\0addTemplatePath\0"
    "removeTemplatePath\0addSVGPath\0"
    "removeSVGPath\0removeHiddenPath\0"
    "browseCacheDirectory\0clearCache\0"
    "clearAccessCache\0addScale\0removeScale\0"
    "restoreDefaultScaleValues\0importScales\0"
    "exportScales\0optionsStackedWidget_CurrentChanged\0"
    "index\0scaleItemChanged\0QListWidgetItem*\0"
    "changedScaleItem\0loadGdalDriverList\0"
    "saveGdalDriverList\0addColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsOptions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  284,    2, 0x0a /* Public */,
       4,    0,  287,    2, 0x0a /* Public */,
       5,    0,  288,    2, 0x0a /* Public */,
       6,    0,  289,    2, 0x0a /* Public */,
       7,    0,  290,    2, 0x0a /* Public */,
       8,    1,  291,    2, 0x0a /* Public */,
      11,    1,  294,    2, 0x0a /* Public */,
      12,    2,  297,    2, 0x0a /* Public */,
      16,    0,  302,    2, 0x0a /* Public */,
      17,    0,  303,    2, 0x0a /* Public */,
      18,    1,  304,    2, 0x0a /* Public */,
      20,    0,  307,    2, 0x0a /* Public */,
      21,    0,  308,    2, 0x0a /* Public */,
      22,    1,  309,    2, 0x0a /* Public */,
      24,    1,  312,    2, 0x0a /* Public */,
      26,    1,  315,    2, 0x0a /* Public */,
      28,    0,  318,    2, 0x0a /* Public */,
      29,    0,  319,    2, 0x0a /* Public */,
      30,    1,  320,    2, 0x0a /* Public */,
      32,    0,  323,    2, 0x0a /* Public */,
      33,    0,  324,    2, 0x0a /* Public */,
      34,    1,  325,    2, 0x0a /* Public */,
      36,    1,  328,    2, 0x0a /* Public */,
      38,    0,  331,    2, 0x0a /* Public */,
      39,    0,  332,    2, 0x0a /* Public */,
      40,    0,  333,    2, 0x0a /* Public */,
      41,    1,  334,    2, 0x0a /* Public */,
      43,    0,  337,    2, 0x0a /* Public */,
      44,    0,  338,    2, 0x0a /* Public */,
      45,    1,  339,    2, 0x0a /* Public */,
      47,    0,  342,    2, 0x0a /* Public */,
      48,    0,  343,    2, 0x0a /* Public */,
      49,    0,  344,    2, 0x0a /* Public */,
      50,    0,  345,    2, 0x0a /* Public */,
      51,    0,  346,    2, 0x0a /* Public */,
      52,    0,  347,    2, 0x0a /* Public */,
      53,    0,  348,    2, 0x0a /* Public */,
      54,    0,  349,    2, 0x0a /* Public */,
      55,    0,  350,    2, 0x0a /* Public */,
      56,    0,  351,    2, 0x0a /* Public */,
      57,    0,  352,    2, 0x0a /* Public */,
      58,    0,  353,    2, 0x0a /* Public */,
      59,    0,  354,    2, 0x0a /* Public */,
      60,    0,  355,    2, 0x0a /* Public */,
      61,    0,  356,    2, 0x0a /* Public */,
      62,    0,  357,    2, 0x0a /* Public */,
      63,    0,  358,    2, 0x0a /* Public */,
      64,    0,  359,    2, 0x0a /* Public */,
      65,    0,  360,    2, 0x0a /* Public */,
      66,    1,  361,    2, 0x0a /* Public */,
      68,    1,  364,    2, 0x0a /* Public */,
      71,    0,  367,    2, 0x0a /* Public */,
      72,    0,  368,    2, 0x0a /* Public */,
      73,    0,  369,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QFont,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
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
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsOptions *_t = static_cast<QgsOptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cbxProjectDefaultNew_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setCurrentProjectDefault(); break;
        case 2: _t->resetProjectDefault(); break;
        case 3: _t->browseTemplateFolder(); break;
        case 4: _t->resetTemplateFolder(); break;
        case 5: _t->leProjectGlobalCrs_crsChanged((*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[1]))); break;
        case 6: _t->leLayerGlobalCrs_crsChanged((*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[1]))); break;
        case 7: _t->lstGdalDrivers_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->editCreateOptions(); break;
        case 9: _t->editPyramidsOptions(); break;
        case 10: _t->editGdalDriver((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->saveOptions(); break;
        case 12: _t->rejectOptions(); break;
        case 13: _t->iconSizeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->uiThemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->mProjectOnLaunchCmbBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->selectProjectOnLaunch(); break;
        case 17: { bool _r = _t->newVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->spinFontSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->mFontFamilyRadioQt_released(); break;
        case 20: _t->mFontFamilyRadioCustom_released(); break;
        case 21: _t->mFontFamilyComboBox_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 22: _t->mProxyTypeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->addExcludedUrl(); break;
        case 24: _t->removeExcludedUrl(); break;
        case 25: _t->restoreDefaultWindowState(); break;
        case 26: _t->mCustomVariablesChkBx_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->addCustomVariable(); break;
        case 28: _t->removeCustomVariable(); break;
        case 29: _t->mCurrentVariablesQGISChxBx_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->addPluginPath(); break;
        case 31: _t->removePluginPath(); break;
        case 32: _t->addHelpPath(); break;
        case 33: _t->removeHelpPath(); break;
        case 34: _t->moveHelpPathUp(); break;
        case 35: _t->moveHelpPathDown(); break;
        case 36: _t->addTemplatePath(); break;
        case 37: _t->removeTemplatePath(); break;
        case 38: _t->addSVGPath(); break;
        case 39: _t->removeSVGPath(); break;
        case 40: _t->removeHiddenPath(); break;
        case 41: _t->browseCacheDirectory(); break;
        case 42: _t->clearCache(); break;
        case 43: _t->clearAccessCache(); break;
        case 44: _t->addScale(); break;
        case 45: _t->removeScale(); break;
        case 46: _t->restoreDefaultScaleValues(); break;
        case 47: _t->importScales(); break;
        case 48: _t->exportScales(); break;
        case 49: _t->optionsStackedWidget_CurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->scaleItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 51: _t->loadGdalDriverList(); break;
        case 52: _t->saveGdalDriverList(); break;
        case 53: _t->addColor(); break;
        default: ;
        }
    }
}

const QMetaObject QgsOptions::staticMetaObject = {
    { &QgsOptionsDialogBase::staticMetaObject, qt_meta_stringdata_QgsOptions.data,
      qt_meta_data_QgsOptions,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsOptions.stringdata0))
        return static_cast<void*>(this);
    return QgsOptionsDialogBase::qt_metacast(_clname);
}

int QgsOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsOptionsDialogBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
