/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometrymissingvertexcheck.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometrymissingvertexcheck.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometrymissingvertexcheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometryMissingVertexCheck_t {
    QByteArrayData data[4];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryMissingVertexCheck_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryMissingVertexCheck_t qt_meta_stringdata_QgsGeometryMissingVertexCheck = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsGeometryMissingVertexCheck"
QT_MOC_LITERAL(1, 30, 16), // "ResolutionMethod"
QT_MOC_LITERAL(2, 47, 8), // "NoChange"
QT_MOC_LITERAL(3, 56, 16) // "AddMissingVertex"

    },
    "QgsGeometryMissingVertexCheck\0"
    "ResolutionMethod\0NoChange\0AddMissingVertex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryMissingVertexCheck[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   18,

 // enum data: key, value
       2, uint(QgsGeometryMissingVertexCheck::NoChange),
       3, uint(QgsGeometryMissingVertexCheck::AddMissingVertex),

       0        // eod
};

const QMetaObject QgsGeometryMissingVertexCheck::staticMetaObject = {
    { &QgsGeometryCheck::staticMetaObject, qt_meta_stringdata_QgsGeometryMissingVertexCheck.data,
      qt_meta_data_QgsGeometryMissingVertexCheck,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
