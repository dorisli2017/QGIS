/****************************************************************************
** Meta object code from reading C++ file 'qgsfontbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsfontbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfontbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFontButton_t {
    QByteArrayData data[24];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFontButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFontButton_t qt_meta_stringdata_QgsFontButton = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsFontButton"
QT_MOC_LITERAL(1, 14, 7), // "changed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "setTextFormat"
QT_MOC_LITERAL(4, 37, 13), // "QgsTextFormat"
QT_MOC_LITERAL(5, 51, 6), // "format"
QT_MOC_LITERAL(6, 58, 14), // "setCurrentFont"
QT_MOC_LITERAL(7, 73, 4), // "font"
QT_MOC_LITERAL(8, 78, 8), // "setColor"
QT_MOC_LITERAL(9, 87, 5), // "color"
QT_MOC_LITERAL(10, 93, 10), // "copyFormat"
QT_MOC_LITERAL(11, 104, 11), // "pasteFormat"
QT_MOC_LITERAL(12, 116, 9), // "copyColor"
QT_MOC_LITERAL(13, 126, 10), // "pasteColor"
QT_MOC_LITERAL(14, 137, 18), // "showSettingsDialog"
QT_MOC_LITERAL(15, 156, 11), // "prepareMenu"
QT_MOC_LITERAL(16, 168, 14), // "addRecentColor"
QT_MOC_LITERAL(17, 183, 4), // "mode"
QT_MOC_LITERAL(18, 188, 4), // "Mode"
QT_MOC_LITERAL(19, 193, 11), // "dialogTitle"
QT_MOC_LITERAL(20, 205, 11), // "currentFont"
QT_MOC_LITERAL(21, 217, 10), // "textFormat"
QT_MOC_LITERAL(22, 228, 16), // "ModeTextRenderer"
QT_MOC_LITERAL(23, 245, 9) // "ModeQFont"

    },
    "QgsFontButton\0changed\0\0setTextFormat\0"
    "QgsTextFormat\0format\0setCurrentFont\0"
    "font\0setColor\0color\0copyFormat\0"
    "pasteFormat\0copyColor\0pasteColor\0"
    "showSettingsDialog\0prepareMenu\0"
    "addRecentColor\0mode\0Mode\0dialogTitle\0"
    "currentFont\0textFormat\0ModeTextRenderer\0"
    "ModeQFont"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFontButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   88, // properties
       1,  104, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   70,    2, 0x0a /* Public */,
       6,    1,   73,    2, 0x0a /* Public */,
       8,    1,   76,    2, 0x0a /* Public */,
      10,    0,   79,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    0,   81,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QFont,    7,
    QMetaType::Void, QMetaType::QColor,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    9,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x0009510b,
      19, QMetaType::QString, 0x00095103,
      20, QMetaType::QFont, 0x00495103,
      21, 0x80000000 | 4, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      18, 0x0,    2,  108,

 // enum data: key, value
      22, uint(QgsFontButton::ModeTextRenderer),
      23, uint(QgsFontButton::ModeQFont),

       0        // eod
};

void QgsFontButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFontButton *_t = static_cast<QgsFontButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setTextFormat((*reinterpret_cast< const QgsTextFormat(*)>(_a[1]))); break;
        case 2: _t->setCurrentFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 3: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->copyFormat(); break;
        case 5: _t->pasteFormat(); break;
        case 6: _t->copyColor(); break;
        case 7: _t->pasteColor(); break;
        case 8: _t->showSettingsDialog(); break;
        case 9: _t->prepareMenu(); break;
        case 10: _t->addRecentColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsFontButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFontButton::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsFontButton *_t = static_cast<QgsFontButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Mode*>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->dialogTitle(); break;
        case 2: *reinterpret_cast< QFont*>(_v) = _t->currentFont(); break;
        case 3: *reinterpret_cast< QgsTextFormat*>(_v) = _t->textFormat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsFontButton *_t = static_cast<QgsFontButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast< Mode*>(_v)); break;
        case 1: _t->setDialogTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCurrentFont(*reinterpret_cast< QFont*>(_v)); break;
        case 3: _t->setTextFormat(*reinterpret_cast< QgsTextFormat*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsFontButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QgsFontButton.data,
      qt_meta_data_QgsFontButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFontButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFontButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFontButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int QgsFontButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsFontButton::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
