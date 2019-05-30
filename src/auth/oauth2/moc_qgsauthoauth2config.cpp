/****************************************************************************
** Meta object code from reading C++ file 'qgsauthoauth2config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsauthoauth2config.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthoauth2config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthOAuth2Config_t {
    QByteArrayData data[85];
    char stringdata0[1075];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthOAuth2Config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthOAuth2Config_t qt_meta_stringdata_QgsAuthOAuth2Config = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsAuthOAuth2Config"
QT_MOC_LITERAL(1, 20, 13), // "configChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "idChanged"
QT_MOC_LITERAL(4, 45, 14), // "versionChanged"
QT_MOC_LITERAL(5, 60, 17), // "configTypeChanged"
QT_MOC_LITERAL(6, 78, 10), // "ConfigType"
QT_MOC_LITERAL(7, 89, 16), // "grantFlowChanged"
QT_MOC_LITERAL(8, 106, 9), // "GrantFlow"
QT_MOC_LITERAL(9, 116, 11), // "nameChanged"
QT_MOC_LITERAL(10, 128, 18), // "descriptionChanged"
QT_MOC_LITERAL(11, 147, 17), // "requestUrlChanged"
QT_MOC_LITERAL(12, 165, 15), // "tokenUrlChanged"
QT_MOC_LITERAL(13, 181, 22), // "refreshTokenUrlChanged"
QT_MOC_LITERAL(14, 204, 18), // "redirectUrlChanged"
QT_MOC_LITERAL(15, 223, 19), // "redirectPortChanged"
QT_MOC_LITERAL(16, 243, 15), // "clientIdChanged"
QT_MOC_LITERAL(17, 259, 19), // "clientSecretChanged"
QT_MOC_LITERAL(18, 279, 15), // "usernameChanged"
QT_MOC_LITERAL(19, 295, 15), // "passwordChanged"
QT_MOC_LITERAL(20, 311, 12), // "scopeChanged"
QT_MOC_LITERAL(21, 324, 13), // "apiKeyChanged"
QT_MOC_LITERAL(22, 338, 19), // "persistTokenChanged"
QT_MOC_LITERAL(23, 358, 19), // "accessMethodChanged"
QT_MOC_LITERAL(24, 378, 12), // "AccessMethod"
QT_MOC_LITERAL(25, 391, 21), // "requestTimeoutChanged"
QT_MOC_LITERAL(26, 413, 17), // "queryPairsChanged"
QT_MOC_LITERAL(27, 431, 15), // "validityChanged"
QT_MOC_LITERAL(28, 447, 5), // "setId"
QT_MOC_LITERAL(29, 453, 5), // "value"
QT_MOC_LITERAL(30, 459, 10), // "setVersion"
QT_MOC_LITERAL(31, 470, 13), // "setConfigType"
QT_MOC_LITERAL(32, 484, 12), // "setGrantFlow"
QT_MOC_LITERAL(33, 497, 7), // "setName"
QT_MOC_LITERAL(34, 505, 14), // "setDescription"
QT_MOC_LITERAL(35, 520, 13), // "setRequestUrl"
QT_MOC_LITERAL(36, 534, 11), // "setTokenUrl"
QT_MOC_LITERAL(37, 546, 18), // "setRefreshTokenUrl"
QT_MOC_LITERAL(38, 565, 14), // "setRedirectUrl"
QT_MOC_LITERAL(39, 580, 15), // "setRedirectPort"
QT_MOC_LITERAL(40, 596, 11), // "setClientId"
QT_MOC_LITERAL(41, 608, 15), // "setClientSecret"
QT_MOC_LITERAL(42, 624, 11), // "setUsername"
QT_MOC_LITERAL(43, 636, 11), // "setPassword"
QT_MOC_LITERAL(44, 648, 8), // "setScope"
QT_MOC_LITERAL(45, 657, 9), // "setApiKey"
QT_MOC_LITERAL(46, 667, 15), // "setPersistToken"
QT_MOC_LITERAL(47, 683, 7), // "persist"
QT_MOC_LITERAL(48, 691, 15), // "setAccessMethod"
QT_MOC_LITERAL(49, 707, 17), // "setRequestTimeout"
QT_MOC_LITERAL(50, 725, 13), // "setQueryPairs"
QT_MOC_LITERAL(51, 739, 5), // "pairs"
QT_MOC_LITERAL(52, 745, 13), // "setToDefaults"
QT_MOC_LITERAL(53, 759, 14), // "validateConfig"
QT_MOC_LITERAL(54, 774, 2), // "id"
QT_MOC_LITERAL(55, 777, 7), // "version"
QT_MOC_LITERAL(56, 785, 10), // "configType"
QT_MOC_LITERAL(57, 796, 9), // "grantFlow"
QT_MOC_LITERAL(58, 806, 4), // "name"
QT_MOC_LITERAL(59, 811, 11), // "description"
QT_MOC_LITERAL(60, 823, 10), // "requestUrl"
QT_MOC_LITERAL(61, 834, 8), // "tokenUrl"
QT_MOC_LITERAL(62, 843, 15), // "refreshTokenUrl"
QT_MOC_LITERAL(63, 859, 11), // "redirectUrl"
QT_MOC_LITERAL(64, 871, 12), // "redirectPort"
QT_MOC_LITERAL(65, 884, 8), // "clientId"
QT_MOC_LITERAL(66, 893, 12), // "clientSecret"
QT_MOC_LITERAL(67, 906, 8), // "username"
QT_MOC_LITERAL(68, 915, 8), // "password"
QT_MOC_LITERAL(69, 924, 5), // "scope"
QT_MOC_LITERAL(70, 930, 6), // "apiKey"
QT_MOC_LITERAL(71, 937, 12), // "persistToken"
QT_MOC_LITERAL(72, 950, 12), // "accessMethod"
QT_MOC_LITERAL(73, 963, 14), // "requestTimeout"
QT_MOC_LITERAL(74, 978, 10), // "queryPairs"
QT_MOC_LITERAL(75, 989, 10), // "Predefined"
QT_MOC_LITERAL(76, 1000, 6), // "Custom"
QT_MOC_LITERAL(77, 1007, 8), // "AuthCode"
QT_MOC_LITERAL(78, 1016, 8), // "Implicit"
QT_MOC_LITERAL(79, 1025, 13), // "ResourceOwner"
QT_MOC_LITERAL(80, 1039, 12), // "ConfigFormat"
QT_MOC_LITERAL(81, 1052, 4), // "JSON"
QT_MOC_LITERAL(82, 1057, 6), // "Header"
QT_MOC_LITERAL(83, 1064, 4), // "Form"
QT_MOC_LITERAL(84, 1069, 5) // "Query"

    },
    "QgsAuthOAuth2Config\0configChanged\0\0"
    "idChanged\0versionChanged\0configTypeChanged\0"
    "ConfigType\0grantFlowChanged\0GrantFlow\0"
    "nameChanged\0descriptionChanged\0"
    "requestUrlChanged\0tokenUrlChanged\0"
    "refreshTokenUrlChanged\0redirectUrlChanged\0"
    "redirectPortChanged\0clientIdChanged\0"
    "clientSecretChanged\0usernameChanged\0"
    "passwordChanged\0scopeChanged\0apiKeyChanged\0"
    "persistTokenChanged\0accessMethodChanged\0"
    "AccessMethod\0requestTimeoutChanged\0"
    "queryPairsChanged\0validityChanged\0"
    "setId\0value\0setVersion\0setConfigType\0"
    "setGrantFlow\0setName\0setDescription\0"
    "setRequestUrl\0setTokenUrl\0setRefreshTokenUrl\0"
    "setRedirectUrl\0setRedirectPort\0"
    "setClientId\0setClientSecret\0setUsername\0"
    "setPassword\0setScope\0setApiKey\0"
    "setPersistToken\0persist\0setAccessMethod\0"
    "setRequestTimeout\0setQueryPairs\0pairs\0"
    "setToDefaults\0validateConfig\0id\0version\0"
    "configType\0grantFlow\0name\0description\0"
    "requestUrl\0tokenUrl\0refreshTokenUrl\0"
    "redirectUrl\0redirectPort\0clientId\0"
    "clientSecret\0username\0password\0scope\0"
    "apiKey\0persistToken\0accessMethod\0"
    "requestTimeout\0queryPairs\0Predefined\0"
    "Custom\0AuthCode\0Implicit\0ResourceOwner\0"
    "ConfigFormat\0JSON\0Header\0Form\0Query"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthOAuth2Config[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
      21,  376, // properties
       4,  460, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  244,    2, 0x06 /* Public */,
       3,    1,  245,    2, 0x06 /* Public */,
       4,    1,  248,    2, 0x06 /* Public */,
       5,    1,  251,    2, 0x06 /* Public */,
       7,    1,  254,    2, 0x06 /* Public */,
       9,    1,  257,    2, 0x06 /* Public */,
      10,    1,  260,    2, 0x06 /* Public */,
      11,    1,  263,    2, 0x06 /* Public */,
      12,    1,  266,    2, 0x06 /* Public */,
      13,    1,  269,    2, 0x06 /* Public */,
      14,    1,  272,    2, 0x06 /* Public */,
      15,    1,  275,    2, 0x06 /* Public */,
      16,    1,  278,    2, 0x06 /* Public */,
      17,    1,  281,    2, 0x06 /* Public */,
      18,    1,  284,    2, 0x06 /* Public */,
      19,    1,  287,    2, 0x06 /* Public */,
      20,    1,  290,    2, 0x06 /* Public */,
      21,    1,  293,    2, 0x06 /* Public */,
      22,    1,  296,    2, 0x06 /* Public */,
      23,    1,  299,    2, 0x06 /* Public */,
      25,    1,  302,    2, 0x06 /* Public */,
      26,    1,  305,    2, 0x06 /* Public */,
      27,    1,  308,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    1,  311,    2, 0x0a /* Public */,
      30,    1,  314,    2, 0x0a /* Public */,
      31,    1,  317,    2, 0x0a /* Public */,
      32,    1,  320,    2, 0x0a /* Public */,
      33,    1,  323,    2, 0x0a /* Public */,
      34,    1,  326,    2, 0x0a /* Public */,
      35,    1,  329,    2, 0x0a /* Public */,
      36,    1,  332,    2, 0x0a /* Public */,
      37,    1,  335,    2, 0x0a /* Public */,
      38,    1,  338,    2, 0x0a /* Public */,
      39,    1,  341,    2, 0x0a /* Public */,
      40,    1,  344,    2, 0x0a /* Public */,
      41,    1,  347,    2, 0x0a /* Public */,
      42,    1,  350,    2, 0x0a /* Public */,
      43,    1,  353,    2, 0x0a /* Public */,
      44,    1,  356,    2, 0x0a /* Public */,
      45,    1,  359,    2, 0x0a /* Public */,
      46,    1,  362,    2, 0x0a /* Public */,
      48,    1,  365,    2, 0x0a /* Public */,
      49,    1,  368,    2, 0x0a /* Public */,
      50,    1,  371,    2, 0x0a /* Public */,
      52,    0,  374,    2, 0x0a /* Public */,
      53,    0,  375,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, 0x80000000 | 6,   29,
    QMetaType::Void, 0x80000000 | 8,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, 0x80000000 | 24,   29,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::QVariantMap,   51,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      54, QMetaType::QString, 0x00495103,
      55, QMetaType::Int, 0x00495103,
      56, 0x80000000 | 6, 0x0049510b,
      57, 0x80000000 | 8, 0x0049510b,
      58, QMetaType::QString, 0x00495103,
      59, QMetaType::QString, 0x00495103,
      60, QMetaType::QString, 0x00495103,
      61, QMetaType::QString, 0x00495103,
      62, QMetaType::QString, 0x00495103,
      63, QMetaType::QString, 0x00495103,
      64, QMetaType::Int, 0x00495103,
      65, QMetaType::QString, 0x00495103,
      66, QMetaType::QString, 0x00495103,
      67, QMetaType::QString, 0x00495103,
      68, QMetaType::QString, 0x00495103,
      69, QMetaType::QString, 0x00495103,
      70, QMetaType::QString, 0x00495103,
      71, QMetaType::Bool, 0x00495103,
      72, 0x80000000 | 24, 0x0049510b,
      73, QMetaType::Int, 0x00495103,
      74, QMetaType::QVariantMap, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,

 // enums: name, flags, count, data
       6, 0x0,    2,  476,
       8, 0x0,    3,  480,
      80, 0x0,    1,  486,
      24, 0x0,    3,  488,

 // enum data: key, value
      75, uint(QgsAuthOAuth2Config::Predefined),
      76, uint(QgsAuthOAuth2Config::Custom),
      77, uint(QgsAuthOAuth2Config::AuthCode),
      78, uint(QgsAuthOAuth2Config::Implicit),
      79, uint(QgsAuthOAuth2Config::ResourceOwner),
      81, uint(QgsAuthOAuth2Config::JSON),
      82, uint(QgsAuthOAuth2Config::Header),
      83, uint(QgsAuthOAuth2Config::Form),
      84, uint(QgsAuthOAuth2Config::Query),

       0        // eod
};

