/****************************************************************************
** Meta object code from reading C++ file 'qgsrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRendererWidget_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRendererWidget_t qt_meta_stringdata_QgsRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsRendererWidget"
QT_MOC_LITERAL(1, 18, 21), // "layerVariablesChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 25), // "contextMenuViewCategories"
QT_MOC_LITERAL(4, 67, 1), // "p"
QT_MOC_LITERAL(5, 69, 17), // "changeSymbolColor"
QT_MOC_LITERAL(6, 87, 19), // "changeSymbolOpacity"
QT_MOC_LITERAL(7, 107, 16), // "changeSymbolUnit"
QT_MOC_LITERAL(8, 124, 17), // "changeSymbolWidth"
QT_MOC_LITERAL(9, 142, 16), // "changeSymbolSize"
QT_MOC_LITERAL(10, 159, 17), // "changeSymbolAngle"
QT_MOC_LITERAL(11, 177, 4), // "copy"
QT_MOC_LITERAL(12, 182, 5) // "paste"

    },
    "QgsRendererWidget\0layerVariablesChanged\0"
    "\0contextMenuViewCategories\0p\0"
    "changeSymbolColor\0changeSymbolOpacity\0"
    "changeSymbolUnit\0changeSymbolWidth\0"
    "changeSymbolSize\0changeSymbolAngle\0"
    "copy\0paste"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   65,    2, 0x09 /* Protected */,
       5,    0,   68,    2, 0x09 /* Protected */,
       6,    0,   69,    2, 0x09 /* Protected */,
       7,    0,   70,    2, 0x09 /* Protected */,
       8,    0,   71,    2, 0x09 /* Protected */,
       9,    0,   72,    2, 0x09 /* Protected */,
      10,    0,   73,    2, 0x09 /* Protected */,
      11,    0,   74,    2, 0x09 /* Protected */,
      12,    0,   75,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRendererWidget *_t = static_cast<QgsRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerVariablesChanged(); break;
        case 1: _t->contextMenuViewCategories((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->changeSymbolColor(); break;
        case 3: _t->changeSymbolOpacity(); break;
        case 4: _t->changeSymbolUnit(); break;
        case 5: _t->changeSymbolWidth(); break;
        case 6: _t->changeSymbolSize(); break;
        case 7: _t->changeSymbolAngle(); break;
        case 8: _t->copy(); break;
        case 9: _t->paste(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsRendererWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsRendererWidget::layerVariablesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsRendererWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsRendererWidget.data,
      qt_meta_data_QgsRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QgsRendererWidget::layerVariablesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsDataDefinedValueDialog_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataDefinedValueDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataDefinedValueDialog_t qt_meta_stringdata_QgsDataDefinedValueDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsDataDefinedValueDialog"
QT_MOC_LITERAL(1, 26, 18), // "dataDefinedChanged"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "QgsDataDefinedValueDialog\0dataDefinedChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataDefinedValueDialog[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsDataDefinedValueDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDataDefinedValueDialog *_t = static_cast<QgsDataDefinedValueDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataDefinedChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsDataDefinedValueDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsDataDefinedValueDialog.data,
      qt_meta_data_QgsDataDefinedValueDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDataDefinedValueDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDataDefinedValueDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDataDefinedValueDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::QgsDataDefinedValueBaseDialog"))
        return static_cast< Ui::QgsDataDefinedValueBaseDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsDataDefinedValueDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsDataDefinedSizeDialog_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataDefinedSizeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataDefinedSizeDialog_t qt_meta_stringdata_QgsDataDefinedSizeDialog = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QgsDataDefinedSizeDialog"

    },
    "QgsDataDefinedSizeDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataDefinedSizeDialog[] = {

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

void QgsDataDefinedSizeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDataDefinedSizeDialog::staticMetaObject = {
    { &QgsDataDefinedValueDialog::staticMetaObject, qt_meta_stringdata_QgsDataDefinedSizeDialog.data,
      qt_meta_data_QgsDataDefinedSizeDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDataDefinedSizeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDataDefinedSizeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDataDefinedSizeDialog.stringdata0))
        return static_cast<void*>(this);
    return QgsDataDefinedValueDialog::qt_metacast(_clname);
}

int QgsDataDefinedSizeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataDefinedValueDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsDataDefinedRotationDialog_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataDefinedRotationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataDefinedRotationDialog_t qt_meta_stringdata_QgsDataDefinedRotationDialog = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QgsDataDefinedRotationDialog"

    },
    "QgsDataDefinedRotationDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataDefinedRotationDialog[] = {

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

void QgsDataDefinedRotationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDataDefinedRotationDialog::staticMetaObject = {
    { &QgsDataDefinedValueDialog::staticMetaObject, qt_meta_stringdata_QgsDataDefinedRotationDialog.data,
      qt_meta_data_QgsDataDefinedRotationDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDataDefinedRotationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDataDefinedRotationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDataDefinedRotationDialog.stringdata0))
        return static_cast<void*>(this);
    return QgsDataDefinedValueDialog::qt_metacast(_clname);
}

int QgsDataDefinedRotationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataDefinedValueDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsDataDefinedWidthDialog_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataDefinedWidthDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataDefinedWidthDialog_t qt_meta_stringdata_QgsDataDefinedWidthDialog = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QgsDataDefinedWidthDialog"

    },
    "QgsDataDefinedWidthDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataDefinedWidthDialog[] = {

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

void QgsDataDefinedWidthDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDataDefinedWidthDialog::staticMetaObject = {
    { &QgsDataDefinedValueDialog::staticMetaObject, qt_meta_stringdata_QgsDataDefinedWidthDialog.data,
      qt_meta_data_QgsDataDefinedWidthDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDataDefinedWidthDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDataDefinedWidthDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDataDefinedWidthDialog.stringdata0))
        return static_cast<void*>(this);
    return QgsDataDefinedValueDialog::qt_metacast(_clname);
}

int QgsDataDefinedWidthDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataDefinedValueDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
