/****************************************************************************
** Meta object code from reading C++ file 'qgsmapthemes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsmapthemes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapthemes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapThemes_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapThemes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapThemes_t qt_meta_stringdata_QgsMapThemes = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QgsMapThemes"
QT_MOC_LITERAL(1, 13, 9), // "addPreset"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "presetTriggered"
QT_MOC_LITERAL(4, 40, 16), // "replaceTriggered"
QT_MOC_LITERAL(5, 57, 19), // "removeCurrentPreset"
QT_MOC_LITERAL(6, 77, 15) // "menuAboutToShow"

    },
    "QgsMapThemes\0addPreset\0\0presetTriggered\0"
    "replaceTriggered\0removeCurrentPreset\0"
    "menuAboutToShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapThemes[] = {

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
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    0,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsMapThemes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapThemes *_t = static_cast<QgsMapThemes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addPreset(); break;
        case 1: _t->presetTriggered(); break;
        case 2: _t->replaceTriggered(); break;
        case 3: _t->removeCurrentPreset(); break;
        case 4: _t->menuAboutToShow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsMapThemes::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapThemes.data,
      qt_meta_data_QgsMapThemes,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapThemes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapThemes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapThemes.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsMapThemes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
