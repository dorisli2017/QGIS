/****************************************************************************
** Meta object code from reading C++ file 'qgsfeaturelistview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsfeaturelistview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfeaturelistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFeatureListView_t {
    QByteArrayData data[30];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFeatureListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFeatureListView_t qt_meta_stringdata_QgsFeatureListView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsFeatureListView"
QT_MOC_LITERAL(1, 19, 27), // "currentEditSelectionChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "QgsFeature&"
QT_MOC_LITERAL(4, 60, 4), // "feat"
QT_MOC_LITERAL(5, 65, 24), // "displayExpressionChanged"
QT_MOC_LITERAL(6, 90, 10), // "expression"
QT_MOC_LITERAL(7, 101, 26), // "aboutToChangeEditSelection"
QT_MOC_LITERAL(8, 128, 5), // "bool&"
QT_MOC_LITERAL(9, 134, 2), // "ok"
QT_MOC_LITERAL(10, 137, 19), // "willShowContextMenu"
QT_MOC_LITERAL(11, 157, 14), // "QgsActionMenu*"
QT_MOC_LITERAL(12, 172, 4), // "menu"
QT_MOC_LITERAL(13, 177, 7), // "atIndex"
QT_MOC_LITERAL(14, 185, 16), // "setEditSelection"
QT_MOC_LITERAL(15, 202, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(16, 216, 4), // "fids"
QT_MOC_LITERAL(17, 221, 5), // "index"
QT_MOC_LITERAL(18, 227, 35), // "QItemSelectionModel::Selectio..."
QT_MOC_LITERAL(19, 263, 7), // "command"
QT_MOC_LITERAL(20, 271, 9), // "selectAll"
QT_MOC_LITERAL(21, 281, 16), // "repaintRequested"
QT_MOC_LITERAL(22, 298, 15), // "QModelIndexList"
QT_MOC_LITERAL(23, 314, 7), // "indexes"
QT_MOC_LITERAL(24, 322, 20), // "editSelectionChanged"
QT_MOC_LITERAL(25, 343, 14), // "QItemSelection"
QT_MOC_LITERAL(26, 358, 10), // "deselected"
QT_MOC_LITERAL(27, 369, 8), // "selected"
QT_MOC_LITERAL(28, 378, 19), // "ensureEditSelection"
QT_MOC_LITERAL(29, 398, 11) // "inSelection"

    },
    "QgsFeatureListView\0currentEditSelectionChanged\0"
    "\0QgsFeature&\0feat\0displayExpressionChanged\0"
    "expression\0aboutToChangeEditSelection\0"
    "bool&\0ok\0willShowContextMenu\0"
    "QgsActionMenu*\0menu\0atIndex\0"
    "setEditSelection\0QgsFeatureIds\0fids\0"
    "index\0QItemSelectionModel::SelectionFlags\0"
    "command\0selectAll\0repaintRequested\0"
    "QModelIndexList\0indexes\0editSelectionChanged\0"
    "QItemSelection\0deselected\0selected\0"
    "ensureEditSelection\0inSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFeatureListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       7,    1,   80,    2, 0x06 /* Public */,
      10,    2,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   88,    2, 0x0a /* Public */,
      14,    2,   91,    2, 0x0a /* Public */,
      20,    0,   96,    2, 0x0a /* Public */,
      21,    1,   97,    2, 0x0a /* Public */,
      21,    0,  100,    2, 0x0a /* Public */,
      24,    2,  101,    2, 0x08 /* Private */,
      28,    1,  106,    2, 0x08 /* Private */,
      28,    0,  109,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QModelIndex,   12,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QModelIndex, 0x80000000 | 18,   17,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   26,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,

       0        // eod
};

void QgsFeatureListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFeatureListView *_t = static_cast<QgsFeatureListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentEditSelectionChanged((*reinterpret_cast< QgsFeature(*)>(_a[1]))); break;
        case 1: _t->displayExpressionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->aboutToChangeEditSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->willShowContextMenu((*reinterpret_cast< QgsActionMenu*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->setEditSelection((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 5: _t->setEditSelection((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 6: _t->selectAll(); break;
        case 7: _t->repaintRequested((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 8: _t->repaintRequested(); break;
        case 9: _t->editSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 10: _t->ensureEditSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->ensureEditSelection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsFeatureListView::*_t)(QgsFeature & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListView::currentEditSelectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsFeatureListView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListView::displayExpressionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsFeatureListView::*_t)(bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListView::aboutToChangeEditSelection)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsFeatureListView::*_t)(QgsActionMenu * , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListView::willShowContextMenu)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QgsFeatureListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_QgsFeatureListView.data,
      qt_meta_data_QgsFeatureListView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFeatureListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFeatureListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFeatureListView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int QgsFeatureListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QgsFeatureListView::currentEditSelectionChanged(QgsFeature & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsFeatureListView::displayExpressionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsFeatureListView::aboutToChangeEditSelection(bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsFeatureListView::willShowContextMenu(QgsActionMenu * _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
