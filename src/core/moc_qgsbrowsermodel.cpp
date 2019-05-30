/****************************************************************************
** Meta object code from reading C++ file 'qgsbrowsermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsbrowsermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsbrowsermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsBrowserWatcher_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBrowserWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBrowserWatcher_t qt_meta_stringdata_QgsBrowserWatcher = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsBrowserWatcher"
QT_MOC_LITERAL(1, 18, 8), // "finished"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "QgsDataItem*"
QT_MOC_LITERAL(4, 41, 4), // "item"
QT_MOC_LITERAL(5, 46, 21), // "QVector<QgsDataItem*>"
QT_MOC_LITERAL(6, 68, 5) // "items"

    },
    "QgsBrowserWatcher\0finished\0\0QgsDataItem*\0"
    "item\0QVector<QgsDataItem*>\0items"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBrowserWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void QgsBrowserWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsBrowserWatcher *_t = static_cast<QgsBrowserWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QgsDataItem*(*)>(_a[1])),(*reinterpret_cast< const QVector<QgsDataItem*>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QgsDataItem*> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsBrowserWatcher::*_t)(QgsDataItem * , const QVector<QgsDataItem*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsBrowserWatcher::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsBrowserWatcher::staticMetaObject = {
    { &QFutureWatcher<QVector<QgsDataItem*> >::staticMetaObject, qt_meta_stringdata_QgsBrowserWatcher.data,
      qt_meta_data_QgsBrowserWatcher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBrowserWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBrowserWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBrowserWatcher.stringdata0))
        return static_cast<void*>(this);
    return QFutureWatcher<QVector<QgsDataItem*> >::qt_metacast(_clname);
}

int QgsBrowserWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFutureWatcher<QVector<QgsDataItem*> >::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QgsBrowserWatcher::finished(QgsDataItem * _t1, const QVector<QgsDataItem*> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsBrowserModel_t {
    QByteArrayData data[29];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBrowserModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBrowserModel_t qt_meta_stringdata_QgsBrowserModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsBrowserModel"
QT_MOC_LITERAL(1, 16, 12), // "stateChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "index"
QT_MOC_LITERAL(4, 36, 18), // "QgsDataItem::State"
QT_MOC_LITERAL(5, 55, 8), // "oldState"
QT_MOC_LITERAL(6, 64, 18), // "connectionsChanged"
QT_MOC_LITERAL(7, 83, 6), // "reload"
QT_MOC_LITERAL(8, 90, 13), // "refreshDrives"
QT_MOC_LITERAL(9, 104, 16), // "beginInsertItems"
QT_MOC_LITERAL(10, 121, 12), // "QgsDataItem*"
QT_MOC_LITERAL(11, 134, 6), // "parent"
QT_MOC_LITERAL(12, 141, 5), // "first"
QT_MOC_LITERAL(13, 147, 4), // "last"
QT_MOC_LITERAL(14, 152, 14), // "endInsertItems"
QT_MOC_LITERAL(15, 167, 16), // "beginRemoveItems"
QT_MOC_LITERAL(16, 184, 14), // "endRemoveItems"
QT_MOC_LITERAL(17, 199, 15), // "itemDataChanged"
QT_MOC_LITERAL(18, 215, 4), // "item"
QT_MOC_LITERAL(19, 220, 16), // "itemStateChanged"
QT_MOC_LITERAL(20, 237, 20), // "addFavoriteDirectory"
QT_MOC_LITERAL(21, 258, 9), // "directory"
QT_MOC_LITERAL(22, 268, 4), // "name"
QT_MOC_LITERAL(23, 273, 14), // "removeFavorite"
QT_MOC_LITERAL(24, 288, 16), // "QgsFavoriteItem*"
QT_MOC_LITERAL(25, 305, 8), // "favorite"
QT_MOC_LITERAL(26, 314, 17), // "updateProjectHome"
QT_MOC_LITERAL(27, 332, 8), // "hidePath"
QT_MOC_LITERAL(28, 341, 10) // "initialize"

    },
    "QgsBrowserModel\0stateChanged\0\0index\0"
    "QgsDataItem::State\0oldState\0"
    "connectionsChanged\0reload\0refreshDrives\0"
    "beginInsertItems\0QgsDataItem*\0parent\0"
    "first\0last\0endInsertItems\0beginRemoveItems\0"
    "endRemoveItems\0itemDataChanged\0item\0"
    "itemStateChanged\0addFavoriteDirectory\0"
    "directory\0name\0removeFavorite\0"
    "QgsFavoriteItem*\0favorite\0updateProjectHome\0"
    "hidePath\0initialize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBrowserModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x06 /* Public */,
       6,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  105,    2, 0x0a /* Public */,
       8,    0,  106,    2, 0x0a /* Public */,
       9,    3,  107,    2, 0x0a /* Public */,
      14,    0,  114,    2, 0x0a /* Public */,
      15,    3,  115,    2, 0x0a /* Public */,
      16,    0,  122,    2, 0x0a /* Public */,
      17,    1,  123,    2, 0x0a /* Public */,
      19,    2,  126,    2, 0x0a /* Public */,
      20,    2,  131,    2, 0x0a /* Public */,
      20,    1,  136,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  139,    2, 0x0a /* Public */,
      23,    1,  142,    2, 0x0a /* Public */,
      26,    0,  145,    2, 0x0a /* Public */,
      27,    1,  146,    2, 0x0a /* Public */,
      28,    0,  149,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex, 0x80000000 | 4,    3,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   18,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 4,   18,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   21,   22,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   18,
    QMetaType::Void,

       0        // eod
};

void QgsBrowserModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsBrowserModel *_t = static_cast<QgsBrowserModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QgsDataItem::State(*)>(_a[2]))); break;
        case 1: _t->connectionsChanged(); break;
        case 2: _t->reload(); break;
        case 3: _t->refreshDrives(); break;
        case 4: _t->beginInsertItems((*reinterpret_cast< QgsDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->endInsertItems(); break;
        case 6: _t->beginRemoveItems((*reinterpret_cast< QgsDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->endRemoveItems(); break;
        case 8: _t->itemDataChanged((*reinterpret_cast< QgsDataItem*(*)>(_a[1]))); break;
        case 9: _t->itemStateChanged((*reinterpret_cast< QgsDataItem*(*)>(_a[1])),(*reinterpret_cast< QgsDataItem::State(*)>(_a[2]))); break;
        case 10: _t->addFavoriteDirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->addFavoriteDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->removeFavorite((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->removeFavorite((*reinterpret_cast< QgsFavoriteItem*(*)>(_a[1]))); break;
        case 14: _t->updateProjectHome(); break;
        case 15: _t->hidePath((*reinterpret_cast< QgsDataItem*(*)>(_a[1]))); break;
        case 16: _t->initialize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFavoriteItem* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsBrowserModel::*_t)(const QModelIndex & , QgsDataItem::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsBrowserModel::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsBrowserModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsBrowserModel::connectionsChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsBrowserModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsBrowserModel.data,
      qt_meta_data_QgsBrowserModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBrowserModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBrowserModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBrowserModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsBrowserModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QgsBrowserModel::stateChanged(const QModelIndex & _t1, QgsDataItem::State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsBrowserModel::connectionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
