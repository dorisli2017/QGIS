/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutviewrubberband.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutviewrubberband.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutviewrubberband.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutViewRubberBand_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutViewRubberBand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutViewRubberBand_t qt_meta_stringdata_QgsLayoutViewRubberBand = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsLayoutViewRubberBand"
QT_MOC_LITERAL(1, 24, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4) // "size"

    },
    "QgsLayoutViewRubberBand\0sizeChanged\0"
    "\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutViewRubberBand[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void QgsLayoutViewRubberBand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutViewRubberBand *_t = static_cast<QgsLayoutViewRubberBand *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayoutViewRubberBand::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutViewRubberBand::sizeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsLayoutViewRubberBand::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayoutViewRubberBand.data,
      qt_meta_data_QgsLayoutViewRubberBand,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutViewRubberBand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutViewRubberBand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutViewRubberBand.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsLayoutViewRubberBand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsLayoutViewRubberBand::sizeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsLayoutViewRectangularRubberBand_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutViewRectangularRubberBand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutViewRectangularRubberBand_t qt_meta_stringdata_QgsLayoutViewRectangularRubberBand = {
    {
QT_MOC_LITERAL(0, 0, 34) // "QgsLayoutViewRectangularRubbe..."

    },
    "QgsLayoutViewRectangularRubberBand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutViewRectangularRubberBand[] = {

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

void QgsLayoutViewRectangularRubberBand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsLayoutViewRectangularRubberBand::staticMetaObject = {
    { &QgsLayoutViewRubberBand::staticMetaObject, qt_meta_stringdata_QgsLayoutViewRectangularRubberBand.data,
      qt_meta_data_QgsLayoutViewRectangularRubberBand,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutViewRectangularRubberBand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutViewRectangularRubberBand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutViewRectangularRubberBand.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutViewRubberBand::qt_metacast(_clname);
}

int QgsLayoutViewRectangularRubberBand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutViewRubberBand::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsLayoutViewEllipticalRubberBand_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutViewEllipticalRubberBand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutViewEllipticalRubberBand_t qt_meta_stringdata_QgsLayoutViewEllipticalRubberBand = {
    {
QT_MOC_LITERAL(0, 0, 33) // "QgsLayoutViewEllipticalRubber..."

    },
    "QgsLayoutViewEllipticalRubberBand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutViewEllipticalRubberBand[] = {

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

void QgsLayoutViewEllipticalRubberBand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsLayoutViewEllipticalRubberBand::staticMetaObject = {
    { &QgsLayoutViewRubberBand::staticMetaObject, qt_meta_stringdata_QgsLayoutViewEllipticalRubberBand.data,
      qt_meta_data_QgsLayoutViewEllipticalRubberBand,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutViewEllipticalRubberBand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutViewEllipticalRubberBand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutViewEllipticalRubberBand.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutViewRubberBand::qt_metacast(_clname);
}

int QgsLayoutViewEllipticalRubberBand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutViewRubberBand::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsLayoutViewTriangleRubberBand_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutViewTriangleRubberBand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutViewTriangleRubberBand_t qt_meta_stringdata_QgsLayoutViewTriangleRubberBand = {
    {
QT_MOC_LITERAL(0, 0, 31) // "QgsLayoutViewTriangleRubberBand"

    },
    "QgsLayoutViewTriangleRubberBand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutViewTriangleRubberBand[] = {

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

void QgsLayoutViewTriangleRubberBand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsLayoutViewTriangleRubberBand::staticMetaObject = {
    { &QgsLayoutViewRubberBand::staticMetaObject, qt_meta_stringdata_QgsLayoutViewTriangleRubberBand.data,
      qt_meta_data_QgsLayoutViewTriangleRubberBand,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutViewTriangleRubberBand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutViewTriangleRubberBand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutViewTriangleRubberBand.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutViewRubberBand::qt_metacast(_clname);
}

int QgsLayoutViewTriangleRubberBand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutViewRubberBand::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
