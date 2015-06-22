/****************************************************************************
** Meta object code from reading C++ file 'QNetworkReplyHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../platform/network/qt/QNetworkReplyHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QNetworkReplyHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WebCore__QNetworkReplyHandlerCallQueue_t {
    QByteArrayData data[3];
    char stringdata[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebCore__QNetworkReplyHandlerCallQueue_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebCore__QNetworkReplyHandlerCallQueue_t qt_meta_stringdata_WebCore__QNetworkReplyHandlerCallQueue = {
    {
QT_MOC_LITERAL(0, 0, 38),
QT_MOC_LITERAL(1, 39, 5),
QT_MOC_LITERAL(2, 45, 0)
    },
    "WebCore::QNetworkReplyHandlerCallQueue\0"
    "flush\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebCore__QNetworkReplyHandlerCallQueue[] = {

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
       1,    0,   19,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void WebCore::QNetworkReplyHandlerCallQueue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkReplyHandlerCallQueue *_t = static_cast<QNetworkReplyHandlerCallQueue *>(_o);
        switch (_id) {
        case 0: _t->flush(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WebCore::QNetworkReplyHandlerCallQueue::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__QNetworkReplyHandlerCallQueue.data,
      qt_meta_data_WebCore__QNetworkReplyHandlerCallQueue,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebCore::QNetworkReplyHandlerCallQueue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebCore::QNetworkReplyHandlerCallQueue::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__QNetworkReplyHandlerCallQueue.stringdata))
        return static_cast<void*>(const_cast< QNetworkReplyHandlerCallQueue*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::QNetworkReplyHandlerCallQueue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_WebCore__QNetworkReplyWrapper_t {
    QByteArrayData data[8];
    char stringdata[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebCore__QNetworkReplyWrapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebCore__QNetworkReplyWrapper_t qt_meta_stringdata_WebCore__QNetworkReplyWrapper = {
    {
QT_MOC_LITERAL(0, 0, 29),
QT_MOC_LITERAL(1, 30, 15),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 18),
QT_MOC_LITERAL(4, 66, 19),
QT_MOC_LITERAL(5, 86, 22),
QT_MOC_LITERAL(6, 109, 11),
QT_MOC_LITERAL(7, 121, 14)
    },
    "WebCore::QNetworkReplyWrapper\0"
    "receiveMetaData\0\0didReceiveFinished\0"
    "didReceiveReadyRead\0receiveSniffedMIMEType\0"
    "setFinished\0replyDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebCore__QNetworkReplyWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WebCore::QNetworkReplyWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkReplyWrapper *_t = static_cast<QNetworkReplyWrapper *>(_o);
        switch (_id) {
        case 0: _t->receiveMetaData(); break;
        case 1: _t->didReceiveFinished(); break;
        case 2: _t->didReceiveReadyRead(); break;
        case 3: _t->receiveSniffedMIMEType(); break;
        case 4: _t->setFinished(); break;
        case 5: _t->replyDestroyed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WebCore::QNetworkReplyWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__QNetworkReplyWrapper.data,
      qt_meta_data_WebCore__QNetworkReplyWrapper,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebCore::QNetworkReplyWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebCore::QNetworkReplyWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__QNetworkReplyWrapper.stringdata))
        return static_cast<void*>(const_cast< QNetworkReplyWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::QNetworkReplyWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_WebCore__QNetworkReplyHandler_t {
    QByteArrayData data[5];
    char stringdata[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebCore__QNetworkReplyHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebCore__QNetworkReplyHandler_t qt_meta_stringdata_WebCore__QNetworkReplyHandler = {
    {
QT_MOC_LITERAL(0, 0, 29),
QT_MOC_LITERAL(1, 30, 14),
QT_MOC_LITERAL(2, 45, 0),
QT_MOC_LITERAL(3, 46, 9),
QT_MOC_LITERAL(4, 56, 10)
    },
    "WebCore::QNetworkReplyHandler\0"
    "uploadProgress\0\0bytesSent\0bytesTotal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebCore__QNetworkReplyHandler[] = {

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
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,

       0        // eod
};

void WebCore::QNetworkReplyHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkReplyHandler *_t = static_cast<QNetworkReplyHandler *>(_o);
        switch (_id) {
        case 0: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject WebCore::QNetworkReplyHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__QNetworkReplyHandler.data,
      qt_meta_data_WebCore__QNetworkReplyHandler,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebCore::QNetworkReplyHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebCore::QNetworkReplyHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__QNetworkReplyHandler.stringdata))
        return static_cast<void*>(const_cast< QNetworkReplyHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::QNetworkReplyHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_WebCore__FormDataIODevice_t {
    QByteArrayData data[1];
    char stringdata[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebCore__FormDataIODevice_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebCore__FormDataIODevice_t qt_meta_stringdata_WebCore__FormDataIODevice = {
    {
QT_MOC_LITERAL(0, 0, 25)
    },
    "WebCore::FormDataIODevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebCore__FormDataIODevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WebCore::FormDataIODevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WebCore::FormDataIODevice::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_WebCore__FormDataIODevice.data,
      qt_meta_data_WebCore__FormDataIODevice,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebCore::FormDataIODevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebCore::FormDataIODevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__FormDataIODevice.stringdata))
        return static_cast<void*>(const_cast< FormDataIODevice*>(this));
    return QIODevice::qt_metacast(_clname);
}

int WebCore::FormDataIODevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
