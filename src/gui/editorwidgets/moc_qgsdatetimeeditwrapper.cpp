/****************************************************************************
** Meta object code from reading C++ file 'qgsdatetimeeditwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsdatetimeeditwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdatetimeeditwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDateTimeEditWrapper_t {
    QByteArrayData data[8];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDateTimeEditWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDateTimeEditWrapper_t qt_meta_stringdata_QgsDateTimeEditWrapper = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsDateTimeEditWrapper"
QT_MOC_LITERAL(1, 23, 15), // "dateTimeChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "dateTime"
QT_MOC_LITERAL(4, 49, 8), // "setValue"
QT_MOC_LITERAL(5, 58, 5), // "value"
QT_MOC_LITERAL(6, 64, 10), // "setEnabled"
QT_MOC_LITERAL(7, 75, 7) // "enabled"

    },
    "QgsDateTimeEditWrapper\0dateTimeChanged\0"
    "\0dateTime\0setValue\0value\0setEnabled\0"
    "enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDateTimeEditWrapper[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void QgsDateTimeEditWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDateTimeEditWrapper *_t = static_cast<QgsDateTimeEditWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsDateTimeEditWrapper::staticMetaObject = {
    { &QgsEditorWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsDateTimeEditWrapper.data,
      qt_meta_data_QgsDateTimeEditWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDateTimeEditWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDateTimeEditWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDateTimeEditWrapper.stringdata0))
        return static_cast<void*>(this);
    return QgsEditorWidgetWrapper::qt_metacast(_clname);
}

int QgsDateTimeEditWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsEditorWidgetWrapper::qt_metacall(_c, _id, _a);
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
