/****************************************************************************
** Meta object code from reading C++ file 'qgsrelation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsrelation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrelation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRelation_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRelation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRelation_t qt_meta_stringdata_QgsRelation = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QgsRelation"
QT_MOC_LITERAL(1, 12, 22), // "resolveReferencedField"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "referencingField"
QT_MOC_LITERAL(4, 53, 23), // "resolveReferencingField"
QT_MOC_LITERAL(5, 77, 15), // "referencedField"
QT_MOC_LITERAL(6, 93, 2), // "id"
QT_MOC_LITERAL(7, 96, 16), // "referencingLayer"
QT_MOC_LITERAL(8, 113, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(9, 129, 15), // "referencedLayer"
QT_MOC_LITERAL(10, 145, 4), // "name"
QT_MOC_LITERAL(11, 150, 7) // "isValid"

    },
    "QgsRelation\0resolveReferencedField\0\0"
    "referencingField\0resolveReferencingField\0"
    "referencedField\0id\0referencingLayer\0"
    "QgsVectorLayer*\0referencedLayer\0name\0"
    "isValid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRelation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       4,    1,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    5,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095103,
       7, 0x80000000 | 8, 0x00095009,
       9, 0x80000000 | 8, 0x00095009,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::Bool, 0x00095001,

       0        // eod
};

void QgsRelation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRelation *_t = reinterpret_cast<QgsRelation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->resolveReferencedField((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->resolveReferencingField((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsRelation *_t = reinterpret_cast<QgsRelation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QgsVectorLayer**>(_v) = _t->referencingLayer(); break;
        case 2: *reinterpret_cast< QgsVectorLayer**>(_v) = _t->referencedLayer(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsRelation *_t = reinterpret_cast<QgsRelation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsRelation::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsRelation.data,
      qt_meta_data_QgsRelation,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