void QgsAuthOAuth2Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthOAuth2Config *_t = static_cast<QgsAuthOAuth2Config *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->idChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->versionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->configTypeChanged((*reinterpret_cast< ConfigType(*)>(_a[1]))); break;
        case 4: _t->grantFlowChanged((*reinterpret_cast< GrantFlow(*)>(_a[1]))); break;
        case 5: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->descriptionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->requestUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->tokenUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->refreshTokenUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->redirectUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->redirectPortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->clientIdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->clientSecretChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->usernameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->passwordChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->scopeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->apiKeyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->persistTokenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->accessMethodChanged((*reinterpret_cast< AccessMethod(*)>(_a[1]))); break;
        case 20: _t->requestTimeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->queryPairsChanged((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 22: _t->validityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->setVersion((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->setConfigType((*reinterpret_cast< ConfigType(*)>(_a[1]))); break;
        case 26: _t->setGrantFlow((*reinterpret_cast< GrantFlow(*)>(_a[1]))); break;
        case 27: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->setDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->setRequestUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->setTokenUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->setRefreshTokenUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->setRedirectUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->setRedirectPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->setClientId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->setClientSecret((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->setUsername((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: _t->setPassword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->setScope((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->setApiKey((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->setPersistToken((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->setAccessMethod((*reinterpret_cast< AccessMethod(*)>(_a[1]))); break;
        case 42: _t->setRequestTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->setQueryPairs((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 44: _t->setToDefaults(); break;
        case 45: _t->validateConfig(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QgsAuthOAuth2Config::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::configChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::idChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::versionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(ConfigType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::configTypeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(GrantFlow );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::grantFlowChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::nameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::descriptionChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::requestUrlChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::tokenUrlChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::refreshTokenUrlChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::redirectUrlChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::redirectPortChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::clientIdChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::clientSecretChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::usernameChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::passwordChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::scopeChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::apiKeyChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::persistTokenChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(AccessMethod );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::accessMethodChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::requestTimeoutChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::queryPairsChanged)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (QgsAuthOAuth2Config::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthOAuth2Config::validityChanged)) {
                *result = 22;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsAuthOAuth2Config *_t = static_cast<QgsAuthOAuth2Config *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->version(); break;
        case 2: *reinterpret_cast< ConfigType*>(_v) = _t->configType(); break;
        case 3: *reinterpret_cast< GrantFlow*>(_v) = _t->grantFlow(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->requestUrl(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->tokenUrl(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->refreshTokenUrl(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->redirectUrl(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->redirectPort(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->clientId(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->clientSecret(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->username(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->scope(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->apiKey(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->persistToken(); break;
        case 18: *reinterpret_cast< AccessMethod*>(_v) = _t->accessMethod(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->requestTimeout(); break;
        case 20: *reinterpret_cast< QVariantMap*>(_v) = _t->queryPairs(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsAuthOAuth2Config *_t = static_cast<QgsAuthOAuth2Config *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setVersion(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setConfigType(*reinterpret_cast< ConfigType*>(_v)); break;
        case 3: _t->setGrantFlow(*reinterpret_cast< GrantFlow*>(_v)); break;
        case 4: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setRequestUrl(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setTokenUrl(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setRefreshTokenUrl(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setRedirectUrl(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setRedirectPort(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setClientId(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setClientSecret(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 15: _t->setScope(*reinterpret_cast< QString*>(_v)); break;
        case 16: _t->setApiKey(*reinterpret_cast< QString*>(_v)); break;
        case 17: _t->setPersistToken(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setAccessMethod(*reinterpret_cast< AccessMethod*>(_v)); break;
        case 19: _t->setRequestTimeout(*reinterpret_cast< int*>(_v)); break;
        case 20: _t->setQueryPairs(*reinterpret_cast< QVariantMap*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QgsAuthOAuth2Config::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsAuthOAuth2Config.data,
      qt_meta_data_QgsAuthOAuth2Config,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthOAuth2Config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthOAuth2Config::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthOAuth2Config.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsAuthOAuth2Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsAuthOAuth2Config::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsAuthOAuth2Config::idChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsAuthOAuth2Config::versionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsAuthOAuth2Config::configTypeChanged(ConfigType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsAuthOAuth2Config::grantFlowChanged(GrantFlow _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsAuthOAuth2Config::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsAuthOAuth2Config::descriptionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsAuthOAuth2Config::requestUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsAuthOAuth2Config::tokenUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsAuthOAuth2Config::refreshTokenUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QgsAuthOAuth2Config::redirectUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgsAuthOAuth2Config::redirectPortChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QgsAuthOAuth2Config::clientIdChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QgsAuthOAuth2Config::clientSecretChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QgsAuthOAuth2Config::usernameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QgsAuthOAuth2Config::passwordChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QgsAuthOAuth2Config::scopeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QgsAuthOAuth2Config::apiKeyChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QgsAuthOAuth2Config::persistTokenChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QgsAuthOAuth2Config::accessMethodChanged(AccessMethod _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QgsAuthOAuth2Config::requestTimeoutChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QgsAuthOAuth2Config::queryPairsChanged(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QgsAuthOAuth2Config::validityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
