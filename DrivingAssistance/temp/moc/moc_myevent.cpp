/****************************************************************************
** Meta object code from reading C++ file 'myevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyEvent_t {
    QByteArrayData data[17];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyEvent_t qt_meta_stringdata_MyEvent = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyEvent"
QT_MOC_LITERAL(1, 8, 13), // "SIG_userLogin"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "acc"
QT_MOC_LITERAL(4, 27, 3), // "pwd"
QT_MOC_LITERAL(5, 31, 11), // "SIG_userReg"
QT_MOC_LITERAL(6, 43, 8), // "nickName"
QT_MOC_LITERAL(7, 52, 8), // "checkPwd"
QT_MOC_LITERAL(8, 61, 16), // "SIG_loginSucceed"
QT_MOC_LITERAL(9, 78, 13), // "SIG_dealRegRs"
QT_MOC_LITERAL(10, 92, 6), // "status"
QT_MOC_LITERAL(11, 99, 15), // "SIG_dealLoginRs"
QT_MOC_LITERAL(12, 115, 13), // "SIG_showLogin"
QT_MOC_LITERAL(13, 129, 11), // "SIG_showReg"
QT_MOC_LITERAL(14, 141, 22), // "SIG_setMainMenuVisible"
QT_MOC_LITERAL(15, 164, 7), // "visible"
QT_MOC_LITERAL(16, 172, 28) // "SIG_rebellionMainMenuVisible"

    },
    "MyEvent\0SIG_userLogin\0\0acc\0pwd\0"
    "SIG_userReg\0nickName\0checkPwd\0"
    "SIG_loginSucceed\0SIG_dealRegRs\0status\0"
    "SIG_dealLoginRs\0SIG_showLogin\0SIG_showReg\0"
    "SIG_setMainMenuVisible\0visible\0"
    "SIG_rebellionMainMenuVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    2,   64,    2, 0x06 /* Public */,
       8,    0,   69,    2, 0x06 /* Public */,
       9,    1,   70,    2, 0x06 /* Public */,
      11,    1,   73,    2, 0x06 /* Public */,
      12,    0,   76,    2, 0x06 /* Public */,
      13,    0,   77,    2, 0x06 /* Public */,
      14,    1,   78,    2, 0x06 /* Public */,
      16,    0,   81,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,

       0        // eod
};

void MyEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyEvent *_t = static_cast<MyEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SIG_userLogin((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->SIG_userReg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->SIG_loginSucceed(); break;
        case 3: _t->SIG_dealRegRs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SIG_dealLoginRs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->SIG_showLogin(); break;
        case 6: _t->SIG_showReg(); break;
        case 7: _t->SIG_setMainMenuVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->SIG_rebellionMainMenuVisible(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MyEvent::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyEvent::SIG_userLogin)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyEvent::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyEvent::SIG_userReg)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyEvent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyEvent::SIG_loginSucceed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MyEvent::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyEvent::SIG_dealRegRs)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MyEvent::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyEvent::SIG_dealLoginRs)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MyEvent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyEvent::SIG_showLogin)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MyEvent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyEvent::SIG_showReg)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MyEvent::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyEvent::SIG_setMainMenuVisible)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MyEvent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyEvent::SIG_rebellionMainMenuVisible)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject MyEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyEvent.data,
      qt_meta_data_MyEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MyEvent::SIG_userLogin(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyEvent::SIG_userReg(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyEvent::SIG_loginSucceed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MyEvent::SIG_dealRegRs(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyEvent::SIG_dealLoginRs(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyEvent::SIG_showLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MyEvent::SIG_showReg()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MyEvent::SIG_setMainMenuVisible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MyEvent::SIG_rebellionMainMenuVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
