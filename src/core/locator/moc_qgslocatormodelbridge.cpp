/****************************************************************************
** Meta object code from reading C++ file 'qgslocatormodelbridge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslocatormodelbridge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslocatormodelbridge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLocatorModelBridge_t {
    QByteArrayData data[21];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLocatorModelBridge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLocatorModelBridge_t qt_meta_stringdata_QgsLocatorModelBridge = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsLocatorModelBridge"
QT_MOC_LITERAL(1, 22, 11), // "resultAdded"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "isRunningChanged"
QT_MOC_LITERAL(4, 52, 14), // "resultsCleared"
QT_MOC_LITERAL(5, 67, 17), // "invalidateResults"
QT_MOC_LITERAL(6, 85, 18), // "updateCanvasExtent"
QT_MOC_LITERAL(7, 104, 12), // "QgsRectangle"
QT_MOC_LITERAL(8, 117, 6), // "extent"
QT_MOC_LITERAL(9, 124, 15), // "updateCanvasCrs"
QT_MOC_LITERAL(10, 140, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(11, 169, 3), // "crs"
QT_MOC_LITERAL(12, 173, 14), // "searchFinished"
QT_MOC_LITERAL(13, 188, 9), // "addResult"
QT_MOC_LITERAL(14, 198, 16), // "QgsLocatorResult"
QT_MOC_LITERAL(15, 215, 6), // "result"
QT_MOC_LITERAL(16, 222, 13), // "performSearch"
QT_MOC_LITERAL(17, 236, 4), // "text"
QT_MOC_LITERAL(18, 241, 10), // "proxyModel"
QT_MOC_LITERAL(19, 252, 21), // "QgsLocatorProxyModel*"
QT_MOC_LITERAL(20, 274, 9) // "isRunning"

    },
    "QgsLocatorModelBridge\0resultAdded\0\0"
    "isRunningChanged\0resultsCleared\0"
    "invalidateResults\0updateCanvasExtent\0"
    "QgsRectangle\0extent\0updateCanvasCrs\0"
    "QgsCoordinateReferenceSystem\0crs\0"
    "searchFinished\0addResult\0QgsLocatorResult\0"
    "result\0performSearch\0text\0proxyModel\0"
    "QgsLocatorProxyModel*\0isRunning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLocatorModelBridge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   67,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    1,   75,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      16,    1,   78,    2, 0x02 /* Public */,
      18,    0,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   17,
    0x80000000 | 19,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       1,

       0        // eod
};

void QgsLocatorModelBridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLocatorModelBridge *_t = static_cast<QgsLocatorModelBridge *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultAdded(); break;
        case 1: _t->isRunningChanged(); break;
        case 2: _t->resultsCleared(); break;
        case 3: _t->invalidateResults(); break;
        case 4: _t->updateCanvasExtent((*reinterpret_cast< const QgsRectangle(*)>(_a[1]))); break;
        case 5: _t->updateCanvasCrs((*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[1]))); break;
        case 6: _t->searchFinished(); break;
        case 7: _t->addResult((*reinterpret_cast< const QgsLocatorResult(*)>(_a[1]))); break;
        case 8: _t->performSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { QgsLocatorProxyModel* _r = _t->proxyModel();
            if (_a[0]) *reinterpret_cast< QgsLocatorProxyModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLocatorModelBridge::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLocatorModelBridge::resultAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsLocatorModelBridge::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLocatorModelBridge::isRunningChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsLocatorModelBridge::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLocatorModelBridge::resultsCleared)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsLocatorModelBridge *_t = static_cast<QgsLocatorModelBridge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRunning(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsLocatorModelBridge::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLocatorModelBridge.data,
      qt_meta_data_QgsLocatorModelBridge,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLocatorModelBridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLocatorModelBridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLocatorModelBridge.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsLocatorModelBridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsLocatorModelBridge::resultAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsLocatorModelBridge::isRunningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsLocatorModelBridge::resultsCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
