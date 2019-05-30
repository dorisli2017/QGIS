/****************************************************************************
** Meta object code from reading C++ file 'qgsdefaultvalue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsdefaultvalue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdefaultvalue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDefaultValue_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDefaultValue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDefaultValue_t qt_meta_stringdata_QgsDefaultValue = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsDefaultValue"
QT_MOC_LITERAL(1, 16, 10), // "expression"
QT_MOC_LITERAL(2, 27, 13) // "applyOnUpdate"

    },
    "QgsDefaultValue\0expression\0applyOnUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDefaultValue[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QgsDefaultValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QgsDefaultValue *_t = reinterpret_cast<QgsDefaultValue *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->expression(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->applyOnUpdate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsDefaultValue *_t = reinterpret_cast<QgsDefaultValue *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setExpression(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setApplyOnUpdate(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDefaultValue::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsDefaultValue.data,
      qt_meta_data_QgsDefaultValue,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
