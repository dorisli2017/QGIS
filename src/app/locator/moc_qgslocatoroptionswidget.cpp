/****************************************************************************
** Meta object code from reading C++ file 'qgslocatoroptionswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslocatoroptionswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslocatoroptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLocatorOptionsWidget_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLocatorOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLocatorOptionsWidget_t qt_meta_stringdata_QgsLocatorOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsLocatorOptionsWidget"
QT_MOC_LITERAL(1, 24, 13), // "commitChanges"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "dataChanged"
QT_MOC_LITERAL(4, 51, 7), // "topLeft"
QT_MOC_LITERAL(5, 59, 11), // "bottomRight"
QT_MOC_LITERAL(6, 71, 12), // "QVector<int>"
QT_MOC_LITERAL(7, 84, 5) // "roles"

    },
    "QgsLocatorOptionsWidget\0commitChanges\0"
    "\0dataChanged\0topLeft\0bottomRight\0"
    "QVector<int>\0roles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLocatorOptionsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    3,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 6,    4,    5,    7,

       0        // eod
};

void QgsLocatorOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLocatorOptionsWidget *_t = static_cast<QgsLocatorOptionsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commitChanges(); break;
        case 1: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject QgsLocatorOptionsWidget::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QgsLocatorOptionsWidget.data,
      qt_meta_data_QgsLocatorOptionsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLocatorOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLocatorOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLocatorOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QgsLocatorOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_QgsLocatorFiltersModel_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLocatorFiltersModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLocatorFiltersModel_t qt_meta_stringdata_QgsLocatorFiltersModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsLocatorFiltersModel"
QT_MOC_LITERAL(1, 23, 13), // "commitChanges"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "QgsLocatorFiltersModel\0commitChanges\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLocatorFiltersModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsLocatorFiltersModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLocatorFiltersModel *_t = static_cast<QgsLocatorFiltersModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commitChanges(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsLocatorFiltersModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_QgsLocatorFiltersModel.data,
      qt_meta_data_QgsLocatorFiltersModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLocatorFiltersModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLocatorFiltersModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLocatorFiltersModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int QgsLocatorFiltersModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
