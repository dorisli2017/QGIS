/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometrycheck.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometrycheck.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometrycheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometryCheck_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryCheck_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryCheck_t qt_meta_stringdata_QgsGeometryCheck = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsGeometryCheck"
QT_MOC_LITERAL(1, 17, 5), // "Flags"
QT_MOC_LITERAL(2, 23, 21) // "AvailableInValidation"

    },
    "QgsGeometryCheck\0Flags\0AvailableInValidation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryCheck[] = {

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
       1, 0x1,    1,   18,

 // enum data: key, value
       2, uint(QgsGeometryCheck::AvailableInValidation),

       0        // eod
};

const QMetaObject QgsGeometryCheck::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsGeometryCheck.data,
      qt_meta_data_QgsGeometryCheck,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
