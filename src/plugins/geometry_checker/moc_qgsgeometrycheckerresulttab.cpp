/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometrycheckerresulttab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgeometrycheckerresulttab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometrycheckerresulttab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGeometryCheckerResultTab_t {
    QByteArrayData data[22];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryCheckerResultTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryCheckerResultTab_t qt_meta_stringdata_QgsGeometryCheckerResultTab = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsGeometryCheckerResultTab"
QT_MOC_LITERAL(1, 28, 8), // "addError"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "QgsGeometryCheckError*"
QT_MOC_LITERAL(4, 61, 5), // "error"
QT_MOC_LITERAL(5, 67, 11), // "updateError"
QT_MOC_LITERAL(6, 79, 13), // "statusChanged"
QT_MOC_LITERAL(7, 93, 12), // "exportErrors"
QT_MOC_LITERAL(8, 106, 14), // "highlightError"
QT_MOC_LITERAL(9, 121, 15), // "highlightErrors"
QT_MOC_LITERAL(10, 137, 7), // "current"
QT_MOC_LITERAL(11, 145, 18), // "onSelectionChanged"
QT_MOC_LITERAL(12, 164, 14), // "QItemSelection"
QT_MOC_LITERAL(13, 179, 6), // "newSel"
QT_MOC_LITERAL(14, 186, 18), // "openAttributeTable"
QT_MOC_LITERAL(15, 205, 20), // "fixErrorsWithDefault"
QT_MOC_LITERAL(16, 226, 19), // "fixErrorsWithPrompt"
QT_MOC_LITERAL(17, 246, 27), // "setDefaultResolutionMethods"
QT_MOC_LITERAL(18, 274, 28), // "storeDefaultResolutionMethod"
QT_MOC_LITERAL(19, 303, 17), // "checkRemovedLayer"
QT_MOC_LITERAL(20, 321, 3), // "ids"
QT_MOC_LITERAL(21, 325, 27) // "updateMergeAttributeIndices"

    },
    "QgsGeometryCheckerResultTab\0addError\0"
    "\0QgsGeometryCheckError*\0error\0updateError\0"
    "statusChanged\0exportErrors\0highlightError\0"
    "highlightErrors\0current\0onSelectionChanged\0"
    "QItemSelection\0newSel\0openAttributeTable\0"
    "fixErrorsWithDefault\0fixErrorsWithPrompt\0"
    "setDefaultResolutionMethods\0"
    "storeDefaultResolutionMethod\0"
    "checkRemovedLayer\0ids\0updateMergeAttributeIndices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryCheckerResultTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       5,    2,   87,    2, 0x08 /* Private */,
       7,    0,   92,    2, 0x08 /* Private */,
       8,    1,   93,    2, 0x08 /* Private */,
       9,    1,   96,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x28 /* Private | MethodCloned */,
      11,    2,  100,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,
      19,    1,  112,    2, 0x08 /* Private */,
      21,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QStringList,   20,
    QMetaType::Void,

       0        // eod
};

void QgsGeometryCheckerResultTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeometryCheckerResultTab *_t = static_cast<QgsGeometryCheckerResultTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addError((*reinterpret_cast< QgsGeometryCheckError*(*)>(_a[1]))); break;
        case 1: _t->updateError((*reinterpret_cast< QgsGeometryCheckError*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->exportErrors(); break;
        case 3: _t->highlightError((*reinterpret_cast< QgsGeometryCheckError*(*)>(_a[1]))); break;
        case 4: _t->highlightErrors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->highlightErrors(); break;
        case 6: _t->onSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 7: _t->openAttributeTable(); break;
        case 8: _t->fixErrorsWithDefault(); break;
        case 9: _t->fixErrorsWithPrompt(); break;
        case 10: _t->setDefaultResolutionMethods(); break;
        case 11: _t->storeDefaultResolutionMethod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->checkRemovedLayer((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 13: _t->updateMergeAttributeIndices(); break;
        default: ;
        }
    }
}

const QMetaObject QgsGeometryCheckerResultTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsGeometryCheckerResultTab.data,
      qt_meta_data_QgsGeometryCheckerResultTab,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeometryCheckerResultTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeometryCheckerResultTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeometryCheckerResultTab.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsGeometryCheckerResultTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
