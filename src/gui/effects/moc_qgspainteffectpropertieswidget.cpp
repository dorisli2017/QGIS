/****************************************************************************
** Meta object code from reading C++ file 'qgspainteffectpropertieswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgspainteffectpropertieswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspainteffectpropertieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPaintEffectPropertiesWidget_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPaintEffectPropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPaintEffectPropertiesWidget_t qt_meta_stringdata_QgsPaintEffectPropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsPaintEffectPropertiesWidget"
QT_MOC_LITERAL(1, 31, 7), // "changed"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "changeEffect"
QT_MOC_LITERAL(4, 53, 15), // "QgsPaintEffect*"
QT_MOC_LITERAL(5, 69, 6), // "effect"
QT_MOC_LITERAL(6, 76, 17), // "effectTypeChanged"
QT_MOC_LITERAL(7, 94, 17) // "emitSignalChanged"

    },
    "QgsPaintEffectPropertiesWidget\0changed\0"
    "\0changeEffect\0QgsPaintEffect*\0effect\0"
    "effectTypeChanged\0emitSignalChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPaintEffectPropertiesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   38,    2, 0x0a /* Public */,
       7,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsPaintEffectPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPaintEffectPropertiesWidget *_t = static_cast<QgsPaintEffectPropertiesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->changeEffect((*reinterpret_cast< QgsPaintEffect*(*)>(_a[1]))); break;
        case 2: _t->effectTypeChanged(); break;
        case 3: _t->emitSignalChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsPaintEffectPropertiesWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPaintEffectPropertiesWidget::changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsPaintEffectPropertiesWidget::*_t)(QgsPaintEffect * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPaintEffectPropertiesWidget::changeEffect)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsPaintEffectPropertiesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsPaintEffectPropertiesWidget.data,
      qt_meta_data_QgsPaintEffectPropertiesWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPaintEffectPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPaintEffectPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPaintEffectPropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsPaintEffectPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QgsPaintEffectPropertiesWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsPaintEffectPropertiesWidget::changeEffect(QgsPaintEffect * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
