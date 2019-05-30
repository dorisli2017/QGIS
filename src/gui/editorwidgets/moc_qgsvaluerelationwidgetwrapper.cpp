/****************************************************************************
** Meta object code from reading C++ file 'qgsvaluerelationwidgetwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsvaluerelationwidgetwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvaluerelationwidgetwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsValueRelationWidgetWrapper_t {
    QByteArrayData data[11];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsValueRelationWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsValueRelationWidgetWrapper_t qt_meta_stringdata_QgsValueRelationWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsValueRelationWidgetWrapper"
QT_MOC_LITERAL(1, 30, 8), // "setValue"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "value"
QT_MOC_LITERAL(4, 46, 18), // "widgetValueChanged"
QT_MOC_LITERAL(5, 65, 9), // "attribute"
QT_MOC_LITERAL(6, 75, 8), // "newValue"
QT_MOC_LITERAL(7, 84, 16), // "attributeChanged"
QT_MOC_LITERAL(8, 101, 10), // "setFeature"
QT_MOC_LITERAL(9, 112, 10), // "QgsFeature"
QT_MOC_LITERAL(10, 123, 7) // "feature"

    },
    "QgsValueRelationWidgetWrapper\0setValue\0"
    "\0value\0widgetValueChanged\0attribute\0"
    "newValue\0attributeChanged\0setFeature\0"
    "QgsFeature\0feature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsValueRelationWidgetWrapper[] = {

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
       4,    3,   32,    2, 0x0a /* Public */,
       8,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void QgsValueRelationWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsValueRelationWidgetWrapper *_t = static_cast<QgsValueRelationWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->widgetValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->setFeature((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsValueRelationWidgetWrapper::staticMetaObject = {
    { &QgsEditorWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsValueRelationWidgetWrapper.data,
      qt_meta_data_QgsValueRelationWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsValueRelationWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsValueRelationWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsValueRelationWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    return QgsEditorWidgetWrapper::qt_metacast(_clname);
}

int QgsValueRelationWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
