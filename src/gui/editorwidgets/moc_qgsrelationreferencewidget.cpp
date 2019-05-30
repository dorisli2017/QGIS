/****************************************************************************
** Meta object code from reading C++ file 'qgsrelationreferencewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsrelationreferencewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrelationreferencewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRelationReferenceWidget_t {
    QByteArrayData data[22];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRelationReferenceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRelationReferenceWidget_t qt_meta_stringdata_QgsRelationReferenceWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsRelationReferenceWidget"
QT_MOC_LITERAL(1, 27, 17), // "foreignKeyChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "openForm"
QT_MOC_LITERAL(4, 55, 17), // "mapIdentification"
QT_MOC_LITERAL(5, 73, 16), // "deleteForeignKey"
QT_MOC_LITERAL(6, 90, 24), // "highlightActionTriggered"
QT_MOC_LITERAL(7, 115, 8), // "QAction*"
QT_MOC_LITERAL(8, 124, 6), // "action"
QT_MOC_LITERAL(9, 131, 15), // "deleteHighlight"
QT_MOC_LITERAL(10, 147, 21), // "comboReferenceChanged"
QT_MOC_LITERAL(11, 169, 5), // "index"
QT_MOC_LITERAL(12, 175, 17), // "featureIdentified"
QT_MOC_LITERAL(13, 193, 10), // "QgsFeature"
QT_MOC_LITERAL(14, 204, 7), // "feature"
QT_MOC_LITERAL(15, 212, 12), // "unsetMapTool"
QT_MOC_LITERAL(16, 225, 18), // "mapToolDeactivated"
QT_MOC_LITERAL(17, 244, 13), // "filterChanged"
QT_MOC_LITERAL(18, 258, 8), // "addEntry"
QT_MOC_LITERAL(19, 267, 20), // "updateAddEntryButton"
QT_MOC_LITERAL(20, 288, 11), // "updateIndex"
QT_MOC_LITERAL(21, 300, 21) // "openFormButtonVisible"

    },
    "QgsRelationReferenceWidget\0foreignKeyChanged\0"
    "\0openForm\0mapIdentification\0"
    "deleteForeignKey\0highlightActionTriggered\0"
    "QAction*\0action\0deleteHighlight\0"
    "comboReferenceChanged\0index\0"
    "featureIdentified\0QgsFeature\0feature\0"
    "unsetMapTool\0mapToolDeactivated\0"
    "filterChanged\0addEntry\0updateAddEntryButton\0"
    "updateIndex\0openFormButtonVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRelationReferenceWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       1,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   87,    2, 0x0a /* Public */,
       4,    0,   88,    2, 0x0a /* Public */,
       5,    0,   89,    2, 0x0a /* Public */,
       6,    1,   90,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      12,    1,   97,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,
      19,    0,  104,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QgsRelationReferenceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRelationReferenceWidget *_t = static_cast<QgsRelationReferenceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->foreignKeyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->openForm(); break;
        case 2: _t->mapIdentification(); break;
        case 3: _t->deleteForeignKey(); break;
        case 4: _t->highlightActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->deleteHighlight(); break;
        case 6: _t->comboReferenceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->featureIdentified((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 8: _t->unsetMapTool(); break;
        case 9: _t->mapToolDeactivated(); break;
        case 10: _t->filterChanged(); break;
        case 11: _t->addEntry(); break;
        case 12: _t->updateAddEntryButton(); break;
        case 13: _t->updateIndex(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsRelationReferenceWidget::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsRelationReferenceWidget::foreignKeyChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsRelationReferenceWidget *_t = static_cast<QgsRelationReferenceWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->openFormButtonVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsRelationReferenceWidget *_t = static_cast<QgsRelationReferenceWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOpenFormButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsRelationReferenceWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsRelationReferenceWidget.data,
      qt_meta_data_QgsRelationReferenceWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRelationReferenceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRelationReferenceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRelationReferenceWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsRelationReferenceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
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
void QgsRelationReferenceWidget::foreignKeyChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
