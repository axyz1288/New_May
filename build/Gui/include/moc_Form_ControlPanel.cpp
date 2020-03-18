/****************************************************************************
** Meta object code from reading C++ file 'Form_ControlPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/include/Form_ControlPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Form_ControlPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Form_ControlPanel_t {
    QByteArrayData data[6];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Form_ControlPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Form_ControlPanel_t qt_meta_stringdata_Form_ControlPanel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Form_ControlPanel"
QT_MOC_LITERAL(1, 18, 25), // "on_pB_Form_Vision_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 23), // "on_pB_Form_Body_clicked"
QT_MOC_LITERAL(4, 69, 27), // "on_pB_Form_Strategy_clicked"
QT_MOC_LITERAL(5, 97, 26) // "on_pB_Form_Network_clicked"

    },
    "Form_ControlPanel\0on_pB_Form_Vision_clicked\0"
    "\0on_pB_Form_Body_clicked\0"
    "on_pB_Form_Strategy_clicked\0"
    "on_pB_Form_Network_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form_ControlPanel[] = {

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
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Form_ControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Form_ControlPanel *_t = static_cast<Form_ControlPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pB_Form_Vision_clicked(); break;
        case 1: _t->on_pB_Form_Body_clicked(); break;
        case 2: _t->on_pB_Form_Strategy_clicked(); break;
        case 3: _t->on_pB_Form_Network_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Form_ControlPanel::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Form_ControlPanel.data,
      qt_meta_data_Form_ControlPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Form_ControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form_ControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Form_ControlPanel.stringdata0))
        return static_cast<void*>(const_cast< Form_ControlPanel*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Form_ControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
