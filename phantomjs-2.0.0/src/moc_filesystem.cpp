/****************************************************************************
** Meta object code from reading C++ file 'filesystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filesystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_File_t {
    QByteArrayData data[16];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_File_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_File_t qt_meta_stringdata_File = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 4),
QT_MOC_LITERAL(2, 10, 0),
QT_MOC_LITERAL(3, 11, 1),
QT_MOC_LITERAL(4, 13, 5),
QT_MOC_LITERAL(5, 19, 4),
QT_MOC_LITERAL(6, 24, 4),
QT_MOC_LITERAL(7, 29, 3),
QT_MOC_LITERAL(8, 33, 8),
QT_MOC_LITERAL(9, 42, 9),
QT_MOC_LITERAL(10, 52, 5),
QT_MOC_LITERAL(11, 58, 5),
QT_MOC_LITERAL(12, 64, 5),
QT_MOC_LITERAL(13, 70, 11),
QT_MOC_LITERAL(14, 82, 11),
QT_MOC_LITERAL(15, 94, 8)
    },
    "File\0read\0\0n\0write\0data\0seek\0pos\0"
    "readLine\0writeLine\0atEnd\0flush\0close\0"
    "getEncoding\0setEncoding\0encoding"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_File[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       1,    0,   72,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   73,    2, 0x0a /* Public */,
       6,    1,   76,    2, 0x0a /* Public */,
       8,    0,   79,    2, 0x0a /* Public */,
       9,    1,   80,    2, 0x0a /* Public */,
      10,    0,   83,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x0a /* Public */,
      13,    0,   86,    2, 0x0a /* Public */,
      14,    1,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QString, QMetaType::QVariant,    3,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Bool, QMetaType::LongLong,    7,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,   15,

       0        // eod
};

void File::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        File *_t = static_cast<File *>(_o);
        switch (_id) {
        case 0: { QString _r = _t->read((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->read();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->write((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->seek((*reinterpret_cast< const qint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->readLine();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->writeLine((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->atEnd();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->flush(); break;
        case 8: _t->close(); break;
        case 9: { QString _r = _t->getEncoding();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->setEncoding((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject File::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_File.data,
      qt_meta_data_File,  qt_static_metacall, 0, 0}
};


const QMetaObject *File::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *File::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_File.stringdata))
        return static_cast<void*>(const_cast< File*>(this));
    return QObject::qt_metacast(_clname);
}

int File::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_FileSystem_t {
    QByteArrayData data[33];
    char stringdata[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSystem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSystem_t qt_meta_stringdata_FileSystem = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 5),
QT_MOC_LITERAL(2, 17, 0),
QT_MOC_LITERAL(3, 18, 4),
QT_MOC_LITERAL(4, 23, 12),
QT_MOC_LITERAL(5, 36, 9),
QT_MOC_LITERAL(6, 46, 6),
QT_MOC_LITERAL(7, 53, 11),
QT_MOC_LITERAL(8, 65, 13),
QT_MOC_LITERAL(9, 79, 8),
QT_MOC_LITERAL(10, 88, 16),
QT_MOC_LITERAL(11, 105, 11),
QT_MOC_LITERAL(12, 117, 5),
QT_MOC_LITERAL(13, 123, 4),
QT_MOC_LITERAL(14, 128, 7),
QT_MOC_LITERAL(15, 136, 5),
QT_MOC_LITERAL(16, 142, 4),
QT_MOC_LITERAL(17, 147, 9),
QT_MOC_LITERAL(18, 157, 16),
QT_MOC_LITERAL(19, 174, 22),
QT_MOC_LITERAL(20, 197, 8),
QT_MOC_LITERAL(21, 206, 12),
QT_MOC_LITERAL(22, 219, 20),
QT_MOC_LITERAL(23, 240, 18),
QT_MOC_LITERAL(24, 259, 8),
QT_MOC_LITERAL(25, 268, 6),
QT_MOC_LITERAL(26, 275, 11),
QT_MOC_LITERAL(27, 287, 6),
QT_MOC_LITERAL(28, 294, 10),
QT_MOC_LITERAL(29, 305, 12),
QT_MOC_LITERAL(30, 318, 10),
QT_MOC_LITERAL(31, 329, 10),
QT_MOC_LITERAL(32, 340, 6)
    },
    "FileSystem\0_size\0\0path\0lastModified\0"
    "_copyTree\0source\0destination\0makeDirectory\0"
    "makeTree\0_removeDirectory\0_removeTree\0"
    "_open\0opts\0_remove\0_copy\0list\0separator\0"
    "workingDirectory\0changeWorkingDirectory\0"
    "absolute\0relativePath\0fromNativeSeparators\0"
    "toNativeSeparators\0readLink\0exists\0"
    "isDirectory\0isFile\0isAbsolute\0"
    "isExecutable\0isReadable\0isWritable\0"
    "isLink"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       2,  224, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x0a /* Public */,
       4,    1,  147,    2, 0x0a /* Public */,
       5,    2,  150,    2, 0x0a /* Public */,
       8,    1,  155,    2, 0x0a /* Public */,
       9,    1,  158,    2, 0x0a /* Public */,
      10,    1,  161,    2, 0x0a /* Public */,
      11,    1,  164,    2, 0x0a /* Public */,
      12,    2,  167,    2, 0x0a /* Public */,
      14,    1,  172,    2, 0x0a /* Public */,
      15,    2,  175,    2, 0x0a /* Public */,
      16,    1,  180,    2, 0x0a /* Public */,
      17,    0,  183,    2, 0x0a /* Public */,
      18,    0,  184,    2, 0x0a /* Public */,
      19,    1,  185,    2, 0x0a /* Public */,
      20,    1,  188,    2, 0x0a /* Public */,
      22,    1,  191,    2, 0x0a /* Public */,
      23,    1,  194,    2, 0x0a /* Public */,
      24,    1,  197,    2, 0x0a /* Public */,
      25,    1,  200,    2, 0x0a /* Public */,
      26,    1,  203,    2, 0x0a /* Public */,
      27,    1,  206,    2, 0x0a /* Public */,
      28,    1,  209,    2, 0x0a /* Public */,
      29,    1,  212,    2, 0x0a /* Public */,
      30,    1,  215,    2, 0x0a /* Public */,
      31,    1,  218,    2, 0x0a /* Public */,
      32,    1,  221,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::QVariant, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::QObjectStar, QMetaType::QString, QMetaType::QVariantMap,    3,   13,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::QStringList, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,   21,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00095001,
      17, QMetaType::QString, 0x00095001,

       0        // eod
};

void FileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileSystem *_t = static_cast<FileSystem *>(_o);
        switch (_id) {
        case 0: { int _r = _t->_size((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { QVariant _r = _t->lastModified((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->_copyTree((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->makeDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->makeTree((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->_removeDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->_removeTree((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QObject* _r = _t->_open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->_remove((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->_copy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QStringList _r = _t->list((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->separator();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->workingDirectory();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->changeWorkingDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->absolute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->fromNativeSeparators((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->toNativeSeparators((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->readLink((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->exists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isAbsolute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isExecutable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isReadable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isWritable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isLink((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject FileSystem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileSystem.data,
      qt_meta_data_FileSystem,  qt_static_metacall, 0, 0}
};


const QMetaObject *FileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileSystem.stringdata))
        return static_cast<void*>(const_cast< FileSystem*>(this));
    return QObject::qt_metacast(_clname);
}

int FileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = workingDirectory(); break;
        case 1: *reinterpret_cast< QString*>(_v) = separator(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
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
QT_END_MOC_NAMESPACE
