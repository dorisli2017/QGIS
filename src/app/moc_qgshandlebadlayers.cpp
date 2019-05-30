/****************************************************************************
** Meta object code from reading C++ file 'qgshandlebadlayers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgshandlebadlayers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgshandlebadlayers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsHandleBadLayersHandler_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsHandleBadLayersHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsHandleBadLayersHandler_t qt_meta_stringdata_QgsHandleBadLayersHandler = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsHandleBadLayersHandler"
QT_MOC_LITERAL(1, 26, 13), // "layersChanged"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "QgsHandleBadLayersHandler\0layersChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsHandleBadLayersHandler[] = {

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

void QgsHandleBadLayersHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsHandleBadLayersHandler *_t = static_cast<QgsHandleBadLayersHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layersChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsHandleBadLayersHandler::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsHandleBadLayersHandler::layersChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsHandleBadLayersHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsHandleBadLayersHandler.data,
      qt_meta_data_QgsHandleBadLayersHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsHandleBadLayersHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsHandleBadLayersHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHandleBadLayersHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsProjectBadLayerHandler"))
        return static_cast< QgsProjectBadLayerHandler*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsHandleBadLayersHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsHandleBadLayersHandler::layersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsHandleBadLayers_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsHandleBadLayers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsHandleBadLayers_t qt_meta_stringdata_QgsHandleBadLayers = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsHandleBadLayers"
QT_MOC_LITERAL(1, 19, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "browseClicked"
QT_MOC_LITERAL(4, 51, 11), // "editAuthCfg"
QT_MOC_LITERAL(5, 63, 5), // "apply"
QT_MOC_LITERAL(6, 69, 6) // "accept"

    },
    "QgsHandleBadLayers\0selectionChanged\0"
    "\0browseClicked\0editAuthCfg\0apply\0"
    "accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsHandleBadLayers[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsHandleBadLayers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsHandleBadLayers *_t = static_cast<QgsHandleBadLayers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->browseClicked(); break;
        case 2: _t->editAuthCfg(); break;
        case 3: _t->apply(); break;
        case 4: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsHandleBadLayers::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsHandleBadLayers.data,
      qt_meta_data_QgsHandleBadLayers,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsHandleBadLayers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsHandleBadLayers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHandleBadLayers.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::QgsHandleBadLayersBase"))
        return static_cast< Ui::QgsHandleBadLayersBase*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsHandleBadLayers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
