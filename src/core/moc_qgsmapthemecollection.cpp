/****************************************************************************
** Meta object code from reading C++ file 'qgsmapthemecollection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmapthemecollection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapthemecollection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapThemeCollection_t {
    QByteArrayData data[14];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapThemeCollection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapThemeCollection_t qt_meta_stringdata_QgsMapThemeCollection = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsMapThemeCollection"
QT_MOC_LITERAL(1, 22, 16), // "mapThemesChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "mapThemeChanged"
QT_MOC_LITERAL(4, 56, 5), // "theme"
QT_MOC_LITERAL(5, 62, 14), // "projectChanged"
QT_MOC_LITERAL(6, 77, 21), // "registryLayersRemoved"
QT_MOC_LITERAL(7, 99, 8), // "layerIDs"
QT_MOC_LITERAL(8, 108, 17), // "layerStyleRenamed"
QT_MOC_LITERAL(9, 126, 7), // "oldName"
QT_MOC_LITERAL(10, 134, 7), // "newName"
QT_MOC_LITERAL(11, 142, 9), // "mapThemes"
QT_MOC_LITERAL(12, 152, 7), // "project"
QT_MOC_LITERAL(13, 160, 11) // "QgsProject*"

    },
    "QgsMapThemeCollection\0mapThemesChanged\0"
    "\0mapThemeChanged\0theme\0projectChanged\0"
    "registryLayersRemoved\0layerIDs\0"
    "layerStyleRenamed\0oldName\0newName\0"
    "mapThemes\0project\0QgsProject*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapThemeCollection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       5,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x08 /* Private */,
       8,    2,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,

 // properties: name, type, flags
      11, QMetaType::QStringList, 0x00495001,
      12, 0x80000000 | 13, 0x0049510b,

 // properties: notify_signal_id
       0,
       2,

       0        // eod
};

void QgsMapThemeCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapThemeCollection *_t = static_cast<QgsMapThemeCollection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapThemesChanged(); break;
        case 1: _t->mapThemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->projectChanged(); break;
        case 3: _t->registryLayersRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->layerStyleRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsMapThemeCollection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapThemeCollection::mapThemesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsMapThemeCollection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapThemeCollection::mapThemeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsMapThemeCollection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapThemeCollection::projectChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsMapThemeCollection *_t = static_cast<QgsMapThemeCollection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->mapThemes(); break;
        case 1: *reinterpret_cast< QgsProject**>(_v) = _t->project(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsMapThemeCollection *_t = static_cast<QgsMapThemeCollection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setProject(*reinterpret_cast< QgsProject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsMapThemeCollection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapThemeCollection.data,
      qt_meta_data_QgsMapThemeCollection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapThemeCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapThemeCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapThemeCollection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsMapThemeCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsMapThemeCollection::mapThemesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsMapThemeCollection::mapThemeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapThemeCollection::projectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
