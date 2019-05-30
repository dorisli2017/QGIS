/****************************************************************************
** Meta object code from reading C++ file 'qgsgeonodesourceselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeonodesourceselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeonodesourceselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeonodeItemDelegate_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeonodeItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeonodeItemDelegate_t qt_meta_stringdata_QgsGeonodeItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QgsGeonodeItemDelegate"

    },
    "QgsGeonodeItemDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeonodeItemDelegate[] = {

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

void QgsGeonodeItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsGeonodeItemDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_QgsGeonodeItemDelegate.data,
      qt_meta_data_QgsGeonodeItemDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeonodeItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeonodeItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeonodeItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int QgsGeonodeItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsGeoNodeSourceSelect_t {
    QByteArrayData data[17];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeoNodeSourceSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeoNodeSourceSelect_t qt_meta_stringdata_QgsGeoNodeSourceSelect = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsGeoNodeSourceSelect"
QT_MOC_LITERAL(1, 23, 13), // "abortRequests"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "addButtonClicked"
QT_MOC_LITERAL(4, 55, 23), // "addConnectionsEntryList"
QT_MOC_LITERAL(5, 79, 26), // "modifyConnectionsEntryList"
QT_MOC_LITERAL(6, 106, 26), // "deleteConnectionsEntryList"
QT_MOC_LITERAL(7, 133, 26), // "connectToGeonodeConnection"
QT_MOC_LITERAL(8, 160, 21), // "saveGeonodeConnection"
QT_MOC_LITERAL(9, 182, 21), // "loadGeonodeConnection"
QT_MOC_LITERAL(10, 204, 13), // "filterChanged"
QT_MOC_LITERAL(11, 218, 4), // "text"
QT_MOC_LITERAL(12, 223, 24), // "treeViewSelectionChanged"
QT_MOC_LITERAL(13, 248, 22), // "populateConnectionList"
QT_MOC_LITERAL(14, 271, 22), // "selectedConnectionName"
QT_MOC_LITERAL(15, 294, 25), // "setConnectionListPosition"
QT_MOC_LITERAL(16, 320, 8) // "showHelp"

    },
    "QgsGeoNodeSourceSelect\0abortRequests\0"
    "\0addButtonClicked\0addConnectionsEntryList\0"
    "modifyConnectionsEntryList\0"
    "deleteConnectionsEntryList\0"
    "connectToGeonodeConnection\0"
    "saveGeonodeConnection\0loadGeonodeConnection\0"
    "filterChanged\0text\0treeViewSelectionChanged\0"
    "populateConnectionList\0selectedConnectionName\0"
    "setConnectionListPosition\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeoNodeSourceSelect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    1,   97,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    1,  101,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x28 /* Private | MethodCloned */,
      15,    1,  105,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x28 /* Private | MethodCloned */,
      16,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsGeoNodeSourceSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeoNodeSourceSelect *_t = static_cast<QgsGeoNodeSourceSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->abortRequests(); break;
        case 1: _t->addButtonClicked(); break;
        case 2: _t->addConnectionsEntryList(); break;
        case 3: _t->modifyConnectionsEntryList(); break;
        case 4: _t->deleteConnectionsEntryList(); break;
        case 5: _t->connectToGeonodeConnection(); break;
        case 6: _t->saveGeonodeConnection(); break;
        case 7: _t->loadGeonodeConnection(); break;
        case 8: _t->filterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->treeViewSelectionChanged(); break;
        case 10: _t->populateConnectionList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->populateConnectionList(); break;
        case 12: _t->setConnectionListPosition((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setConnectionListPosition(); break;
        case 14: _t->showHelp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGeoNodeSourceSelect::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeoNodeSourceSelect::abortRequests)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsGeoNodeSourceSelect::staticMetaObject = {
    { &QgsAbstractDataSourceWidget::staticMetaObject, qt_meta_stringdata_QgsGeoNodeSourceSelect.data,
      qt_meta_data_QgsGeoNodeSourceSelect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeoNodeSourceSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeoNodeSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeoNodeSourceSelect.stringdata0))
        return static_cast<void*>(this);
    return QgsAbstractDataSourceWidget::qt_metacast(_clname);
}

int QgsGeoNodeSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractDataSourceWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QgsGeoNodeSourceSelect::abortRequests()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
