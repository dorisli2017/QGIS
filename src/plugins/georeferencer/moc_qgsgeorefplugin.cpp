/****************************************************************************
** Meta object code from reading C++ file 'qgsgeorefplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeorefplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeorefplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeorefPlugin_t {
    QByteArrayData data[8];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeorefPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeorefPlugin_t qt_meta_stringdata_QgsGeorefPlugin = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsGeorefPlugin"
QT_MOC_LITERAL(1, 16, 7), // "initGui"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "run"
QT_MOC_LITERAL(4, 29, 6), // "unload"
QT_MOC_LITERAL(5, 36, 15), // "setCurrentTheme"
QT_MOC_LITERAL(6, 52, 9), // "themeName"
QT_MOC_LITERAL(7, 62, 12) // "getThemeIcon"

    },
    "QgsGeorefPlugin\0initGui\0\0run\0unload\0"
    "setCurrentTheme\0themeName\0getThemeIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeorefPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::QIcon, QMetaType::QString,    6,

       0        // eod
};

void QgsGeorefPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeorefPlugin *_t = static_cast<QgsGeorefPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initGui(); break;
        case 1: _t->run(); break;
        case 2: _t->unload(); break;
        case 3: _t->setCurrentTheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { QIcon _r = _t->getThemeIcon((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QgsGeorefPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsGeorefPlugin.data,
      qt_meta_data_QgsGeorefPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeorefPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeorefPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeorefPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgisPlugin"))
        return static_cast< QgisPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsGeorefPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
