/****************************************************************************
** Meta object code from reading C++ file 'qcommandline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qcommandline/qcommandline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcommandline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCommandLine_t {
    QByteArrayData data[9];
    char stringdata[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCommandLine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCommandLine_t qt_meta_stringdata_QCommandLine = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 11),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 4),
QT_MOC_LITERAL(4, 31, 11),
QT_MOC_LITERAL(5, 43, 5),
QT_MOC_LITERAL(6, 49, 10),
QT_MOC_LITERAL(7, 60, 10),
QT_MOC_LITERAL(8, 71, 5)
    },
    "QCommandLine\0switchFound\0\0name\0"
    "optionFound\0value\0paramFound\0parseError\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCommandLine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,
       6,    2,   42,    2, 0x06 /* Public */,
       7,    1,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    5,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void QCommandLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCommandLine *_t = static_cast<QCommandLine *>(_o);
        switch (_id) {
        case 0: _t->switchFound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->optionFound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 2: _t->paramFound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->parseError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCommandLine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCommandLine::switchFound)) {
                *result = 0;
            }
        }
        {
            typedef void (QCommandLine::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCommandLine::optionFound)) {
                *result = 1;
            }
        }
        {
            typedef void (QCommandLine::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCommandLine::paramFound)) {
                *result = 2;
            }
        }
        {
            typedef void (QCommandLine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCommandLine::parseError)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QCommandLine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCommandLine.data,
      qt_meta_data_QCommandLine,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCommandLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCommandLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCommandLine.stringdata))
        return static_cast<void*>(const_cast< QCommandLine*>(this));
    return QObject::qt_metacast(_clname);
}

int QCommandLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QCommandLine::switchFound(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCommandLine::optionFound(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCommandLine::paramFound(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCommandLine::parseError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE