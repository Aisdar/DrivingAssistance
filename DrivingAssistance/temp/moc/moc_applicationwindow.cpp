/****************************************************************************
** Meta object code from reading C++ file 'applicationwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../applicationwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applicationwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApplicationWindow_t {
    QByteArrayData data[21];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApplicationWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApplicationWindow_t qt_meta_stringdata_ApplicationWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ApplicationWindow"
QT_MOC_LITERAL(1, 18, 7), // "ShowReg"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "ShowLogin"
QT_MOC_LITERAL(4, 37, 14), // "ButtonsClicked"
QT_MOC_LITERAL(5, 52, 16), // "Switch2VideoView"
QT_MOC_LITERAL(6, 69, 2), // "id"
QT_MOC_LITERAL(7, 72, 18), // "SetMainMenuVisible"
QT_MOC_LITERAL(8, 91, 7), // "visible"
QT_MOC_LITERAL(9, 99, 16), // "SLOT_loginCommit"
QT_MOC_LITERAL(10, 116, 3), // "acc"
QT_MOC_LITERAL(11, 120, 3), // "pwd"
QT_MOC_LITERAL(12, 124, 14), // "SLOT_regCommit"
QT_MOC_LITERAL(13, 139, 8), // "nickName"
QT_MOC_LITERAL(14, 148, 14), // "ClientDealData"
QT_MOC_LITERAL(15, 163, 5), // "char*"
QT_MOC_LITERAL(16, 169, 4), // "head"
QT_MOC_LITERAL(17, 174, 3), // "buf"
QT_MOC_LITERAL(18, 178, 3), // "len"
QT_MOC_LITERAL(19, 182, 12), // "DealLoginRes"
QT_MOC_LITERAL(20, 195, 10) // "DealRegRes"

    },
    "ApplicationWindow\0ShowReg\0\0ShowLogin\0"
    "ButtonsClicked\0Switch2VideoView\0id\0"
    "SetMainMenuVisible\0visible\0SLOT_loginCommit\0"
    "acc\0pwd\0SLOT_regCommit\0nickName\0"
    "ClientDealData\0char*\0head\0buf\0len\0"
    "DealLoginRes\0DealRegRes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApplicationWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
       9,    2,   73,    2, 0x08 /* Private */,
      12,    2,   78,    2, 0x08 /* Private */,
      14,    3,   83,    2, 0x08 /* Private */,
      19,    2,   90,    2, 0x08 /* Private */,
      20,    2,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   11,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15, QMetaType::Int,   16,   17,   18,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int,   17,   18,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int,   17,   18,

       0        // eod
};

void ApplicationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApplicationWindow *_t = static_cast<ApplicationWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowReg(); break;
        case 1: _t->ShowLogin(); break;
        case 2: _t->ButtonsClicked(); break;
        case 3: _t->Switch2VideoView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SetMainMenuVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SLOT_loginCommit((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->SLOT_regCommit((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->ClientDealData((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->DealLoginRes((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->DealRegRes((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ApplicationWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ApplicationWindow.data,
      qt_meta_data_ApplicationWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ApplicationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ApplicationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
