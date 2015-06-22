/****************************************************************************
** Meta object code from reading C++ file 'SocketStreamHandlePrivate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../platform/network/qt/SocketStreamHandlePrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SocketStreamHandlePrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WebCore__SocketStreamHandlePrivate_t {
    QByteArrayData data[17];
    char stringdata[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebCore__SocketStreamHandlePrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebCore__SocketStreamHandlePrivate_t qt_meta_stringdata_WebCore__SocketStreamHandlePrivate = {
    {
QT_MOC_LITERAL(0, 0, 34),
QT_MOC_LITERAL(1, 35, 15),
QT_MOC_LITERAL(2, 51, 0),
QT_MOC_LITERAL(3, 52, 15),
QT_MOC_LITERAL(4, 68, 4),
QT_MOC_LITERAL(5, 73, 11),
QT_MOC_LITERAL(6, 85, 4),
QT_MOC_LITERAL(7, 90, 3),
QT_MOC_LITERAL(8, 94, 5),
QT_MOC_LITERAL(9, 100, 14),
QT_MOC_LITERAL(10, 115, 12),
QT_MOC_LITERAL(11, 128, 11),
QT_MOC_LITERAL(12, 140, 28),
QT_MOC_LITERAL(13, 169, 20),
QT_MOC_LITERAL(14, 190, 19),
QT_MOC_LITERAL(15, 210, 15),
QT_MOC_LITERAL(16, 226, 16)
    },
    "WebCore::SocketStreamHandlePrivate\0"
    "socketConnected\0\0socketReadyRead\0send\0"
    "const char*\0data\0len\0close\0socketSentData\0"
    "socketClosed\0socketError\0"
    "QAbstractSocket::SocketError\0"
    "socketClosedCallback\0socketErrorCallback\0"
    "socketSslErrors\0QList<QSslError>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebCore__SocketStreamHandlePrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    2,   66,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      13,    0,   77,    2, 0x0a /* Public */,
      14,    1,   78,    2, 0x0a /* Public */,
      15,    1,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 16,    2,

       0        // eod
};

void WebCore::SocketStreamHandlePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SocketStreamHandlePrivate *_t = static_cast<SocketStreamHandlePrivate *>(_o);
        switch (_id) {
        case 0: _t->socketConnected(); break;
        case 1: _t->socketReadyRead(); break;
        case 2: { int _r = _t->send((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->close(); break;
        case 4: _t->socketSentData(); break;
        case 5: _t->socketClosed(); break;
        case 6: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->socketClosedCallback(); break;
        case 8: _t->socketErrorCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->socketSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject WebCore::SocketStreamHandlePrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__SocketStreamHandlePrivate.data,
      qt_meta_data_WebCore__SocketStreamHandlePrivate,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebCore::SocketStreamHandlePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebCore::SocketStreamHandlePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__SocketStreamHandlePrivate.stringdata))
        return static_cast<void*>(const_cast< SocketStreamHandlePrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::SocketStreamHandlePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
