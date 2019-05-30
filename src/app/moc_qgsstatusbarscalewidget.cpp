/****************************************************************************
** Meta object code from reading C++ file 'qgsstatusbarscalewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsstatusbarscalewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsstatusbarscalewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsStatusBarScaleWidget_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStatusBarScaleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStatusBarScaleWidget_t qt_meta_stringdata_QgsStatusBarScaleWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsStatusBarScaleWidget"
QT_MOC_LITERAL(1, 24, 12), // "updateScales"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "scales"
QT_MOC_LITERAL(4, 45, 9) // "userScale"

    },
    "QgsStatusBarScaleWidget\0updateScales\0"
    "\0scales\0userScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStatusBarScaleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       1,    0,   32,    2, 0x2a /* Public | MethodCloned */,
       4,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsStatusBarScaleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsStatusBarScaleWidget *_t = static_cast<QgsStatusBarScaleWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateScales((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->updateScales(); break;
        case 2: _t->userScale(); break;
        default: ;
        }
    }
}

const QMetaObject QgsStatusBarScaleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsStatusBarScaleWidget.data,
      qt_meta_data_QgsStatusBarScaleWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsStatusBarScaleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStatusBarScaleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStatusBarScaleWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsStatusBarScaleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
