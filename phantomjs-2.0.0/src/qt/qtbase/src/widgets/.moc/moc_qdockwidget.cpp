/****************************************************************************
** Meta object code from reading C++ file 'qdockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgets/qdockwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDockWidget_t {
    QByteArrayData data[28];
    char stringdata[448];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDockWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDockWidget_t qt_meta_stringdata_QDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 15),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 31),
QT_MOC_LITERAL(4, 61, 8),
QT_MOC_LITERAL(5, 70, 15),
QT_MOC_LITERAL(6, 86, 8),
QT_MOC_LITERAL(7, 95, 19),
QT_MOC_LITERAL(8, 115, 19),
QT_MOC_LITERAL(9, 135, 12),
QT_MOC_LITERAL(10, 148, 17),
QT_MOC_LITERAL(11, 166, 7),
QT_MOC_LITERAL(12, 174, 19),
QT_MOC_LITERAL(13, 194, 18),
QT_MOC_LITERAL(14, 213, 4),
QT_MOC_LITERAL(15, 218, 13),
QT_MOC_LITERAL(16, 232, 17),
QT_MOC_LITERAL(17, 250, 8),
QT_MOC_LITERAL(18, 259, 18),
QT_MOC_LITERAL(19, 278, 11),
QT_MOC_LITERAL(20, 290, 18),
QT_MOC_LITERAL(21, 309, 17),
QT_MOC_LITERAL(22, 327, 19),
QT_MOC_LITERAL(23, 347, 26),
QT_MOC_LITERAL(24, 374, 21),
QT_MOC_LITERAL(25, 396, 21),
QT_MOC_LITERAL(26, 418, 20),
QT_MOC_LITERAL(27, 439, 8)
    },
    "QDockWidget\0featuresChanged\0\0"
    "QDockWidget::DockWidgetFeatures\0"
    "features\0topLevelChanged\0topLevel\0"
    "allowedAreasChanged\0Qt::DockWidgetAreas\0"
    "allowedAreas\0visibilityChanged\0visible\0"
    "dockLocationChanged\0Qt::DockWidgetArea\0"
    "area\0_q_toggleView\0_q_toggleTopLevel\0"
    "floating\0DockWidgetFeatures\0windowTitle\0"
    "DockWidgetClosable\0DockWidgetMovable\0"
    "DockWidgetFloatable\0DockWidgetVerticalTitleBar\0"
    "DockWidgetFeatureMask\0AllDockWidgetFeatures\0"
    "NoDockWidgetFeatures\0Reserved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDockWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   68, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
      10,    1,   58,    2, 0x06 /* Public */,
      12,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   64,    2, 0x08 /* Private */,
      16,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::Bool, 0x00095103,
       4, 0x80000000 | 18, 0x0049510b,
       9, 0x80000000 | 8, 0x0049510b,
      19, QMetaType::QString, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       2,
       0,

 // enums: name, flags, count, data
      18, 0x1,    8,   88,

 // enum data: key, value
      20, uint(QDockWidget::DockWidgetClosable),
      21, uint(QDockWidget::DockWidgetMovable),
      22, uint(QDockWidget::DockWidgetFloatable),
      23, uint(QDockWidget::DockWidgetVerticalTitleBar),
      24, uint(QDockWidget::DockWidgetFeatureMask),
      25, uint(QDockWidget::AllDockWidgetFeatures),
      26, uint(QDockWidget::NoDockWidgetFeatures),
      27, uint(QDockWidget::Reserved),

       0        // eod
};

void QDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDockWidget *_t = static_cast<QDockWidget *>(_o);
        switch (_id) {
        case 0: _t->featuresChanged((*reinterpret_cast< QDockWidget::DockWidgetFeatures(*)>(_a[1]))); break;
        case 1: _t->topLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->allowedAreasChanged((*reinterpret_cast< Qt::DockWidgetAreas(*)>(_a[1]))); break;
        case 3: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->dockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_toggleView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_toggleTopLevel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDockWidget::*_t)(QDockWidget::DockWidgetFeatures );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDockWidget::featuresChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QDockWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDockWidget::topLevelChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QDockWidget::*_t)(Qt::DockWidgetAreas );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDockWidget::allowedAreasChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QDockWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDockWidget::visibilityChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QDockWidget::*_t)(Qt::DockWidgetArea );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDockWidget::dockLocationChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QDockWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDockWidget.data,
      qt_meta_data_QDockWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *QDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDockWidget.stringdata))
        return static_cast<void*>(const_cast< QDockWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isFloating(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(features()); break;
        case 2: *reinterpret_cast< Qt::DockWidgetAreas*>(_v) = allowedAreas(); break;
        case 3: *reinterpret_cast< QString*>(_v) = windowTitle(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFloating(*reinterpret_cast< bool*>(_v)); break;
        case 1: setFeatures(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: setAllowedAreas(*reinterpret_cast< Qt::DockWidgetAreas*>(_v)); break;
        case 3: setWindowTitle(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDockWidget::featuresChanged(QDockWidget::DockWidgetFeatures _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDockWidget::topLevelChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDockWidget::allowedAreasChanged(Qt::DockWidgetAreas _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDockWidget::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDockWidget::dockLocationChanged(Qt::DockWidgetArea _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
