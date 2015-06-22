/****************************************************************************
** Meta object code from reading C++ file 'childprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "childprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'childprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChildProcessContext_t {
    QByteArrayData data[24];
    char stringdata[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChildProcessContext_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChildProcessContext_t qt_meta_stringdata_ChildProcessContext = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 4),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 4),
QT_MOC_LITERAL(4, 31, 10),
QT_MOC_LITERAL(5, 42, 4),
QT_MOC_LITERAL(6, 47, 10),
QT_MOC_LITERAL(7, 58, 24),
QT_MOC_LITERAL(8, 83, 23),
QT_MOC_LITERAL(9, 107, 6),
QT_MOC_LITERAL(10, 114, 22),
QT_MOC_LITERAL(11, 137, 5),
QT_MOC_LITERAL(12, 143, 9),
QT_MOC_LITERAL(13, 153, 8),
QT_MOC_LITERAL(14, 162, 20),
QT_MOC_LITERAL(15, 183, 10),
QT_MOC_LITERAL(16, 194, 4),
QT_MOC_LITERAL(17, 199, 6),
QT_MOC_LITERAL(18, 206, 12),
QT_MOC_LITERAL(19, 219, 8),
QT_MOC_LITERAL(20, 228, 6),
QT_MOC_LITERAL(21, 235, 3),
QT_MOC_LITERAL(22, 239, 4),
QT_MOC_LITERAL(23, 244, 3)
    },
    "ChildProcessContext\0exit\0\0code\0"
    "stdoutData\0data\0stderrData\0"
    "_readyReadStandardOutput\0"
    "_readyReadStandardError\0_error\0"
    "QProcess::ProcessError\0error\0_finished\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus\0"
    "kill\0signal\0_setEncoding\0encoding\0"
    "_start\0cmd\0args\0pid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChildProcessContext[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   78,    2, 0x08 /* Private */,
       8,    0,   79,    2, 0x08 /* Private */,
       9,    1,   80,    2, 0x08 /* Private */,
      12,    2,   83,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      16,    1,   88,    2, 0x02 /* Public */,
      16,    0,   91,    2, 0x22 /* Public | MethodCloned */,
      18,    1,   92,    2, 0x02 /* Public */,
      20,    2,   95,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Bool, QMetaType::QString, QMetaType::QStringList,   21,   22,

 // properties: name, type, flags
      23, QMetaType::LongLong, 0x00095001,

       0        // eod
};

void ChildProcessContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChildProcessContext *_t = static_cast<ChildProcessContext *>(_o);
        switch (_id) {
        case 0: _t->exit((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->stdoutData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->stderrData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->_readyReadStandardOutput(); break;
        case 4: _t->_readyReadStandardError(); break;
        case 5: _t->_error((*reinterpret_cast< const QProcess::ProcessError(*)>(_a[1]))); break;
        case 6: _t->_finished((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QProcess::ExitStatus(*)>(_a[2]))); break;
        case 7: _t->kill((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->kill(); break;
        case 9: _t->_setEncoding((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { bool _r = _t->_start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChildProcessContext::*_t)(const int ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChildProcessContext::exit)) {
                *result = 0;
            }
        }
        {
            typedef void (ChildProcessContext::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChildProcessContext::stdoutData)) {
                *result = 1;
            }
        }
        {
            typedef void (ChildProcessContext::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChildProcessContext::stderrData)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ChildProcessContext::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChildProcessContext.data,
      qt_meta_data_ChildProcessContext,  qt_static_metacall, 0, 0}
};


const QMetaObject *ChildProcessContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChildProcessContext::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChildProcessContext.stringdata))
        return static_cast<void*>(const_cast< ChildProcessContext*>(this));
    return QObject::qt_metacast(_clname);
}

int ChildProcessContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint64*>(_v) = pid(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ChildProcessContext::exit(const int _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ChildProcessContext *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChildProcessContext::stdoutData(const QString & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ChildProcessContext *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChildProcessContext::stderrData(const QString & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ChildProcessContext *>(this), &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_ChildProcess_t {
    QByteArrayData data[3];
    char stringdata[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChildProcess_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChildProcess_t qt_meta_stringdata_ChildProcess = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 26),
QT_MOC_LITERAL(2, 40, 0)
    },
    "ChildProcess\0_createChildProcessContext\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChildProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QObjectStar,

       0        // eod
};

void ChildProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChildProcess *_t = static_cast<ChildProcess *>(_o);
        switch (_id) {
        case 0: { QObject* _r = _t->_createChildProcessContext();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ChildProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChildProcess.data,
      qt_meta_data_ChildProcess,  qt_static_metacall, 0, 0}
};


const QMetaObject *ChildProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChildProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChildProcess.stringdata))
        return static_cast<void*>(const_cast< ChildProcess*>(this));
    return QObject::qt_metacast(_clname);
}

int ChildProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_END_MOC_NAMESPACE
