/****************************************************************************
** Meta object code from reading C++ file 'repl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "repl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'repl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_REPL_t {
    QByteArrayData data[8];
    char stringdata[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_REPL_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_REPL_t qt_meta_stringdata_REPL = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 9),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 8),
QT_MOC_LITERAL(4, 25, 4),
QT_MOC_LITERAL(5, 30, 13),
QT_MOC_LITERAL(6, 44, 3),
QT_MOC_LITERAL(7, 48, 21)
    },
    "REPL\0startLoop\0\0stopLoop\0code\0"
    "_getClassName\0obj\0_enumerateCompletions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_REPL[] = {

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
       3,    1,   35,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   38,    2, 0x02 /* Public */,
       7,    1,   41,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // methods: parameters
    QMetaType::QString, QMetaType::QObjectStar,    6,
    QMetaType::QStringList, QMetaType::QObjectStar,    6,

       0        // eod
};

void REPL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        REPL *_t = static_cast<REPL *>(_o);
        switch (_id) {
        case 0: _t->startLoop(); break;
        case 1: _t->stopLoop((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: { QString _r = _t->_getClassName((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QStringList _r = _t->_enumerateCompletions((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject REPL::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_REPL.data,
      qt_meta_data_REPL,  qt_static_metacall, 0, 0}
};


const QMetaObject *REPL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *REPL::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_REPL.stringdata))
        return static_cast<void*>(const_cast< REPL*>(this));
    return QObject::qt_metacast(_clname);
}

int REPL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
