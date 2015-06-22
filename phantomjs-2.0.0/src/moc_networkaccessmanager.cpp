/****************************************************************************
** Meta object code from reading C++ file 'networkaccessmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "networkaccessmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkaccessmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TimeoutTimer_t {
    QByteArrayData data[1];
    char stringdata[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeoutTimer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeoutTimer_t qt_meta_stringdata_TimeoutTimer = {
    {
QT_MOC_LITERAL(0, 0, 12)
    },
    "TimeoutTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeoutTimer[] = {

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

void TimeoutTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TimeoutTimer::staticMetaObject = {
    { &QTimer::staticMetaObject, qt_meta_stringdata_TimeoutTimer.data,
      qt_meta_data_TimeoutTimer,  qt_static_metacall, 0, 0}
};


const QMetaObject *TimeoutTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeoutTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeoutTimer.stringdata))
        return static_cast<void*>(const_cast< TimeoutTimer*>(this));
    return QTimer::qt_metacast(_clname);
}

int TimeoutTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_JsNetworkRequest_t {
    QByteArrayData data[8];
    char stringdata[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsNetworkRequest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsNetworkRequest_t qt_meta_stringdata_JsNetworkRequest = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 5),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 9),
QT_MOC_LITERAL(4, 34, 3),
QT_MOC_LITERAL(5, 38, 9),
QT_MOC_LITERAL(6, 48, 4),
QT_MOC_LITERAL(7, 53, 5)
    },
    "JsNetworkRequest\0abort\0\0changeUrl\0url\0"
    "setHeader\0name\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsNetworkRequest[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x02 /* Public */,
       3,    1,   30,    2, 0x02 /* Public */,
       5,    2,   33,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Bool, QMetaType::QString, QMetaType::QVariant,    6,    7,

       0        // eod
};

void JsNetworkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JsNetworkRequest *_t = static_cast<JsNetworkRequest *>(_o);
        switch (_id) {
        case 0: _t->abort(); break;
        case 1: _t->changeUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->setHeader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject JsNetworkRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JsNetworkRequest.data,
      qt_meta_data_JsNetworkRequest,  qt_static_metacall, 0, 0}
};


const QMetaObject *JsNetworkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsNetworkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JsNetworkRequest.stringdata))
        return static_cast<void*>(const_cast< JsNetworkRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int JsNetworkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_NoFileAccessReply_t {
    QByteArrayData data[1];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NoFileAccessReply_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NoFileAccessReply_t qt_meta_stringdata_NoFileAccessReply = {
    {
QT_MOC_LITERAL(0, 0, 17)
    },
    "NoFileAccessReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NoFileAccessReply[] = {

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

void NoFileAccessReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject NoFileAccessReply::staticMetaObject = {
    { &QNetworkReply::staticMetaObject, qt_meta_stringdata_NoFileAccessReply.data,
      qt_meta_data_NoFileAccessReply,  qt_static_metacall, 0, 0}
};


const QMetaObject *NoFileAccessReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoFileAccessReply::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NoFileAccessReply.stringdata))
        return static_cast<void*>(const_cast< NoFileAccessReply*>(this));
    return QNetworkReply::qt_metacast(_clname);
}

int NoFileAccessReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_NetworkAccessManager_t {
    QByteArrayData data[19];
    char stringdata[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkAccessManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkAccessManager_t qt_meta_stringdata_NetworkAccessManager = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 17),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 4),
QT_MOC_LITERAL(4, 45, 16),
QT_MOC_LITERAL(5, 62, 13),
QT_MOC_LITERAL(6, 76, 15),
QT_MOC_LITERAL(7, 92, 13),
QT_MOC_LITERAL(8, 106, 14),
QT_MOC_LITERAL(9, 121, 14),
QT_MOC_LITERAL(10, 136, 5),
QT_MOC_LITERAL(11, 142, 21),
QT_MOC_LITERAL(12, 164, 15),
QT_MOC_LITERAL(13, 180, 13),
QT_MOC_LITERAL(14, 194, 15),
QT_MOC_LITERAL(15, 210, 16),
QT_MOC_LITERAL(16, 227, 6),
QT_MOC_LITERAL(17, 234, 18),
QT_MOC_LITERAL(18, 253, 13)
    },
    "NetworkAccessManager\0resourceRequested\0"
    "\0data\0resourceReceived\0resourceError\0"
    "resourceTimeout\0handleStarted\0"
    "handleFinished\0QNetworkReply*\0reply\0"
    "provideAuthentication\0QAuthenticator*\0"
    "authenticator\0handleSslErrors\0"
    "QList<QSslError>\0errors\0handleNetworkError\0"
    "handleTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkAccessManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       4,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   78,    2, 0x08 /* Private */,
       8,    1,   79,    2, 0x08 /* Private */,
      11,    2,   82,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,
      17,    0,   90,    2, 0x08 /* Private */,
      18,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::QObjectStar,    3,    2,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 12,   10,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkAccessManager *_t = static_cast<NetworkAccessManager *>(_o);
        switch (_id) {
        case 0: _t->resourceRequested((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 1: _t->resourceReceived((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->resourceError((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->resourceTimeout((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 4: _t->handleStarted(); break;
        case 5: _t->handleFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->provideAuthentication((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 7: _t->handleSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 8: _t->handleNetworkError(); break;
        case 9: _t->handleTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NetworkAccessManager::*_t)(const QVariant & , QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkAccessManager::resourceRequested)) {
                *result = 0;
            }
        }
        {
            typedef void (NetworkAccessManager::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkAccessManager::resourceReceived)) {
                *result = 1;
            }
        }
        {
            typedef void (NetworkAccessManager::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkAccessManager::resourceError)) {
                *result = 2;
            }
        }
        {
            typedef void (NetworkAccessManager::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkAccessManager::resourceTimeout)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject NetworkAccessManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_NetworkAccessManager.data,
      qt_meta_data_NetworkAccessManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *NetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkAccessManager.stringdata))
        return static_cast<void*>(const_cast< NetworkAccessManager*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int NetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void NetworkAccessManager::resourceRequested(const QVariant & _t1, QObject * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkAccessManager::resourceReceived(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetworkAccessManager::resourceError(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkAccessManager::resourceTimeout(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
