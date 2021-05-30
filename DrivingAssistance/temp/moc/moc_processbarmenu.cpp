/****************************************************************************
** Meta object code from reading C++ file 'processbarmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../processbarmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processbarmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProcessBarMenu_t {
    QByteArrayData data[8];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessBarMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessBarMenu_t qt_meta_stringdata_ProcessBarMenu = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProcessBarMenu"
QT_MOC_LITERAL(1, 15, 5), // "start"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "pause"
QT_MOC_LITERAL(4, 28, 4), // "next"
QT_MOC_LITERAL(5, 33, 4), // "last"
QT_MOC_LITERAL(6, 38, 4), // "stop"
QT_MOC_LITERAL(7, 43, 13) // "ButtonClicked"

    },
    "ProcessBarMenu\0start\0\0pause\0next\0last\0"
    "stop\0ButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessBarMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ProcessBarMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProcessBarMenu *_t = static_cast<ProcessBarMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->pause(); break;
        case 2: _t->next(); break;
        case 3: _t->last(); break;
        case 4: _t->stop(); break;
        case 5: _t->ButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ProcessBarMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessBarMenu::start)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProcessBarMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessBarMenu::pause)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProcessBarMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessBarMenu::next)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ProcessBarMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessBarMenu::last)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ProcessBarMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessBarMenu::stop)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ProcessBarMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ProcessBarMenu.data,
      qt_meta_data_ProcessBarMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ProcessBarMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessBarMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessBarMenu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProcessBarMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ProcessBarMenu::start()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProcessBarMenu::pause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ProcessBarMenu::next()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ProcessBarMenu::last()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ProcessBarMenu::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
