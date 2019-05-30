/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometrygapcheck.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometrygapcheck.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometrygapcheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometryGapCheck_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryGapCheck_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryGapCheck_t qt_meta_stringdata_QgsGeometryGapCheck = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsGeometryGapCheck"
QT_MOC_LITERAL(1, 20, 16), // "ResolutionMethod"
QT_MOC_LITERAL(2, 37, 16), // "MergeLongestEdge"
QT_MOC_LITERAL(3, 54, 8) // "NoChange"

    },
    "QgsGeometryGapCheck\0ResolutionMethod\0"
    "MergeLongestEdge\0NoChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryGapCheck[] = {

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
       2, uint(QgsGeometryGapCheck::MergeLongestEdge),
       3, uint(QgsGeometryGapCheck::NoChange),

       0        // eod
};

const QMetaObject QgsGeometryGapCheck::staticMetaObject = {
    { &QgsGeometryCheck::staticMetaObject, qt_meta_stringdata_QgsGeometryGapCheck.data,
      qt_meta_data_QgsGeometryGapCheck,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
