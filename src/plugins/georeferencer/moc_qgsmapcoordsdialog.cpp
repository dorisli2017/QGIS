/****************************************************************************
** Meta object code from reading C++ file 'qgsmapcoordsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmapcoordsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapcoordsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeorefMapToolEmitPoint_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeorefMapToolEmitPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeorefMapToolEmitPoint_t qt_meta_stringdata_QgsGeorefMapToolEmitPoint = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsGeorefMapToolEmitPoint"
QT_MOC_LITERAL(1, 26, 13), // "canvasClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "QgsPointXY"
QT_MOC_LITERAL(4, 52, 5), // "point"
QT_MOC_LITERAL(5, 58, 15), // "Qt::MouseButton"
QT_MOC_LITERAL(6, 74, 6), // "button"
QT_MOC_LITERAL(7, 81, 13) // "mouseReleased"

    },
    "QgsGeorefMapToolEmitPoint\0canvasClicked\0"
    "\0QgsPointXY\0point\0Qt::MouseButton\0"
    "button\0mouseReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeorefMapToolEmitPoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       7,    0,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

       0        // eod
};

void QgsGeorefMapToolEmitPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeorefMapToolEmitPoint *_t = static_cast<QgsGeorefMapToolEmitPoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->canvasClicked((*reinterpret_cast< const QgsPointXY(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[2]))); break;
        case 1: _t->mouseReleased(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGeorefMapToolEmitPoint::*_t)(const QgsPointXY & , Qt::MouseButton );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeorefMapToolEmitPoint::canvasClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsGeorefMapToolEmitPoint::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGeorefMapToolEmitPoint::mouseReleased)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsGeorefMapToolEmitPoint::staticMetaObject = {
    { &QgsMapTool::staticMetaObject, qt_meta_stringdata_QgsGeorefMapToolEmitPoint.data,
      qt_meta_data_QgsGeorefMapToolEmitPoint,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeorefMapToolEmitPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeorefMapToolEmitPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeorefMapToolEmitPoint.stringdata0))
        return static_cast<void*>(this);
    return QgsMapTool::qt_metacast(_clname);
}

int QgsGeorefMapToolEmitPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapTool::qt_metacall(_c, _id, _a);
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
void QgsGeorefMapToolEmitPoint::canvasClicked(const QgsPointXY & _t1, Qt::MouseButton _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGeorefMapToolEmitPoint::mouseReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QgsMapCoordsDialog_t {
    QByteArrayData data[11];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapCoordsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapCoordsDialog_t qt_meta_stringdata_QgsMapCoordsDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsMapCoordsDialog"
QT_MOC_LITERAL(1, 19, 10), // "pointAdded"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "QgsPointXY"
QT_MOC_LITERAL(4, 42, 18), // "buttonBox_accepted"
QT_MOC_LITERAL(5, 61, 16), // "setToolEmitPoint"
QT_MOC_LITERAL(6, 78, 8), // "isEnable"
QT_MOC_LITERAL(7, 87, 10), // "maybeSetXY"
QT_MOC_LITERAL(8, 98, 15), // "Qt::MouseButton"
QT_MOC_LITERAL(9, 114, 8), // "updateOK"
QT_MOC_LITERAL(10, 123, 11) // "setPrevTool"

    },
    "QgsMapCoordsDialog\0pointAdded\0\0"
    "QgsPointXY\0buttonBox_accepted\0"
    "setToolEmitPoint\0isEnable\0maybeSetXY\0"
    "Qt::MouseButton\0updateOK\0setPrevTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapCoordsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   49,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       7,    2,   53,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 8,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsMapCoordsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapCoordsDialog *_t = static_cast<QgsMapCoordsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointAdded((*reinterpret_cast< const QgsPointXY(*)>(_a[1])),(*reinterpret_cast< const QgsPointXY(*)>(_a[2]))); break;
        case 1: _t->buttonBox_accepted(); break;
        case 2: _t->setToolEmitPoint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->maybeSetXY((*reinterpret_cast< const QgsPointXY(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[2]))); break;
        case 4: _t->updateOK(); break;
        case 5: _t->setPrevTool(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMapCoordsDialog::*_t)(const QgsPointXY & , const QgsPointXY & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCoordsDialog::pointAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsMapCoordsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsMapCoordsDialog.data,
      qt_meta_data_QgsMapCoordsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapCoordsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapCoordsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapCoordsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsMapCoordsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsMapCoordsDialog::pointAdded(const QgsPointXY & _t1, const QgsPointXY & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
