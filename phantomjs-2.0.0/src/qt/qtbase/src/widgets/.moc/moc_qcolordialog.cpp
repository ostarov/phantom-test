/****************************************************************************
** Meta object code from reading C++ file 'qcolordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialogs/qcolordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcolordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QColorDialog_t {
    QByteArrayData data[24];
    char stringdata[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QColorDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QColorDialog_t qt_meta_stringdata_QColorDialog = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 19),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 5),
QT_MOC_LITERAL(4, 40, 13),
QT_MOC_LITERAL(5, 54, 12),
QT_MOC_LITERAL(6, 67, 9),
QT_MOC_LITERAL(7, 77, 1),
QT_MOC_LITERAL(8, 79, 1),
QT_MOC_LITERAL(9, 81, 1),
QT_MOC_LITERAL(10, 83, 18),
QT_MOC_LITERAL(11, 102, 4),
QT_MOC_LITERAL(12, 107, 3),
QT_MOC_LITERAL(13, 111, 13),
QT_MOC_LITERAL(14, 125, 12),
QT_MOC_LITERAL(15, 138, 14),
QT_MOC_LITERAL(16, 153, 18),
QT_MOC_LITERAL(17, 172, 12),
QT_MOC_LITERAL(18, 185, 7),
QT_MOC_LITERAL(19, 193, 18),
QT_MOC_LITERAL(20, 212, 17),
QT_MOC_LITERAL(21, 230, 16),
QT_MOC_LITERAL(22, 247, 9),
QT_MOC_LITERAL(23, 257, 19)
    },
    "QColorDialog\0currentColorChanged\0\0"
    "color\0colorSelected\0_q_addCustom\0"
    "_q_newHsv\0h\0s\0v\0_q_newColorTypedIn\0"
    "QRgb\0rgb\0_q_nextCustom\0_q_newCustom\0"
    "_q_newStandard\0_q_pickScreenColor\0"
    "currentColor\0options\0ColorDialogOptions\0"
    "ColorDialogOption\0ShowAlphaChannel\0"
    "NoButtons\0DontUseNativeDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QColorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   92, // properties
       1,  100, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   65,    2, 0x08 /* Private */,
       6,    3,   66,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      13,    2,   76,    2, 0x08 /* Private */,
      14,    2,   81,    2, 0x08 /* Private */,
      15,    2,   86,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::QColor, 0x00495103,
      18, 0x80000000 | 19, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, flags, count, data
      20, 0x0,    3,  104,

 // enum data: key, value
      21, uint(QColorDialog::ShowAlphaChannel),
      22, uint(QColorDialog::NoButtons),
      23, uint(QColorDialog::DontUseNativeDialog),

       0        // eod
};

void QColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QColorDialog *_t = static_cast<QColorDialog *>(_o);
        switch (_id) {
        case 0: _t->currentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->colorSelected((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_addCustom(); break;
        case 3: _t->d_func()->_q_newHsv((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->d_func()->_q_newColorTypedIn((*reinterpret_cast< QRgb(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_nextCustom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->d_func()->_q_newCustom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->d_func()->_q_newStandard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->d_func()->_q_pickScreenColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QColorDialog::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QColorDialog::currentColorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QColorDialog::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QColorDialog::colorSelected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QColorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QColorDialog.data,
      qt_meta_data_QColorDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *QColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QColorDialog.stringdata))
        return static_cast<void*>(const_cast< QColorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = currentColor(); break;
        case 1: *reinterpret_cast< ColorDialogOptions*>(_v) = options(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setOptions(*reinterpret_cast< ColorDialogOptions*>(_v)); break;
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
void QColorDialog::currentColorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QColorDialog::colorSelected(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
