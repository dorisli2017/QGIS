/****************************************************************************
** Meta object code from reading C++ file 'evisdatabaseconnectiongui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "evisdatabaseconnectiongui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'evisdatabaseconnectiongui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_eVisDatabaseConnectionGui_t {
    QByteArrayData data[12];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_eVisDatabaseConnectionGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_eVisDatabaseConnectionGui_t qt_meta_stringdata_eVisDatabaseConnectionGui = {
    {
QT_MOC_LITERAL(0, 0, 25), // "eVisDatabaseConnectionGui"
QT_MOC_LITERAL(1, 26, 15), // "drawVectorLayer"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 18), // "drawNewVectorLayer"
QT_MOC_LITERAL(4, 62, 18), // "buttonBox_accepted"
QT_MOC_LITERAL(5, 81, 8), // "showHelp"
QT_MOC_LITERAL(6, 90, 36), // "cboxDatabaseType_currentIndex..."
QT_MOC_LITERAL(7, 127, 43), // "cboxPredefinedQueryList_curre..."
QT_MOC_LITERAL(8, 171, 19), // "pbtnConnect_clicked"
QT_MOC_LITERAL(9, 191, 33), // "pbtnLoadPredefinedQueries_cli..."
QT_MOC_LITERAL(10, 225, 20), // "pbtnOpenFile_clicked"
QT_MOC_LITERAL(11, 246, 20) // "pbtnRunQuery_clicked"

    },
    "eVisDatabaseConnectionGui\0drawVectorLayer\0"
    "\0drawNewVectorLayer\0buttonBox_accepted\0"
    "showHelp\0cboxDatabaseType_currentIndexChanged\0"
    "cboxPredefinedQueryList_currentIndexChanged\0"
    "pbtnConnect_clicked\0"
    "pbtnLoadPredefinedQueries_clicked\0"
    "pbtnOpenFile_clicked\0pbtnRunQuery_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_eVisDatabaseConnectionGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   71,    2, 0x08 /* Private */,
       4,    0,   78,    2, 0x08 /* Private */,
       5,    0,   79,    2, 0x08 /* Private */,
       6,    1,   80,    2, 0x08 /* Private */,
       7,    1,   83,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void eVisDatabaseConnectionGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        eVisDatabaseConnectionGui *_t = static_cast<eVisDatabaseConnectionGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->drawVectorLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->drawNewVectorLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->buttonBox_accepted(); break;
        case 3: _t->showHelp(); break;
        case 4: _t->cboxDatabaseType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->cboxPredefinedQueryList_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->pbtnConnect_clicked(); break;
        case 7: _t->pbtnLoadPredefinedQueries_clicked(); break;
        case 8: _t->pbtnOpenFile_clicked(); break;
        case 9: _t->pbtnRunQuery_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (eVisDatabaseConnectionGui::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&eVisDatabaseConnectionGui::drawVectorLayer)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject eVisDatabaseConnectionGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_eVisDatabaseConnectionGui.data,
      qt_meta_data_eVisDatabaseConnectionGui,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *eVisDatabaseConnectionGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *eVisDatabaseConnectionGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_eVisDatabaseConnectionGui.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int eVisDatabaseConnectionGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void eVisDatabaseConnectionGui::drawVectorLayer(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
