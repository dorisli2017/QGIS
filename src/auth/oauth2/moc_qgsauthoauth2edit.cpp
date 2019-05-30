/****************************************************************************
** Meta object code from reading C++ file 'qgsauthoauth2edit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsauthoauth2edit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthoauth2edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthOAuth2Edit_t {
    QByteArrayData data[51];
    char stringdata0[854];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthOAuth2Edit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthOAuth2Edit_t qt_meta_stringdata_QgsAuthOAuth2Edit = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsAuthOAuth2Edit"
QT_MOC_LITERAL(1, 18, 10), // "loadConfig"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "QgsStringMap"
QT_MOC_LITERAL(4, 43, 9), // "configmap"
QT_MOC_LITERAL(5, 53, 11), // "resetConfig"
QT_MOC_LITERAL(6, 65, 11), // "clearConfig"
QT_MOC_LITERAL(7, 77, 16), // "setupConnections"
QT_MOC_LITERAL(8, 94, 21), // "configValidityChanged"
QT_MOC_LITERAL(9, 116, 20), // "removeTokenCacheFile"
QT_MOC_LITERAL(10, 137, 18), // "populateGrantFlows"
QT_MOC_LITERAL(11, 156, 15), // "updateGrantFlow"
QT_MOC_LITERAL(12, 172, 4), // "indx"
QT_MOC_LITERAL(13, 177, 17), // "exportOAuthConfig"
QT_MOC_LITERAL(14, 195, 17), // "importOAuthConfig"
QT_MOC_LITERAL(15, 213, 18), // "descriptionChanged"
QT_MOC_LITERAL(16, 232, 21), // "populateAccessMethods"
QT_MOC_LITERAL(17, 254, 24), // "updateConfigAccessMethod"
QT_MOC_LITERAL(18, 279, 12), // "addQueryPair"
QT_MOC_LITERAL(19, 292, 15), // "removeQueryPair"
QT_MOC_LITERAL(20, 308, 15), // "clearQueryPairs"
QT_MOC_LITERAL(21, 324, 18), // "populateQueryPairs"
QT_MOC_LITERAL(22, 343, 10), // "querypairs"
QT_MOC_LITERAL(23, 354, 6), // "append"
QT_MOC_LITERAL(24, 361, 26), // "queryTableSelectionChanged"
QT_MOC_LITERAL(25, 388, 22), // "updateConfigQueryPairs"
QT_MOC_LITERAL(26, 411, 25), // "updateDefinedConfigsCache"
QT_MOC_LITERAL(27, 437, 18), // "loadDefinedConfigs"
QT_MOC_LITERAL(28, 456, 23), // "setCurrentDefinedConfig"
QT_MOC_LITERAL(29, 480, 2), // "id"
QT_MOC_LITERAL(30, 483, 25), // "currentDefinedItemChanged"
QT_MOC_LITERAL(31, 509, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(32, 526, 3), // "cur"
QT_MOC_LITERAL(33, 530, 4), // "prev"
QT_MOC_LITERAL(34, 535, 26), // "selectCurrentDefinedConfig"
QT_MOC_LITERAL(35, 562, 19), // "getSoftStatementDir"
QT_MOC_LITERAL(36, 582, 20), // "updateTokenCacheFile"
QT_MOC_LITERAL(37, 603, 10), // "curpersist"
QT_MOC_LITERAL(38, 614, 15), // "tabIndexChanged"
QT_MOC_LITERAL(39, 630, 23), // "definedCustomDirChanged"
QT_MOC_LITERAL(40, 654, 4), // "path"
QT_MOC_LITERAL(41, 659, 19), // "getDefinedCustomDir"
QT_MOC_LITERAL(42, 679, 19), // "loadFromOAuthConfig"
QT_MOC_LITERAL(43, 699, 26), // "const QgsAuthOAuth2Config*"
QT_MOC_LITERAL(44, 726, 6), // "config"
QT_MOC_LITERAL(45, 733, 31), // "softwareStatementJwtPathChanged"
QT_MOC_LITERAL(46, 765, 19), // "configReplyFinished"
QT_MOC_LITERAL(47, 785, 21), // "registerReplyFinished"
QT_MOC_LITERAL(48, 807, 12), // "networkError"
QT_MOC_LITERAL(49, 820, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(50, 848, 5) // "error"

    },
    "QgsAuthOAuth2Edit\0loadConfig\0\0"
    "QgsStringMap\0configmap\0resetConfig\0"
    "clearConfig\0setupConnections\0"
    "configValidityChanged\0removeTokenCacheFile\0"
    "populateGrantFlows\0updateGrantFlow\0"
    "indx\0exportOAuthConfig\0importOAuthConfig\0"
    "descriptionChanged\0populateAccessMethods\0"
    "updateConfigAccessMethod\0addQueryPair\0"
    "removeQueryPair\0clearQueryPairs\0"
    "populateQueryPairs\0querypairs\0append\0"
    "queryTableSelectionChanged\0"
    "updateConfigQueryPairs\0updateDefinedConfigsCache\0"
    "loadDefinedConfigs\0setCurrentDefinedConfig\0"
    "id\0currentDefinedItemChanged\0"
    "QListWidgetItem*\0cur\0prev\0"
    "selectCurrentDefinedConfig\0"
    "getSoftStatementDir\0updateTokenCacheFile\0"
    "curpersist\0tabIndexChanged\0"
    "definedCustomDirChanged\0path\0"
    "getDefinedCustomDir\0loadFromOAuthConfig\0"
    "const QgsAuthOAuth2Config*\0config\0"
    "softwareStatementJwtPathChanged\0"
    "configReplyFinished\0registerReplyFinished\0"
    "networkError\0QNetworkReply::NetworkError\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthOAuth2Edit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  189,    2, 0x0a /* Public */,
       5,    0,  192,    2, 0x0a /* Public */,
       6,    0,  193,    2, 0x0a /* Public */,
       7,    0,  194,    2, 0x08 /* Private */,
       8,    0,  195,    2, 0x08 /* Private */,
       9,    0,  196,    2, 0x08 /* Private */,
      10,    0,  197,    2, 0x08 /* Private */,
      11,    1,  198,    2, 0x08 /* Private */,
      13,    0,  201,    2, 0x08 /* Private */,
      14,    0,  202,    2, 0x08 /* Private */,
      15,    0,  203,    2, 0x08 /* Private */,
      16,    0,  204,    2, 0x08 /* Private */,
      17,    1,  205,    2, 0x08 /* Private */,
      18,    0,  208,    2, 0x08 /* Private */,
      19,    0,  209,    2, 0x08 /* Private */,
      20,    0,  210,    2, 0x08 /* Private */,
      21,    2,  211,    2, 0x08 /* Private */,
      21,    1,  216,    2, 0x28 /* Private | MethodCloned */,
      24,    0,  219,    2, 0x08 /* Private */,
      25,    0,  220,    2, 0x08 /* Private */,
      26,    0,  221,    2, 0x08 /* Private */,
      27,    0,  222,    2, 0x08 /* Private */,
      28,    1,  223,    2, 0x08 /* Private */,
      30,    2,  226,    2, 0x08 /* Private */,
      34,    0,  231,    2, 0x08 /* Private */,
      35,    0,  232,    2, 0x08 /* Private */,
      36,    1,  233,    2, 0x08 /* Private */,
      38,    1,  236,    2, 0x08 /* Private */,
      39,    1,  239,    2, 0x08 /* Private */,
      41,    0,  242,    2, 0x08 /* Private */,
      42,    1,  243,    2, 0x08 /* Private */,
      45,    1,  246,    2, 0x08 /* Private */,
      46,    0,  249,    2, 0x08 /* Private */,
      47,    0,  250,    2, 0x08 /* Private */,
      48,    1,  251,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::Bool,   22,   23,
    QMetaType::Void, QMetaType::QVariantMap,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 31,   32,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 49,   50,

       0        // eod
};

