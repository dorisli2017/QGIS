/****************************************************************************
** Meta object code from reading C++ file 'qgscolorschemelist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgscolorschemelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscolorschemelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsColorSwatchDelegate_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorSwatchDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorSwatchDelegate_t qt_meta_stringdata_QgsColorSwatchDelegate = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsColorSwatchDelegate"
QT_MOC_LITERAL(1, 23, 12), // "colorChanged"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "QgsColorSwatchDelegate\0colorChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorSwatchDelegate[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsColorSwatchDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorSwatchDelegate *_t = static_cast<QgsColorSwatchDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsColorSwatchDelegate::staticMetaObject = {
    { &QAbstractItemDelegate::staticMetaObject, qt_meta_stringdata_QgsColorSwatchDelegate.data,
      qt_meta_data_QgsColorSwatchDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorSwatchDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorSwatchDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorSwatchDelegate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int QgsColorSwatchDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsColorSchemeModel_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorSchemeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorSchemeModel_t qt_meta_stringdata_QgsColorSchemeModel = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QgsColorSchemeModel"

    },
    "QgsColorSchemeModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorSchemeModel[] = {

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

void QgsColorSchemeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsColorSchemeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsColorSchemeModel.data,
      qt_meta_data_QgsColorSchemeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorSchemeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorSchemeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorSchemeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsColorSchemeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsColorSchemeList_t {
    QByteArrayData data[17];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorSchemeList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorSchemeList_t qt_meta_stringdata_QgsColorSchemeList = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsColorSchemeList"
QT_MOC_LITERAL(1, 19, 13), // "colorSelected"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "color"
QT_MOC_LITERAL(4, 40, 9), // "setScheme"
QT_MOC_LITERAL(5, 50, 15), // "QgsColorScheme*"
QT_MOC_LITERAL(6, 66, 6), // "scheme"
QT_MOC_LITERAL(7, 73, 7), // "context"
QT_MOC_LITERAL(8, 81, 9), // "baseColor"
QT_MOC_LITERAL(9, 91, 15), // "removeSelection"
QT_MOC_LITERAL(10, 107, 8), // "addColor"
QT_MOC_LITERAL(11, 116, 5), // "label"
QT_MOC_LITERAL(12, 122, 14), // "allowDuplicate"
QT_MOC_LITERAL(13, 137, 11), // "pasteColors"
QT_MOC_LITERAL(14, 149, 10), // "copyColors"
QT_MOC_LITERAL(15, 160, 22), // "showImportColorsDialog"
QT_MOC_LITERAL(16, 183, 22) // "showExportColorsDialog"

    },
    "QgsColorSchemeList\0colorSelected\0\0"
    "color\0setScheme\0QgsColorScheme*\0scheme\0"
    "context\0baseColor\0removeSelection\0"
    "addColor\0label\0allowDuplicate\0pasteColors\0"
    "copyColors\0showImportColorsDialog\0"
    "showExportColorsDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorSchemeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   77,    2, 0x0a /* Public */,
       4,    2,   84,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   89,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   92,    2, 0x0a /* Public */,
      10,    3,   93,    2, 0x0a /* Public */,
      10,    2,  100,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  105,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  108,    2, 0x0a /* Public */,
      14,    0,  109,    2, 0x0a /* Public */,
      15,    0,  110,    2, 0x0a /* Public */,
      16,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QColor,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor, QMetaType::QString, QMetaType::Bool,    3,   11,   12,
    QMetaType::Void, QMetaType::QColor, QMetaType::QString,    3,   11,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsColorSchemeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorSchemeList *_t = static_cast<QgsColorSchemeList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorSelected((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setScheme((*reinterpret_cast< QgsColorScheme*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 2: _t->setScheme((*reinterpret_cast< QgsColorScheme*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->setScheme((*reinterpret_cast< QgsColorScheme*(*)>(_a[1]))); break;
        case 4: _t->removeSelection(); break;
        case 5: _t->addColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->addColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->addColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->pasteColors(); break;
        case 9: _t->copyColors(); break;
        case 10: _t->showImportColorsDialog(); break;
        case 11: _t->showExportColorsDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsColorSchemeList::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsColorSchemeList::colorSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsColorSchemeList::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QgsColorSchemeList.data,
      qt_meta_data_QgsColorSchemeList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorSchemeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorSchemeList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorSchemeList.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QgsColorSchemeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
void QgsColorSchemeList::colorSelected(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
