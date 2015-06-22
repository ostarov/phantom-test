/****************************************************************************
** Meta object code from reading C++ file 'webserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "webserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WebServer_t {
    QByteArrayData data[9];
    char stringdata[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebServer_t qt_meta_stringdata_WebServer = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 10),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 7),
QT_MOC_LITERAL(4, 30, 8),
QT_MOC_LITERAL(5, 39, 12),
QT_MOC_LITERAL(6, 52, 4),
QT_MOC_LITERAL(7, 57, 7),
QT_MOC_LITERAL(8, 65, 5)
    },
    "WebServer\0newRequest\0\0request\0response\0"
    "listenOnPort\0port\0options\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   39,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       8,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::QObjectStar,    3,    4,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QVariantMap,    6,    7,
    QMetaType::QString,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095001,

       0        // eod
};

void WebServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebServer *_t = static_cast<WebServer *>(_o);
        switch (_id) {
        case 0: _t->newRequest((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 1: { bool _r = _t->listenOnPort((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->port();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WebServer::*_t)(QVariant , QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebServer::newRequest)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject WebServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebServer.data,
      qt_meta_data_WebServer,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebServer.stringdata))
        return static_cast<void*>(const_cast< WebServer*>(this));
    return QObject::qt_metacast(_clname);
}

int WebServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = port(); break;
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
void WebServer::newRequest(QVariant _t1, QObject * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WebServerResponse_t {
    QByteArrayData data[18];
    char stringdata[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebServerResponse_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebServerResponse_t qt_meta_stringdata_WebServerResponse = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 9),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 10),
QT_MOC_LITERAL(4, 40, 7),
QT_MOC_LITERAL(5, 48, 5),
QT_MOC_LITERAL(6, 54, 4),
QT_MOC_LITERAL(7, 59, 11),
QT_MOC_LITERAL(8, 71, 8),
QT_MOC_LITERAL(9, 80, 5),
QT_MOC_LITERAL(10, 86, 15),
QT_MOC_LITERAL(11, 102, 13),
QT_MOC_LITERAL(12, 116, 4),
QT_MOC_LITERAL(13, 121, 6),
QT_MOC_LITERAL(14, 128, 4),
QT_MOC_LITERAL(15, 133, 9),
QT_MOC_LITERAL(16, 143, 5),
QT_MOC_LITERAL(17, 149, 10)
    },
    "WebServerResponse\0writeHead\0\0statusCode\0"
    "headers\0write\0data\0setEncoding\0encoding\0"
    "close\0closeGracefully\0setStatusCode\0"
    "code\0header\0name\0setHeader\0value\0"
    "setHeaders"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebServerResponse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x0a /* Public */,
       5,    1,   74,    2, 0x0a /* Public */,
       7,    1,   77,    2, 0x0a /* Public */,
       9,    0,   80,    2, 0x0a /* Public */,
      10,    0,   81,    2, 0x0a /* Public */,
       3,    0,   82,    2, 0x0a /* Public */,
      11,    1,   83,    2, 0x0a /* Public */,
      13,    1,   86,    2, 0x0a /* Public */,
      15,    2,   89,    2, 0x0a /* Public */,
       4,    0,   94,    2, 0x0a /* Public */,
      17,    1,   95,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QVariantMap,    3,    4,
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::QString, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   16,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,    4,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::QVariantMap, 0x00095103,

       0        // eod
};

void WebServerResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebServerResponse *_t = static_cast<WebServerResponse *>(_o);
        switch (_id) {
        case 0: _t->writeHead((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 1: _t->write((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->setEncoding((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->close(); break;
        case 4: _t->closeGracefully(); break;
        case 5: { int _r = _t->statusCode();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->setStatusCode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { QString _r = _t->header((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: _t->setHeader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: { QVariantMap _r = _t->headers();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 10: _t->setHeaders((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WebServerResponse::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebServerResponse.data,
      qt_meta_data_WebServerResponse,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebServerResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebServerResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebServerResponse.stringdata))
        return static_cast<void*>(const_cast< WebServerResponse*>(this));
    return QObject::qt_metacast(_clname);
}

int WebServerResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< int*>(_v) = statusCode(); break;
        case 1: *reinterpret_cast< QVariantMap*>(_v) = headers(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStatusCode(*reinterpret_cast< int*>(_v)); break;
        case 1: setHeaders(*reinterpret_cast< QVariantMap*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
