/****************************************************************************
** Meta object code from reading C++ file 'qgsrelationwidgetwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsrelationwidgetwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrelationwidgetwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRelationWidgetWrapper_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRelationWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRelationWidgetWrapper_t qt_meta_stringdata_QgsRelationWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsRelationWidgetWrapper"
QT_MOC_LITERAL(1, 25, 10), // "setFeature"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "QgsFeature"
QT_MOC_LITERAL(4, 48, 7), // "feature"
QT_MOC_LITERAL(5, 56, 10), // "setVisible"
QT_MOC_LITERAL(6, 67, 7) // "visible"

    },
    "QgsRelationWidgetWrapper\0setFeature\0"
    "\0QgsFeature\0feature\0setVisible\0visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRelationWidgetWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void QgsRelationWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRelationWidgetWrapper *_t = static_cast<QgsRelationWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFeature((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsRelationWidgetWrapper::staticMetaObject = {
    { &QgsWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsRelationWidgetWrapper.data,
      qt_meta_data_QgsRelationWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRelationWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRelationWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRelationWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    return QgsWidgetWrapper::qt_metacast(_clname);
}

int QgsRelationWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsWidgetWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
