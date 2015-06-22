/****************************************************************************
** Meta object code from reading C++ file 'InspectorServerQt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt/WebCoreSupport/InspectorServerQt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InspectorServerQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WebCore__InspectorServerQt_t {
    QByteArrayData data[3];
    char stringdata[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebCore__InspectorServerQt_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebCore__InspectorServerQt_t qt_meta_stringdata_WebCore__InspectorServerQt = {
    {
QT_MOC_LITERAL(0, 0, 26),
QT_MOC_LITERAL(1, 27, 13),
QT_MOC_LITERAL(2, 41, 0)
    },
    "WebCore::InspectorServerQt\0newConnection\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebCore__InspectorServerQt[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WebCore::InspectorServerQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InspectorServerQt *_t = static_cast<InspectorServerQt *>(_o);
        switch (_id) {
        case 0: _t->newConnection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WebCore::InspectorServerQt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__InspectorServerQt.data,
      qt_meta_data_WebCore__InspectorServerQt,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebCore::InspectorServerQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebCore::InspectorServerQt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__InspectorServerQt.stringdata))
        return static_cast<void*>(const_cast< InspectorServerQt*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::InspectorServerQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_WebCore__InspectorServerRequestHandlerQt_t {
    QByteArrayData data[5];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebCore__InspectorServerRequestHandlerQt_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebCore__InspectorServerRequestHandlerQt_t qt_meta_stringdata_WebCore__InspectorServerRequestHandlerQt = {
    {
QT_MOC_LITERAL(0, 0, 40),
QT_MOC_LITERAL(1, 41, 12),
QT_MOC_LITERAL(2, 54, 0),
QT_MOC_LITERAL(3, 55, 25),
QT_MOC_LITERAL(4, 81, 18)
    },
    "WebCore::InspectorServerRequestHandlerQt\0"
    "tcpReadyRead\0\0tcpConnectionDisconnected\0"
    "webSocketReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebCore__InspectorServerRequestHandlerQt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WebCore::InspectorServerRequestHandlerQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InspectorServerRequestHandlerQt *_t = static_cast<InspectorServerRequestHandlerQt *>(_o);
        switch (_id) {
        case 0: _t->tcpReadyRead(); break;
        case 1: _t->tcpConnectionDisconnected(); break;
        case 2: _t->webSocketReadyRead(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WebCore::InspectorServerRequestHandlerQt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__InspectorServerRequestHandlerQt.data,
      qt_meta_data_WebCore__InspectorServerRequestHandlerQt,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebCore::InspectorServerRequestHandlerQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebCore::InspectorServerRequestHandlerQt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__InspectorServerRequestHandlerQt.stringdata))
        return static_cast<void*>(const_cast< InspectorServerRequestHandlerQt*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::InspectorServerRequestHandlerQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
