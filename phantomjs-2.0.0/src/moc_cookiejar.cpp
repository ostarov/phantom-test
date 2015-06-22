/****************************************************************************
** Meta object code from reading C++ file 'cookiejar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cookiejar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cookiejar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CookieJar_t {
    QByteArrayData data[19];
    char stringdata[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CookieJar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CookieJar_t qt_meta_stringdata_CookieJar = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 9),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 6),
QT_MOC_LITERAL(4, 28, 16),
QT_MOC_LITERAL(5, 45, 3),
QT_MOC_LITERAL(6, 49, 17),
QT_MOC_LITERAL(7, 67, 11),
QT_MOC_LITERAL(8, 79, 12),
QT_MOC_LITERAL(9, 92, 11),
QT_MOC_LITERAL(10, 104, 4),
QT_MOC_LITERAL(11, 109, 12),
QT_MOC_LITERAL(12, 122, 12),
QT_MOC_LITERAL(13, 135, 5),
QT_MOC_LITERAL(14, 141, 19),
QT_MOC_LITERAL(15, 161, 19),
QT_MOC_LITERAL(16, 181, 4),
QT_MOC_LITERAL(17, 186, 4),
QT_MOC_LITERAL(18, 191, 7)
    },
    "CookieJar\0addCookie\0\0cookie\0"
    "addCookieFromMap\0url\0addCookiesFromMap\0"
    "cookiesList\0cookiesToMap\0cookieToMap\0"
    "name\0deleteCookie\0clearCookies\0close\0"
    "purgeExpiredCookies\0purgeSessionCookies\0"
    "save\0load\0cookies"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CookieJar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       1,  144, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x0a /* Public */,
       4,    2,  102,    2, 0x0a /* Public */,
       4,    1,  107,    2, 0x2a /* Public | MethodCloned */,
       6,    2,  110,    2, 0x0a /* Public */,
       6,    1,  115,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  118,    2, 0x0a /* Public */,
       8,    0,  121,    2, 0x2a /* Public | MethodCloned */,
       9,    2,  122,    2, 0x0a /* Public */,
       9,    1,  127,    2, 0x2a /* Public | MethodCloned */,
      11,    2,  130,    2, 0x0a /* Public */,
      11,    1,  135,    2, 0x2a /* Public | MethodCloned */,
      12,    0,  138,    2, 0x0a /* Public */,
      13,    0,  139,    2, 0x0a /* Public */,
      14,    0,  140,    2, 0x08 /* Private */,
      15,    0,  141,    2, 0x08 /* Private */,
      16,    0,  142,    2, 0x08 /* Private */,
      17,    0,  143,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Bool, QMetaType::QVariantMap, QMetaType::QString,    3,    5,
    QMetaType::Bool, QMetaType::QVariantMap,    3,
    QMetaType::Bool, QMetaType::QVariantList, QMetaType::QString,    7,    5,
    QMetaType::Bool, QMetaType::QVariantList,    7,
    QMetaType::QVariantList, QMetaType::QString,    5,
    QMetaType::QVariantList,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,   10,    5,
    QMetaType::QVariantMap, QMetaType::QString,   10,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   10,    5,
    QMetaType::Bool, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::QVariantList, 0x00095003,

       0        // eod
};

void CookieJar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CookieJar *_t = static_cast<CookieJar *>(_o);
        switch (_id) {
        case 0: _t->addCookie((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: { bool _r = _t->addCookieFromMap((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->addCookieFromMap((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->addCookiesFromMap((*reinterpret_cast< const QVariantList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->addCookiesFromMap((*reinterpret_cast< const QVariantList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QVariantList _r = _t->cookiesToMap((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 6: { QVariantList _r = _t->cookiesToMap();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 7: { QVariantMap _r = _t->cookieToMap((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 8: { QVariantMap _r = _t->cookieToMap((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->deleteCookie((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->deleteCookie((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->clearCookies(); break;
        case 12: _t->close(); break;
        case 13: { bool _r = _t->purgeExpiredCookies();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->purgeSessionCookies();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->save(); break;
        case 16: _t->load(); break;
        default: ;
        }
    }
}

const QMetaObject CookieJar::staticMetaObject = {
    { &QNetworkCookieJar::staticMetaObject, qt_meta_stringdata_CookieJar.data,
      qt_meta_data_CookieJar,  qt_static_metacall, 0, 0}
};


const QMetaObject *CookieJar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CookieJar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CookieJar.stringdata))
        return static_cast<void*>(const_cast< CookieJar*>(this));
    return QNetworkCookieJar::qt_metacast(_clname);
}

int CookieJar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkCookieJar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = cookiesToMap(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: addCookiesFromMap(*reinterpret_cast< QVariantList*>(_v)); break;
        }
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
QT_END_MOC_NAMESPACE
