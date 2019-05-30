/****************************************************************************
** Meta object code from reading C++ file 'qgsgpsdevicedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsgpsdevicedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgpsdevicedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGpsDeviceDialog_t {
    QByteArrayData data[12];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGpsDeviceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGpsDeviceDialog_t qt_meta_stringdata_QgsGpsDeviceDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsGpsDeviceDialog"
QT_MOC_LITERAL(1, 19, 14), // "devicesChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "pbnNewDevice_clicked"
QT_MOC_LITERAL(4, 56, 23), // "pbnDeleteDevice_clicked"
QT_MOC_LITERAL(5, 80, 23), // "pbnUpdateDevice_clicked"
QT_MOC_LITERAL(6, 104, 19), // "on_pbnClose_clicked"
QT_MOC_LITERAL(7, 124, 20), // "slotUpdateDeviceList"
QT_MOC_LITERAL(8, 145, 9), // "selection"
QT_MOC_LITERAL(9, 155, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(10, 176, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 193, 7) // "current"

    },
    "QgsGpsDeviceDialog\0devicesChanged\0\0"
    "pbnNewDevice_clicked\0pbnDeleteDevice_clicked\0"
    "pbnUpdateDevice_clicked\0on_pbnClose_clicked\0"
    "slotUpdateDeviceList\0selection\0"
    "slotSelectionChanged\0QListWidgetItem*\0"
    "current"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGpsDeviceDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x2a /* Public | MethodCloned */,
       9,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void QgsGpsDeviceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGpsDeviceDialog *_t = static_cast<QgsGpsDeviceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->devicesChanged(); break;
        case 1: _t->pbnNewDevice_clicked(); break;
        case 2: _t->pbnDeleteDevice_clicked(); break;
        case 3: _t->pbnUpdateDevice_clicked(); break;
        case 4: _t->on_pbnClose_clicked(); break;
        case 5: _t->slotUpdateDeviceList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotUpdateDeviceList(); break;
        case 7: _t->slotSelectionChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsGpsDeviceDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGpsDeviceDialog::devicesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsGpsDeviceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsGpsDeviceDialog.data,
      qt_meta_data_QgsGpsDeviceDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGpsDeviceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGpsDeviceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGpsDeviceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsGpsDeviceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsGpsDeviceDialog::devicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
