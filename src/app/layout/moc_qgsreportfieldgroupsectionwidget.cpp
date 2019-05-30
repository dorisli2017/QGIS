/****************************************************************************
** Meta object code from reading C++ file 'qgsreportfieldgroupsectionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsreportfieldgroupsectionwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsreportfieldgroupsectionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsReportSectionFieldGroupWidget_t {
    QByteArrayData data[18];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsReportSectionFieldGroupWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsReportSectionFieldGroupWidget_t qt_meta_stringdata_QgsReportSectionFieldGroupWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsReportSectionFieldGroupWidget"
QT_MOC_LITERAL(1, 33, 12), // "toggleHeader"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 7), // "enabled"
QT_MOC_LITERAL(4, 55, 25), // "toggleHeaderAlwaysVisible"
QT_MOC_LITERAL(5, 81, 12), // "toggleFooter"
QT_MOC_LITERAL(6, 94, 25), // "toggleFooterAlwaysVisible"
QT_MOC_LITERAL(7, 120, 10), // "editHeader"
QT_MOC_LITERAL(8, 131, 10), // "editFooter"
QT_MOC_LITERAL(9, 142, 10), // "toggleBody"
QT_MOC_LITERAL(10, 153, 8), // "editBody"
QT_MOC_LITERAL(11, 162, 20), // "sortAscendingToggled"
QT_MOC_LITERAL(12, 183, 7), // "checked"
QT_MOC_LITERAL(13, 191, 8), // "setLayer"
QT_MOC_LITERAL(14, 200, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(15, 213, 5), // "layer"
QT_MOC_LITERAL(16, 219, 8), // "setField"
QT_MOC_LITERAL(17, 228, 5) // "field"

    },
    "QgsReportSectionFieldGroupWidget\0"
    "toggleHeader\0\0enabled\0toggleHeaderAlwaysVisible\0"
    "toggleFooter\0toggleFooterAlwaysVisible\0"
    "editHeader\0editFooter\0toggleBody\0"
    "editBody\0sortAscendingToggled\0checked\0"
    "setLayer\0QgsMapLayer*\0layer\0setField\0"
    "field"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsReportSectionFieldGroupWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       5,    1,   75,    2, 0x08 /* Private */,
       6,    1,   78,    2, 0x08 /* Private */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    1,   87,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      16,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void QgsReportSectionFieldGroupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsReportSectionFieldGroupWidget *_t = static_cast<QgsReportSectionFieldGroupWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleHeader((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->toggleHeaderAlwaysVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->toggleFooter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->toggleFooterAlwaysVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->editHeader(); break;
        case 5: _t->editFooter(); break;
        case 6: _t->toggleBody((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->editBody(); break;
        case 8: _t->sortAscendingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 10: _t->setField((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsReportSectionFieldGroupWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsReportSectionFieldGroupWidget.data,
      qt_meta_data_QgsReportSectionFieldGroupWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsReportSectionFieldGroupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsReportSectionFieldGroupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsReportSectionFieldGroupWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsReportSectionFieldGroupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
