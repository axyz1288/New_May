/****************************************************************************
** Meta object code from reading C++ file 'Form_Mobile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/include/Form_Mobile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Form_Mobile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Form_Mobile_t {
    QByteArrayData data[14];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Form_Mobile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Form_Mobile_t qt_meta_stringdata_Form_Mobile = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Form_Mobile"
QT_MOC_LITERAL(1, 12, 11), // "MoveForward"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "MoveBackward"
QT_MOC_LITERAL(4, 38, 8), // "MoveLeft"
QT_MOC_LITERAL(5, 47, 9), // "MoveRight"
QT_MOC_LITERAL(6, 57, 15), // "Oblique_Forward"
QT_MOC_LITERAL(7, 73, 16), // "Oblique_Backward"
QT_MOC_LITERAL(8, 90, 12), // "Turn_Forward"
QT_MOC_LITERAL(9, 103, 13), // "Turn_Backward"
QT_MOC_LITERAL(10, 117, 26), // "TurnCircleByRadius_Forward"
QT_MOC_LITERAL(11, 144, 27), // "TurnCircleByRadius_Backward"
QT_MOC_LITERAL(12, 172, 13), // "SelfTurn_Left"
QT_MOC_LITERAL(13, 186, 14) // "SelfTurn_Right"

    },
    "Form_Mobile\0MoveForward\0\0MoveBackward\0"
    "MoveLeft\0MoveRight\0Oblique_Forward\0"
    "Oblique_Backward\0Turn_Forward\0"
    "Turn_Backward\0TurnCircleByRadius_Forward\0"
    "TurnCircleByRadius_Backward\0SelfTurn_Left\0"
    "SelfTurn_Right"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form_Mobile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Form_Mobile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Form_Mobile *_t = static_cast<Form_Mobile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MoveForward(); break;
        case 1: _t->MoveBackward(); break;
        case 2: _t->MoveLeft(); break;
        case 3: _t->MoveRight(); break;
        case 4: _t->Oblique_Forward(); break;
        case 5: _t->Oblique_Backward(); break;
        case 6: _t->Turn_Forward(); break;
        case 7: _t->Turn_Backward(); break;
        case 8: _t->TurnCircleByRadius_Forward(); break;
        case 9: _t->TurnCircleByRadius_Backward(); break;
        case 10: _t->SelfTurn_Left(); break;
        case 11: _t->SelfTurn_Right(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Form_Mobile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Form_Mobile.data,
      qt_meta_data_Form_Mobile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Form_Mobile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form_Mobile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Form_Mobile.stringdata0))
        return static_cast<void*>(const_cast< Form_Mobile*>(this));
    return QObject::qt_metacast(_clname);
}

int Form_Mobile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
