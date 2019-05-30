/****************************************************************************
** Meta object code from reading C++ file 'qgsfield.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsfield.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsField_t {
    QByteArrayData data[14];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsField_t qt_meta_stringdata_QgsField = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QgsField"
QT_MOC_LITERAL(1, 9, 9), // "isNumeric"
QT_MOC_LITERAL(2, 19, 12), // "isDateOrTime"
QT_MOC_LITERAL(3, 32, 6), // "length"
QT_MOC_LITERAL(4, 39, 9), // "precision"
QT_MOC_LITERAL(5, 49, 4), // "type"
QT_MOC_LITERAL(6, 54, 14), // "QVariant::Type"
QT_MOC_LITERAL(7, 69, 7), // "comment"
QT_MOC_LITERAL(8, 77, 4), // "name"
QT_MOC_LITERAL(9, 82, 5), // "alias"
QT_MOC_LITERAL(10, 88, 22), // "defaultValueDefinition"
QT_MOC_LITERAL(11, 111, 15), // "QgsDefaultValue"
QT_MOC_LITERAL(12, 127, 11), // "constraints"
QT_MOC_LITERAL(13, 139, 19) // "QgsFieldConstraints"

    },
    "QgsField\0isNumeric\0isDateOrTime\0length\0"
    "precision\0type\0QVariant::Type\0comment\0"
    "name\0alias\0defaultValueDefinition\0"
    "QgsDefaultValue\0constraints\0"
    "QgsFieldConstraints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsField[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095001,
       2, QMetaType::Bool, 0x00095001,
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, 0x80000000 | 11, 0x0009510b,
      12, 0x80000000 | 13, 0x0009510b,

       0        // eod
};

void QgsField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDefaultValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsField *_t = reinterpret_cast<QgsField *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isNumeric(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isDateOrTime(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->length(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->precision(); break;
        case 4: *reinterpret_cast< QVariant::Type*>(_v) = _t->type(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->comment(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->alias(); break;
        case 8: *reinterpret_cast< QgsDefaultValue*>(_v) = _t->defaultValueDefinition(); break;
        case 9: *reinterpret_cast< QgsFieldConstraints*>(_v) = _t->constraints(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsField *_t = reinterpret_cast<QgsField *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setLength(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setType(*reinterpret_cast< QVariant::Type*>(_v)); break;
        case 5: _t->setComment(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setAlias(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setDefaultValueDefinition(*reinterpret_cast< QgsDefaultValue*>(_v)); break;
        case 9: _t->setConstraints(*reinterpret_cast< QgsFieldConstraints*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QgsField::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsField.data,
      qt_meta_data_QgsField,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
