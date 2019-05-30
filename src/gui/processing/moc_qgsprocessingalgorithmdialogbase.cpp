/****************************************************************************
** Meta object code from reading C++ file 'qgsprocessingalgorithmdialogbase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsprocessingalgorithmdialogbase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprocessingalgorithmdialogbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProcessingAlgorithmDialogFeedback_t {
    QByteArrayData data[18];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingAlgorithmDialogFeedback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingAlgorithmDialogFeedback_t qt_meta_stringdata_QgsProcessingAlgorithmDialogFeedback = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QgsProcessingAlgorithmDialogF..."
QT_MOC_LITERAL(1, 37, 19), // "progressTextChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 4), // "text"
QT_MOC_LITERAL(4, 63, 13), // "errorReported"
QT_MOC_LITERAL(5, 77, 10), // "fatalError"
QT_MOC_LITERAL(6, 88, 10), // "infoPushed"
QT_MOC_LITERAL(7, 99, 17), // "commandInfoPushed"
QT_MOC_LITERAL(8, 117, 15), // "debugInfoPushed"
QT_MOC_LITERAL(9, 133, 17), // "consoleInfoPushed"
QT_MOC_LITERAL(10, 151, 15), // "setProgressText"
QT_MOC_LITERAL(11, 167, 11), // "reportError"
QT_MOC_LITERAL(12, 179, 5), // "error"
QT_MOC_LITERAL(13, 185, 8), // "pushInfo"
QT_MOC_LITERAL(14, 194, 4), // "info"
QT_MOC_LITERAL(15, 199, 15), // "pushCommandInfo"
QT_MOC_LITERAL(16, 215, 13), // "pushDebugInfo"
QT_MOC_LITERAL(17, 229, 15) // "pushConsoleInfo"

    },
    "QgsProcessingAlgorithmDialogFeedback\0"
    "progressTextChanged\0\0text\0errorReported\0"
    "fatalError\0infoPushed\0commandInfoPushed\0"
    "debugInfoPushed\0consoleInfoPushed\0"
    "setProgressText\0reportError\0error\0"
    "pushInfo\0info\0pushCommandInfo\0"
    "pushDebugInfo\0pushConsoleInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingAlgorithmDialogFeedback[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    2,   77,    2, 0x06 /* Public */,
       6,    1,   82,    2, 0x06 /* Public */,
       7,    1,   85,    2, 0x06 /* Public */,
       8,    1,   88,    2, 0x06 /* Public */,
       9,    1,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   94,    2, 0x0a /* Public */,
      11,    2,   97,    2, 0x0a /* Public */,
      13,    1,  102,    2, 0x0a /* Public */,
      15,    1,  105,    2, 0x0a /* Public */,
      16,    1,  108,    2, 0x0a /* Public */,
      17,    1,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   12,    5,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void QgsProcessingAlgorithmDialogFeedback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingAlgorithmDialogFeedback *_t = static_cast<QgsProcessingAlgorithmDialogFeedback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->errorReported((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->infoPushed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->commandInfoPushed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->debugInfoPushed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->consoleInfoPushed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setProgressText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->reportError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->pushInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->pushCommandInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->pushDebugInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->pushConsoleInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsProcessingAlgorithmDialogFeedback::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingAlgorithmDialogFeedback::progressTextChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsProcessingAlgorithmDialogFeedback::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingAlgorithmDialogFeedback::errorReported)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsProcessingAlgorithmDialogFeedback::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingAlgorithmDialogFeedback::infoPushed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsProcessingAlgorithmDialogFeedback::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingAlgorithmDialogFeedback::commandInfoPushed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsProcessingAlgorithmDialogFeedback::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingAlgorithmDialogFeedback::debugInfoPushed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsProcessingAlgorithmDialogFeedback::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingAlgorithmDialogFeedback::consoleInfoPushed)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QgsProcessingAlgorithmDialogFeedback::staticMetaObject = {
    { &QgsProcessingFeedback::staticMetaObject, qt_meta_stringdata_QgsProcessingAlgorithmDialogFeedback.data,
      qt_meta_data_QgsProcessingAlgorithmDialogFeedback,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingAlgorithmDialogFeedback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingAlgorithmDialogFeedback::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingAlgorithmDialogFeedback.stringdata0))
        return static_cast<void*>(this);
    return QgsProcessingFeedback::qt_metacast(_clname);
}

