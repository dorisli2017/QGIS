/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutitempicture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslayoutitempicture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutitempicture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutItemPicture_t {
    QByteArrayData data[18];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutItemPicture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutItemPicture_t qt_meta_stringdata_QgsLayoutItemPicture = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsLayoutItemPicture"
QT_MOC_LITERAL(1, 21, 22), // "pictureRotationChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "newRotation"
QT_MOC_LITERAL(4, 57, 18), // "setPictureRotation"
QT_MOC_LITERAL(5, 76, 8), // "rotation"
QT_MOC_LITERAL(6, 85, 13), // "setResizeMode"
QT_MOC_LITERAL(7, 99, 32), // "QgsLayoutItemPicture::ResizeMode"
QT_MOC_LITERAL(8, 132, 4), // "mode"
QT_MOC_LITERAL(9, 137, 14), // "refreshPicture"
QT_MOC_LITERAL(10, 152, 27), // "const QgsExpressionContext*"
QT_MOC_LITERAL(11, 180, 7), // "context"
QT_MOC_LITERAL(12, 188, 15), // "recalculateSize"
QT_MOC_LITERAL(13, 204, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(14, 231, 36), // "QgsLayoutObject::DataDefinedP..."
QT_MOC_LITERAL(15, 268, 8), // "property"
QT_MOC_LITERAL(16, 277, 17), // "updateMapRotation"
QT_MOC_LITERAL(17, 295, 12) // "shapeChanged"

    },
    "QgsLayoutItemPicture\0pictureRotationChanged\0"
    "\0newRotation\0setPictureRotation\0"
    "rotation\0setResizeMode\0"
    "QgsLayoutItemPicture::ResizeMode\0mode\0"
    "refreshPicture\0const QgsExpressionContext*\0"
    "context\0recalculateSize\0"
    "refreshDataDefinedProperty\0"
    "QgsLayoutObject::DataDefinedProperty\0"
    "property\0updateMapRotation\0shapeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutItemPicture[] = {

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
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   67,    2, 0x0a /* Public */,
       6,    1,   70,    2, 0x0a /* Public */,
       9,    1,   73,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x2a /* Public | MethodCloned */,
      12,    0,   77,    2, 0x0a /* Public */,
      13,    1,   78,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x2a /* Public | MethodCloned */,
      16,    0,   82,    2, 0x08 /* Private */,
      17,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutItemPicture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutItemPicture *_t = static_cast<QgsLayoutItemPicture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pictureRotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setPictureRotation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setResizeMode((*reinterpret_cast< QgsLayoutItemPicture::ResizeMode(*)>(_a[1]))); break;
        case 3: _t->refreshPicture((*reinterpret_cast< const QgsExpressionContext*(*)>(_a[1]))); break;
        case 4: _t->refreshPicture(); break;
        case 5: _t->recalculateSize(); break;
        case 6: _t->refreshDataDefinedProperty((*reinterpret_cast< QgsLayoutObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 7: _t->refreshDataDefinedProperty(); break;
        case 8: _t->updateMapRotation(); break;
        case 9: _t->shapeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLayoutItemPicture::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutItemPicture::pictureRotationChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsLayoutItemPicture::staticMetaObject = {
    { &QgsLayoutItem::staticMetaObject, qt_meta_stringdata_QgsLayoutItemPicture.data,
      qt_meta_data_QgsLayoutItemPicture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutItemPicture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutItemPicture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutItemPicture.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItem::qt_metacast(_clname);
}

int QgsLayoutItemPicture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutItem::qt_metacall(_c, _id, _a);
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
void QgsLayoutItemPicture::pictureRotationChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
