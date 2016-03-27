/****************************************************************************
** Meta object code from reading C++ file 'inventory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Inventory/inventory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inventory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Inventory_t {
    QByteArrayData data[7];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Inventory_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Inventory_t qt_meta_stringdata_Inventory = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Inventory"
QT_MOC_LITERAL(1, 10, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "on_consumeButton_clicked"
QT_MOC_LITERAL(4, 57, 24), // "on_displayButton_clicked"
QT_MOC_LITERAL(5, 82, 5), // "times"
QT_MOC_LITERAL(6, 88, 7) // "display"

    },
    "Inventory\0on_addButton_clicked\0\0"
    "on_consumeButton_clicked\0"
    "on_displayButton_clicked\0times\0display"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Inventory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void Inventory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Inventory *_t = static_cast<Inventory *>(_o);
        switch (_id) {
        case 0: _t->on_addButton_clicked(); break;
        case 1: _t->on_consumeButton_clicked(); break;
        case 2: _t->on_displayButton_clicked(); break;
        case 3: { QString _r = _t->times();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->display((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Inventory::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Inventory.data,
      qt_meta_data_Inventory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Inventory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Inventory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Inventory.stringdata))
        return static_cast<void*>(const_cast< Inventory*>(this));
    return QWidget::qt_metacast(_clname);
}

int Inventory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
