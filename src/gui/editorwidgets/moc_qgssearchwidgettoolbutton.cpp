/****************************************************************************
** Meta object code from reading C++ file 'qgssearchwidgettoolbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgssearchwidgettoolbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssearchwidgettoolbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSearchWidgetToolButton_t {
    QByteArrayData data[10];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSearchWidgetToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSearchWidgetToolButton_t qt_meta_stringdata_QgsSearchWidgetToolButton = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsSearchWidgetToolButton"
QT_MOC_LITERAL(1, 26, 18), // "activeFlagsChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 35), // "QgsSearchWidgetWrapper::Filte..."
QT_MOC_LITERAL(4, 82, 5), // "flags"
QT_MOC_LITERAL(5, 88, 11), // "setInactive"
QT_MOC_LITERAL(6, 100, 9), // "setActive"
QT_MOC_LITERAL(7, 110, 15), // "aboutToShowMenu"
QT_MOC_LITERAL(8, 126, 14), // "actionSelected"
QT_MOC_LITERAL(9, 141, 24) // "searchWidgetValueChanged"

    },
    "QgsSearchWidgetToolButton\0activeFlagsChanged\0"
    "\0QgsSearchWidgetWrapper::FilterFlags\0"
    "flags\0setInactive\0setActive\0aboutToShowMenu\0"
    "actionSelected\0searchWidgetValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSearchWidgetToolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsSearchWidgetToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSearchWidgetToolButton *_t = static_cast<QgsSearchWidgetToolButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeFlagsChanged((*reinterpret_cast< QgsSearchWidgetWrapper::FilterFlags(*)>(_a[1]))); break;
        case 1: _t->setInactive(); break;
        case 2: _t->setActive(); break;
        case 3: _t->aboutToShowMenu(); break;
        case 4: _t->actionSelected(); break;
        case 5: _t->searchWidgetValueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsSearchWidgetToolButton::*_t)(QgsSearchWidgetWrapper::FilterFlags );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSearchWidgetToolButton::activeFlagsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsSearchWidgetToolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QgsSearchWidgetToolButton.data,
      qt_meta_data_QgsSearchWidgetToolButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSearchWidgetToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSearchWidgetToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSearchWidgetToolButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int QgsSearchWidgetToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QgsSearchWidgetToolButton::activeFlagsChanged(QgsSearchWidgetWrapper::FilterFlags _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
