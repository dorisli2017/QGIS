/****************************************************************************
** Meta object code from reading C++ file 'qgsgcplistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgcplistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgcplistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGCPListWidget_t {
    QByteArrayData data[19];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGCPListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGCPListWidget_t qt_meta_stringdata_QgsGCPListWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsGCPListWidget"
QT_MOC_LITERAL(1, 17, 9), // "jumpToGCP"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "theGCPIndex"
QT_MOC_LITERAL(4, 40, 12), // "pointEnabled"
QT_MOC_LITERAL(5, 53, 19), // "QgsGeorefDataPoint*"
QT_MOC_LITERAL(6, 73, 3), // "pnt"
QT_MOC_LITERAL(7, 77, 1), // "i"
QT_MOC_LITERAL(8, 79, 15), // "deleteDataPoint"
QT_MOC_LITERAL(9, 95, 5), // "index"
QT_MOC_LITERAL(10, 101, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(11, 119, 11), // "itemClicked"
QT_MOC_LITERAL(12, 131, 16), // "updateItemCoords"
QT_MOC_LITERAL(13, 148, 8), // "QWidget*"
QT_MOC_LITERAL(14, 157, 6), // "editor"
QT_MOC_LITERAL(15, 164, 15), // "showContextMenu"
QT_MOC_LITERAL(16, 180, 9), // "removeRow"
QT_MOC_LITERAL(17, 190, 8), // "editCell"
QT_MOC_LITERAL(18, 199, 11) // "jumpToPoint"

    },
    "QgsGCPListWidget\0jumpToGCP\0\0theGCPIndex\0"
    "pointEnabled\0QgsGeorefDataPoint*\0pnt\0"
    "i\0deleteDataPoint\0index\0itemDoubleClicked\0"
    "itemClicked\0updateItemCoords\0QWidget*\0"
    "editor\0showContextMenu\0removeRow\0"
    "editCell\0jumpToPoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGCPListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,
       8,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   75,    2, 0x0a /* Public */,
      11,    1,   78,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x08 /* Private */,
      15,    1,   84,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,
      17,    0,   88,    2, 0x08 /* Private */,
      18,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsGCPListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGCPListWidget *_t = static_cast<QgsGCPListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->jumpToGCP((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->pointEnabled((*reinterpret_cast< QgsGeorefDataPoint*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->deleteDataPoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->itemDoubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 4: _t->itemClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 5: _t->updateItemCoords((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 6: _t->showContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 7: _t->removeRow(); break;
        case 8: _t->editCell(); break;
        case 9: _t->jumpToPoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGCPListWidget::*_t)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGCPListWidget::jumpToGCP)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsGCPListWidget::*_t)(QgsGeorefDataPoint * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGCPListWidget::pointEnabled)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsGCPListWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGCPListWidget::deleteDataPoint)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsGCPListWidget::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_QgsGCPListWidget.data,
      qt_meta_data_QgsGCPListWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGCPListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGCPListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGCPListWidget.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int QgsGCPListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QgsGCPListWidget::jumpToGCP(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGCPListWidget::pointEnabled(QgsGeorefDataPoint * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsGCPListWidget::deleteDataPoint(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
