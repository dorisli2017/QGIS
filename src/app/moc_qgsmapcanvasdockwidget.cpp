/****************************************************************************
** Meta object code from reading C++ file 'qgsmapcanvasdockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmapcanvasdockwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapcanvasdockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapCanvasDockWidget_t {
    QByteArrayData data[17];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapCanvasDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapCanvasDockWidget_t qt_meta_stringdata_QgsMapCanvasDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsMapCanvasDockWidget"
QT_MOC_LITERAL(1, 23, 15), // "renameTriggered"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "setMapCrs"
QT_MOC_LITERAL(4, 50, 16), // "mapExtentChanged"
QT_MOC_LITERAL(5, 67, 13), // "mapCrsChanged"
QT_MOC_LITERAL(6, 81, 15), // "menuAboutToShow"
QT_MOC_LITERAL(7, 97, 23), // "settingsMenuAboutToShow"
QT_MOC_LITERAL(8, 121, 10), // "syncMarker"
QT_MOC_LITERAL(9, 132, 10), // "QgsPointXY"
QT_MOC_LITERAL(10, 143, 1), // "p"
QT_MOC_LITERAL(11, 145, 15), // "mapScaleChanged"
QT_MOC_LITERAL(12, 161, 16), // "updateExtentRect"
QT_MOC_LITERAL(13, 178, 10), // "showLabels"
QT_MOC_LITERAL(14, 189, 4), // "show"
QT_MOC_LITERAL(15, 194, 19), // "autoZoomToSelection"
QT_MOC_LITERAL(16, 214, 8) // "autoZoom"

    },
    "QgsMapCanvasDockWidget\0renameTriggered\0"
    "\0setMapCrs\0mapExtentChanged\0mapCrsChanged\0"
    "menuAboutToShow\0settingsMenuAboutToShow\0"
    "syncMarker\0QgsPointXY\0p\0mapScaleChanged\0"
    "updateExtentRect\0showLabels\0show\0"
    "autoZoomToSelection\0autoZoom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapCanvasDockWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    1,   80,    2, 0x08 /* Private */,
      15,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void QgsMapCanvasDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapCanvasDockWidget *_t = static_cast<QgsMapCanvasDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->renameTriggered(); break;
        case 1: _t->setMapCrs(); break;
        case 2: _t->mapExtentChanged(); break;
        case 3: _t->mapCrsChanged(); break;
        case 4: _t->menuAboutToShow(); break;
        case 5: _t->settingsMenuAboutToShow(); break;
        case 6: _t->syncMarker((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        case 7: _t->mapScaleChanged(); break;
        case 8: _t->updateExtentRect(); break;
        case 9: _t->showLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->autoZoomToSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMapCanvasDockWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvasDockWidget::renameTriggered)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsMapCanvasDockWidget::staticMetaObject = {
    { &QgsDockWidget::staticMetaObject, qt_meta_stringdata_QgsMapCanvasDockWidget.data,
      qt_meta_data_QgsMapCanvasDockWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapCanvasDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapCanvasDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapCanvasDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsDockWidget::qt_metacast(_clname);
}

int QgsMapCanvasDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QgsMapCanvasDockWidget::renameTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsMapSettingsAction_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapSettingsAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapSettingsAction_t qt_meta_stringdata_QgsMapSettingsAction = {
    {
QT_MOC_LITERAL(0, 0, 20) // "QgsMapSettingsAction"

    },
    "QgsMapSettingsAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapSettingsAction[] = {

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

void QgsMapSettingsAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsMapSettingsAction::staticMetaObject = {
    { &QWidgetAction::staticMetaObject, qt_meta_stringdata_QgsMapSettingsAction.data,
      qt_meta_data_QgsMapSettingsAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapSettingsAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapSettingsAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapSettingsAction.stringdata0))
        return static_cast<void*>(this);
    return QWidgetAction::qt_metacast(_clname);
}

int QgsMapSettingsAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
