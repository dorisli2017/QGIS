/****************************************************************************
** Meta object code from reading C++ file 'qgsdatumtransformtablewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsdatumtransformtablewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdatumtransformtablewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDatumTransformTableModel_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDatumTransformTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDatumTransformTableModel_t qt_meta_stringdata_QgsDatumTransformTableModel = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QgsDatumTransformTableModel"

    },
    "QgsDatumTransformTableModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDatumTransformTableModel[] = {

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

void QgsDatumTransformTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDatumTransformTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_QgsDatumTransformTableModel.data,
      qt_meta_data_QgsDatumTransformTableModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDatumTransformTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDatumTransformTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDatumTransformTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int QgsDatumTransformTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsDatumTransformTableWidget_t {
    QByteArrayData data[9];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDatumTransformTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDatumTransformTableWidget_t qt_meta_stringdata_QgsDatumTransformTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsDatumTransformTableWidget"
QT_MOC_LITERAL(1, 29, 17), // "addDatumTransform"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 20), // "removeDatumTransform"
QT_MOC_LITERAL(4, 69, 18), // "editDatumTransform"
QT_MOC_LITERAL(5, 88, 16), // "selectionChanged"
QT_MOC_LITERAL(6, 105, 14), // "QItemSelection"
QT_MOC_LITERAL(7, 120, 8), // "selected"
QT_MOC_LITERAL(8, 129, 10) // "deselected"

    },
    "QgsDatumTransformTableWidget\0"
    "addDatumTransform\0\0removeDatumTransform\0"
    "editDatumTransform\0selectionChanged\0"
    "QItemSelection\0selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDatumTransformTableWidget[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    2,   47,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x28 /* Private | MethodCloned */,
       5,    0,   55,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void QgsDatumTransformTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDatumTransformTableWidget *_t = static_cast<QgsDatumTransformTableWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addDatumTransform(); break;
        case 1: _t->removeDatumTransform(); break;
        case 2: _t->editDatumTransform(); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 4: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 5: _t->selectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QgsDatumTransformTableWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsDatumTransformTableWidget.data,
      qt_meta_data_QgsDatumTransformTableWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDatumTransformTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDatumTransformTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDatumTransformTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsDatumTransformTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
