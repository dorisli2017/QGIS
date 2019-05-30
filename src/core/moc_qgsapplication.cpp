/****************************************************************************
** Meta object code from reading C++ file 'qgsapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsApplication_t {
    QByteArrayData data[13];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsApplication_t qt_meta_stringdata_QgsApplication = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsApplication"
QT_MOC_LITERAL(1, 15, 9), // "preNotify"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "receiver"
QT_MOC_LITERAL(4, 35, 7), // "QEvent*"
QT_MOC_LITERAL(5, 43, 5), // "event"
QT_MOC_LITERAL(6, 49, 5), // "bool*"
QT_MOC_LITERAL(7, 55, 4), // "done"
QT_MOC_LITERAL(8, 60, 22), // "customVariablesChanged"
QT_MOC_LITERAL(9, 83, 25), // "nullRepresentationChanged"
QT_MOC_LITERAL(10, 109, 29), // "requestForTranslatableObjects"
QT_MOC_LITERAL(11, 139, 22), // "QgsTranslationContext*"
QT_MOC_LITERAL(12, 162, 18) // "translationContext"

    },
    "QgsApplication\0preNotify\0\0receiver\0"
    "QEvent*\0event\0bool*\0done\0"
    "customVariablesChanged\0nullRepresentationChanged\0"
    "requestForTranslatableObjects\0"
    "QgsTranslationContext*\0translationContext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       8,    0,   41,    2, 0x06 /* Public */,
       9,    0,   42,    2, 0x06 /* Public */,
      10,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void QgsApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsApplication *_t = static_cast<QgsApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->preNotify((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3]))); break;
        case 1: _t->customVariablesChanged(); break;
        case 2: _t->nullRepresentationChanged(); break;
        case 3: _t->requestForTranslatableObjects((*reinterpret_cast< QgsTranslationContext*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsApplication::*_t)(QObject * , QEvent * , bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsApplication::preNotify)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsApplication::customVariablesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsApplication::nullRepresentationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsApplication::*_t)(QgsTranslationContext * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsApplication::requestForTranslatableObjects)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QgsApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_QgsApplication.data,
      qt_meta_data_QgsApplication,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int QgsApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QgsApplication::preNotify(QObject * _t1, QEvent * _t2, bool * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsApplication::customVariablesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsApplication::nullRepresentationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsApplication::requestForTranslatableObjects(QgsTranslationContext * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
