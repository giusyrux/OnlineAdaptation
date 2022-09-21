/****************************************************************************
** Meta object code from reading C++ file 'hri_skeletons.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/hri_rviz/src/hri_skeletons.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hri_skeletons.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz__HumansModelDisplay_t {
    QByteArrayData data[6];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz__HumansModelDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz__HumansModelDisplay_t qt_meta_stringdata_rviz__HumansModelDisplay = {
    {
QT_MOC_LITERAL(0, 0, 24), // "rviz::HumansModelDisplay"
QT_MOC_LITERAL(1, 25, 19), // "updateVisualVisible"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 22), // "updateCollisionVisible"
QT_MOC_LITERAL(4, 69, 14), // "updateTfPrefix"
QT_MOC_LITERAL(5, 84, 11) // "updateAlpha"

    },
    "rviz::HumansModelDisplay\0updateVisualVisible\0"
    "\0updateCollisionVisible\0updateTfPrefix\0"
    "updateAlpha"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz__HumansModelDisplay[] = {

 // content:
       8,       // revision
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

void rviz::HumansModelDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HumansModelDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateVisualVisible(); break;
        case 1: _t->updateCollisionVisible(); break;
        case 2: _t->updateTfPrefix(); break;
        case 3: _t->updateAlpha(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rviz::HumansModelDisplay::staticMetaObject = { {
    &Display::staticMetaObject,
    qt_meta_stringdata_rviz__HumansModelDisplay.data,
    qt_meta_data_rviz__HumansModelDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz::HumansModelDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz::HumansModelDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz__HumansModelDisplay.stringdata0))
        return static_cast<void*>(this);
    return Display::qt_metacast(_clname);
}

int rviz::HumansModelDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Display::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
