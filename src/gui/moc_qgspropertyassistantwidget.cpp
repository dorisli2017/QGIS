/****************************************************************************
** Meta object code from reading C++ file 'qgspropertyassistantwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgspropertyassistantwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspropertyassistantwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPropertyAbstractTransformerWidget_t {
    QByteArrayData data[3];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPropertyAbstractTransformerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPropertyAbstractTransformerWidget_t qt_meta_stringdata_QgsPropertyAbstractTransformerWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QgsPropertyAbstractTransforme..."
QT_MOC_LITERAL(1, 37, 13), // "widgetChanged"
QT_MOC_LITERAL(2, 51, 0) // ""

    },
    "QgsPropertyAbstractTransformerWidget\0"
    "widgetChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPropertyAbstractTransformerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QgsPropertyAbstractTransformerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPropertyAbstractTransformerWidget *_t = static_cast<QgsPropertyAbstractTransformerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsPropertyAbstractTransformerWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPropertyAbstractTransformerWidget::widgetChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsPropertyAbstractTransformerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsPropertyAbstractTransformerWidget.data,
      qt_meta_data_QgsPropertyAbstractTransformerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPropertyAbstractTransformerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPropertyAbstractTransformerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPropertyAbstractTransformerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsPropertyAbstractTransformerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsPropertyAbstractTransformerWidget::widgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsPropertyGenericNumericAssistantWidget_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPropertyGenericNumericAssistantWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPropertyGenericNumericAssistantWidget_t qt_meta_stringdata_QgsPropertyGenericNumericAssistantWidget = {
    {
QT_MOC_LITERAL(0, 0, 40) // "QgsPropertyGenericNumericAssi..."

    },
    "QgsPropertyGenericNumericAssistantWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPropertyGenericNumericAssistantWidget[] = {

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

void QgsPropertyGenericNumericAssistantWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsPropertyGenericNumericAssistantWidget::staticMetaObject = {
    { &QgsPropertyAbstractTransformerWidget::staticMetaObject, qt_meta_stringdata_QgsPropertyGenericNumericAssistantWidget.data,
      qt_meta_data_QgsPropertyGenericNumericAssistantWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPropertyGenericNumericAssistantWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPropertyGenericNumericAssistantWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPropertyGenericNumericAssistantWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPropertyAbstractTransformerWidget::qt_metacast(_clname);
}

int QgsPropertyGenericNumericAssistantWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPropertyAbstractTransformerWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsPropertySizeAssistantWidget_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPropertySizeAssistantWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPropertySizeAssistantWidget_t qt_meta_stringdata_QgsPropertySizeAssistantWidget = {
    {
QT_MOC_LITERAL(0, 0, 30) // "QgsPropertySizeAssistantWidget"

    },
    "QgsPropertySizeAssistantWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPropertySizeAssistantWidget[] = {

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

void QgsPropertySizeAssistantWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsPropertySizeAssistantWidget::staticMetaObject = {
    { &QgsPropertyAbstractTransformerWidget::staticMetaObject, qt_meta_stringdata_QgsPropertySizeAssistantWidget.data,
      qt_meta_data_QgsPropertySizeAssistantWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPropertySizeAssistantWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPropertySizeAssistantWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPropertySizeAssistantWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPropertyAbstractTransformerWidget::qt_metacast(_clname);
}

int QgsPropertySizeAssistantWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPropertyAbstractTransformerWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsPropertyColorAssistantWidget_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPropertyColorAssistantWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPropertyColorAssistantWidget_t qt_meta_stringdata_QgsPropertyColorAssistantWidget = {
    {
QT_MOC_LITERAL(0, 0, 31) // "QgsPropertyColorAssistantWidget"

    },
    "QgsPropertyColorAssistantWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPropertyColorAssistantWidget[] = {

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

void QgsPropertyColorAssistantWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsPropertyColorAssistantWidget::staticMetaObject = {
    { &QgsPropertyAbstractTransformerWidget::staticMetaObject, qt_meta_stringdata_QgsPropertyColorAssistantWidget.data,
      qt_meta_data_QgsPropertyColorAssistantWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPropertyColorAssistantWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPropertyColorAssistantWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPropertyColorAssistantWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPropertyAbstractTransformerWidget::qt_metacast(_clname);
}

int QgsPropertyColorAssistantWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPropertyAbstractTransformerWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsPropertyAssistantWidget_t {
    QByteArrayData data[4];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPropertyAssistantWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPropertyAssistantWidget_t qt_meta_stringdata_QgsPropertyAssistantWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsPropertyAssistantWidget"
QT_MOC_LITERAL(1, 27, 22), // "computeValuesFromLayer"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 13) // "updatePreview"

    },
    "QgsPropertyAssistantWidget\0"
    "computeValuesFromLayer\0\0updatePreview"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPropertyAssistantWidget[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsPropertyAssistantWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPropertyAssistantWidget *_t = static_cast<QgsPropertyAssistantWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->computeValuesFromLayer(); break;
        case 1: _t->updatePreview(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsPropertyAssistantWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsPropertyAssistantWidget.data,
      qt_meta_data_QgsPropertyAssistantWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPropertyAssistantWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPropertyAssistantWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPropertyAssistantWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsPropertyAssistantWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsAssistantPreviewItemDelegate_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAssistantPreviewItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAssistantPreviewItemDelegate_t qt_meta_stringdata_QgsAssistantPreviewItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 31) // "QgsAssistantPreviewItemDelegate"

    },
    "QgsAssistantPreviewItemDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAssistantPreviewItemDelegate[] = {

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

void QgsAssistantPreviewItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsAssistantPreviewItemDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_QgsAssistantPreviewItemDelegate.data,
      qt_meta_data_QgsAssistantPreviewItemDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAssistantPreviewItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAssistantPreviewItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAssistantPreviewItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int QgsAssistantPreviewItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