int QgsProcessingAlgorithmDialogFeedback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsProcessingFeedback::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsProcessingAlgorithmDialogFeedback::progressTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsProcessingAlgorithmDialogFeedback::errorReported(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsProcessingAlgorithmDialogFeedback::infoPushed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsProcessingAlgorithmDialogFeedback::commandInfoPushed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsProcessingAlgorithmDialogFeedback::debugInfoPushed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsProcessingAlgorithmDialogFeedback::consoleInfoPushed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_QgsProcessingAlgorithmDialogBase_t {
    QByteArrayData data[41];
    char stringdata0[470];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingAlgorithmDialogBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingAlgorithmDialogBase_t qt_meta_stringdata_QgsProcessingAlgorithmDialogBase = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsProcessingAlgorithmDialogBase"
QT_MOC_LITERAL(1, 33, 11), // "reportError"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "error"
QT_MOC_LITERAL(4, 52, 10), // "fatalError"
QT_MOC_LITERAL(5, 63, 8), // "pushInfo"
QT_MOC_LITERAL(6, 72, 4), // "info"
QT_MOC_LITERAL(7, 77, 13), // "pushDebugInfo"
QT_MOC_LITERAL(8, 91, 7), // "message"
QT_MOC_LITERAL(9, 99, 15), // "pushCommandInfo"
QT_MOC_LITERAL(10, 115, 13), // "setPercentage"
QT_MOC_LITERAL(11, 129, 7), // "percent"
QT_MOC_LITERAL(12, 137, 15), // "setProgressText"
QT_MOC_LITERAL(13, 153, 4), // "text"
QT_MOC_LITERAL(14, 158, 15), // "pushConsoleInfo"
QT_MOC_LITERAL(15, 174, 20), // "createProgressDialog"
QT_MOC_LITERAL(16, 195, 8), // "QDialog*"
QT_MOC_LITERAL(17, 204, 8), // "clearLog"
QT_MOC_LITERAL(18, 213, 7), // "saveLog"
QT_MOC_LITERAL(19, 221, 18), // "copyLogToClipboard"
QT_MOC_LITERAL(20, 240, 8), // "finished"
QT_MOC_LITERAL(21, 249, 10), // "successful"
QT_MOC_LITERAL(22, 260, 6), // "result"
QT_MOC_LITERAL(23, 267, 21), // "QgsProcessingContext&"
QT_MOC_LITERAL(24, 289, 7), // "context"
QT_MOC_LITERAL(25, 297, 22), // "QgsProcessingFeedback*"
QT_MOC_LITERAL(26, 320, 8), // "feedback"
QT_MOC_LITERAL(27, 329, 12), // "runAlgorithm"
QT_MOC_LITERAL(28, 342, 8), // "openHelp"
QT_MOC_LITERAL(29, 351, 15), // "toggleCollapsed"
QT_MOC_LITERAL(30, 367, 15), // "splitterChanged"
QT_MOC_LITERAL(31, 383, 3), // "pos"
QT_MOC_LITERAL(32, 387, 5), // "index"
QT_MOC_LITERAL(33, 393, 11), // "linkClicked"
QT_MOC_LITERAL(34, 405, 3), // "url"
QT_MOC_LITERAL(35, 409, 11), // "algExecuted"
QT_MOC_LITERAL(36, 421, 7), // "results"
QT_MOC_LITERAL(37, 429, 13), // "taskTriggered"
QT_MOC_LITERAL(38, 443, 8), // "QgsTask*"
QT_MOC_LITERAL(39, 452, 4), // "task"
QT_MOC_LITERAL(40, 457, 12) // "closeClicked"

    },
    "QgsProcessingAlgorithmDialogBase\0"
    "reportError\0\0error\0fatalError\0pushInfo\0"
    "info\0pushDebugInfo\0message\0pushCommandInfo\0"
    "setPercentage\0percent\0setProgressText\0"
    "text\0pushConsoleInfo\0createProgressDialog\0"
    "QDialog*\0clearLog\0saveLog\0copyLogToClipboard\0"
    "finished\0successful\0result\0"
    "QgsProcessingContext&\0context\0"
    "QgsProcessingFeedback*\0feedback\0"
    "runAlgorithm\0openHelp\0toggleCollapsed\0"
    "splitterChanged\0pos\0index\0linkClicked\0"
    "url\0algExecuted\0results\0taskTriggered\0"
    "QgsTask*\0task\0closeClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingAlgorithmDialogBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  114,    2, 0x0a /* Public */,
       5,    1,  119,    2, 0x0a /* Public */,
       7,    1,  122,    2, 0x0a /* Public */,
       9,    1,  125,    2, 0x0a /* Public */,
      10,    1,  128,    2, 0x0a /* Public */,
      12,    1,  131,    2, 0x0a /* Public */,
      14,    1,  134,    2, 0x0a /* Public */,
      15,    0,  137,    2, 0x0a /* Public */,
      17,    0,  138,    2, 0x0a /* Public */,
      18,    0,  139,    2, 0x0a /* Public */,
      19,    0,  140,    2, 0x0a /* Public */,
      20,    4,  141,    2, 0x09 /* Protected */,
      27,    0,  150,    2, 0x09 /* Protected */,
      28,    0,  151,    2, 0x08 /* Private */,
      29,    0,  152,    2, 0x08 /* Private */,
      30,    2,  153,    2, 0x08 /* Private */,
      33,    1,  158,    2, 0x08 /* Private */,
      35,    2,  161,    2, 0x08 /* Private */,
      37,    1,  166,    2, 0x08 /* Private */,
      40,    0,  169,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,    6,
    0x80000000 | 16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariantMap, 0x80000000 | 23, 0x80000000 | 25,   21,   22,   24,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::QUrl,   34,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariantMap,   21,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void,

       0        // eod
};

void QgsProcessingAlgorithmDialogBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingAlgorithmDialogBase *_t = static_cast<QgsProcessingAlgorithmDialogBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reportError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->pushInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->pushDebugInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->pushCommandInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setPercentage((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setProgressText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->pushConsoleInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { QDialog* _r = _t->createProgressDialog();
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->clearLog(); break;
        case 9: _t->saveLog(); break;
        case 10: _t->copyLogToClipboard(); break;
        case 11: _t->finished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< QgsProcessingContext(*)>(_a[3])),(*reinterpret_cast< QgsProcessingFeedback*(*)>(_a[4]))); break;
        case 12: _t->runAlgorithm(); break;
        case 13: _t->openHelp(); break;
        case 14: _t->toggleCollapsed(); break;
        case 15: _t->splitterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 17: _t->algExecuted((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 18: _t->taskTriggered((*reinterpret_cast< QgsTask*(*)>(_a[1]))); break;
        case 19: _t->closeClicked(); break;
        default: ;
        }
    }
}

const QMetaObject QgsProcessingAlgorithmDialogBase::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsProcessingAlgorithmDialogBase.data,
      qt_meta_data_QgsProcessingAlgorithmDialogBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingAlgorithmDialogBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingAlgorithmDialogBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingAlgorithmDialogBase.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsProcessingAlgorithmDialogBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
struct qt_meta_stringdata_QgsProcessingAlgorithmProgressDialog_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingAlgorithmProgressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingAlgorithmProgressDialog_t qt_meta_stringdata_QgsProcessingAlgorithmProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QgsProcessingAlgorithmProgres..."
QT_MOC_LITERAL(1, 37, 6), // "reject"
QT_MOC_LITERAL(2, 44, 0) // ""

    },
    "QgsProcessingAlgorithmProgressDialog\0"
    "reject\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingAlgorithmProgressDialog[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsProcessingAlgorithmProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingAlgorithmProgressDialog *_t = static_cast<QgsProcessingAlgorithmProgressDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reject(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsProcessingAlgorithmProgressDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsProcessingAlgorithmProgressDialog.data,
      qt_meta_data_QgsProcessingAlgorithmProgressDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingAlgorithmProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingAlgorithmProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingAlgorithmProgressDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsProcessingAlgorithmProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
