/****************************************************************************
** Meta object code from reading C++ file 'qdnslookup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kernel/qdnslookup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdnslookup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDnsLookup_t {
    QByteArrayData data[36];
    char stringdata[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDnsLookup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDnsLookup_t qt_meta_stringdata_QDnsLookup = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 8),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 11),
QT_MOC_LITERAL(4, 33, 4),
QT_MOC_LITERAL(5, 38, 11),
QT_MOC_LITERAL(6, 50, 4),
QT_MOC_LITERAL(7, 55, 4),
QT_MOC_LITERAL(8, 60, 17),
QT_MOC_LITERAL(9, 78, 12),
QT_MOC_LITERAL(10, 91, 10),
QT_MOC_LITERAL(11, 102, 5),
QT_MOC_LITERAL(12, 108, 6),
QT_MOC_LITERAL(13, 115, 17),
QT_MOC_LITERAL(14, 133, 15),
QT_MOC_LITERAL(15, 149, 5),
QT_MOC_LITERAL(16, 155, 5),
QT_MOC_LITERAL(17, 161, 5),
QT_MOC_LITERAL(18, 167, 11),
QT_MOC_LITERAL(19, 179, 7),
QT_MOC_LITERAL(20, 187, 13),
QT_MOC_LITERAL(21, 201, 23),
QT_MOC_LITERAL(22, 225, 19),
QT_MOC_LITERAL(23, 245, 17),
QT_MOC_LITERAL(24, 263, 18),
QT_MOC_LITERAL(25, 282, 18),
QT_MOC_LITERAL(26, 301, 13),
QT_MOC_LITERAL(27, 315, 1),
QT_MOC_LITERAL(28, 317, 4),
QT_MOC_LITERAL(29, 322, 3),
QT_MOC_LITERAL(30, 326, 5),
QT_MOC_LITERAL(31, 332, 2),
QT_MOC_LITERAL(32, 335, 2),
QT_MOC_LITERAL(33, 338, 3),
QT_MOC_LITERAL(34, 342, 3),
QT_MOC_LITERAL(35, 346, 3)
    },
    "QDnsLookup\0finished\0\0nameChanged\0name\0"
    "typeChanged\0Type\0type\0nameserverChanged\0"
    "QHostAddress\0nameserver\0abort\0lookup\0"
    "_q_lookupFinished\0QDnsLookupReply\0"
    "reply\0error\0Error\0errorString\0NoError\0"
    "ResolverError\0OperationCancelledError\0"
    "InvalidRequestError\0InvalidReplyError\0"
    "ServerFailureError\0ServerRefusedError\0"
    "NotFoundError\0A\0AAAA\0ANY\0CNAME\0MX\0NS\0"
    "PTR\0SRV\0TXT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDnsLookup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   64, // properties
       2,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       8,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   59,    2, 0x0a /* Public */,
      12,    0,   60,    2, 0x0a /* Public */,
      13,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

 // properties: name, type, flags
      16, 0x80000000 | 17, 0x00495009,
      18, QMetaType::QString, 0x00495001,
       4, QMetaType::QString, 0x00495103,
       7, 0x80000000 | 6, 0x0049510b,
      10, 0x80000000 | 9, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,

 // enums: name, flags, count, data
      17, 0x0,    8,   92,
       6, 0x0,    9,  108,

 // enum data: key, value
      19, uint(QDnsLookup::NoError),
      20, uint(QDnsLookup::ResolverError),
      21, uint(QDnsLookup::OperationCancelledError),
      22, uint(QDnsLookup::InvalidRequestError),
      23, uint(QDnsLookup::InvalidReplyError),
      24, uint(QDnsLookup::ServerFailureError),
      25, uint(QDnsLookup::ServerRefusedError),
      26, uint(QDnsLookup::NotFoundError),
      27, uint(QDnsLookup::A),
      28, uint(QDnsLookup::AAAA),
      29, uint(QDnsLookup::ANY),
      30, uint(QDnsLookup::CNAME),
      31, uint(QDnsLookup::MX),
      32, uint(QDnsLookup::NS),
      33, uint(QDnsLookup::PTR),
      34, uint(QDnsLookup::SRV),
      35, uint(QDnsLookup::TXT),

       0        // eod
};

void QDnsLookup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDnsLookup *_t = static_cast<QDnsLookup *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->typeChanged((*reinterpret_cast< Type(*)>(_a[1]))); break;
        case 3: _t->nameserverChanged((*reinterpret_cast< const QHostAddress(*)>(_a[1]))); break;
        case 4: _t->abort(); break;
        case 5: _t->lookup(); break;
        case 6: _t->d_func()->_q_lookupFinished((*reinterpret_cast< const QDnsLookupReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDnsLookup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDnsLookup::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (QDnsLookup::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDnsLookup::nameChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QDnsLookup::*_t)(Type );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDnsLookup::typeChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QDnsLookup::*_t)(const QHostAddress & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDnsLookup::nameserverChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QDnsLookup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDnsLookup.data,
      qt_meta_data_QDnsLookup,  qt_static_metacall, 0, 0}
};


const QMetaObject *QDnsLookup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDnsLookup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDnsLookup.stringdata))
        return static_cast<void*>(const_cast< QDnsLookup*>(this));
    return QObject::qt_metacast(_clname);
}

int QDnsLookup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Error*>(_v) = error(); break;
        case 1: *reinterpret_cast< QString*>(_v) = errorString(); break;
        case 2: *reinterpret_cast< QString*>(_v) = name(); break;
        case 3: *reinterpret_cast< Type*>(_v) = type(); break;
        case 4: *reinterpret_cast< QHostAddress*>(_v) = nameserver(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setName(*reinterpret_cast< QString*>(_v)); break;
        case 3: setType(*reinterpret_cast< Type*>(_v)); break;
        case 4: setNameserver(*reinterpret_cast< QHostAddress*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDnsLookup::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDnsLookup::nameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDnsLookup::typeChanged(Type _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDnsLookup::nameserverChanged(const QHostAddress & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
