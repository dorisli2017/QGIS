/****************************************************************************
** Meta object code from reading C++ file 'qgsattributeeditorcontext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsattributeeditorcontext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributeeditorcontext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributeEditorContext_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeEditorContext_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeEditorContext_t qt_meta_stringdata_QgsAttributeEditorContext = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsAttributeEditorContext"
QT_MOC_LITERAL(1, 26, 4), // "Mode"
QT_MOC_LITERAL(2, 31, 14), // "SingleEditMode"
QT_MOC_LITERAL(3, 46, 14), // "AddFeatureMode"
QT_MOC_LITERAL(4, 61, 13), // "MultiEditMode"
QT_MOC_LITERAL(5, 75, 10), // "SearchMode"
QT_MOC_LITERAL(6, 86, 19), // "AggregateSearchMode"
QT_MOC_LITERAL(7, 106, 12) // "IdentifyMode"

    },
    "QgsAttributeEditorContext\0Mode\0"
    "SingleEditMode\0AddFeatureMode\0"
    "MultiEditMode\0SearchMode\0AggregateSearchMode\0"
    "IdentifyMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeEditorContext[] = {

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
       2, uint(QgsAttributeEditorContext::SingleEditMode),
       3, uint(QgsAttributeEditorContext::AddFeatureMode),
       4, uint(QgsAttributeEditorContext::MultiEditMode),
       5, uint(QgsAttributeEditorContext::SearchMode),
       6, uint(QgsAttributeEditorContext::AggregateSearchMode),
       7, uint(QgsAttributeEditorContext::IdentifyMode),

       0        // eod
};

const QMetaObject QgsAttributeEditorContext::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QgsAttributeEditorContext.data,
      qt_meta_data_QgsAttributeEditorContext,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
