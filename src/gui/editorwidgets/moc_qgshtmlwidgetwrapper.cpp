/****************************************************************************
** Meta object code from reading C++ file 'qgshtmlwidgetwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgshtmlwidgetwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgshtmlwidgetwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsHtmlWidgetWrapper_t {
    QByteArrayData data[6];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsHtmlWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsHtmlWidgetWrapper_t qt_meta_stringdata_QgsHtmlWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsHtmlWidgetWrapper"
QT_MOC_LITERAL(1, 21, 10), // "setFeature"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "QgsFeature"
QT_MOC_LITERAL(4, 44, 7), // "feature"
QT_MOC_LITERAL(5, 52, 14) // "setHtmlContext"

    },
    "QgsHtmlWidgetWrapper\0setFeature\0\0"
    "QgsFeature\0feature\0setHtmlContext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsHtmlWidgetWrapper[] = {

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
       5,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void QgsHtmlWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsHtmlWidgetWrapper *_t = static_cast<QgsHtmlWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFeature((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 1: _t->setHtmlContext(); break;
        default: ;
        }
    }
}

const QMetaObject QgsHtmlWidgetWrapper::staticMetaObject = {
    { &QgsWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsHtmlWidgetWrapper.data,
      qt_meta_data_QgsHtmlWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsHtmlWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsHtmlWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHtmlWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    return QgsWidgetWrapper::qt_metacast(_clname);
}

int QgsHtmlWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_HtmlExpression_t {
    QByteArrayData data[4];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HtmlExpression_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HtmlExpression_t qt_meta_stringdata_HtmlExpression = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HtmlExpression"
QT_MOC_LITERAL(1, 15, 8), // "evaluate"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10) // "expression"

    },
    "HtmlExpression\0evaluate\0\0expression"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HtmlExpression[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::QString,    3,

       0        // eod
};

void HtmlExpression::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HtmlExpression *_t = static_cast<HtmlExpression *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->evaluate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject HtmlExpression::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HtmlExpression.data,
      qt_meta_data_HtmlExpression,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HtmlExpression::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HtmlExpression::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HtmlExpression.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HtmlExpression::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
