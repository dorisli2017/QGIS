/****************************************************************************
** Meta object code from reading C++ file 'qgsannotationmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsannotationmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsannotationmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAnnotationManager_t {
    QByteArrayData data[7];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAnnotationManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAnnotationManager_t qt_meta_stringdata_QgsAnnotationManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsAnnotationManager"
QT_MOC_LITERAL(1, 21, 15), // "annotationAdded"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "QgsAnnotation*"
QT_MOC_LITERAL(4, 53, 10), // "annotation"
QT_MOC_LITERAL(5, 64, 17), // "annotationRemoved"
QT_MOC_LITERAL(6, 82, 26) // "annotationAboutToBeRemoved"

    },
    "QgsAnnotationManager\0annotationAdded\0"
    "\0QgsAnnotation*\0annotation\0annotationRemoved\0"
    "annotationAboutToBeRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAnnotationManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    0,   32,    2, 0x06 /* Public */,
       6,    1,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QgsAnnotationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAnnotationManager *_t = static_cast<QgsAnnotationManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->annotationAdded((*reinterpret_cast< QgsAnnotation*(*)>(_a[1]))); break;
        case 1: _t->annotationRemoved(); break;
        case 2: _t->annotationAboutToBeRemoved((*reinterpret_cast< QgsAnnotation*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsAnnotationManager::*_t)(QgsAnnotation * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAnnotationManager::annotationAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsAnnotationManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAnnotationManager::annotationRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsAnnotationManager::*_t)(QgsAnnotation * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAnnotationManager::annotationAboutToBeRemoved)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QgsAnnotationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsAnnotationManager.data,
      qt_meta_data_QgsAnnotationManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAnnotationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAnnotationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAnnotationManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsAnnotationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QgsAnnotationManager::annotationAdded(QgsAnnotation * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsAnnotationManager::annotationRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsAnnotationManager::annotationAboutToBeRemoved(QgsAnnotation * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
