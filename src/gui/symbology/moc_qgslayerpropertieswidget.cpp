/****************************************************************************
** Meta object code from reading C++ file 'qgslayerpropertieswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayerpropertieswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayerpropertieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayerPropertiesWidget_t {
    QByteArrayData data[11];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerPropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerPropertiesWidget_t qt_meta_stringdata_QgsLayerPropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsLayerPropertiesWidget"
QT_MOC_LITERAL(1, 25, 7), // "changed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "changeLayer"
QT_MOC_LITERAL(4, 46, 15), // "QgsSymbolLayer*"
QT_MOC_LITERAL(5, 62, 16), // "layerTypeChanged"
QT_MOC_LITERAL(6, 79, 17), // "emitSignalChanged"
QT_MOC_LITERAL(7, 97, 11), // "reloadLayer"
QT_MOC_LITERAL(8, 109, 24), // "mEnabledCheckBox_toggled"
QT_MOC_LITERAL(9, 134, 7), // "enabled"
QT_MOC_LITERAL(10, 142, 14) // "updateProperty"

    },
    "QgsLayerPropertiesWidget\0changed\0\0"
    "changeLayer\0QgsSymbolLayer*\0"
    "layerTypeChanged\0emitSignalChanged\0"
    "reloadLayer\0mEnabledCheckBox_toggled\0"
    "enabled\0updateProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerPropertiesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

       0        // eod
};

void QgsLayerPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerPropertiesWidget *_t = static_cast<QgsLayerPropertiesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->changeLayer((*reinterpret_cast< QgsSymbolLayer*(*)>(_a[1]))); break;
        case 2: _t->layerTypeChanged(); break;
        case 3: _t->emitSignalChanged(); break;
        case 4: _t->reloadLayer(); break;
        case 5: _t->mEnabledCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updateProperty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayerPropertiesWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerPropertiesWidget::changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsLayerPropertiesWidget::*_t)(QgsSymbolLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerPropertiesWidget::changeLayer)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsLayerPropertiesWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsLayerPropertiesWidget.data,
      qt_meta_data_QgsLayerPropertiesWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerPropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsExpressionContextGenerator"))
        return static_cast< QgsExpressionContextGenerator*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsLayerPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QgsLayerPropertiesWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsLayerPropertiesWidget::changeLayer(QgsSymbolLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
