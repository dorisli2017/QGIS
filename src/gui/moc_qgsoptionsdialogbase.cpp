/****************************************************************************
** Meta object code from reading C++ file 'qgsoptionsdialogbase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsoptionsdialogbase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsoptionsdialogbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsOptionsDialogBase_t {
    QByteArrayData data[9];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsOptionsDialogBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsOptionsDialogBase_t qt_meta_stringdata_QgsOptionsDialogBase = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsOptionsDialogBase"
QT_MOC_LITERAL(1, 21, 10), // "searchText"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "text"
QT_MOC_LITERAL(4, 38, 29), // "updateOptionsListVerticalTabs"
QT_MOC_LITERAL(5, 68, 35), // "optionsStackedWidget_CurrentC..."
QT_MOC_LITERAL(6, 104, 5), // "index"
QT_MOC_LITERAL(7, 110, 34), // "optionsStackedWidget_WidgetRe..."
QT_MOC_LITERAL(8, 145, 23) // "warnAboutMissingObjects"

    },
    "QgsOptionsDialogBase\0searchText\0\0text\0"
    "updateOptionsListVerticalTabs\0"
    "optionsStackedWidget_CurrentChanged\0"
    "index\0optionsStackedWidget_WidgetRemoved\0"
    "warnAboutMissingObjects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsOptionsDialogBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x09 /* Protected */,
       5,    1,   43,    2, 0x09 /* Protected */,
       7,    1,   46,    2, 0x09 /* Protected */,
       8,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void QgsOptionsDialogBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsOptionsDialogBase *_t = static_cast<QgsOptionsDialogBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateOptionsListVerticalTabs(); break;
        case 2: _t->optionsStackedWidget_CurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->optionsStackedWidget_WidgetRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->warnAboutMissingObjects(); break;
        default: ;
        }
    }
}

const QMetaObject QgsOptionsDialogBase::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsOptionsDialogBase.data,
      qt_meta_data_QgsOptionsDialogBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsOptionsDialogBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsOptionsDialogBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsOptionsDialogBase.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsOptionsDialogBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
