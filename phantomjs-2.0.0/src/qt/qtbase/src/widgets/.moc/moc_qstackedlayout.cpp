/****************************************************************************
** Meta object code from reading C++ file 'qstackedlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kernel/qstackedlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstackedlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QStackedLayout_t {
    QByteArrayData data[14];
    char stringdata[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QStackedLayout_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QStackedLayout_t qt_meta_stringdata_QStackedLayout = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 13),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 5),
QT_MOC_LITERAL(4, 36, 14),
QT_MOC_LITERAL(5, 51, 15),
QT_MOC_LITERAL(6, 67, 16),
QT_MOC_LITERAL(7, 84, 8),
QT_MOC_LITERAL(8, 93, 1),
QT_MOC_LITERAL(9, 95, 12),
QT_MOC_LITERAL(10, 108, 12),
QT_MOC_LITERAL(11, 121, 12),
QT_MOC_LITERAL(12, 134, 8),
QT_MOC_LITERAL(13, 143, 8)
    },
    "QStackedLayout\0widgetRemoved\0\0index\0"
    "currentChanged\0setCurrentIndex\0"
    "setCurrentWidget\0QWidget*\0w\0currentIndex\0"
    "stackingMode\0StackingMode\0StackOne\0"
    "StackAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QStackedLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00495103,
      10, 0x80000000 | 11, 0x0009510b,

 // properties: notify_signal_id
       1,
       0,

 // enums: name, flags, count, data
      11, 0x0,    2,   58,

 // enum data: key, value
      12, uint(QStackedLayout::StackOne),
      13, uint(QStackedLayout::StackAll),

       0        // eod
};

void QStackedLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QStackedLayout *_t = static_cast<QStackedLayout *>(_o);
        switch (_id) {
        case 0: _t->widgetRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setCurrentWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QStackedLayout::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStackedLayout::widgetRemoved)) {
                *result = 0;
            }
        }
        {
            typedef void (QStackedLayout::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStackedLayout::currentChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QStackedLayout::staticMetaObject = {
    { &QLayout::staticMetaObject, qt_meta_stringdata_QStackedLayout.data,
      qt_meta_data_QStackedLayout,  qt_static_metacall, 0, 0}
};


const QMetaObject *QStackedLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStackedLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStackedLayout.stringdata))
        return static_cast<void*>(const_cast< QStackedLayout*>(this));
    return QLayout::qt_metacast(_clname);
}

int QStackedLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLayout::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< int*>(_v) = currentIndex(); break;
        case 1: *reinterpret_cast< StackingMode*>(_v) = stackingMode(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: setStackingMode(*reinterpret_cast< StackingMode*>(_v)); break;
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

// SIGNAL 0
void QStackedLayout::widgetRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QStackedLayout::currentChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE