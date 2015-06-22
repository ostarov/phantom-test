/****************************************************************************
** Meta object code from reading C++ file 'qwebkitplatformplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt/Api/qwebkitplatformplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebkitplatformplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWebSelectMethod_t {
    QByteArrayData data[7];
    char stringdata[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebSelectMethod_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebSelectMethod_t qt_meta_stringdata_QWebSelectMethod = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 10),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 5),
QT_MOC_LITERAL(4, 35, 23),
QT_MOC_LITERAL(5, 59, 5),
QT_MOC_LITERAL(6, 65, 7)
    },
    "QWebSelectMethod\0selectItem\0\0index\0"
    "allowMultiplySelections\0shift\0didHide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebSelectMethod[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       6,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void,

       0        // eod
};

void QWebSelectMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebSelectMethod *_t = static_cast<QWebSelectMethod *>(_o);
        switch (_id) {
        case 0: _t->selectItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->didHide(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWebSelectMethod::*_t)(int , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebSelectMethod::selectItem)) {
                *result = 0;
            }
        }
        {
            typedef void (QWebSelectMethod::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebSelectMethod::didHide)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QWebSelectMethod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebSelectMethod.data,
      qt_meta_data_QWebSelectMethod,  qt_static_metacall, 0, 0}
};


const QMetaObject *QWebSelectMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebSelectMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebSelectMethod.stringdata))
        return static_cast<void*>(const_cast< QWebSelectMethod*>(this));
    return QObject::qt_metacast(_clname);
}

int QWebSelectMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QWebSelectMethod::selectItem(int _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWebSelectMethod::didHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
struct qt_meta_stringdata_QWebNotificationPresenter_t {
    QByteArrayData data[4];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebNotificationPresenter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebNotificationPresenter_t qt_meta_stringdata_QWebNotificationPresenter = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 18),
QT_MOC_LITERAL(2, 45, 0),
QT_MOC_LITERAL(3, 46, 19)
    },
    "QWebNotificationPresenter\0notificationClosed\0"
    "\0notificationClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebNotificationPresenter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QWebNotificationPresenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebNotificationPresenter *_t = static_cast<QWebNotificationPresenter *>(_o);
        switch (_id) {
        case 0: _t->notificationClosed(); break;
        case 1: _t->notificationClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWebNotificationPresenter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebNotificationPresenter::notificationClosed)) {
                *result = 0;
            }
        }
        {
            typedef void (QWebNotificationPresenter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebNotificationPresenter::notificationClicked)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QWebNotificationPresenter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebNotificationPresenter.data,
      qt_meta_data_QWebNotificationPresenter,  qt_static_metacall, 0, 0}
};


const QMetaObject *QWebNotificationPresenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebNotificationPresenter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebNotificationPresenter.stringdata))
        return static_cast<void*>(const_cast< QWebNotificationPresenter*>(this));
    return QObject::qt_metacast(_clname);
}

int QWebNotificationPresenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QWebNotificationPresenter::notificationClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QWebNotificationPresenter::notificationClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
struct qt_meta_stringdata_QWebHapticFeedbackPlayer_t {
    QByteArrayData data[1];
    char stringdata[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebHapticFeedbackPlayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebHapticFeedbackPlayer_t qt_meta_stringdata_QWebHapticFeedbackPlayer = {
    {
QT_MOC_LITERAL(0, 0, 24)
    },
    "QWebHapticFeedbackPlayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebHapticFeedbackPlayer[] = {

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

void QWebHapticFeedbackPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QWebHapticFeedbackPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebHapticFeedbackPlayer.data,
      qt_meta_data_QWebHapticFeedbackPlayer,  qt_static_metacall, 0, 0}
};


const QMetaObject *QWebHapticFeedbackPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebHapticFeedbackPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebHapticFeedbackPlayer.stringdata))
        return static_cast<void*>(const_cast< QWebHapticFeedbackPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int QWebHapticFeedbackPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QWebTouchModifier_t {
    QByteArrayData data[1];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebTouchModifier_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebTouchModifier_t qt_meta_stringdata_QWebTouchModifier = {
    {
QT_MOC_LITERAL(0, 0, 17)
    },
    "QWebTouchModifier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebTouchModifier[] = {

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

void QWebTouchModifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QWebTouchModifier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebTouchModifier.data,
      qt_meta_data_QWebTouchModifier,  qt_static_metacall, 0, 0}
};


const QMetaObject *QWebTouchModifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebTouchModifier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebTouchModifier.stringdata))
        return static_cast<void*>(const_cast< QWebTouchModifier*>(this));
    return QObject::qt_metacast(_clname);
}

int QWebTouchModifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QWebSpellChecker_t {
    QByteArrayData data[1];
    char stringdata[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebSpellChecker_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebSpellChecker_t qt_meta_stringdata_QWebSpellChecker = {
    {
QT_MOC_LITERAL(0, 0, 16)
    },
    "QWebSpellChecker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebSpellChecker[] = {

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

void QWebSpellChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QWebSpellChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebSpellChecker.data,
      qt_meta_data_QWebSpellChecker,  qt_static_metacall, 0, 0}
};


const QMetaObject *QWebSpellChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebSpellChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebSpellChecker.stringdata))
        return static_cast<void*>(const_cast< QWebSpellChecker*>(this));
    return QObject::qt_metacast(_clname);
}

int QWebSpellChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
