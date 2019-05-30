/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutlegendwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutlegendwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutlegendwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutLegendWidget_t {
    QByteArrayData data[61];
    char stringdata0[1471];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutLegendWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutLegendWidget_t qt_meta_stringdata_QgsLayoutLegendWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsLayoutLegendWidget"
QT_MOC_LITERAL(1, 22, 29), // "mWrapCharLineEdit_textChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 4), // "text"
QT_MOC_LITERAL(4, 58, 26), // "mTitleLineEdit_textChanged"
QT_MOC_LITERAL(5, 85, 36), // "mTitleAlignCombo_currentIndex..."
QT_MOC_LITERAL(6, 122, 5), // "index"
QT_MOC_LITERAL(7, 128, 32), // "mColumnCountSpinBox_valueChanged"
QT_MOC_LITERAL(8, 161, 1), // "c"
QT_MOC_LITERAL(9, 163, 27), // "mSplitLayerCheckBox_toggled"
QT_MOC_LITERAL(10, 191, 7), // "checked"
QT_MOC_LITERAL(11, 199, 33), // "mEqualColumnWidthCheckBox_tog..."
QT_MOC_LITERAL(12, 233, 32), // "mSymbolWidthSpinBox_valueChanged"
QT_MOC_LITERAL(13, 266, 1), // "d"
QT_MOC_LITERAL(14, 268, 33), // "mSymbolHeightSpinBox_valueCha..."
QT_MOC_LITERAL(15, 302, 35), // "mWmsLegendWidthSpinBox_valueC..."
QT_MOC_LITERAL(16, 338, 36), // "mWmsLegendHeightSpinBox_value..."
QT_MOC_LITERAL(17, 375, 37), // "mTitleSpaceBottomSpinBox_valu..."
QT_MOC_LITERAL(18, 413, 31), // "mGroupSpaceSpinBox_valueChanged"
QT_MOC_LITERAL(19, 445, 31), // "mLayerSpaceSpinBox_valueChanged"
QT_MOC_LITERAL(20, 477, 32), // "mSymbolSpaceSpinBox_valueChanged"
QT_MOC_LITERAL(21, 510, 35), // "mIconLabelSpaceSpinBox_valueC..."
QT_MOC_LITERAL(22, 546, 29), // "mFontColorButton_colorChanged"
QT_MOC_LITERAL(23, 576, 12), // "newFontColor"
QT_MOC_LITERAL(24, 589, 29), // "mBoxSpaceSpinBox_valueChanged"
QT_MOC_LITERAL(25, 619, 32), // "mColumnSpaceSpinBox_valueChanged"
QT_MOC_LITERAL(26, 652, 32), // "mLineSpacingSpinBox_valueChanged"
QT_MOC_LITERAL(27, 685, 32), // "mCheckBoxAutoUpdate_stateChanged"
QT_MOC_LITERAL(28, 718, 5), // "state"
QT_MOC_LITERAL(29, 724, 18), // "composerMapChanged"
QT_MOC_LITERAL(30, 743, 14), // "QgsLayoutItem*"
QT_MOC_LITERAL(31, 758, 4), // "item"
QT_MOC_LITERAL(32, 763, 31), // "mCheckboxResizeContents_toggled"
QT_MOC_LITERAL(33, 795, 29), // "mRasterStrokeGroupBox_toggled"
QT_MOC_LITERAL(34, 825, 38), // "mRasterStrokeWidthSpinBox_val..."
QT_MOC_LITERAL(35, 864, 37), // "mRasterStrokeColorButton_colo..."
QT_MOC_LITERAL(36, 902, 8), // "newColor"
QT_MOC_LITERAL(37, 911, 27), // "mMoveDownToolButton_clicked"
QT_MOC_LITERAL(38, 939, 25), // "mMoveUpToolButton_clicked"
QT_MOC_LITERAL(39, 965, 25), // "mRemoveToolButton_clicked"
QT_MOC_LITERAL(40, 991, 22), // "mAddToolButton_clicked"
QT_MOC_LITERAL(41, 1014, 23), // "mEditPushButton_clicked"
QT_MOC_LITERAL(42, 1038, 24), // "mCountToolButton_clicked"
QT_MOC_LITERAL(43, 1063, 31), // "mExpressionFilterButton_toggled"
QT_MOC_LITERAL(44, 1095, 30), // "mFilterByMapToolButton_toggled"
QT_MOC_LITERAL(45, 1126, 24), // "resetLayerNodeToDefaults"
QT_MOC_LITERAL(46, 1151, 28), // "mUpdateAllPushButton_clicked"
QT_MOC_LITERAL(47, 1180, 27), // "mAddGroupToolButton_clicked"
QT_MOC_LITERAL(48, 1208, 36), // "mFilterLegendByAtlasCheckBox_..."
QT_MOC_LITERAL(49, 1245, 15), // "selectedChanged"
QT_MOC_LITERAL(50, 1261, 7), // "current"
QT_MOC_LITERAL(51, 1269, 8), // "previous"
QT_MOC_LITERAL(52, 1278, 29), // "setCurrentNodeStyleFromAction"
QT_MOC_LITERAL(53, 1308, 20), // "setLegendMapViewData"
QT_MOC_LITERAL(54, 1329, 14), // "setGuiElements"
QT_MOC_LITERAL(55, 1344, 31), // "updateFilterLegendByAtlasButton"
QT_MOC_LITERAL(56, 1376, 27), // "mItemTreeView_doubleClicked"
QT_MOC_LITERAL(57, 1404, 16), // "titleFontChanged"
QT_MOC_LITERAL(58, 1421, 16), // "groupFontChanged"
QT_MOC_LITERAL(59, 1438, 16), // "layerFontChanged"
QT_MOC_LITERAL(60, 1455, 15) // "itemFontChanged"

    },
    "QgsLayoutLegendWidget\0"
    "mWrapCharLineEdit_textChanged\0\0text\0"
    "mTitleLineEdit_textChanged\0"
    "mTitleAlignCombo_currentIndexChanged\0"
    "index\0mColumnCountSpinBox_valueChanged\0"
    "c\0mSplitLayerCheckBox_toggled\0checked\0"
    "mEqualColumnWidthCheckBox_toggled\0"
    "mSymbolWidthSpinBox_valueChanged\0d\0"
    "mSymbolHeightSpinBox_valueChanged\0"
    "mWmsLegendWidthSpinBox_valueChanged\0"
    "mWmsLegendHeightSpinBox_valueChanged\0"
    "mTitleSpaceBottomSpinBox_valueChanged\0"
    "mGroupSpaceSpinBox_valueChanged\0"
    "mLayerSpaceSpinBox_valueChanged\0"
    "mSymbolSpaceSpinBox_valueChanged\0"
    "mIconLabelSpaceSpinBox_valueChanged\0"
    "mFontColorButton_colorChanged\0"
    "newFontColor\0mBoxSpaceSpinBox_valueChanged\0"
    "mColumnSpaceSpinBox_valueChanged\0"
    "mLineSpacingSpinBox_valueChanged\0"
    "mCheckBoxAutoUpdate_stateChanged\0state\0"
    "composerMapChanged\0QgsLayoutItem*\0"
    "item\0mCheckboxResizeContents_toggled\0"
    "mRasterStrokeGroupBox_toggled\0"
    "mRasterStrokeWidthSpinBox_valueChanged\0"
    "mRasterStrokeColorButton_colorChanged\0"
    "newColor\0mMoveDownToolButton_clicked\0"
    "mMoveUpToolButton_clicked\0"
    "mRemoveToolButton_clicked\0"
    "mAddToolButton_clicked\0mEditPushButton_clicked\0"
    "mCountToolButton_clicked\0"
    "mExpressionFilterButton_toggled\0"
    "mFilterByMapToolButton_toggled\0"
    "resetLayerNodeToDefaults\0"
    "mUpdateAllPushButton_clicked\0"
    "mAddGroupToolButton_clicked\0"
    "mFilterLegendByAtlasCheckBox_toggled\0"
    "selectedChanged\0current\0previous\0"
    "setCurrentNodeStyleFromAction\0"
    "setLegendMapViewData\0setGuiElements\0"
    "updateFilterLegendByAtlasButton\0"
    "mItemTreeView_doubleClicked\0"
    "titleFontChanged\0groupFontChanged\0"
    "layerFontChanged\0itemFontChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutLegendWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  249,    2, 0x0a /* Public */,
       4,    1,  252,    2, 0x0a /* Public */,
       5,    1,  255,    2, 0x0a /* Public */,
       7,    1,  258,    2, 0x0a /* Public */,
       9,    1,  261,    2, 0x0a /* Public */,
      11,    1,  264,    2, 0x0a /* Public */,
      12,    1,  267,    2, 0x0a /* Public */,
      14,    1,  270,    2, 0x0a /* Public */,
      15,    1,  273,    2, 0x0a /* Public */,
      16,    1,  276,    2, 0x0a /* Public */,
      17,    1,  279,    2, 0x0a /* Public */,
      18,    1,  282,    2, 0x0a /* Public */,
      19,    1,  285,    2, 0x0a /* Public */,
      20,    1,  288,    2, 0x0a /* Public */,
      21,    1,  291,    2, 0x0a /* Public */,
      22,    1,  294,    2, 0x0a /* Public */,
      24,    1,  297,    2, 0x0a /* Public */,
      25,    1,  300,    2, 0x0a /* Public */,
      26,    1,  303,    2, 0x0a /* Public */,
      27,    1,  306,    2, 0x0a /* Public */,
      29,    1,  309,    2, 0x0a /* Public */,
      32,    1,  312,    2, 0x0a /* Public */,
      33,    1,  315,    2, 0x0a /* Public */,
      34,    1,  318,    2, 0x0a /* Public */,
      35,    1,  321,    2, 0x0a /* Public */,
      37,    0,  324,    2, 0x0a /* Public */,
      38,    0,  325,    2, 0x0a /* Public */,
      39,    0,  326,    2, 0x0a /* Public */,
      40,    0,  327,    2, 0x0a /* Public */,
      41,    0,  328,    2, 0x0a /* Public */,
      42,    1,  329,    2, 0x0a /* Public */,
      43,    1,  332,    2, 0x0a /* Public */,
      44,    1,  335,    2, 0x0a /* Public */,
      45,    0,  338,    2, 0x0a /* Public */,
      46,    0,  339,    2, 0x0a /* Public */,
      47,    0,  340,    2, 0x0a /* Public */,
      48,    1,  341,    2, 0x0a /* Public */,
      49,    2,  344,    2, 0x0a /* Public */,
      52,    0,  349,    2, 0x0a /* Public */,
      53,    0,  350,    2, 0x0a /* Public */,
      54,    0,  351,    2, 0x08 /* Private */,
      55,    0,  352,    2, 0x08 /* Private */,
      56,    1,  353,    2, 0x08 /* Private */,
      57,    0,  356,    2, 0x08 /* Private */,
      58,    0,  357,    2, 0x08 /* Private */,
      59,    0,  358,    2, 0x08 /* Private */,
      60,    0,  359,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::QColor,   23,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::QColor,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   50,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutLegendWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutLegendWidget *_t = static_cast<QgsLayoutLegendWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mWrapCharLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->mTitleLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->mTitleAlignCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->mColumnCountSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->mSplitLayerCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->mEqualColumnWidthCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->mSymbolWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->mSymbolHeightSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->mWmsLegendWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->mWmsLegendHeightSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->mTitleSpaceBottomSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->mGroupSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->mLayerSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->mSymbolSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->mIconLabelSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->mFontColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 16: _t->mBoxSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->mColumnSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->mLineSpacingSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->mCheckBoxAutoUpdate_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->composerMapChanged((*reinterpret_cast< QgsLayoutItem*(*)>(_a[1]))); break;
        case 21: _t->mCheckboxResizeContents_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->mRasterStrokeGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->mRasterStrokeWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->mRasterStrokeColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 25: _t->mMoveDownToolButton_clicked(); break;
        case 26: _t->mMoveUpToolButton_clicked(); break;
        case 27: _t->mRemoveToolButton_clicked(); break;
        case 28: _t->mAddToolButton_clicked(); break;
        case 29: _t->mEditPushButton_clicked(); break;
        case 30: _t->mCountToolButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->mExpressionFilterButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->mFilterByMapToolButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->resetLayerNodeToDefaults(); break;
        case 34: _t->mUpdateAllPushButton_clicked(); break;
        case 35: _t->mAddGroupToolButton_clicked(); break;
        case 36: _t->mFilterLegendByAtlasCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->selectedChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 38: _t->setCurrentNodeStyleFromAction(); break;
        case 39: _t->setLegendMapViewData(); break;
        case 40: _t->setGuiElements(); break;
        case 41: _t->updateFilterLegendByAtlasButton(); break;
        case 42: _t->mItemTreeView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 43: _t->titleFontChanged(); break;
        case 44: _t->groupFontChanged(); break;
        case 45: _t->layerFontChanged(); break;
        case 46: _t->itemFontChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QgsLayoutLegendWidget::staticMetaObject = {
    { &QgsLayoutItemBaseWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutLegendWidget.data,
      qt_meta_data_QgsLayoutLegendWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutLegendWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutLegendWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutLegendWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItemBaseWidget::qt_metacast(_clname);
}

int QgsLayoutLegendWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutItemBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 47;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
