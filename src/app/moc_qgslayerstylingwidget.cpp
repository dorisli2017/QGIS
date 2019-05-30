/****************************************************************************
** Meta object code from reading C++ file 'qgslayerstylingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayerstylingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayerstylingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayerStylingWidget_t {
    QByteArrayData data[17];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerStylingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerStylingWidget_t qt_meta_stringdata_QgsLayerStylingWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsLayerStylingWidget"
QT_MOC_LITERAL(1, 22, 12), // "styleChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(4, 49, 5), // "layer"
QT_MOC_LITERAL(5, 55, 8), // "setLayer"
QT_MOC_LITERAL(6, 64, 5), // "apply"
QT_MOC_LITERAL(7, 70, 9), // "autoApply"
QT_MOC_LITERAL(8, 80, 4), // "undo"
QT_MOC_LITERAL(9, 85, 4), // "redo"
QT_MOC_LITERAL(10, 90, 24), // "updateCurrentWidgetLayer"
QT_MOC_LITERAL(11, 115, 14), // "setCurrentPage"
QT_MOC_LITERAL(12, 130, 27), // "QgsLayerStylingWidget::Page"
QT_MOC_LITERAL(13, 158, 4), // "page"
QT_MOC_LITERAL(14, 163, 21), // "layerAboutToBeRemoved"
QT_MOC_LITERAL(15, 185, 16), // "liveApplyToggled"
QT_MOC_LITERAL(16, 202, 5) // "value"

    },
    "QgsLayerStylingWidget\0styleChanged\0\0"
    "QgsMapLayer*\0layer\0setLayer\0apply\0"
    "autoApply\0undo\0redo\0updateCurrentWidgetLayer\0"
    "setCurrentPage\0QgsLayerStylingWidget::Page\0"
    "page\0layerAboutToBeRemoved\0liveApplyToggled\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerStylingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   67,    2, 0x0a /* Public */,
       6,    0,   70,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,
      14,    1,   78,    2, 0x08 /* Private */,
      15,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void QgsLayerStylingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerStylingWidget *_t = static_cast<QgsLayerStylingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->styleChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: _t->setLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 2: _t->apply(); break;
        case 3: _t->autoApply(); break;
        case 4: _t->undo(); break;
        case 5: _t->redo(); break;
        case 6: _t->updateCurrentWidgetLayer(); break;
        case 7: _t->setCurrentPage((*reinterpret_cast< QgsLayerStylingWidget::Page(*)>(_a[1]))); break;
        case 8: _t->layerAboutToBeRemoved((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 9: _t->liveApplyToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayerStylingWidget::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerStylingWidget::styleChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsLayerStylingWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsLayerStylingWidget.data,
      qt_meta_data_QgsLayerStylingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerStylingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerStylingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerStylingWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsLayerStylingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QgsLayerStylingWidget::styleChanged(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
