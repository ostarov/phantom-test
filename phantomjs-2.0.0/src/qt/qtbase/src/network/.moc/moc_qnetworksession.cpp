/****************************************************************************
** Meta object code from reading C++ file 'qnetworksession.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bearer/qnetworksession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworksession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkSession_t {
    QByteArrayData data[23];
    char stringdata[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkSession_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkSession_t qt_meta_stringdata_QNetworkSession = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 12),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 22),
QT_MOC_LITERAL(4, 53, 6),
QT_MOC_LITERAL(5, 60, 6),
QT_MOC_LITERAL(6, 67, 5),
QT_MOC_LITERAL(7, 73, 29),
QT_MOC_LITERAL(8, 103, 29),
QT_MOC_LITERAL(9, 133, 21),
QT_MOC_LITERAL(10, 155, 6),
QT_MOC_LITERAL(11, 162, 10),
QT_MOC_LITERAL(12, 173, 25),
QT_MOC_LITERAL(13, 199, 20),
QT_MOC_LITERAL(14, 220, 30),
QT_MOC_LITERAL(15, 251, 13),
QT_MOC_LITERAL(16, 265, 4),
QT_MOC_LITERAL(17, 270, 5),
QT_MOC_LITERAL(18, 276, 4),
QT_MOC_LITERAL(19, 281, 7),
QT_MOC_LITERAL(20, 289, 6),
QT_MOC_LITERAL(21, 296, 6),
QT_MOC_LITERAL(22, 303, 6)
    },
    "QNetworkSession\0stateChanged\0\0"
    "QNetworkSession::State\0opened\0closed\0"
    "error\0QNetworkSession::SessionError\0"
    "preferredConfigurationChanged\0"
    "QNetworkConfiguration\0config\0isSeamless\0"
    "newConfigurationActivated\0"
    "usagePoliciesChanged\0"
    "QNetworkSession::UsagePolicies\0"
    "usagePolicies\0open\0close\0stop\0migrate\0"
    "ignore\0accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,
       8,    2,   92,    2, 0x06 /* Public */,
      12,    0,   97,    2, 0x06 /* Public */,
      13,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  101,    2, 0x0a /* Public */,
      17,    0,  102,    2, 0x0a /* Public */,
      18,    0,  103,    2, 0x0a /* Public */,
      19,    0,  104,    2, 0x0a /* Public */,
      20,    0,  105,    2, 0x0a /* Public */,
      21,    0,  106,    2, 0x0a /* Public */,
      22,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QNetworkSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkSession *_t = static_cast<QNetworkSession *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        case 1: _t->opened(); break;
        case 2: _t->closed(); break;
        case 3: _t->error((*reinterpret_cast< QNetworkSession::SessionError(*)>(_a[1]))); break;
        case 4: _t->preferredConfigurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->newConfigurationActivated(); break;
        case 6: _t->usagePoliciesChanged((*reinterpret_cast< QNetworkSession::UsagePolicies(*)>(_a[1]))); break;
        case 7: _t->open(); break;
        case 8: _t->close(); break;
        case 9: _t->stop(); break;
        case 10: _t->migrate(); break;
        case 11: _t->ignore(); break;
        case 12: _t->accept(); break;
        case 13: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::State >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::SessionError >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::UsagePolicies >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkSession::*_t)(QNetworkSession::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSession::stateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QNetworkSession::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSession::opened)) {
                *result = 1;
            }
        }
        {
            typedef void (QNetworkSession::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSession::closed)) {
                *result = 2;
            }
        }
        {
            typedef void (QNetworkSession::*_t)(QNetworkSession::SessionError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSession::error)) {
                *result = 3;
            }
        }
        {
            typedef void (QNetworkSession::*_t)(const QNetworkConfiguration & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSession::preferredConfigurationChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QNetworkSession::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSession::newConfigurationActivated)) {
                *result = 5;
            }
        }
        {
            typedef void (QNetworkSession::*_t)(QNetworkSession::UsagePolicies );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSession::usagePoliciesChanged)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject QNetworkSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkSession.data,
      qt_meta_data_QNetworkSession,  qt_static_metacall, 0, 0}
};


const QMetaObject *QNetworkSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkSession::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkSession.stringdata))
        return static_cast<void*>(const_cast< QNetworkSession*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QNetworkSession::stateChanged(QNetworkSession::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkSession::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QNetworkSession::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QNetworkSession::error(QNetworkSession::SessionError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkSession::preferredConfigurationChanged(const QNetworkConfiguration & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QNetworkSession::newConfigurationActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QNetworkSession::usagePoliciesChanged(QNetworkSession::UsagePolicies _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
