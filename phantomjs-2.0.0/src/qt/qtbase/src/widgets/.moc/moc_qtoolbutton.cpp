/****************************************************************************
** Meta object code from reading C++ file 'qtoolbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgets/qtoolbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtoolbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QToolButton_t {
    QByteArrayData data[22];
    char stringdata[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QToolButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QToolButton_t qt_meta_stringdata_QToolButton = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 9),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 8),
QT_MOC_LITERAL(4, 32, 8),
QT_MOC_LITERAL(5, 41, 18),
QT_MOC_LITERAL(6, 60, 19),
QT_MOC_LITERAL(7, 80, 5),
QT_MOC_LITERAL(8, 86, 16),
QT_MOC_LITERAL(9, 103, 16),
QT_MOC_LITERAL(10, 120, 19),
QT_MOC_LITERAL(11, 140, 16),
QT_MOC_LITERAL(12, 157, 18),
QT_MOC_LITERAL(13, 176, 9),
QT_MOC_LITERAL(14, 186, 19),
QT_MOC_LITERAL(15, 206, 15),
QT_MOC_LITERAL(16, 222, 9),
QT_MOC_LITERAL(17, 232, 9),
QT_MOC_LITERAL(18, 242, 13),
QT_MOC_LITERAL(19, 256, 12),
QT_MOC_LITERAL(20, 269, 15),
QT_MOC_LITERAL(21, 285, 12)
    },
    "QToolButton\0triggered\0\0QAction*\0"
    "showMenu\0setToolButtonStyle\0"
    "Qt::ToolButtonStyle\0style\0setDefaultAction\0"
    "_q_buttonPressed\0_q_updateButtonDown\0"
    "_q_menuTriggered\0_q_actionTriggered\0"
    "popupMode\0ToolButtonPopupMode\0"
    "toolButtonStyle\0autoRaise\0arrowType\0"
    "Qt::ArrowType\0DelayedPopup\0MenuButtonPopup\0"
    "InstantPopup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QToolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   70, // properties
       1,   82, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    1,   66,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x0009510b,
      15, 0x80000000 | 6, 0x0009510b,
      16, QMetaType::Bool, 0x00095103,
      17, 0x80000000 | 18, 0x0009510b,

 // enums: name, flags, count, data
      14, 0x0,    3,   86,

 // enum data: key, value
      19, uint(QToolButton::DelayedPopup),
      20, uint(QToolButton::MenuButtonPopup),
      21, uint(QToolButton::InstantPopup),

       0        // eod
};

void QToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QToolButton *_t = static_cast<QToolButton *>(_o);
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->showMenu(); break;
        case 2: _t->setToolButtonStyle((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 3: _t->setDefaultAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_buttonPressed(); break;
        case 5: _t->d_func()->_q_updateButtonDown(); break;
        case 6: _t->d_func()->_q_menuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->d_func()->_q_actionTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QToolButton::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QToolButton::triggered)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QToolButton::staticMetaObject = {
    { &QAbstractButton::staticMetaObject, qt_meta_stringdata_QToolButton.data,
      qt_meta_data_QToolButton,  qt_static_metacall, 0, 0}
};


const QMetaObject *QToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QToolButton.stringdata))
        return static_cast<void*>(const_cast< QToolButton*>(this));
    return QAbstractButton::qt_metacast(_clname);
}

int QToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ToolButtonPopupMode*>(_v) = popupMode(); break;
        case 1: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = toolButtonStyle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = autoRaise(); break;
        case 3: *reinterpret_cast< Qt::ArrowType*>(_v) = arrowType(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPopupMode(*reinterpret_cast< ToolButtonPopupMode*>(_v)); break;
        case 1: setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        case 2: setAutoRaise(*reinterpret_cast< bool*>(_v)); break;
        case 3: setArrowType(*reinterpret_cast< Qt::ArrowType*>(_v)); break;
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
void QToolButton::triggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
