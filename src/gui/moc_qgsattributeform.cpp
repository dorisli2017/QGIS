/****************************************************************************
** Meta object code from reading C++ file 'qgsattributeform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsattributeform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributeform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributeForm_t {
    QByteArrayData data[60];
    char stringdata0[868];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeForm_t qt_meta_stringdata_QgsAttributeForm = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsAttributeForm"
QT_MOC_LITERAL(1, 17, 16), // "attributeChanged"
QT_MOC_LITERAL(2, 34, 17), // "Q_DECL_DEPRECATED"
QT_MOC_LITERAL(3, 52, 9), // "attribute"
QT_MOC_LITERAL(4, 62, 5), // "value"
QT_MOC_LITERAL(5, 68, 18), // "widgetValueChanged"
QT_MOC_LITERAL(6, 87, 0), // ""
QT_MOC_LITERAL(7, 88, 10), // "beforeSave"
QT_MOC_LITERAL(8, 99, 5), // "bool&"
QT_MOC_LITERAL(9, 105, 2), // "ok"
QT_MOC_LITERAL(10, 108, 12), // "featureSaved"
QT_MOC_LITERAL(11, 121, 10), // "QgsFeature"
QT_MOC_LITERAL(12, 132, 7), // "feature"
QT_MOC_LITERAL(13, 140, 19), // "filterExpressionSet"
QT_MOC_LITERAL(14, 160, 10), // "expression"
QT_MOC_LITERAL(15, 171, 28), // "QgsAttributeForm::FilterType"
QT_MOC_LITERAL(16, 200, 4), // "type"
QT_MOC_LITERAL(17, 205, 11), // "modeChanged"
QT_MOC_LITERAL(18, 217, 31), // "QgsAttributeEditorContext::Mode"
QT_MOC_LITERAL(19, 249, 4), // "mode"
QT_MOC_LITERAL(20, 254, 6), // "closed"
QT_MOC_LITERAL(21, 261, 14), // "zoomToFeatures"
QT_MOC_LITERAL(22, 276, 6), // "filter"
QT_MOC_LITERAL(23, 283, 13), // "flashFeatures"
QT_MOC_LITERAL(24, 297, 15), // "changeAttribute"
QT_MOC_LITERAL(25, 313, 5), // "field"
QT_MOC_LITERAL(26, 319, 8), // "hintText"
QT_MOC_LITERAL(27, 328, 10), // "setFeature"
QT_MOC_LITERAL(28, 339, 4), // "save"
QT_MOC_LITERAL(29, 344, 11), // "resetValues"
QT_MOC_LITERAL(30, 356, 11), // "resetSearch"
QT_MOC_LITERAL(31, 368, 14), // "refreshFeature"
QT_MOC_LITERAL(32, 383, 18), // "onAttributeChanged"
QT_MOC_LITERAL(33, 402, 16), // "onAttributeAdded"
QT_MOC_LITERAL(34, 419, 3), // "idx"
QT_MOC_LITERAL(35, 423, 18), // "onAttributeDeleted"
QT_MOC_LITERAL(36, 442, 15), // "onUpdatedFields"
QT_MOC_LITERAL(37, 458, 25), // "onConstraintStatusChanged"
QT_MOC_LITERAL(38, 484, 10), // "constraint"
QT_MOC_LITERAL(39, 495, 11), // "description"
QT_MOC_LITERAL(40, 507, 3), // "err"
QT_MOC_LITERAL(41, 511, 40), // "QgsEditorWidgetWrapper::Const..."
QT_MOC_LITERAL(42, 552, 6), // "result"
QT_MOC_LITERAL(43, 559, 21), // "preventFeatureRefresh"
QT_MOC_LITERAL(44, 581, 23), // "synchronizeEnabledState"
QT_MOC_LITERAL(45, 605, 21), // "layerSelectionChanged"
QT_MOC_LITERAL(46, 627, 14), // "saveMultiEdits"
QT_MOC_LITERAL(47, 642, 14), // "resetMultiEdit"
QT_MOC_LITERAL(48, 657, 12), // "promptToSave"
QT_MOC_LITERAL(49, 670, 23), // "multiEditMessageClicked"
QT_MOC_LITERAL(50, 694, 4), // "link"
QT_MOC_LITERAL(51, 699, 18), // "filterAndTriggered"
QT_MOC_LITERAL(52, 718, 17), // "filterOrTriggered"
QT_MOC_LITERAL(53, 736, 15), // "filterTriggered"
QT_MOC_LITERAL(54, 752, 12), // "searchZoomTo"
QT_MOC_LITERAL(55, 765, 11), // "searchFlash"
QT_MOC_LITERAL(56, 777, 18), // "searchSetSelection"
QT_MOC_LITERAL(57, 796, 20), // "searchAddToSelection"
QT_MOC_LITERAL(58, 817, 25), // "searchRemoveFromSelection"
QT_MOC_LITERAL(59, 843, 24) // "searchIntersectSelection"

    },
    "QgsAttributeForm\0attributeChanged\0"
    "Q_DECL_DEPRECATED\0attribute\0value\0"
    "widgetValueChanged\0\0beforeSave\0bool&\0"
    "ok\0featureSaved\0QgsFeature\0feature\0"
    "filterExpressionSet\0expression\0"
    "QgsAttributeForm::FilterType\0type\0"
    "modeChanged\0QgsAttributeEditorContext::Mode\0"
    "mode\0closed\0zoomToFeatures\0filter\0"
    "flashFeatures\0changeAttribute\0field\0"
    "hintText\0setFeature\0save\0resetValues\0"
    "resetSearch\0refreshFeature\0"
    "onAttributeChanged\0onAttributeAdded\0"
    "idx\0onAttributeDeleted\0onUpdatedFields\0"
    "onConstraintStatusChanged\0constraint\0"
    "description\0err\0"
    "QgsEditorWidgetWrapper::ConstraintResult\0"
    "result\0preventFeatureRefresh\0"
    "synchronizeEnabledState\0layerSelectionChanged\0"
    "saveMultiEdits\0resetMultiEdit\0"
    "promptToSave\0multiEditMessageClicked\0"
    "link\0filterAndTriggered\0filterOrTriggered\0"
    "filterTriggered\0searchZoomTo\0searchFlash\0"
    "searchSetSelection\0searchAddToSelection\0"
    "searchRemoveFromSelection\0"
    "searchIntersectSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  199,    2, 0x06 /* Public */,
       5,    3,  204,    6, 0x06 /* Public */,
       7,    1,  211,    6, 0x06 /* Public */,
      10,    1,  214,    6, 0x06 /* Public */,
      13,    2,  217,    6, 0x06 /* Public */,
      17,    1,  222,    6, 0x06 /* Public */,
      20,    0,  225,    6, 0x06 /* Public */,
      21,    1,  226,    6, 0x06 /* Public */,
      23,    1,  229,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    3,  232,    6, 0x0a /* Public */,
      24,    2,  239,    6, 0x2a /* Public | MethodCloned */,
      27,    1,  244,    6, 0x0a /* Public */,
      28,    0,  247,    6, 0x0a /* Public */,
      29,    0,  248,    6, 0x0a /* Public */,
      30,    0,  249,    6, 0x0a /* Public */,
      31,    0,  250,    6, 0x0a /* Public */,
      32,    1,  251,    6, 0x08 /* Private */,
      33,    1,  254,    6, 0x08 /* Private */,
      35,    1,  257,    6, 0x08 /* Private */,
      36,    0,  260,    6, 0x08 /* Private */,
      37,    4,  261,    6, 0x08 /* Private */,
      43,    0,  270,    6, 0x08 /* Private */,
      44,    0,  271,    6, 0x08 /* Private */,
      45,    0,  272,    6, 0x08 /* Private */,
      46,    0,  273,    6, 0x08 /* Private */,
      47,    1,  274,    6, 0x08 /* Private */,
      47,    0,  277,    6, 0x28 /* Private | MethodCloned */,
      49,    1,  278,    6, 0x08 /* Private */,
      51,    0,  281,    6, 0x08 /* Private */,
      52,    0,  282,    6, 0x08 /* Private */,
      53,    0,  283,    6, 0x08 /* Private */,
      54,    0,  284,    6, 0x08 /* Private */,
      55,    0,  285,    6, 0x08 /* Private */,
      56,    0,  286,    6, 0x08 /* Private */,
      57,    0,  287,    6, 0x08 /* Private */,
      58,    0,  288,    6, 0x08 /* Private */,
      59,    0,  289,    6, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,    3,    4,    1,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   22,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::QString,   25,    4,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   25,    4,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 41,   38,   39,   40,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAttributeForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeForm *_t = static_cast<QgsAttributeForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->attributeChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->widgetValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->beforeSave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->featureSaved((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 4: _t->filterExpressionSet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsAttributeForm::FilterType(*)>(_a[2]))); break;
        case 5: _t->modeChanged((*reinterpret_cast< QgsAttributeEditorContext::Mode(*)>(_a[1]))); break;
        case 6: _t->closed(); break;
        case 7: _t->zoomToFeatures((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->flashFeatures((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->changeAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->changeAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 11: _t->setFeature((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 12: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->resetValues(); break;
        case 14: _t->resetSearch(); break;
        case 15: _t->refreshFeature(); break;
        case 16: _t->onAttributeChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 17: _t->onAttributeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->onAttributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->onUpdatedFields(); break;
        case 20: _t->onConstraintStatusChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QgsEditorWidgetWrapper::ConstraintResult(*)>(_a[4]))); break;
        case 21: _t->preventFeatureRefresh(); break;
        case 22: _t->synchronizeEnabledState(); break;
        case 23: _t->layerSelectionChanged(); break;
        case 24: { bool _r = _t->saveMultiEdits();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->resetMultiEdit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->resetMultiEdit(); break;
        case 27: _t->multiEditMessageClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->filterAndTriggered(); break;
        case 29: _t->filterOrTriggered(); break;
        case 30: _t->filterTriggered(); break;
        case 31: _t->searchZoomTo(); break;
        case 32: _t->searchFlash(); break;
        case 33: _t->searchSetSelection(); break;
        case 34: _t->searchAddToSelection(); break;
        case 35: _t->searchRemoveFromSelection(); break;
        case 36: _t->searchIntersectSelection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsAttributeForm::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeForm::attributeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsAttributeForm::*_t)(const QString & , const QVariant & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeForm::widgetValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsAttributeForm::*_t)(bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeForm::beforeSave)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsAttributeForm::*_t)(const QgsFeature & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeForm::featureSaved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsAttributeForm::*_t)(const QString & , QgsAttributeForm::FilterType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeForm::filterExpressionSet)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsAttributeForm::*_t)(QgsAttributeEditorContext::Mode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeForm::modeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsAttributeForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeForm::closed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsAttributeForm::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeForm::zoomToFeatures)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgsAttributeForm::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeForm::flashFeatures)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject QgsAttributeForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAttributeForm.data,
      qt_meta_data_QgsAttributeForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAttributeForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void QgsAttributeForm::attributeChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsAttributeForm::widgetValueChanged(const QString & _t1, const QVariant & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsAttributeForm::beforeSave(bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsAttributeForm::featureSaved(const QgsFeature & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsAttributeForm::filterExpressionSet(const QString & _t1, QgsAttributeForm::FilterType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsAttributeForm::modeChanged(QgsAttributeEditorContext::Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsAttributeForm::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QgsAttributeForm::zoomToFeatures(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsAttributeForm::flashFeatures(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
