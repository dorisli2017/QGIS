/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutmultiframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutmultiframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutmultiframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutMultiFrame_t {
    QByteArrayData data[14];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutMultiFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutMultiFrame_t qt_meta_stringdata_QgsLayoutMultiFrame = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsLayoutMultiFrame"
QT_MOC_LITERAL(1, 20, 15), // "contentsChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "refresh"
QT_MOC_LITERAL(4, 45, 6), // "update"
QT_MOC_LITERAL(5, 52, 21), // "recalculateFrameSizes"
QT_MOC_LITERAL(6, 74, 21), // "recalculateFrameRects"
QT_MOC_LITERAL(7, 96, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(8, 123, 36), // "QgsLayoutObject::DataDefinedP..."
QT_MOC_LITERAL(9, 160, 8), // "property"
QT_MOC_LITERAL(10, 169, 16), // "handlePageChange"
QT_MOC_LITERAL(11, 186, 18), // "handleFrameRemoval"
QT_MOC_LITERAL(12, 205, 15), // "QgsLayoutFrame*"
QT_MOC_LITERAL(13, 221, 5) // "frame"

    },
    "QgsLayoutMultiFrame\0contentsChanged\0"
    "\0refresh\0update\0recalculateFrameSizes\0"
    "recalculateFrameRects\0refreshDataDefinedProperty\0"
    "QgsLayoutObject::DataDefinedProperty\0"
    "property\0handlePageChange\0handleFrameRemoval\0"
    "QgsLayoutFrame*\0frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutMultiFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       7,    0,   67,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void QgsLayoutMultiFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutMultiFrame *_t = static_cast<QgsLayoutMultiFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentsChanged(); break;
        case 1: _t->refresh(); break;
        case 2: _t->update(); break;
        case 3: _t->recalculateFrameSizes(); break;
        case 4: _t->recalculateFrameRects(); break;
        case 5: _t->refreshDataDefinedProperty((*reinterpret_cast< QgsLayoutObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 6: _t->refreshDataDefinedProperty(); break;
        case 7: _t->handlePageChange(); break;
        case 8: _t->handleFrameRemoval((*reinterpret_cast< QgsLayoutFrame*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayoutMultiFrame::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutMultiFrame::contentsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsLayoutMultiFrame::staticMetaObject = {
    { &QgsLayoutObject::staticMetaObject, qt_meta_stringdata_QgsLayoutMultiFrame.data,
      qt_meta_data_QgsLayoutMultiFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutMultiFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutMultiFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutMultiFrame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsLayoutUndoObjectInterface"))
        return static_cast< QgsLayoutUndoObjectInterface*>(this);
    return QgsLayoutObject::qt_metacast(_clname);
}

int QgsLayoutMultiFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QgsLayoutMultiFrame::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
