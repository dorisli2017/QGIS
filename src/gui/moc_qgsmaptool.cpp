/****************************************************************************
** Meta object code from reading C++ file 'qgsmaptool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmaptool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaptool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapTool_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapTool_t qt_meta_stringdata_QgsMapTool = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QgsMapTool"
QT_MOC_LITERAL(1, 11, 14), // "messageEmitted"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "message"
QT_MOC_LITERAL(4, 35, 18), // "Qgis::MessageLevel"
QT_MOC_LITERAL(5, 54, 16), // "messageDiscarded"
QT_MOC_LITERAL(6, 71, 9), // "activated"
QT_MOC_LITERAL(7, 81, 11), // "deactivated"
QT_MOC_LITERAL(8, 93, 15) // "actionDestroyed"

    },
    "QgsMapTool\0messageEmitted\0\0message\0"
    "Qgis::MessageLevel\0messageDiscarded\0"
    "activated\0deactivated\0actionDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapTool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       1,    1,   49,    2, 0x26 /* Public | MethodCloned */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    2,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsMapTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapTool *_t = static_cast<QgsMapTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageEmitted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qgis::MessageLevel(*)>(_a[2]))); break;
        case 1: _t->messageEmitted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->messageDiscarded(); break;
        case 3: _t->activated(); break;
        case 4: _t->deactivated(); break;
        case 5: _t->actionDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMapTool::*_t)(const QString & , Qgis::MessageLevel );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapTool::messageEmitted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsMapTool::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapTool::messageDiscarded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsMapTool::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapTool::activated)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsMapTool::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapTool::deactivated)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QgsMapTool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapTool.data,
      qt_meta_data_QgsMapTool,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapTool.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsMapTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QgsMapTool::messageEmitted(const QString & _t1, Qgis::MessageLevel _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void QgsMapTool::messageDiscarded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsMapTool::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QgsMapTool::deactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
