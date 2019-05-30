/****************************************************************************
** Meta object code from reading C++ file 'qgsauthmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsauthmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthManager_t {
    QByteArrayData data[23];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthManager_t qt_meta_stringdata_QgsAuthManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsAuthManager"
QT_MOC_LITERAL(1, 15, 21), // "passwordHelperFailure"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "passwordHelperSuccess"
QT_MOC_LITERAL(4, 60, 10), // "messageOut"
QT_MOC_LITERAL(5, 71, 7), // "message"
QT_MOC_LITERAL(6, 79, 3), // "tag"
QT_MOC_LITERAL(7, 83, 28), // "QgsAuthManager::MessageLevel"
QT_MOC_LITERAL(8, 112, 5), // "level"
QT_MOC_LITERAL(9, 118, 24), // "passwordHelperMessageOut"
QT_MOC_LITERAL(10, 143, 22), // "masterPasswordVerified"
QT_MOC_LITERAL(11, 166, 8), // "verified"
QT_MOC_LITERAL(12, 175, 26), // "authDatabaseEraseRequested"
QT_MOC_LITERAL(13, 202, 19), // "authDatabaseChanged"
QT_MOC_LITERAL(14, 222, 21), // "clearAllCachedConfigs"
QT_MOC_LITERAL(15, 244, 17), // "clearCachedConfig"
QT_MOC_LITERAL(16, 262, 7), // "authcfg"
QT_MOC_LITERAL(17, 270, 14), // "writeToConsole"
QT_MOC_LITERAL(18, 285, 17), // "tryToStartDbErase"
QT_MOC_LITERAL(19, 303, 12), // "MessageLevel"
QT_MOC_LITERAL(20, 316, 4), // "INFO"
QT_MOC_LITERAL(21, 321, 7), // "WARNING"
QT_MOC_LITERAL(22, 329, 8) // "CRITICAL"

    },
    "QgsAuthManager\0passwordHelperFailure\0"
    "\0passwordHelperSuccess\0messageOut\0"
    "message\0tag\0QgsAuthManager::MessageLevel\0"
    "level\0passwordHelperMessageOut\0"
    "masterPasswordVerified\0verified\0"
    "authDatabaseEraseRequested\0"
    "authDatabaseChanged\0clearAllCachedConfigs\0"
    "clearCachedConfig\0authcfg\0writeToConsole\0"
    "tryToStartDbErase\0MessageLevel\0INFO\0"
    "WARNING\0CRITICAL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       1,  156, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    3,  101,    2, 0x06 /* Public */,
       4,    2,  108,    2, 0x26 /* Public | MethodCloned */,
       4,    1,  113,    2, 0x26 /* Public | MethodCloned */,
       9,    3,  116,    2, 0x06 /* Public */,
       9,    2,  123,    2, 0x26 /* Public | MethodCloned */,
       9,    1,  128,    2, 0x26 /* Public | MethodCloned */,
      10,    1,  131,    2, 0x06 /* Public */,
      12,    0,  134,    2, 0x06 /* Public */,
      13,    0,  135,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  136,    2, 0x0a /* Public */,
      15,    1,  137,    2, 0x0a /* Public */,
      17,    3,  140,    2, 0x08 /* Private */,
      17,    2,  147,    2, 0x28 /* Private | MethodCloned */,
      17,    1,  152,    2, 0x28 /* Private | MethodCloned */,
      18,    0,  155,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // enums: name, flags, count, data
      19, 0x0,    3,  160,

 // enum data: key, value
      20, uint(QgsAuthManager::INFO),
      21, uint(QgsAuthManager::WARNING),
      22, uint(QgsAuthManager::CRITICAL),

       0        // eod
};

void QgsAuthManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthManager *_t = static_cast<QgsAuthManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->passwordHelperFailure(); break;
        case 1: _t->passwordHelperSuccess(); break;
        case 2: _t->messageOut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsAuthManager::MessageLevel(*)>(_a[3]))); break;
        case 3: _t->messageOut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->messageOut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->passwordHelperMessageOut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsAuthManager::MessageLevel(*)>(_a[3]))); break;
        case 6: _t->passwordHelperMessageOut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->passwordHelperMessageOut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->masterPasswordVerified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->authDatabaseEraseRequested(); break;
        case 10: _t->authDatabaseChanged(); break;
        case 11: _t->clearAllCachedConfigs(); break;
        case 12: _t->clearCachedConfig((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->writeToConsole((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsAuthManager::MessageLevel(*)>(_a[3]))); break;
        case 14: _t->writeToConsole((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->writeToConsole((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->tryToStartDbErase(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsAuthManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthManager::passwordHelperFailure)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsAuthManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthManager::passwordHelperSuccess)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsAuthManager::*_t)(const QString & , const QString & , QgsAuthManager::MessageLevel ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthManager::messageOut)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsAuthManager::*_t)(const QString & , const QString & , QgsAuthManager::MessageLevel );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthManager::passwordHelperMessageOut)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsAuthManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthManager::masterPasswordVerified)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QgsAuthManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthManager::authDatabaseEraseRequested)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QgsAuthManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthManager::authDatabaseChanged)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject QgsAuthManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsAuthManager.data,
      qt_meta_data_QgsAuthManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsAuthManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QgsAuthManager::passwordHelperFailure()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsAuthManager::passwordHelperSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsAuthManager::messageOut(const QString & _t1, const QString & _t2, QgsAuthManager::MessageLevel _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< QgsAuthManager *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 5
void QgsAuthManager::passwordHelperMessageOut(const QString & _t1, const QString & _t2, QgsAuthManager::MessageLevel _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 8
void QgsAuthManager::masterPasswordVerified(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsAuthManager::authDatabaseEraseRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QgsAuthManager::authDatabaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
