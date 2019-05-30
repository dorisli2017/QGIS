/****************************************************************************
** Meta object code from reading C++ file 'qgsarcgisservicesourceselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsarcgisservicesourceselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsarcgisservicesourceselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsArcGisServiceSourceSelect_t {
    QByteArrayData data[20];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsArcGisServiceSourceSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsArcGisServiceSourceSelect_t qt_meta_stringdata_QgsArcGisServiceSourceSelect = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsArcGisServiceSourceSelect"
QT_MOC_LITERAL(1, 29, 7), // "refresh"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "addEntryToServerList"
QT_MOC_LITERAL(4, 59, 23), // "deleteEntryOfServerList"
QT_MOC_LITERAL(5, 83, 23), // "modifyEntryOfServerList"
QT_MOC_LITERAL(6, 107, 16), // "addButtonClicked"
QT_MOC_LITERAL(7, 124, 23), // "buildQueryButtonClicked"
QT_MOC_LITERAL(8, 148, 9), // "changeCrs"
QT_MOC_LITERAL(9, 158, 15), // "changeCrsFilter"
QT_MOC_LITERAL(10, 174, 15), // "connectToServer"
QT_MOC_LITERAL(11, 190, 13), // "filterChanged"
QT_MOC_LITERAL(12, 204, 4), // "text"
QT_MOC_LITERAL(13, 209, 24), // "cmbConnections_activated"
QT_MOC_LITERAL(14, 234, 5), // "index"
QT_MOC_LITERAL(15, 240, 8), // "showHelp"
QT_MOC_LITERAL(16, 249, 27), // "treeWidgetItemDoubleClicked"
QT_MOC_LITERAL(17, 277, 27), // "treeWidgetCurrentRowChanged"
QT_MOC_LITERAL(18, 305, 7), // "current"
QT_MOC_LITERAL(19, 313, 8) // "previous"

    },
    "QgsArcGisServiceSourceSelect\0refresh\0"
    "\0addEntryToServerList\0deleteEntryOfServerList\0"
    "modifyEntryOfServerList\0addButtonClicked\0"
    "buildQueryButtonClicked\0changeCrs\0"
    "changeCrsFilter\0connectToServer\0"
    "filterChanged\0text\0cmbConnections_activated\0"
    "index\0showHelp\0treeWidgetItemDoubleClicked\0"
    "treeWidgetCurrentRowChanged\0current\0"
    "previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsArcGisServiceSourceSelect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    1,  100,    2, 0x08 /* Private */,
      17,    2,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   14,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   18,   19,

       0        // eod
};

void QgsArcGisServiceSourceSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsArcGisServiceSourceSelect *_t = static_cast<QgsArcGisServiceSourceSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->addEntryToServerList(); break;
        case 2: _t->deleteEntryOfServerList(); break;
        case 3: _t->modifyEntryOfServerList(); break;
        case 4: _t->addButtonClicked(); break;
        case 5: _t->buildQueryButtonClicked(); break;
        case 6: _t->changeCrs(); break;
        case 7: _t->changeCrsFilter(); break;
        case 8: _t->connectToServer(); break;
        case 9: _t->filterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->cmbConnections_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->showHelp(); break;
        case 12: _t->treeWidgetItemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->treeWidgetCurrentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsArcGisServiceSourceSelect::staticMetaObject = {
    { &QgsAbstractDataSourceWidget::staticMetaObject, qt_meta_stringdata_QgsArcGisServiceSourceSelect.data,
      qt_meta_data_QgsArcGisServiceSourceSelect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsArcGisServiceSourceSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsArcGisServiceSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsArcGisServiceSourceSelect.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::QgsArcGisServiceSourceSelectBase"))
        return static_cast< Ui::QgsArcGisServiceSourceSelectBase*>(this);
    return QgsAbstractDataSourceWidget::qt_metacast(_clname);
}

int QgsArcGisServiceSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractDataSourceWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
struct qt_meta_stringdata_QgsAbstractDataSourceWidgetItemDelegate_t {
    QByteArrayData data[1];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAbstractDataSourceWidgetItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAbstractDataSourceWidgetItemDelegate_t qt_meta_stringdata_QgsAbstractDataSourceWidgetItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 39) // "QgsAbstractDataSourceWidgetIt..."

    },
    "QgsAbstractDataSourceWidgetItemDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAbstractDataSourceWidgetItemDelegate[] = {

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

void QgsAbstractDataSourceWidgetItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsAbstractDataSourceWidgetItemDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_QgsAbstractDataSourceWidgetItemDelegate.data,
      qt_meta_data_QgsAbstractDataSourceWidgetItemDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAbstractDataSourceWidgetItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAbstractDataSourceWidgetItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAbstractDataSourceWidgetItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int QgsAbstractDataSourceWidgetItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
