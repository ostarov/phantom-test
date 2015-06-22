/****************************************************************************
** Meta object code from reading C++ file 'qwebview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WebKit/qt/WidgetApi/qwebview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWebView_t {
    QByteArrayData data[31];
    char stringdata[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebView_t qt_meta_stringdata_QWebView = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 11),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 12),
QT_MOC_LITERAL(4, 35, 8),
QT_MOC_LITERAL(5, 44, 12),
QT_MOC_LITERAL(6, 57, 12),
QT_MOC_LITERAL(7, 70, 5),
QT_MOC_LITERAL(8, 76, 16),
QT_MOC_LITERAL(9, 93, 4),
QT_MOC_LITERAL(10, 98, 11),
QT_MOC_LITERAL(11, 110, 16),
QT_MOC_LITERAL(12, 127, 11),
QT_MOC_LITERAL(13, 139, 10),
QT_MOC_LITERAL(14, 150, 4),
QT_MOC_LITERAL(15, 155, 4),
QT_MOC_LITERAL(16, 160, 7),
QT_MOC_LITERAL(17, 168, 6),
QT_MOC_LITERAL(18, 175, 5),
QT_MOC_LITERAL(19, 181, 9),
QT_MOC_LITERAL(20, 191, 16),
QT_MOC_LITERAL(21, 208, 3),
QT_MOC_LITERAL(22, 212, 4),
QT_MOC_LITERAL(23, 217, 12),
QT_MOC_LITERAL(24, 230, 12),
QT_MOC_LITERAL(25, 243, 12),
QT_MOC_LITERAL(26, 256, 8),
QT_MOC_LITERAL(27, 265, 18),
QT_MOC_LITERAL(28, 284, 10),
QT_MOC_LITERAL(29, 295, 11),
QT_MOC_LITERAL(30, 307, 21)
    },
    "QWebView\0loadStarted\0\0loadProgress\0"
    "progress\0loadFinished\0titleChanged\0"
    "title\0statusBarMessage\0text\0linkClicked\0"
    "selectionChanged\0iconChanged\0urlChanged\0"
    "stop\0back\0forward\0reload\0print\0QPrinter*\0"
    "_q_pageDestroyed\0url\0icon\0selectedText\0"
    "selectedHtml\0hasSelection\0modified\0"
    "textSizeMultiplier\0zoomFactor\0renderHints\0"
    "QPainter::RenderHints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
      10,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    1,   90,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,
       6,    1,   96,    2, 0x06 /* Public */,
       8,    1,   99,    2, 0x06 /* Public */,
      10,    1,  102,    2, 0x06 /* Public */,
      11,    0,  105,    2, 0x06 /* Public */,
      12,    0,  106,    2, 0x06 /* Public */,
      13,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  110,    2, 0x0a /* Public */,
      15,    0,  111,    2, 0x0a /* Public */,
      16,    0,  112,    2, 0x0a /* Public */,
      17,    0,  113,    2, 0x0a /* Public */,
      18,    1,  114,    2, 0x0a /* Public */,
      20,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095001,
      21, QMetaType::QUrl, 0x00095103,
      22, QMetaType::QIcon, 0x00095001,
      23, QMetaType::QString, 0x00095001,
      24, QMetaType::QString, 0x00095001,
      25, QMetaType::Bool, 0x00095001,
      26, QMetaType::Bool, 0x00095001,
      27, QMetaType::QReal, 0x00094103,
      28, QMetaType::QReal, 0x00095103,
      29, 0x80000000 | 30, 0x0009510b,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void QWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebView *_t = static_cast<QWebView *>(_o);
        switch (_id) {
        case 0: _t->loadStarted(); break;
        case 1: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->statusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->selectionChanged(); break;
        case 7: _t->iconChanged(); break;
        case 8: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 9: _t->stop(); break;
        case 10: _t->back(); break;
        case 11: _t->forward(); break;
        case 12: _t->reload(); break;
        case 13: _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 14: _t->d->_q_pageDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebView::loadStarted)) {
                *result = 0;
            }
        }
        {
            typedef void (QWebView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebView::loadProgress)) {
                *result = 1;
            }
        }
        {
            typedef void (QWebView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebView::loadFinished)) {
                *result = 2;
            }
        }
        {
            typedef void (QWebView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebView::titleChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QWebView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebView::statusBarMessage)) {
                *result = 4;
            }
        }
        {
            typedef void (QWebView::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebView::linkClicked)) {
                *result = 5;
            }
        }
        {
            typedef void (QWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebView::selectionChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebView::iconChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QWebView::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWebView::urlChanged)) {
                *result = 8;
            }
        }
    }
}

static const QMetaObject * const qt_meta_extradata_QWebView[] = {
        &QPainter::staticMetaObject,
    0
};

const QMetaObject QWebView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QWebView.data,
      qt_meta_data_QWebView,  qt_static_metacall, qt_meta_extradata_QWebView, 0}
};


const QMetaObject *QWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebView.stringdata))
        return static_cast<void*>(const_cast< QWebView*>(this));
    return QWidget::qt_metacast(_clname);
}

int QWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = title(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = url(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = icon(); break;
        case 3: *reinterpret_cast< QString*>(_v) = selectedText(); break;
        case 4: *reinterpret_cast< QString*>(_v) = selectedHtml(); break;
        case 5: *reinterpret_cast< bool*>(_v) = hasSelection(); break;
        case 6: *reinterpret_cast< bool*>(_v) = isModified(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = textSizeMultiplier(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = zoomFactor(); break;
        case 9: *reinterpret_cast<int*>(_v) = QFlag(renderHints()); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 7: setTextSizeMultiplier(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setZoomFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setRenderHints(QFlag(*reinterpret_cast<int*>(_v))); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QWebView::loadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QWebView::loadProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWebView::loadFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWebView::titleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QWebView::statusBarMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QWebView::linkClicked(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QWebView::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QWebView::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QWebView::urlChanged(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
