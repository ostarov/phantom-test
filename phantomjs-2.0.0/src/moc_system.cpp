/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "system.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_System_t {
    QByteArrayData data[12];
    char stringdata[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_System_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_System_t qt_meta_stringdata_System = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 26),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 8),
QT_MOC_LITERAL(4, 44, 3),
QT_MOC_LITERAL(5, 48, 4),
QT_MOC_LITERAL(6, 53, 3),
QT_MOC_LITERAL(7, 57, 2),
QT_MOC_LITERAL(8, 60, 14),
QT_MOC_LITERAL(9, 75, 11),
QT_MOC_LITERAL(10, 87, 11),
QT_MOC_LITERAL(11, 99, 10)
    },
    "System\0_onTerminalEncodingChanged\0\0"
    "encoding\0pid\0args\0env\0os\0isSSLSupported\0"
    "standardout\0standarderr\0standardin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_System[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       8,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
       4, QMetaType::LongLong, 0x00095001,
       5, QMetaType::QStringList, 0x00095001,
       6, QMetaType::QVariant, 0x00095001,
       7, QMetaType::QVariant, 0x00095001,
       8, QMetaType::Bool, 0x00095001,
       9, QMetaType::QObjectStar, 0x00095001,
      10, QMetaType::QObjectStar, 0x00095001,
      11, QMetaType::QObjectStar, 0x00095001,

       0        // eod
};

void System::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        System *_t = static_cast<System *>(_o);
        switch (_id) {
        case 0: _t->_onTerminalEncodingChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject System::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_System.data,
      qt_meta_data_System,  qt_static_metacall, 0, 0}
};


const QMetaObject *System::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_System.stringdata))
        return static_cast<void*>(const_cast< System*>(this));
    return QObject::qt_metacast(_clname);
}

int System::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint64*>(_v) = pid(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = args(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = env(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = os(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isSSLSupported(); break;
        case 5: *reinterpret_cast< QObject**>(_v) = _stdout(); break;
        case 6: *reinterpret_cast< QObject**>(_v) = _stderr(); break;
        case 7: *reinterpret_cast< QObject**>(_v) = _stdin(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
