/****************************************************************************
** Meta object code from reading C++ file 'qgstextformatwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgstextformatwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstextformatwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTextFormatWidget_t {
    QByteArrayData data[63];
    char stringdata0[1327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTextFormatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTextFormatWidget_t qt_meta_stringdata_QgsTextFormatWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsTextFormatWidget"
QT_MOC_LITERAL(1, 20, 13), // "widgetChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "setDockMode"
QT_MOC_LITERAL(4, 47, 7), // "enabled"
QT_MOC_LITERAL(5, 55, 26), // "updateLinePlacementOptions"
QT_MOC_LITERAL(6, 82, 22), // "updatePlacementWidgets"
QT_MOC_LITERAL(7, 105, 35), // "optionsStackedWidget_CurrentC..."
QT_MOC_LITERAL(8, 141, 4), // "indx"
QT_MOC_LITERAL(9, 146, 20), // "showBackgroundRadius"
QT_MOC_LITERAL(10, 167, 4), // "show"
QT_MOC_LITERAL(11, 172, 22), // "showBackgroundPenStyle"
QT_MOC_LITERAL(12, 195, 33), // "mShapeSVGPathLineEdit_textCha..."
QT_MOC_LITERAL(13, 229, 4), // "text"
QT_MOC_LITERAL(14, 234, 22), // "onSubstitutionsChanged"
QT_MOC_LITERAL(15, 257, 30), // "QgsStringReplacementCollection"
QT_MOC_LITERAL(16, 288, 13), // "substitutions"
QT_MOC_LITERAL(17, 302, 19), // "previewScaleChanged"
QT_MOC_LITERAL(18, 322, 5), // "scale"
QT_MOC_LITERAL(19, 328, 29), // "mFontSizeSpinBox_valueChanged"
QT_MOC_LITERAL(20, 358, 1), // "d"
QT_MOC_LITERAL(21, 360, 41), // "mFontCapitalsComboBox_current..."
QT_MOC_LITERAL(22, 402, 5), // "index"
QT_MOC_LITERAL(23, 408, 35), // "mFontFamilyCmbBx_currentFontC..."
QT_MOC_LITERAL(24, 444, 1), // "f"
QT_MOC_LITERAL(25, 446, 38), // "mFontStyleComboBox_currentInd..."
QT_MOC_LITERAL(26, 485, 25), // "mFontUnderlineBtn_toggled"
QT_MOC_LITERAL(27, 511, 3), // "ckd"
QT_MOC_LITERAL(28, 515, 29), // "mFontStrikethroughBtn_toggled"
QT_MOC_LITERAL(29, 545, 36), // "mFontWordSpacingSpinBox_value..."
QT_MOC_LITERAL(30, 582, 7), // "spacing"
QT_MOC_LITERAL(31, 590, 38), // "mFontLetterSpacingSpinBox_val..."
QT_MOC_LITERAL(32, 629, 27), // "mFontSizeUnitWidget_changed"
QT_MOC_LITERAL(33, 657, 33), // "mFontMinPixelSpinBox_valueCha..."
QT_MOC_LITERAL(34, 691, 2), // "px"
QT_MOC_LITERAL(35, 694, 33), // "mFontMaxPixelSpinBox_valueCha..."
QT_MOC_LITERAL(36, 728, 25), // "mBufferUnitWidget_changed"
QT_MOC_LITERAL(37, 754, 22), // "mCoordXDDBtn_activated"
QT_MOC_LITERAL(38, 777, 6), // "active"
QT_MOC_LITERAL(39, 784, 22), // "mCoordYDDBtn_activated"
QT_MOC_LITERAL(40, 807, 35), // "mShapeTypeCmbBx_currentIndexC..."
QT_MOC_LITERAL(41, 843, 39), // "mShapeRotationCmbBx_currentIn..."
QT_MOC_LITERAL(42, 883, 26), // "mShapeSVGParamsBtn_clicked"
QT_MOC_LITERAL(43, 910, 28), // "mShapeSVGSelectorBtn_clicked"
QT_MOC_LITERAL(44, 939, 28), // "mPreviewTextEdit_textChanged"
QT_MOC_LITERAL(45, 968, 23), // "mPreviewTextBtn_clicked"
QT_MOC_LITERAL(46, 992, 34), // "mPreviewBackgroundBtn_colorCh..."
QT_MOC_LITERAL(47, 1027, 5), // "color"
QT_MOC_LITERAL(48, 1033, 30), // "mDirectSymbLeftToolBtn_clicked"
QT_MOC_LITERAL(49, 1064, 31), // "mDirectSymbRightToolBtn_clicked"
QT_MOC_LITERAL(50, 1096, 22), // "mChkNoObstacle_toggled"
QT_MOC_LITERAL(51, 1119, 35), // "chkLineOrientationDependent_t..."
QT_MOC_LITERAL(52, 1155, 39), // "mToolButtonConfigureSubstitut..."
QT_MOC_LITERAL(53, 1195, 14), // "collapseSample"
QT_MOC_LITERAL(54, 1210, 8), // "collapse"
QT_MOC_LITERAL(55, 1219, 15), // "changeTextColor"
QT_MOC_LITERAL(56, 1235, 17), // "changeBufferColor"
QT_MOC_LITERAL(57, 1253, 13), // "updatePreview"
QT_MOC_LITERAL(58, 1267, 13), // "scrollPreview"
QT_MOC_LITERAL(59, 1281, 16), // "updateSvgWidgets"
QT_MOC_LITERAL(60, 1298, 7), // "svgPath"
QT_MOC_LITERAL(61, 1306, 6), // "format"
QT_MOC_LITERAL(62, 1313, 13) // "QgsTextFormat"

    },
    "QgsTextFormatWidget\0widgetChanged\0\0"
    "setDockMode\0enabled\0updateLinePlacementOptions\0"
    "updatePlacementWidgets\0"
    "optionsStackedWidget_CurrentChanged\0"
    "indx\0showBackgroundRadius\0show\0"
    "showBackgroundPenStyle\0"
    "mShapeSVGPathLineEdit_textChanged\0"
    "text\0onSubstitutionsChanged\0"
    "QgsStringReplacementCollection\0"
    "substitutions\0previewScaleChanged\0"
    "scale\0mFontSizeSpinBox_valueChanged\0"
    "d\0mFontCapitalsComboBox_currentIndexChanged\0"
    "index\0mFontFamilyCmbBx_currentFontChanged\0"
    "f\0mFontStyleComboBox_currentIndexChanged\0"
    "mFontUnderlineBtn_toggled\0ckd\0"
    "mFontStrikethroughBtn_toggled\0"
    "mFontWordSpacingSpinBox_valueChanged\0"
    "spacing\0mFontLetterSpacingSpinBox_valueChanged\0"
    "mFontSizeUnitWidget_changed\0"
    "mFontMinPixelSpinBox_valueChanged\0px\0"
    "mFontMaxPixelSpinBox_valueChanged\0"
    "mBufferUnitWidget_changed\0"
    "mCoordXDDBtn_activated\0active\0"
    "mCoordYDDBtn_activated\0"
    "mShapeTypeCmbBx_currentIndexChanged\0"
    "mShapeRotationCmbBx_currentIndexChanged\0"
    "mShapeSVGParamsBtn_clicked\0"
    "mShapeSVGSelectorBtn_clicked\0"
    "mPreviewTextEdit_textChanged\0"
    "mPreviewTextBtn_clicked\0"
    "mPreviewBackgroundBtn_colorChanged\0"
    "color\0mDirectSymbLeftToolBtn_clicked\0"
    "mDirectSymbRightToolBtn_clicked\0"
    "mChkNoObstacle_toggled\0"
    "chkLineOrientationDependent_toggled\0"
    "mToolButtonConfigureSubstitutes_clicked\0"
    "collapseSample\0collapse\0changeTextColor\0"
    "changeBufferColor\0updatePreview\0"
    "scrollPreview\0updateSvgWidgets\0svgPath\0"
    "format\0QgsTextFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTextFormatWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       1,  324, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  224,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  225,    2, 0x0a /* Public */,
       5,    0,  228,    2, 0x09 /* Protected */,
       6,    0,  229,    2, 0x09 /* Protected */,
       7,    1,  230,    2, 0x08 /* Private */,
       9,    1,  233,    2, 0x08 /* Private */,
      11,    1,  236,    2, 0x08 /* Private */,
      12,    1,  239,    2, 0x08 /* Private */,
      14,    1,  242,    2, 0x08 /* Private */,
      17,    1,  245,    2, 0x08 /* Private */,
      19,    1,  248,    2, 0x08 /* Private */,
      21,    1,  251,    2, 0x08 /* Private */,
      23,    1,  254,    2, 0x08 /* Private */,
      25,    1,  257,    2, 0x08 /* Private */,
      26,    1,  260,    2, 0x08 /* Private */,
      28,    1,  263,    2, 0x08 /* Private */,
      29,    1,  266,    2, 0x08 /* Private */,
      31,    1,  269,    2, 0x08 /* Private */,
      32,    0,  272,    2, 0x08 /* Private */,
      33,    1,  273,    2, 0x08 /* Private */,
      35,    1,  276,    2, 0x08 /* Private */,
      36,    0,  279,    2, 0x08 /* Private */,
      37,    1,  280,    2, 0x08 /* Private */,
      39,    1,  283,    2, 0x08 /* Private */,
      40,    1,  286,    2, 0x08 /* Private */,
      41,    1,  289,    2, 0x08 /* Private */,
      42,    0,  292,    2, 0x08 /* Private */,
      43,    0,  293,    2, 0x08 /* Private */,
      44,    1,  294,    2, 0x08 /* Private */,
      45,    0,  297,    2, 0x08 /* Private */,
      46,    1,  298,    2, 0x08 /* Private */,
      48,    0,  301,    2, 0x08 /* Private */,
      49,    0,  302,    2, 0x08 /* Private */,
      50,    1,  303,    2, 0x08 /* Private */,
      51,    1,  306,    2, 0x08 /* Private */,
      52,    0,  309,    2, 0x08 /* Private */,
      53,    1,  310,    2, 0x08 /* Private */,
      55,    1,  313,    2, 0x08 /* Private */,
      56,    1,  316,    2, 0x08 /* Private */,
      57,    0,  319,    2, 0x08 /* Private */,
      58,    0,  320,    2, 0x08 /* Private */,
      59,    1,  321,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::QFont,   24,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::QColor,   47,
    QMetaType::Void, QMetaType::QColor,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   60,

 // properties: name, type, flags
      61, 0x80000000 | 62, 0x00095009,

       0        // eod
};

void QgsTextFormatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTextFormatWidget *_t = static_cast<QgsTextFormatWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetChanged(); break;
        case 1: _t->setDockMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateLinePlacementOptions(); break;
        case 3: _t->updatePlacementWidgets(); break;
        case 4: _t->optionsStackedWidget_CurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showBackgroundRadius((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showBackgroundPenStyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->mShapeSVGPathLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onSubstitutionsChanged((*reinterpret_cast< const QgsStringReplacementCollection(*)>(_a[1]))); break;
        case 9: _t->previewScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->mFontSizeSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->mFontCapitalsComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->mFontFamilyCmbBx_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 13: _t->mFontStyleComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->mFontUnderlineBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->mFontStrikethroughBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->mFontWordSpacingSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->mFontLetterSpacingSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->mFontSizeUnitWidget_changed(); break;
        case 19: _t->mFontMinPixelSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->mFontMaxPixelSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->mBufferUnitWidget_changed(); break;
        case 22: _t->mCoordXDDBtn_activated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->mCoordYDDBtn_activated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->mShapeTypeCmbBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->mShapeRotationCmbBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->mShapeSVGParamsBtn_clicked(); break;
        case 27: _t->mShapeSVGSelectorBtn_clicked(); break;
        case 28: _t->mPreviewTextEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->mPreviewTextBtn_clicked(); break;
        case 30: _t->mPreviewBackgroundBtn_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 31: _t->mDirectSymbLeftToolBtn_clicked(); break;
        case 32: _t->mDirectSymbRightToolBtn_clicked(); break;
        case 33: _t->mChkNoObstacle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->chkLineOrientationDependent_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->mToolButtonConfigureSubstitutes_clicked(); break;
        case 36: _t->collapseSample((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->changeTextColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 38: _t->changeBufferColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 39: _t->updatePreview(); break;
        case 40: _t->scrollPreview(); break;
        case 41: _t->updateSvgWidgets((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsTextFormatWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTextFormatWidget::widgetChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsTextFormatWidget *_t = static_cast<QgsTextFormatWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsTextFormat*>(_v) = _t->format(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsTextFormatWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsTextFormatWidget.data,
      qt_meta_data_QgsTextFormatWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTextFormatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTextFormatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTextFormatWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::QgsTextFormatWidgetBase"))
        return static_cast< Ui::QgsTextFormatWidgetBase*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsTextFormatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsTextFormatWidget::widgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsTextFormatDialog_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTextFormatDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTextFormatDialog_t qt_meta_stringdata_QgsTextFormatDialog = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QgsTextFormatDialog"

    },
    "QgsTextFormatDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTextFormatDialog[] = {

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

void QgsTextFormatDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsTextFormatDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsTextFormatDialog.data,
      qt_meta_data_QgsTextFormatDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTextFormatDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTextFormatDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTextFormatDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsTextFormatDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsTextFormatPanelWidget_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTextFormatPanelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTextFormatPanelWidget_t qt_meta_stringdata_QgsTextFormatPanelWidget = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QgsTextFormatPanelWidget"

    },
    "QgsTextFormatPanelWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTextFormatPanelWidget[] = {

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

void QgsTextFormatPanelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsTextFormatPanelWidget::staticMetaObject = {
    { &QgsPanelWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsTextFormatPanelWidget.data,
      qt_meta_data_QgsTextFormatPanelWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTextFormatPanelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTextFormatPanelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTextFormatPanelWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidgetWrapper::qt_metacast(_clname);
}

int QgsTextFormatPanelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidgetWrapper::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
