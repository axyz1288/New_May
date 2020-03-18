/****************************************************************************
** Meta object code from reading C++ file 'Form_Body.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/include/Form_Body.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Form_Body.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Form_Body_t {
    QByteArrayData data[7];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Form_Body_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Form_Body_t qt_meta_stringdata_Form_Body = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Form_Body"
QT_MOC_LITERAL(1, 10, 28), // "on_LeftHand_btn_Stop_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 29), // "on_RightHand_btn_Stop_clicked"
QT_MOC_LITERAL(4, 70, 24), // "on_Move_btn_Stop_clicked"
QT_MOC_LITERAL(5, 95, 18), // "XBoxJoystick_state"
QT_MOC_LITERAL(6, 114, 5) // "state"

    },
    "Form_Body\0on_LeftHand_btn_Stop_clicked\0"
    "\0on_RightHand_btn_Stop_clicked\0"
    "on_Move_btn_Stop_clicked\0XBoxJoystick_state\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form_Body[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void Form_Body::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Form_Body *_t = static_cast<Form_Body *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_LeftHand_btn_Stop_clicked(); break;
        case 1: _t->on_RightHand_btn_Stop_clicked(); break;
        case 2: _t->on_Move_btn_Stop_clicked(); break;
        case 3: _t->XBoxJoystick_state((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Form_Body::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Form_Body.data,
      qt_meta_data_Form_Body,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Form_Body::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form_Body::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Form_Body.stringdata0))
        return static_cast<void*>(const_cast< Form_Body*>(this));
    return QDialog::qt_metacast(_clname);
}

int Form_Body::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
