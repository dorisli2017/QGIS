/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreemodellegendnode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayertreemodellegendnode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreemodellegendnode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayerTreeModelLegendNode_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeModelLegendNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeModelLegendNode_t qt_meta_stringdata_QgsLayerTreeModelLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsLayerTreeModelLegendNode"
QT_MOC_LITERAL(1, 28, 11), // "dataChanged"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "QgsLayerTreeModelLegendNode\0dataChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeModelLegendNode[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QgsLayerTreeModelLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeModelLegendNode *_t = static_cast<QgsLayerTreeModelLegendNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayerTreeModelLegendNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeModelLegendNode::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsLayerTreeModelLegendNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayerTreeModelLegendNode.data,
      qt_meta_data_QgsLayerTreeModelLegendNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerTreeModelLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeModelLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeModelLegendNode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsLayerTreeModelLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsLayerTreeModelLegendNode::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsSymbolLegendNode_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSymbolLegendNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSymbolLegendNode_t qt_meta_stringdata_QgsSymbolLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsSymbolLegendNode"
QT_MOC_LITERAL(1, 20, 13), // "checkAllItems"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "uncheckAllItems"
QT_MOC_LITERAL(4, 51, 14) // "toggleAllItems"

    },
    "QgsSymbolLegendNode\0checkAllItems\0\0"
    "uncheckAllItems\0toggleAllItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSymbolLegendNode[] = {

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

void QgsSymbolLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSymbolLegendNode *_t = static_cast<QgsSymbolLegendNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkAllItems(); break;
        case 1: _t->uncheckAllItems(); break;
        case 2: _t->toggleAllItems(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsSymbolLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsSymbolLegendNode.data,
      qt_meta_data_QgsSymbolLegendNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSymbolLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSymbolLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSymbolLegendNode.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsSymbolLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsSimpleLegendNode_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSimpleLegendNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSimpleLegendNode_t qt_meta_stringdata_QgsSimpleLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QgsSimpleLegendNode"

    },
    "QgsSimpleLegendNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSimpleLegendNode[] = {

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

void QgsSimpleLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsSimpleLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsSimpleLegendNode.data,
      qt_meta_data_QgsSimpleLegendNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSimpleLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSimpleLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSimpleLegendNode.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsSimpleLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsImageLegendNode_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsImageLegendNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsImageLegendNode_t qt_meta_stringdata_QgsImageLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QgsImageLegendNode"

    },
    "QgsImageLegendNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsImageLegendNode[] = {

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

void QgsImageLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsImageLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsImageLegendNode.data,
      qt_meta_data_QgsImageLegendNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsImageLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsImageLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsImageLegendNode.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsImageLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsRasterSymbolLegendNode_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRasterSymbolLegendNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRasterSymbolLegendNode_t qt_meta_stringdata_QgsRasterSymbolLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QgsRasterSymbolLegendNode"

    },
    "QgsRasterSymbolLegendNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRasterSymbolLegendNode[] = {

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

void QgsRasterSymbolLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsRasterSymbolLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsRasterSymbolLegendNode.data,
      qt_meta_data_QgsRasterSymbolLegendNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRasterSymbolLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRasterSymbolLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterSymbolLegendNode.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsRasterSymbolLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsWmsLegendNode_t {
    QByteArrayData data[5];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWmsLegendNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWmsLegendNode_t qt_meta_stringdata_QgsWmsLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsWmsLegendNode"
QT_MOC_LITERAL(1, 17, 24), // "getLegendGraphicFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 23), // "getLegendGraphicErrored"
QT_MOC_LITERAL(4, 67, 24) // "getLegendGraphicProgress"

    },
    "QgsWmsLegendNode\0getLegendGraphicFinished\0"
    "\0getLegendGraphicErrored\0"
    "getLegendGraphicProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWmsLegendNode[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       3,    1,   32,    2, 0x08 /* Private */,
       4,    2,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void QgsWmsLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWmsLegendNode *_t = static_cast<QgsWmsLegendNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getLegendGraphicFinished((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->getLegendGraphicErrored((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->getLegendGraphicProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsWmsLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsWmsLegendNode.data,
      qt_meta_data_QgsWmsLegendNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsWmsLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWmsLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWmsLegendNode.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsWmsLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsDataDefinedSizeLegendNode_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataDefinedSizeLegendNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataDefinedSizeLegendNode_t qt_meta_stringdata_QgsDataDefinedSizeLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QgsDataDefinedSizeLegendNode"

    },
    "QgsDataDefinedSizeLegendNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataDefinedSizeLegendNode[] = {

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

void QgsDataDefinedSizeLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDataDefinedSizeLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsDataDefinedSizeLegendNode.data,
      qt_meta_data_QgsDataDefinedSizeLegendNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDataDefinedSizeLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDataDefinedSizeLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDataDefinedSizeLegendNode.stringdata0))
        return static_cast<void*>(this);
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsDataDefinedSizeLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
