/****************************************************************************
** Meta object code from reading C++ file 'FrameLoaderClientQt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt/WebCoreSupport/FrameLoaderClientQt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrameLoaderClientQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WebCore__FrameLoaderClientQt_t {
    QByteArrayData data[9];
    char stringdata[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebCore__FrameLoaderClientQt_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebCore__FrameLoaderClientQt_t qt_meta_stringdata_WebCore__FrameLoaderClientQt = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 12),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 1),
QT_MOC_LITERAL(4, 45, 12),
QT_MOC_LITERAL(5, 58, 5),
QT_MOC_LITERAL(6, 64, 18),
QT_MOC_LITERAL(7, 83, 14),
QT_MOC_LITERAL(8, 98, 22)
    },
    "WebCore::FrameLoaderClientQt\0loadProgress\0"
    "\0d\0titleChanged\0title\0unsupportedContent\0"
    "QNetworkReply*\0onIconLoadedForPageURL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebCore__FrameLoaderClientQt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void WebCore::FrameLoaderClientQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FrameLoaderClientQt *_t = static_cast<FrameLoaderClientQt *>(_o);
        switch (_id) {
        case 0: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->unsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->onIconLoadedForPageURL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FrameLoaderClientQt::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FrameLoaderClientQt::loadProgress)) {
                *result = 0;
            }
        }
        {
            typedef void (FrameLoaderClientQt::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FrameLoaderClientQt::titleChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (FrameLoaderClientQt::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FrameLoaderClientQt::unsupportedContent)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject WebCore::FrameLoaderClientQt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__FrameLoaderClientQt.data,
      qt_meta_data_WebCore__FrameLoaderClientQt,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebCore::FrameLoaderClientQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebCore::FrameLoaderClientQt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__FrameLoaderClientQt.stringdata))
        return static_cast<void*>(const_cast< FrameLoaderClientQt*>(this));
    if (!strcmp(_clname, "FrameLoaderClient"))
        return static_cast< FrameLoaderClient*>(const_cast< FrameLoaderClientQt*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::FrameLoaderClientQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void WebCore::FrameLoaderClientQt::loadProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WebCore::FrameLoaderClientQt::titleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WebCore::FrameLoaderClientQt::unsupportedContent(QNetworkReply * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
