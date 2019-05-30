/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorsimplifymethod.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsvectorsimplifymethod.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorsimplifymethod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVectorSimplifyMethod_t {
    QByteArrayData data[11];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorSimplifyMethod_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorSimplifyMethod_t qt_meta_stringdata_QgsVectorSimplifyMethod = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsVectorSimplifyMethod"
QT_MOC_LITERAL(1, 24, 12), // "SimplifyHint"
QT_MOC_LITERAL(2, 37, 16), // "NoSimplification"
QT_MOC_LITERAL(3, 54, 22), // "GeometrySimplification"
QT_MOC_LITERAL(4, 77, 26), // "AntialiasingSimplification"
QT_MOC_LITERAL(5, 104, 18), // "FullSimplification"
QT_MOC_LITERAL(6, 123, 13), // "SimplifyHints"
QT_MOC_LITERAL(7, 137, 17), // "SimplifyAlgorithm"
QT_MOC_LITERAL(8, 155, 8), // "Distance"
QT_MOC_LITERAL(9, 164, 10), // "SnapToGrid"
QT_MOC_LITERAL(10, 175, 11) // "Visvalingam"

    },
    "QgsVectorSimplifyMethod\0SimplifyHint\0"
    "NoSimplification\0GeometrySimplification\0"
    "AntialiasingSimplification\0"
    "FullSimplification\0SimplifyHints\0"
    "SimplifyAlgorithm\0Distance\0SnapToGrid\0"
    "Visvalingam"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorSimplifyMethod[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    4,   26,
       6, 0x1,    4,   34,
       7, 0x0,    3,   42,

 // enum data: key, value
       2, uint(QgsVectorSimplifyMethod::NoSimplification),
       3, uint(QgsVectorSimplifyMethod::GeometrySimplification),
       4, uint(QgsVectorSimplifyMethod::AntialiasingSimplification),
       5, uint(QgsVectorSimplifyMethod::FullSimplification),
       2, uint(QgsVectorSimplifyMethod::NoSimplification),
       3, uint(QgsVectorSimplifyMethod::GeometrySimplification),
       4, uint(QgsVectorSimplifyMethod::AntialiasingSimplification),
       5, uint(QgsVectorSimplifyMethod::FullSimplification),
       8, uint(QgsVectorSimplifyMethod::Distance),
       9, uint(QgsVectorSimplifyMethod::SnapToGrid),
      10, uint(QgsVectorSimplifyMethod::Visvalingam),

       0        // eod
};

const QMetaObject QgsVectorSimplifyMethod::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsVectorSimplifyMethod.data,
      qt_meta_data_QgsVectorSimplifyMethod,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
