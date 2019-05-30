/****************************************************************************
** Meta object code from reading C++ file 'qgsowssourceselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgsowssourceselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsowssourceselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsOWSSourceSelect_t {
    QByteArrayData data[28];
    char stringdata0[523];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsOWSSourceSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsOWSSourceSelect_t qt_meta_stringdata_QgsOWSSourceSelect = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsOWSSourceSelect"
QT_MOC_LITERAL(1, 19, 7), // "refresh"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "showError"
QT_MOC_LITERAL(4, 38, 5), // "title"
QT_MOC_LITERAL(5, 44, 6), // "format"
QT_MOC_LITERAL(6, 51, 5), // "error"
QT_MOC_LITERAL(7, 57, 17), // "showStatusMessage"
QT_MOC_LITERAL(8, 75, 7), // "message"
QT_MOC_LITERAL(9, 83, 18), // "mNewButton_clicked"
QT_MOC_LITERAL(10, 102, 19), // "mEditButton_clicked"
QT_MOC_LITERAL(11, 122, 21), // "mDeleteButton_clicked"
QT_MOC_LITERAL(12, 144, 19), // "mSaveButton_clicked"
QT_MOC_LITERAL(13, 164, 19), // "mLoadButton_clicked"
QT_MOC_LITERAL(14, 184, 22), // "mConnectButton_clicked"
QT_MOC_LITERAL(15, 207, 14), // "searchFinished"
QT_MOC_LITERAL(16, 222, 24), // "mChangeCRSButton_clicked"
QT_MOC_LITERAL(17, 247, 38), // "mLayersTreeWidget_itemSelecti..."
QT_MOC_LITERAL(18, 286, 30), // "mConnectionsComboBox_activated"
QT_MOC_LITERAL(19, 317, 25), // "mAddDefaultButton_clicked"
QT_MOC_LITERAL(20, 343, 21), // "mSearchButton_clicked"
QT_MOC_LITERAL(21, 365, 39), // "mSearchTableWidget_itemSelect..."
QT_MOC_LITERAL(22, 405, 32), // "mTilesetsTableWidget_itemClicked"
QT_MOC_LITERAL(23, 438, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(24, 456, 4), // "item"
QT_MOC_LITERAL(25, 461, 22), // "mLayerUpButton_clicked"
QT_MOC_LITERAL(26, 484, 24), // "mLayerDownButton_clicked"
QT_MOC_LITERAL(27, 509, 13) // "updateButtons"

    },
    "QgsOWSSourceSelect\0refresh\0\0showError\0"
    "title\0format\0error\0showStatusMessage\0"
    "message\0mNewButton_clicked\0"
    "mEditButton_clicked\0mDeleteButton_clicked\0"
    "mSaveButton_clicked\0mLoadButton_clicked\0"
    "mConnectButton_clicked\0searchFinished\0"
    "mChangeCRSButton_clicked\0"
    "mLayersTreeWidget_itemSelectionChanged\0"
    "mConnectionsComboBox_activated\0"
    "mAddDefaultButton_clicked\0"
    "mSearchButton_clicked\0"
    "mSearchTableWidget_itemSelectionChanged\0"
    "mTilesetsTableWidget_itemClicked\0"
    "QTableWidgetItem*\0item\0mLayerUpButton_clicked\0"
    "mLayerDownButton_clicked\0updateButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsOWSSourceSelect[] = {

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
       1,    0,  114,    2, 0x0a /* Public */,
       3,    3,  115,    2, 0x09 /* Protected */,
       7,    1,  122,    2, 0x09 /* Protected */,
       9,    0,  125,    2, 0x08 /* Private */,
      10,    0,  126,    2, 0x08 /* Private */,
      11,    0,  127,    2, 0x08 /* Private */,
      12,    0,  128,    2, 0x08 /* Private */,
      13,    0,  129,    2, 0x08 /* Private */,
      14,    0,  130,    2, 0x08 /* Private */,
      15,    0,  131,    2, 0x08 /* Private */,
      16,    0,  132,    2, 0x08 /* Private */,
      17,    0,  133,    2, 0x08 /* Private */,
      18,    1,  134,    2, 0x08 /* Private */,
      19,    0,  137,    2, 0x08 /* Private */,
      20,    0,  138,    2, 0x08 /* Private */,
      21,    0,  139,    2, 0x08 /* Private */,
      22,    1,  140,    2, 0x08 /* Private */,
      25,    0,  143,    2, 0x08 /* Private */,
      26,    0,  144,    2, 0x08 /* Private */,
      27,    0,  145,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsOWSSourceSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsOWSSourceSelect *_t = static_cast<QgsOWSSourceSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->showError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mNewButton_clicked(); break;
        case 4: _t->mEditButton_clicked(); break;
        case 5: _t->mDeleteButton_clicked(); break;
        case 6: _t->mSaveButton_clicked(); break;
        case 7: _t->mLoadButton_clicked(); break;
        case 8: _t->mConnectButton_clicked(); break;
        case 9: _t->searchFinished(); break;
        case 10: _t->mChangeCRSButton_clicked(); break;
        case 11: _t->mLayersTreeWidget_itemSelectionChanged(); break;
        case 12: _t->mConnectionsComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->mAddDefaultButton_clicked(); break;
        case 14: _t->mSearchButton_clicked(); break;
        case 15: _t->mSearchTableWidget_itemSelectionChanged(); break;
        case 16: _t->mTilesetsTableWidget_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 17: _t->mLayerUpButton_clicked(); break;
        case 18: _t->mLayerDownButton_clicked(); break;
        case 19: _t->updateButtons(); break;
        default: ;
        }
    }
}

const QMetaObject QgsOWSSourceSelect::staticMetaObject = {
    { &QgsAbstractDataSourceWidget::staticMetaObject, qt_meta_stringdata_QgsOWSSourceSelect.data,
      qt_meta_data_QgsOWSSourceSelect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsOWSSourceSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsOWSSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsOWSSourceSelect.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::QgsOWSSourceSelectBase"))
        return static_cast< Ui::QgsOWSSourceSelectBase*>(this);
    return QgsAbstractDataSourceWidget::qt_metacast(_clname);
}

int QgsOWSSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractDataSourceWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
