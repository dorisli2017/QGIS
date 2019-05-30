/****************************************************************************
** Meta object code from reading C++ file 'qgsalignrasterdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsalignrasterdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsalignrasterdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAlignRasterDialog_t {
    QByteArrayData data[14];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAlignRasterDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAlignRasterDialog_t qt_meta_stringdata_QgsAlignRasterDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsAlignRasterDialog"
QT_MOC_LITERAL(1, 21, 8), // "addLayer"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "removeLayer"
QT_MOC_LITERAL(4, 43, 9), // "editLayer"
QT_MOC_LITERAL(5, 53, 21), // "referenceLayerChanged"
QT_MOC_LITERAL(6, 75, 8), // "runAlign"
QT_MOC_LITERAL(7, 84, 21), // "destinationCrsChanged"
QT_MOC_LITERAL(8, 106, 17), // "clipExtentChanged"
QT_MOC_LITERAL(9, 124, 15), // "updateCustomCrs"
QT_MOC_LITERAL(10, 140, 20), // "updateCustomCellSize"
QT_MOC_LITERAL(11, 161, 22), // "updateCustomGridOffset"
QT_MOC_LITERAL(12, 184, 34), // "updateParametersFromReference..."
QT_MOC_LITERAL(13, 219, 8) // "showHelp"

    },
    "QgsAlignRasterDialog\0addLayer\0\0"
    "removeLayer\0editLayer\0referenceLayerChanged\0"
    "runAlign\0destinationCrsChanged\0"
    "clipExtentChanged\0updateCustomCrs\0"
    "updateCustomCellSize\0updateCustomGridOffset\0"
    "updateParametersFromReferenceLayer\0"
    "showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAlignRasterDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x09 /* Protected */,
       3,    0,   75,    2, 0x09 /* Protected */,
       4,    0,   76,    2, 0x09 /* Protected */,
       5,    0,   77,    2, 0x09 /* Protected */,
       6,    0,   78,    2, 0x09 /* Protected */,
       7,    0,   79,    2, 0x09 /* Protected */,
       8,    0,   80,    2, 0x09 /* Protected */,
       9,    0,   81,    2, 0x09 /* Protected */,
      10,    0,   82,    2, 0x09 /* Protected */,
      11,    0,   83,    2, 0x09 /* Protected */,
      12,    0,   84,    2, 0x09 /* Protected */,
      13,    0,   85,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAlignRasterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAlignRasterDialog *_t = static_cast<QgsAlignRasterDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addLayer(); break;
        case 1: _t->removeLayer(); break;
        case 2: _t->editLayer(); break;
        case 3: _t->referenceLayerChanged(); break;
        case 4: _t->runAlign(); break;
        case 5: _t->destinationCrsChanged(); break;
        case 6: _t->clipExtentChanged(); break;
        case 7: _t->updateCustomCrs(); break;
        case 8: _t->updateCustomCellSize(); break;
        case 9: _t->updateCustomGridOffset(); break;
        case 10: _t->updateParametersFromReferenceLayer(); break;
        case 11: _t->showHelp(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsAlignRasterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAlignRasterDialog.data,
      qt_meta_data_QgsAlignRasterDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAlignRasterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAlignRasterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAlignRasterDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAlignRasterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_QgsAlignRasterLayerConfigDialog_t {
    QByteArrayData data[3];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAlignRasterLayerConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAlignRasterLayerConfigDialog_t qt_meta_stringdata_QgsAlignRasterLayerConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsAlignRasterLayerConfigDialog"
QT_MOC_LITERAL(1, 32, 20), // "browseOutputFilename"
QT_MOC_LITERAL(2, 53, 0) // ""

    },
    "QgsAlignRasterLayerConfigDialog\0"
    "browseOutputFilename\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAlignRasterLayerConfigDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsAlignRasterLayerConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAlignRasterLayerConfigDialog *_t = static_cast<QgsAlignRasterLayerConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->browseOutputFilename(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsAlignRasterLayerConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAlignRasterLayerConfigDialog.data,
      qt_meta_data_QgsAlignRasterLayerConfigDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAlignRasterLayerConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAlignRasterLayerConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAlignRasterLayerConfigDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAlignRasterLayerConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
