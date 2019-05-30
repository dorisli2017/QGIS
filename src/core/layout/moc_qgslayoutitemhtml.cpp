/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutitemhtml.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutitemhtml.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutitemhtml.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutItemHtml_t {
    QByteArrayData data[10];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutItemHtml_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutItemHtml_t qt_meta_stringdata_QgsLayoutItemHtml = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsLayoutItemHtml"
QT_MOC_LITERAL(1, 18, 8), // "loadHtml"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "useCache"
QT_MOC_LITERAL(4, 37, 27), // "const QgsExpressionContext*"
QT_MOC_LITERAL(5, 65, 7), // "context"
QT_MOC_LITERAL(6, 73, 21), // "recalculateFrameSizes"
QT_MOC_LITERAL(7, 95, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(8, 122, 36), // "QgsLayoutObject::DataDefinedP..."
QT_MOC_LITERAL(9, 159, 8) // "property"

    },
    "QgsLayoutItemHtml\0loadHtml\0\0useCache\0"
    "const QgsExpressionContext*\0context\0"
    "recalculateFrameSizes\0refreshDataDefinedProperty\0"
    "QgsLayoutObject::DataDefinedProperty\0"
    "property"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutItemHtml[] = {

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
       1,    2,   44,    2, 0x0a /* Public */,
       1,    1,   49,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   52,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x0a /* Public */,
       7,    0,   57,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutItemHtml::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutItemHtml *_t = static_cast<QgsLayoutItemHtml *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadHtml((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QgsExpressionContext*(*)>(_a[2]))); break;
        case 1: _t->loadHtml((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loadHtml(); break;
        case 3: _t->recalculateFrameSizes(); break;
        case 4: _t->refreshDataDefinedProperty((*reinterpret_cast< QgsLayoutObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 5: _t->refreshDataDefinedProperty(); break;
        default: ;
        }
    }
}

const QMetaObject QgsLayoutItemHtml::staticMetaObject = {
    { &QgsLayoutMultiFrame::staticMetaObject, qt_meta_stringdata_QgsLayoutItemHtml.data,
      qt_meta_data_QgsLayoutItemHtml,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutItemHtml::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutItemHtml::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutItemHtml.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutMultiFrame::qt_metacast(_clname);
}

int QgsLayoutItemHtml::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutMultiFrame::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_JavascriptExecutorLoop_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JavascriptExecutorLoop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JavascriptExecutorLoop_t qt_meta_stringdata_JavascriptExecutorLoop = {
    {
QT_MOC_LITERAL(0, 0, 22), // "JavascriptExecutorLoop"
QT_MOC_LITERAL(1, 23, 4), // "done"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13) // "execIfNotDone"

    },
    "JavascriptExecutorLoop\0done\0\0execIfNotDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JavascriptExecutorLoop[] = {

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
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JavascriptExecutorLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JavascriptExecutorLoop *_t = static_cast<JavascriptExecutorLoop *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->execIfNotDone(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject JavascriptExecutorLoop::staticMetaObject = {
    { &QEventLoop::staticMetaObject, qt_meta_stringdata_JavascriptExecutorLoop.data,
      qt_meta_data_JavascriptExecutorLoop,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JavascriptExecutorLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavascriptExecutorLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JavascriptExecutorLoop.stringdata0))
        return static_cast<void*>(this);
    return QEventLoop::qt_metacast(_clname);
}

int JavascriptExecutorLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEventLoop::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
