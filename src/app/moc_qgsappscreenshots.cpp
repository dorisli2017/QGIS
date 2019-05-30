/****************************************************************************
** Meta object code from reading C++ file 'qgsappscreenshots.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsappscreenshots.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsappscreenshots.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAppScreenShots_t {
    QByteArrayData data[11];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAppScreenShots_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAppScreenShots_t qt_meta_stringdata_QgsAppScreenShots = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsAppScreenShots"
QT_MOC_LITERAL(1, 18, 8), // "GrabMode"
QT_MOC_LITERAL(2, 27, 10), // "GrabWidget"
QT_MOC_LITERAL(3, 38, 18), // "GrabWidgetAndFrame"
QT_MOC_LITERAL(4, 57, 15), // "GrabWholeWindow"
QT_MOC_LITERAL(5, 73, 8), // "Category"
QT_MOC_LITERAL(6, 82, 3), // "All"
QT_MOC_LITERAL(7, 86, 13), // "GlobalOptions"
QT_MOC_LITERAL(8, 100, 21), // "VectorLayerProperties"
QT_MOC_LITERAL(9, 122, 21), // "RasterLayerProperties"
QT_MOC_LITERAL(10, 144, 10) // "Categories"

    },
    "QgsAppScreenShots\0GrabMode\0GrabWidget\0"
    "GrabWidgetAndFrame\0GrabWholeWindow\0"
    "Category\0All\0GlobalOptions\0"
    "VectorLayerProperties\0RasterLayerProperties\0"
    "Categories"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAppScreenShots[] = {

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
       1, 0x0,    3,   26,
       5, 0x0,    4,   32,
      10, 0x1,    4,   40,

 // enum data: key, value
       2, uint(QgsAppScreenShots::GrabWidget),
       3, uint(QgsAppScreenShots::GrabWidgetAndFrame),
       4, uint(QgsAppScreenShots::GrabWholeWindow),
       6, uint(QgsAppScreenShots::All),
       7, uint(QgsAppScreenShots::GlobalOptions),
       8, uint(QgsAppScreenShots::VectorLayerProperties),
       9, uint(QgsAppScreenShots::RasterLayerProperties),
       6, uint(QgsAppScreenShots::All),
       7, uint(QgsAppScreenShots::GlobalOptions),
       8, uint(QgsAppScreenShots::VectorLayerProperties),
       9, uint(QgsAppScreenShots::RasterLayerProperties),

       0        // eod
};

const QMetaObject QgsAppScreenShots::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsAppScreenShots.data,
      qt_meta_data_QgsAppScreenShots,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
