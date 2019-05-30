/****************************************************************************
** Meta object code from reading C++ file 'qgslocatorfilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgslocatorfilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslocatorfilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLocatorFilter_t {
    QByteArrayData data[14];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLocatorFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLocatorFilter_t qt_meta_stringdata_QgsLocatorFilter = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsLocatorFilter"
QT_MOC_LITERAL(1, 17, 8), // "finished"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "resultFetched"
QT_MOC_LITERAL(4, 41, 16), // "QgsLocatorResult"
QT_MOC_LITERAL(5, 58, 6), // "result"
QT_MOC_LITERAL(6, 65, 8), // "Priority"
QT_MOC_LITERAL(7, 74, 7), // "Highest"
QT_MOC_LITERAL(8, 82, 4), // "High"
QT_MOC_LITERAL(9, 87, 6), // "Medium"
QT_MOC_LITERAL(10, 94, 3), // "Low"
QT_MOC_LITERAL(11, 98, 6), // "Lowest"
QT_MOC_LITERAL(12, 105, 5), // "Flags"
QT_MOC_LITERAL(13, 111, 8) // "FlagFast"

    },
    "QgsLocatorFilter\0finished\0\0resultFetched\0"
    "QgsLocatorResult\0result\0Priority\0"
    "Highest\0High\0Medium\0Low\0Lowest\0Flags\0"
    "FlagFast"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLocatorFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       2,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // enums: name, flags, count, data
       6, 0x0,    5,   36,
      12, 0x1,    1,   46,

 // enum data: key, value
       7, uint(QgsLocatorFilter::Highest),
       8, uint(QgsLocatorFilter::High),
       9, uint(QgsLocatorFilter::Medium),
      10, uint(QgsLocatorFilter::Low),
      11, uint(QgsLocatorFilter::Lowest),
      13, uint(QgsLocatorFilter::FlagFast),

       0        // eod
};

void QgsLocatorFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLocatorFilter *_t = static_cast<QgsLocatorFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->resultFetched((*reinterpret_cast< const QgsLocatorResult(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLocatorResult >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsLocatorFilter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLocatorFilter::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsLocatorFilter::*_t)(const QgsLocatorResult & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLocatorFilter::resultFetched)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsLocatorFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLocatorFilter.data,
      qt_meta_data_QgsLocatorFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLocatorFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLocatorFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLocatorFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsLocatorFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QgsLocatorFilter::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsLocatorFilter::resultFetched(const QgsLocatorResult & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
