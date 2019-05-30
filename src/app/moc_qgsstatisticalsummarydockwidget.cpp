/****************************************************************************
** Meta object code from reading C++ file 'qgsstatisticalsummarydockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsstatisticalsummarydockwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsstatisticalsummarydockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsStatisticsValueGatherer_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStatisticsValueGatherer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStatisticsValueGatherer_t qt_meta_stringdata_QgsStatisticsValueGatherer = {
    {
QT_MOC_LITERAL(0, 0, 26) // "QgsStatisticsValueGatherer"

    },
    "QgsStatisticsValueGatherer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStatisticsValueGatherer[] = {

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

void QgsStatisticsValueGatherer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsStatisticsValueGatherer::staticMetaObject = {
    { &QgsTask::staticMetaObject, qt_meta_stringdata_QgsStatisticsValueGatherer.data,
      qt_meta_data_QgsStatisticsValueGatherer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsStatisticsValueGatherer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStatisticsValueGatherer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStatisticsValueGatherer.stringdata0))
        return static_cast<void*>(this);
    return QgsTask::qt_metacast(_clname);
}

int QgsStatisticsValueGatherer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsTask::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsStatisticalSummaryDockWidget_t {
    QByteArrayData data[14];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStatisticalSummaryDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStatisticalSummaryDockWidget_t qt_meta_stringdata_QgsStatisticalSummaryDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsStatisticalSummaryDockWidget"
QT_MOC_LITERAL(1, 32, 14), // "copyStatistics"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 17), // "refreshStatistics"
QT_MOC_LITERAL(4, 66, 12), // "layerChanged"
QT_MOC_LITERAL(5, 79, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(6, 92, 5), // "layer"
QT_MOC_LITERAL(7, 98, 12), // "fieldChanged"
QT_MOC_LITERAL(8, 111, 19), // "statActionTriggered"
QT_MOC_LITERAL(9, 131, 7), // "checked"
QT_MOC_LITERAL(10, 139, 13), // "layersRemoved"
QT_MOC_LITERAL(11, 153, 6), // "layers"
QT_MOC_LITERAL(12, 160, 21), // "layerSelectionChanged"
QT_MOC_LITERAL(13, 182, 16) // "gathererFinished"

    },
    "QgsStatisticalSummaryDockWidget\0"
    "copyStatistics\0\0refreshStatistics\0"
    "layerChanged\0QgsMapLayer*\0layer\0"
    "fieldChanged\0statActionTriggered\0"
    "checked\0layersRemoved\0layers\0"
    "layerSelectionChanged\0gathererFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStatisticalSummaryDockWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    1,   56,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsStatisticalSummaryDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsStatisticalSummaryDockWidget *_t = static_cast<QgsStatisticalSummaryDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copyStatistics(); break;
        case 1: _t->refreshStatistics(); break;
        case 2: _t->layerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 3: _t->fieldChanged(); break;
        case 4: _t->statActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->layersRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->layerSelectionChanged(); break;
        case 7: _t->gathererFinished(); break;
        default: ;
        }
    }
}

const QMetaObject QgsStatisticalSummaryDockWidget::staticMetaObject = {
    { &QgsDockWidget::staticMetaObject, qt_meta_stringdata_QgsStatisticalSummaryDockWidget.data,
      qt_meta_data_QgsStatisticalSummaryDockWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsStatisticalSummaryDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStatisticalSummaryDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStatisticalSummaryDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsDockWidget::qt_metacast(_clname);
}

int QgsStatisticalSummaryDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
