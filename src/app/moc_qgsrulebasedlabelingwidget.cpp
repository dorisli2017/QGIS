/****************************************************************************
** Meta object code from reading C++ file 'qgsrulebasedlabelingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsrulebasedlabelingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrulebasedlabelingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRuleBasedLabelingModel_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRuleBasedLabelingModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRuleBasedLabelingModel_t qt_meta_stringdata_QgsRuleBasedLabelingModel = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QgsRuleBasedLabelingModel"

    },
    "QgsRuleBasedLabelingModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRuleBasedLabelingModel[] = {

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

void QgsRuleBasedLabelingModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsRuleBasedLabelingModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsRuleBasedLabelingModel.data,
      qt_meta_data_QgsRuleBasedLabelingModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRuleBasedLabelingModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRuleBasedLabelingModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRuleBasedLabelingModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsRuleBasedLabelingModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsRuleBasedLabelingWidget_t {
    QByteArrayData data[12];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRuleBasedLabelingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRuleBasedLabelingWidget_t qt_meta_stringdata_QgsRuleBasedLabelingWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsRuleBasedLabelingWidget"
QT_MOC_LITERAL(1, 27, 7), // "addRule"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "editRule"
QT_MOC_LITERAL(4, 45, 5), // "index"
QT_MOC_LITERAL(5, 51, 10), // "removeRule"
QT_MOC_LITERAL(6, 62, 4), // "copy"
QT_MOC_LITERAL(7, 67, 5), // "paste"
QT_MOC_LITERAL(8, 73, 23), // "ruleWidgetPanelAccepted"
QT_MOC_LITERAL(9, 97, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(10, 113, 5), // "panel"
QT_MOC_LITERAL(11, 119, 23) // "liveUpdateRuleFromPanel"

    },
    "QgsRuleBasedLabelingWidget\0addRule\0\0"
    "editRule\0index\0removeRule\0copy\0paste\0"
    "ruleWidgetPanelAccepted\0QgsPanelWidget*\0"
    "panel\0liveUpdateRuleFromPanel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRuleBasedLabelingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    0,   55,    2, 0x09 /* Protected */,
       3,    1,   56,    2, 0x09 /* Protected */,
       5,    0,   59,    2, 0x09 /* Protected */,
       6,    0,   60,    2, 0x09 /* Protected */,
       7,    0,   61,    2, 0x09 /* Protected */,
       8,    1,   62,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void QgsRuleBasedLabelingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRuleBasedLabelingWidget *_t = static_cast<QgsRuleBasedLabelingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addRule(); break;
        case 1: _t->editRule(); break;
        case 2: _t->editRule((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->removeRule(); break;
        case 4: _t->copy(); break;
        case 5: _t->paste(); break;
        case 6: _t->ruleWidgetPanelAccepted((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 7: _t->liveUpdateRuleFromPanel(); break;
        default: ;
        }
    }
}

const QMetaObject QgsRuleBasedLabelingWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsRuleBasedLabelingWidget.data,
      qt_meta_data_QgsRuleBasedLabelingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRuleBasedLabelingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRuleBasedLabelingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRuleBasedLabelingWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsRuleBasedLabelingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_QgsLabelingRulePropsWidget_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLabelingRulePropsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLabelingRulePropsWidget_t qt_meta_stringdata_QgsLabelingRulePropsWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsLabelingRulePropsWidget"
QT_MOC_LITERAL(1, 27, 10), // "testFilter"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "buildExpression"
QT_MOC_LITERAL(4, 55, 5) // "apply"

    },
    "QgsLabelingRulePropsWidget\0testFilter\0"
    "\0buildExpression\0apply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLabelingRulePropsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLabelingRulePropsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLabelingRulePropsWidget *_t = static_cast<QgsLabelingRulePropsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testFilter(); break;
        case 1: _t->buildExpression(); break;
        case 2: _t->apply(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsLabelingRulePropsWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsLabelingRulePropsWidget.data,
      qt_meta_data_QgsLabelingRulePropsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLabelingRulePropsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLabelingRulePropsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLabelingRulePropsWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsLabelingRulePropsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
