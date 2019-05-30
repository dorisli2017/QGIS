/****************************************************************************
** Meta object code from reading C++ file 'qgsdatasourceuri.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsdatasourceuri.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdatasourceuri.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDataSourceUri_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataSourceUri_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataSourceUri_t qt_meta_stringdata_QgsDataSourceUri = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsDataSourceUri"
QT_MOC_LITERAL(1, 17, 7), // "SslMode"
QT_MOC_LITERAL(2, 25, 9), // "SslPrefer"
QT_MOC_LITERAL(3, 35, 10), // "SslDisable"
QT_MOC_LITERAL(4, 46, 8), // "SslAllow"
QT_MOC_LITERAL(5, 55, 10), // "SslRequire"
QT_MOC_LITERAL(6, 66, 11), // "SslVerifyCa"
QT_MOC_LITERAL(7, 78, 13) // "SslVerifyFull"

    },
    "QgsDataSourceUri\0SslMode\0SslPrefer\0"
    "SslDisable\0SslAllow\0SslRequire\0"
    "SslVerifyCa\0SslVerifyFull"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataSourceUri[] = {

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
       1, 0x0,    6,   18,

 // enum data: key, value
       2, uint(QgsDataSourceUri::SslPrefer),
       3, uint(QgsDataSourceUri::SslDisable),
       4, uint(QgsDataSourceUri::SslAllow),
       5, uint(QgsDataSourceUri::SslRequire),
       6, uint(QgsDataSourceUri::SslVerifyCa),
       7, uint(QgsDataSourceUri::SslVerifyFull),

       0        // eod
};

const QMetaObject QgsDataSourceUri::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsDataSourceUri.data,
      qt_meta_data_QgsDataSourceUri,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
