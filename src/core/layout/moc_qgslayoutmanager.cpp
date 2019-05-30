/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutManager_t {
    QByteArrayData data[11];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutManager_t qt_meta_stringdata_QgsLayoutManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsLayoutManager"
QT_MOC_LITERAL(1, 17, 20), // "layoutAboutToBeAdded"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "name"
QT_MOC_LITERAL(4, 44, 11), // "layoutAdded"
QT_MOC_LITERAL(5, 56, 13), // "layoutRemoved"
QT_MOC_LITERAL(6, 70, 22), // "layoutAboutToBeRemoved"
QT_MOC_LITERAL(7, 93, 13), // "layoutRenamed"
QT_MOC_LITERAL(8, 107, 25), // "QgsMasterLayoutInterface*"
QT_MOC_LITERAL(9, 133, 6), // "layout"
QT_MOC_LITERAL(10, 140, 7) // "newName"

    },
    "QgsLayoutManager\0layoutAboutToBeAdded\0"
    "\0name\0layoutAdded\0layoutRemoved\0"
    "layoutAboutToBeRemoved\0layoutRenamed\0"
    "QgsMasterLayoutInterface*\0layout\0"
    "newName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,
       7,    2,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,

       0        // eod
};

void QgsLayoutManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutManager *_t = static_cast<QgsLayoutManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layoutAboutToBeAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->layoutAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->layoutRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->layoutAboutToBeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->layoutRenamed((*reinterpret_cast< QgsMasterLayoutInterface*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayoutManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutManager::layoutAboutToBeAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsLayoutManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutManager::layoutAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsLayoutManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutManager::layoutRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsLayoutManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutManager::layoutAboutToBeRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsLayoutManager::*_t)(QgsMasterLayoutInterface * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutManager::layoutRenamed)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QgsLayoutManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayoutManager.data,
      qt_meta_data_QgsLayoutManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsLayoutManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QgsLayoutManager::layoutAboutToBeAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsLayoutManager::layoutAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsLayoutManager::layoutRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsLayoutManager::layoutAboutToBeRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsLayoutManager::layoutRenamed(QgsMasterLayoutInterface * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QgsLayoutManagerModel_t {
    QByteArrayData data[11];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutManagerModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutManagerModel_t qt_meta_stringdata_QgsLayoutManagerModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsLayoutManagerModel"
QT_MOC_LITERAL(1, 22, 20), // "layoutAboutToBeAdded"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "name"
QT_MOC_LITERAL(4, 49, 22), // "layoutAboutToBeRemoved"
QT_MOC_LITERAL(5, 72, 11), // "layoutAdded"
QT_MOC_LITERAL(6, 84, 13), // "layoutRemoved"
QT_MOC_LITERAL(7, 98, 13), // "layoutRenamed"
QT_MOC_LITERAL(8, 112, 25), // "QgsMasterLayoutInterface*"
QT_MOC_LITERAL(9, 138, 6), // "layout"
QT_MOC_LITERAL(10, 145, 7) // "newName"

    },
    "QgsLayoutManagerModel\0layoutAboutToBeAdded\0"
    "\0name\0layoutAboutToBeRemoved\0layoutAdded\0"
    "layoutRemoved\0layoutRenamed\0"
    "QgsMasterLayoutInterface*\0layout\0"
    "newName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutManagerModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       7,    2,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,

       0        // eod
};

void QgsLayoutManagerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutManagerModel *_t = static_cast<QgsLayoutManagerModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layoutAboutToBeAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->layoutAboutToBeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->layoutAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->layoutRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->layoutRenamed((*reinterpret_cast< QgsMasterLayoutInterface*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsLayoutManagerModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QgsLayoutManagerModel.data,
      qt_meta_data_QgsLayoutManagerModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutManagerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutManagerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutManagerModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QgsLayoutManagerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_QgsLayoutManagerProxyModel_t {
    QByteArrayData data[4];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutManagerProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutManagerProxyModel_t qt_meta_stringdata_QgsLayoutManagerProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsLayoutManagerProxyModel"
QT_MOC_LITERAL(1, 27, 7), // "Filters"
QT_MOC_LITERAL(2, 35, 18), // "FilterPrintLayouts"
QT_MOC_LITERAL(3, 54, 13) // "FilterReports"

    },
    "QgsLayoutManagerProxyModel\0Filters\0"
    "FilterPrintLayouts\0FilterReports"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutManagerProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x1,    2,   18,

 // enum data: key, value
       2, uint(QgsLayoutManagerProxyModel::FilterPrintLayouts),
       3, uint(QgsLayoutManagerProxyModel::FilterReports),

       0        // eod
};

void QgsLayoutManagerProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsLayoutManagerProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsLayoutManagerProxyModel.data,
      qt_meta_data_QgsLayoutManagerProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutManagerProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutManagerProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutManagerProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsLayoutManagerProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
