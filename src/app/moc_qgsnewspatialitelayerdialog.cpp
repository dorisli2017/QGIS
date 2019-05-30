/****************************************************************************
** Meta object code from reading C++ file 'qgsnewspatialitelayerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsnewspatialitelayerdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsnewspatialitelayerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsNewSpatialiteLayerDialog_t {
    QByteArrayData data[14];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsNewSpatialiteLayerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsNewSpatialiteLayerDialog_t qt_meta_stringdata_QgsNewSpatialiteLayerDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsNewSpatialiteLayerDialog"
QT_MOC_LITERAL(1, 28, 27), // "mAddAttributeButton_clicked"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 30), // "mRemoveAttributeButton_clicked"
QT_MOC_LITERAL(4, 88, 36), // "mGeometryTypeBox_currentIndex..."
QT_MOC_LITERAL(5, 125, 5), // "index"
QT_MOC_LITERAL(6, 131, 28), // "mTypeBox_currentIndexChanged"
QT_MOC_LITERAL(7, 160, 19), // "pbnFindSRID_clicked"
QT_MOC_LITERAL(8, 180, 29), // "toolButtonNewDatabase_clicked"
QT_MOC_LITERAL(9, 210, 11), // "nameChanged"
QT_MOC_LITERAL(10, 222, 16), // "selectionChanged"
QT_MOC_LITERAL(11, 239, 7), // "checkOk"
QT_MOC_LITERAL(12, 247, 18), // "buttonBox_accepted"
QT_MOC_LITERAL(13, 266, 18) // "buttonBox_rejected"

    },
    "QgsNewSpatialiteLayerDialog\0"
    "mAddAttributeButton_clicked\0\0"
    "mRemoveAttributeButton_clicked\0"
    "mGeometryTypeBox_currentIndexChanged\0"
    "index\0mTypeBox_currentIndexChanged\0"
    "pbnFindSRID_clicked\0toolButtonNewDatabase_clicked\0"
    "nameChanged\0selectionChanged\0checkOk\0"
    "buttonBox_accepted\0buttonBox_rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsNewSpatialiteLayerDialog[] = {

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
       1,    0,   69,    2, 0x09 /* Protected */,
       3,    0,   70,    2, 0x09 /* Protected */,
       4,    1,   71,    2, 0x09 /* Protected */,
       6,    1,   74,    2, 0x09 /* Protected */,
       7,    0,   77,    2, 0x09 /* Protected */,
       8,    0,   78,    2, 0x09 /* Protected */,
       9,    1,   79,    2, 0x09 /* Protected */,
      10,    0,   82,    2, 0x09 /* Protected */,
      11,    0,   83,    2, 0x09 /* Protected */,
      12,    0,   84,    2, 0x09 /* Protected */,
      13,    0,   85,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsNewSpatialiteLayerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsNewSpatialiteLayerDialog *_t = static_cast<QgsNewSpatialiteLayerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mAddAttributeButton_clicked(); break;
        case 1: _t->mRemoveAttributeButton_clicked(); break;
        case 2: _t->mGeometryTypeBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->mTypeBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->pbnFindSRID_clicked(); break;
        case 5: _t->toolButtonNewDatabase_clicked(); break;
        case 6: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->selectionChanged(); break;
        case 8: _t->checkOk(); break;
        case 9: _t->buttonBox_accepted(); break;
        case 10: _t->buttonBox_rejected(); break;
        default: ;
        }
    }
}

const QMetaObject QgsNewSpatialiteLayerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsNewSpatialiteLayerDialog.data,
      qt_meta_data_QgsNewSpatialiteLayerDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsNewSpatialiteLayerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsNewSpatialiteLayerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsNewSpatialiteLayerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsNewSpatialiteLayerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
