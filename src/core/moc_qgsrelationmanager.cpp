/****************************************************************************
** Meta object code from reading C++ file 'qgsrelationmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsrelationmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrelationmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRelationManager_t {
    QByteArrayData data[17];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRelationManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRelationManager_t qt_meta_stringdata_QgsRelationManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsRelationManager"
QT_MOC_LITERAL(1, 19, 15), // "relationsLoaded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "changed"
QT_MOC_LITERAL(4, 44, 21), // "updateRelationsStatus"
QT_MOC_LITERAL(5, 66, 11), // "readProject"
QT_MOC_LITERAL(6, 78, 12), // "QDomDocument"
QT_MOC_LITERAL(7, 91, 3), // "doc"
QT_MOC_LITERAL(8, 95, 20), // "QgsReadWriteContext&"
QT_MOC_LITERAL(9, 116, 7), // "context"
QT_MOC_LITERAL(10, 124, 12), // "writeProject"
QT_MOC_LITERAL(11, 137, 13), // "QDomDocument&"
QT_MOC_LITERAL(12, 151, 13), // "layersRemoved"
QT_MOC_LITERAL(13, 165, 6), // "layers"
QT_MOC_LITERAL(14, 172, 8), // "relation"
QT_MOC_LITERAL(15, 181, 11), // "QgsRelation"
QT_MOC_LITERAL(16, 193, 2) // "id"

    },
    "QgsRelationManager\0relationsLoaded\0\0"
    "changed\0updateRelationsStatus\0readProject\0"
    "QDomDocument\0doc\0QgsReadWriteContext&\0"
    "context\0writeProject\0QDomDocument&\0"
    "layersRemoved\0layers\0relation\0QgsRelation\0"
    "id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRelationManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x0a /* Public */,
       5,    2,   52,    2, 0x08 /* Private */,
      10,    1,   57,    2, 0x08 /* Private */,
      12,    1,   60,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   63,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 11,    7,
    QMetaType::Void, QMetaType::QStringList,   13,

 // methods: parameters
    0x80000000 | 15, QMetaType::QString,   16,

       0        // eod
};

void QgsRelationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRelationManager *_t = static_cast<QgsRelationManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->relationsLoaded(); break;
        case 1: _t->changed(); break;
        case 2: _t->updateRelationsStatus(); break;
        case 3: _t->readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1])),(*reinterpret_cast< QgsReadWriteContext(*)>(_a[2]))); break;
        case 4: _t->writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 5: _t->layersRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: { QgsRelation _r = _t->relation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsRelation*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsRelationManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsRelationManager::relationsLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsRelationManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsRelationManager::changed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QgsRelationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsRelationManager.data,
      qt_meta_data_QgsRelationManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRelationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRelationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRelationManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsRelationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsRelationManager::relationsLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsRelationManager::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
