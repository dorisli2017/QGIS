/****************************************************************************
** Meta object code from reading C++ file 'qgsprocessingalgrunnertask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsprocessingalgrunnertask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprocessingalgrunnertask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProcessingAlgRunnerTask_t {
    QByteArrayData data[5];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingAlgRunnerTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingAlgRunnerTask_t qt_meta_stringdata_QgsProcessingAlgRunnerTask = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsProcessingAlgRunnerTask"
QT_MOC_LITERAL(1, 27, 8), // "executed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "successful"
QT_MOC_LITERAL(4, 48, 7) // "results"

    },
    "QgsProcessingAlgRunnerTask\0executed\0"
    "\0successful\0results"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingAlgRunnerTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariantMap,    3,    4,

       0        // eod
};

void QgsProcessingAlgRunnerTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingAlgRunnerTask *_t = static_cast<QgsProcessingAlgRunnerTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->executed((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsProcessingAlgRunnerTask::*_t)(bool , const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingAlgRunnerTask::executed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QgsProcessingAlgRunnerTask::staticMetaObject = {
    { &QgsTask::staticMetaObject, qt_meta_stringdata_QgsProcessingAlgRunnerTask.data,
      qt_meta_data_QgsProcessingAlgRunnerTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingAlgRunnerTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingAlgRunnerTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingAlgRunnerTask.stringdata0))
        return static_cast<void*>(this);
    return QgsTask::qt_metacast(_clname);
}

int QgsProcessingAlgRunnerTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsProcessingAlgRunnerTask::executed(bool _t1, const QVariantMap & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
