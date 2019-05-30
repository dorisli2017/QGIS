/****************************************************************************
** Meta object code from reading C++ file 'qgsbookmarks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsbookmarks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsbookmarks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProjectBookmarksTableModel_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProjectBookmarksTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProjectBookmarksTableModel_t qt_meta_stringdata_QgsProjectBookmarksTableModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsProjectBookmarksTableModel"
QT_MOC_LITERAL(1, 30, 11), // "projectRead"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "QgsProjectBookmarksTableModel\0projectRead\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProjectBookmarksTableModel[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsProjectBookmarksTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProjectBookmarksTableModel *_t = static_cast<QgsProjectBookmarksTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projectRead(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsProjectBookmarksTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_QgsProjectBookmarksTableModel.data,
      qt_meta_data_QgsProjectBookmarksTableModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProjectBookmarksTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProjectBookmarksTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProjectBookmarksTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int QgsProjectBookmarksTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QgsBookmarksProxyModel_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBookmarksProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBookmarksProxyModel_t qt_meta_stringdata_QgsBookmarksProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsBookmarksProxyModel"
QT_MOC_LITERAL(1, 23, 11), // "_resetModel"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "QgsBookmarksProxyModel\0_resetModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBookmarksProxyModel[] = {

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

void QgsBookmarksProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsBookmarksProxyModel *_t = static_cast<QgsBookmarksProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_resetModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsBookmarksProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsBookmarksProxyModel.data,
      qt_meta_data_QgsBookmarksProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBookmarksProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBookmarksProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBookmarksProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsBookmarksProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsDoubleSpinBoxBookmarksDelegate_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDoubleSpinBoxBookmarksDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDoubleSpinBoxBookmarksDelegate_t qt_meta_stringdata_QgsDoubleSpinBoxBookmarksDelegate = {
    {
QT_MOC_LITERAL(0, 0, 33) // "QgsDoubleSpinBoxBookmarksDele..."

    },
    "QgsDoubleSpinBoxBookmarksDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDoubleSpinBoxBookmarksDelegate[] = {

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

void QgsDoubleSpinBoxBookmarksDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDoubleSpinBoxBookmarksDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_QgsDoubleSpinBoxBookmarksDelegate.data,
      qt_meta_data_QgsDoubleSpinBoxBookmarksDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDoubleSpinBoxBookmarksDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDoubleSpinBoxBookmarksDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDoubleSpinBoxBookmarksDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int QgsDoubleSpinBoxBookmarksDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsMergedBookmarksTableModel_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMergedBookmarksTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMergedBookmarksTableModel_t qt_meta_stringdata_QgsMergedBookmarksTableModel = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsMergedBookmarksTableModel"
QT_MOC_LITERAL(1, 29, 10), // "selectItem"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "index"
QT_MOC_LITERAL(4, 47, 16) // "allLayoutChanged"

    },
    "QgsMergedBookmarksTableModel\0selectItem\0"
    "\0index\0allLayoutChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMergedBookmarksTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsMergedBookmarksTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMergedBookmarksTableModel *_t = static_cast<QgsMergedBookmarksTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->allLayoutChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMergedBookmarksTableModel::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMergedBookmarksTableModel::selectItem)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsMergedBookmarksTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_QgsMergedBookmarksTableModel.data,
      qt_meta_data_QgsMergedBookmarksTableModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMergedBookmarksTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMergedBookmarksTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMergedBookmarksTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int QgsMergedBookmarksTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QgsMergedBookmarksTableModel::selectItem(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsBookmarks_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBookmarks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBookmarks_t qt_meta_stringdata_QgsBookmarks = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QgsBookmarks"
QT_MOC_LITERAL(1, 13, 10), // "addClicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "deleteClicked"
QT_MOC_LITERAL(4, 39, 14), // "zoomToBookmark"
QT_MOC_LITERAL(5, 54, 11), // "exportToXml"
QT_MOC_LITERAL(6, 66, 13), // "importFromXml"
QT_MOC_LITERAL(7, 80, 26) // "lstBookmarks_doubleClicked"

    },
    "QgsBookmarks\0addClicked\0\0deleteClicked\0"
    "zoomToBookmark\0exportToXml\0importFromXml\0"
    "lstBookmarks_doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBookmarks[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,

       0        // eod
};

void QgsBookmarks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsBookmarks *_t = static_cast<QgsBookmarks *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addClicked(); break;
        case 1: _t->deleteClicked(); break;
        case 2: _t->zoomToBookmark(); break;
        case 3: _t->exportToXml(); break;
        case 4: _t->importFromXml(); break;
        case 5: _t->lstBookmarks_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsBookmarks::staticMetaObject = {
    { &QgsDockWidget::staticMetaObject, qt_meta_stringdata_QgsBookmarks.data,
      qt_meta_data_QgsBookmarks,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBookmarks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBookmarks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBookmarks.stringdata0))
        return static_cast<void*>(this);
    return QgsDockWidget::qt_metacast(_clname);
}

int QgsBookmarks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
