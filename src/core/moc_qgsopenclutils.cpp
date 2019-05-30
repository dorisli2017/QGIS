/****************************************************************************
** Meta object code from reading C++ file 'qgsopenclutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsopenclutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsopenclutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsOpenClUtils_t {
    QByteArrayData data[5];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsOpenClUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsOpenClUtils_t qt_meta_stringdata_QgsOpenClUtils = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsOpenClUtils"
QT_MOC_LITERAL(1, 15, 12), // "HardwareType"
QT_MOC_LITERAL(2, 28, 3), // "CPU"
QT_MOC_LITERAL(3, 32, 3), // "GPU"
QT_MOC_LITERAL(4, 36, 5) // "Other"

    },
    "QgsOpenClUtils\0HardwareType\0CPU\0GPU\0"
    "Other"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsOpenClUtils[] = {

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
       1, 0x0,    3,   18,

 // enum data: key, value
       2, uint(QgsOpenClUtils::CPU),
       3, uint(QgsOpenClUtils::GPU),
       4, uint(QgsOpenClUtils::Other),

       0        // eod
};

const QMetaObject QgsOpenClUtils::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsOpenClUtils.data,
      qt_meta_data_QgsOpenClUtils,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
