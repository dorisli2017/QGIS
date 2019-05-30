/****************************************************************************
** Meta object code from reading C++ file 'qgsmeshrendereractivedatasetwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmeshrendereractivedatasetwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmeshrendereractivedatasetwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget_t {
    QByteArrayData data[18];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget_t qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QgsMeshRendererActiveDatasetW..."
QT_MOC_LITERAL(1, 35, 24), // "activeScalarGroupChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 10), // "groupIndex"
QT_MOC_LITERAL(4, 72, 24), // "activeVectorGroupChanged"
QT_MOC_LITERAL(5, 97, 13), // "widgetChanged"
QT_MOC_LITERAL(6, 111, 26), // "onActiveScalarGroupChanged"
QT_MOC_LITERAL(7, 138, 26), // "onActiveVectorGroupChanged"
QT_MOC_LITERAL(8, 165, 19), // "onActiveTimeChanged"
QT_MOC_LITERAL(9, 185, 5), // "value"
QT_MOC_LITERAL(10, 191, 21), // "onTimeSettingsClicked"
QT_MOC_LITERAL(11, 213, 18), // "onFirstTimeClicked"
QT_MOC_LITERAL(12, 232, 21), // "onPreviousTimeClicked"
QT_MOC_LITERAL(13, 254, 17), // "onNextTimeClicked"
QT_MOC_LITERAL(14, 272, 17), // "onLastTimeClicked"
QT_MOC_LITERAL(15, 290, 8), // "metadata"
QT_MOC_LITERAL(16, 299, 19), // "QgsMeshDatasetIndex"
QT_MOC_LITERAL(17, 319, 12) // "datasetIndex"

    },
    "QgsMeshRendererActiveDatasetWidget\0"
    "activeScalarGroupChanged\0\0groupIndex\0"
    "activeVectorGroupChanged\0widgetChanged\0"
    "onActiveScalarGroupChanged\0"
    "onActiveVectorGroupChanged\0"
    "onActiveTimeChanged\0value\0"
    "onTimeSettingsClicked\0onFirstTimeClicked\0"
    "onPreviousTimeClicked\0onNextTimeClicked\0"
    "onLastTimeClicked\0metadata\0"
    "QgsMeshDatasetIndex\0datasetIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshRendererActiveDatasetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   81,    2, 0x08 /* Private */,
       7,    1,   84,    2, 0x08 /* Private */,
       8,    1,   87,    2, 0x08 /* Private */,
      10,    0,   90,    2, 0x08 /* Private */,
      11,    0,   91,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    1,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 16,   17,

       0        // eod
};

void QgsMeshRendererActiveDatasetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshRendererActiveDatasetWidget *_t = static_cast<QgsMeshRendererActiveDatasetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeScalarGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->activeVectorGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->widgetChanged(); break;
        case 3: _t->onActiveScalarGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onActiveVectorGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onActiveTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onTimeSettingsClicked(); break;
        case 7: _t->onFirstTimeClicked(); break;
        case 8: _t->onPreviousTimeClicked(); break;
        case 9: _t->onNextTimeClicked(); break;
        case 10: _t->onLastTimeClicked(); break;
        case 11: { QString _r = _t->metadata((*reinterpret_cast< QgsMeshDatasetIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMeshRendererActiveDatasetWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshRendererActiveDatasetWidget::activeScalarGroupChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsMeshRendererActiveDatasetWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshRendererActiveDatasetWidget::activeVectorGroupChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsMeshRendererActiveDatasetWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshRendererActiveDatasetWidget::widgetChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsMeshRendererActiveDatasetWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget.data,
      qt_meta_data_QgsMeshRendererActiveDatasetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshRendererActiveDatasetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshRendererActiveDatasetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsMeshRendererActiveDatasetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QgsMeshRendererActiveDatasetWidget::activeScalarGroupChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMeshRendererActiveDatasetWidget::activeVectorGroupChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMeshRendererActiveDatasetWidget::widgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
