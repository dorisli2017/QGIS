/****************************************************************************
** Meta object code from reading C++ file 'qgstaskmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgstaskmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstaskmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTask_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTask_t qt_meta_stringdata_QgsTask = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QgsTask"
QT_MOC_LITERAL(1, 8, 15), // "progressChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "progress"
QT_MOC_LITERAL(4, 34, 13), // "statusChanged"
QT_MOC_LITERAL(5, 48, 6), // "status"
QT_MOC_LITERAL(6, 55, 5), // "begun"
QT_MOC_LITERAL(7, 61, 13), // "taskCompleted"
QT_MOC_LITERAL(8, 75, 14), // "taskTerminated"
QT_MOC_LITERAL(9, 90, 11), // "setProgress"
QT_MOC_LITERAL(10, 102, 20) // "subTaskStatusChanged"

    },
    "QgsTask\0progressChanged\0\0progress\0"
    "statusChanged\0status\0begun\0taskCompleted\0"
    "taskTerminated\0setProgress\0"
    "subTaskStatusChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    0,   55,    2, 0x06 /* Public */,
       7,    0,   56,    2, 0x06 /* Public */,
       8,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   58,    2, 0x09 /* Protected */,
      10,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void QgsTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTask *_t = static_cast<QgsTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->begun(); break;
        case 3: _t->taskCompleted(); break;
        case 4: _t->taskTerminated(); break;
        case 5: _t->setProgress((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->subTaskStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsTask::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTask::progressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsTask::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTask::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsTask::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTask::begun)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsTask::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTask::taskCompleted)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsTask::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTask::taskTerminated)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QgsTask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsTask.data,
      qt_meta_data_QgsTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTask.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QgsTask::progressChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsTask::statusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsTask::begun()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsTask::taskCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QgsTask::taskTerminated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_QgsTaskManager_t {
    QByteArrayData data[22];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTaskManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTaskManager_t qt_meta_stringdata_QgsTaskManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsTaskManager"
QT_MOC_LITERAL(1, 15, 15), // "progressChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "taskId"
QT_MOC_LITERAL(4, 39, 8), // "progress"
QT_MOC_LITERAL(5, 48, 24), // "finalTaskProgressChanged"
QT_MOC_LITERAL(6, 73, 13), // "statusChanged"
QT_MOC_LITERAL(7, 87, 6), // "status"
QT_MOC_LITERAL(8, 94, 9), // "taskAdded"
QT_MOC_LITERAL(9, 104, 20), // "taskAboutToBeDeleted"
QT_MOC_LITERAL(10, 125, 16), // "allTasksFinished"
QT_MOC_LITERAL(11, 142, 23), // "countActiveTasksChanged"
QT_MOC_LITERAL(12, 166, 5), // "count"
QT_MOC_LITERAL(13, 172, 13), // "taskTriggered"
QT_MOC_LITERAL(14, 186, 8), // "QgsTask*"
QT_MOC_LITERAL(15, 195, 4), // "task"
QT_MOC_LITERAL(16, 200, 11), // "triggerTask"
QT_MOC_LITERAL(17, 212, 19), // "taskProgressChanged"
QT_MOC_LITERAL(18, 232, 17), // "taskStatusChanged"
QT_MOC_LITERAL(19, 250, 19), // "layersWillBeRemoved"
QT_MOC_LITERAL(20, 270, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(21, 290, 6) // "layers"

    },
    "QgsTaskManager\0progressChanged\0\0taskId\0"
    "progress\0finalTaskProgressChanged\0"
    "statusChanged\0status\0taskAdded\0"
    "taskAboutToBeDeleted\0allTasksFinished\0"
    "countActiveTasksChanged\0count\0"
    "taskTriggered\0QgsTask*\0task\0triggerTask\0"
    "taskProgressChanged\0taskStatusChanged\0"
    "layersWillBeRemoved\0QList<QgsMapLayer*>\0"
    "layers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTaskManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       5,    1,   79,    2, 0x06 /* Public */,
       6,    2,   82,    2, 0x06 /* Public */,
       8,    1,   87,    2, 0x06 /* Public */,
       9,    1,   90,    2, 0x06 /* Public */,
      10,    0,   93,    2, 0x06 /* Public */,
      11,    1,   94,    2, 0x06 /* Public */,
      13,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  100,    2, 0x0a /* Public */,
      17,    1,  103,    2, 0x08 /* Private */,
      18,    1,  106,    2, 0x08 /* Private */,
      19,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Long, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Long, QMetaType::Int,    3,    7,
    QMetaType::Void, QMetaType::Long,    3,
    QMetaType::Void, QMetaType::Long,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void QgsTaskManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTaskManager *_t = static_cast<QgsTaskManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressChanged((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->finalTaskProgressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->statusChanged((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->taskAdded((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 4: _t->taskAboutToBeDeleted((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 5: _t->allTasksFinished(); break;
        case 6: _t->countActiveTasksChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->taskTriggered((*reinterpret_cast< QgsTask*(*)>(_a[1]))); break;
        case 8: _t->triggerTask((*reinterpret_cast< QgsTask*(*)>(_a[1]))); break;
        case 9: _t->taskProgressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->taskStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->layersWillBeRemoved((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsTask* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsTask* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsMapLayer*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsTaskManager::*_t)(long , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTaskManager::progressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsTaskManager::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTaskManager::finalTaskProgressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsTaskManager::*_t)(long , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTaskManager::statusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsTaskManager::*_t)(long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTaskManager::taskAdded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsTaskManager::*_t)(long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTaskManager::taskAboutToBeDeleted)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsTaskManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTaskManager::allTasksFinished)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsTaskManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTaskManager::countActiveTasksChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsTaskManager::*_t)(QgsTask * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTaskManager::taskTriggered)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject QgsTaskManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsTaskManager.data,
      qt_meta_data_QgsTaskManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTaskManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTaskManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTaskManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsTaskManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QgsTaskManager::progressChanged(long _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsTaskManager::finalTaskProgressChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsTaskManager::statusChanged(long _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsTaskManager::taskAdded(long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsTaskManager::taskAboutToBeDeleted(long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsTaskManager::allTasksFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QgsTaskManager::countActiveTasksChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsTaskManager::taskTriggered(QgsTask * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