void QgsAuthOAuth2Edit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthOAuth2Edit *_t = static_cast<QgsAuthOAuth2Edit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadConfig((*reinterpret_cast< const QgsStringMap(*)>(_a[1]))); break;
        case 1: _t->resetConfig(); break;
        case 2: _t->clearConfig(); break;
        case 3: _t->setupConnections(); break;
        case 4: _t->configValidityChanged(); break;
        case 5: _t->removeTokenCacheFile(); break;
        case 6: _t->populateGrantFlows(); break;
        case 7: _t->updateGrantFlow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->exportOAuthConfig(); break;
        case 9: _t->importOAuthConfig(); break;
        case 10: _t->descriptionChanged(); break;
        case 11: _t->populateAccessMethods(); break;
        case 12: _t->updateConfigAccessMethod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->addQueryPair(); break;
        case 14: _t->removeQueryPair(); break;
        case 15: _t->clearQueryPairs(); break;
        case 16: _t->populateQueryPairs((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->populateQueryPairs((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 18: _t->queryTableSelectionChanged(); break;
        case 19: _t->updateConfigQueryPairs(); break;
        case 20: _t->updateDefinedConfigsCache(); break;
        case 21: _t->loadDefinedConfigs(); break;
        case 22: _t->setCurrentDefinedConfig((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->currentDefinedItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 24: _t->selectCurrentDefinedConfig(); break;
        case 25: _t->getSoftStatementDir(); break;
        case 26: _t->updateTokenCacheFile((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->tabIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->definedCustomDirChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->getDefinedCustomDir(); break;
        case 30: _t->loadFromOAuthConfig((*reinterpret_cast< const QgsAuthOAuth2Config*(*)>(_a[1]))); break;
        case 31: _t->softwareStatementJwtPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->configReplyFinished(); break;
        case 33: _t->registerReplyFinished(); break;
        case 34: _t->networkError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsAuthOAuth2Edit::staticMetaObject = {
    { &QgsAuthMethodEdit::staticMetaObject, qt_meta_stringdata_QgsAuthOAuth2Edit.data,
      qt_meta_data_QgsAuthOAuth2Edit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthOAuth2Edit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthOAuth2Edit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthOAuth2Edit.stringdata0))
        return static_cast<void*>(this);
    return QgsAuthMethodEdit::qt_metacast(_clname);
}

int QgsAuthOAuth2Edit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAuthMethodEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
