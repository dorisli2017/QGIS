/****************************************************************************
** Meta object code from reading C++ file 'qgsvertextool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsvertextool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvertextool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVertexTool_t {
    QByteArrayData data[21];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVertexTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVertexTool_t qt_meta_stringdata_QgsVertexTool = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsVertexTool"
QT_MOC_LITERAL(1, 14, 23), // "onCachedGeometryChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "QgsFeatureId"
QT_MOC_LITERAL(4, 52, 3), // "fid"
QT_MOC_LITERAL(5, 56, 11), // "QgsGeometry"
QT_MOC_LITERAL(6, 68, 4), // "geom"
QT_MOC_LITERAL(7, 73, 23), // "onCachedGeometryDeleted"
QT_MOC_LITERAL(8, 97, 18), // "clearGeometryCache"
QT_MOC_LITERAL(9, 116, 27), // "deleteVertexEditorSelection"
QT_MOC_LITERAL(10, 144, 20), // "validationErrorFound"
QT_MOC_LITERAL(11, 165, 18), // "QgsGeometry::Error"
QT_MOC_LITERAL(12, 184, 1), // "e"
QT_MOC_LITERAL(13, 186, 18), // "validationFinished"
QT_MOC_LITERAL(14, 205, 25), // "startRangeVertexSelection"
QT_MOC_LITERAL(15, 231, 11), // "cleanEditor"
QT_MOC_LITERAL(16, 243, 2), // "id"
QT_MOC_LITERAL(17, 246, 29), // "lockedFeatureSelectionChanged"
QT_MOC_LITERAL(18, 276, 14), // "VertexToolMode"
QT_MOC_LITERAL(19, 291, 11), // "ActiveLayer"
QT_MOC_LITERAL(20, 303, 9) // "AllLayers"

    },
    "QgsVertexTool\0onCachedGeometryChanged\0"
    "\0QgsFeatureId\0fid\0QgsGeometry\0geom\0"
    "onCachedGeometryDeleted\0clearGeometryCache\0"
    "deleteVertexEditorSelection\0"
    "validationErrorFound\0QgsGeometry::Error\0"
    "e\0validationFinished\0startRangeVertexSelection\0"
    "cleanEditor\0id\0lockedFeatureSelectionChanged\0"
    "VertexToolMode\0ActiveLayer\0AllLayers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVertexTool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       1,   78, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,
      13,    0,   72,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,
      15,    1,   74,    2, 0x08 /* Private */,
      17,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   16,
    QMetaType::Void,

 // enums: name, flags, count, data
      18, 0x0,    2,   82,

 // enum data: key, value
      19, uint(QgsVertexTool::ActiveLayer),
      20, uint(QgsVertexTool::AllLayers),

       0        // eod
};

void QgsVertexTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVertexTool *_t = static_cast<QgsVertexTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCachedGeometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< const QgsGeometry(*)>(_a[2]))); break;
        case 1: _t->onCachedGeometryDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 2: _t->clearGeometryCache(); break;
        case 3: _t->deleteVertexEditorSelection(); break;
        case 4: _t->validationErrorFound((*reinterpret_cast< const QgsGeometry::Error(*)>(_a[1]))); break;
        case 5: _t->validationFinished(); break;
        case 6: _t->startRangeVertexSelection(); break;
        case 7: _t->cleanEditor((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 8: _t->lockedFeatureSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QgsVertexTool::staticMetaObject = {
    { &QgsMapToolAdvancedDigitizing::staticMetaObject, qt_meta_stringdata_QgsVertexTool.data,
      qt_meta_data_QgsVertexTool,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVertexTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVertexTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVertexTool.stringdata0))
        return static_cast<void*>(this);
    return QgsMapToolAdvancedDigitizing::qt_metacast(_clname);
}

int QgsVertexTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapToolAdvancedDigitizing::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
