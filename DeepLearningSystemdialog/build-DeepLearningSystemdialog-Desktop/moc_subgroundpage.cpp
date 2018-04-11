/****************************************************************************
** Meta object code from reading C++ file 'subgroundpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/subgroundpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subgroundpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SubGroundPage1_t {
    QByteArrayData data[7];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubGroundPage1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubGroundPage1_t qt_meta_stringdata_SubGroundPage1 = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SubGroundPage1"
QT_MOC_LITERAL(1, 15, 29), // "SubGroundstartButton_clicked1"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "getPathSubGroundPage1"
QT_MOC_LITERAL(4, 68, 18), // "pathSubGroundPage1"
QT_MOC_LITERAL(5, 87, 24), // "showOutPutSubGroundPage1"
QT_MOC_LITERAL(6, 112, 28) // "SubGroundstopButton_clicked1"

    },
    "SubGroundPage1\0SubGroundstartButton_clicked1\0"
    "\0getPathSubGroundPage1\0pathSubGroundPage1\0"
    "showOutPutSubGroundPage1\0"
    "SubGroundstopButton_clicked1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubGroundPage1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SubGroundPage1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubGroundPage1 *_t = static_cast<SubGroundPage1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SubGroundstartButton_clicked1(); break;
        case 1: _t->getPathSubGroundPage1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showOutPutSubGroundPage1(); break;
        case 3: _t->SubGroundstopButton_clicked1(); break;
        default: ;
        }
    }
}

const QMetaObject SubGroundPage1::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SubGroundPage1.data,
      qt_meta_data_SubGroundPage1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubGroundPage1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubGroundPage1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubGroundPage1.stringdata0))
        return static_cast<void*>(const_cast< SubGroundPage1*>(this));
    return QWidget::qt_metacast(_clname);
}

int SubGroundPage1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SubGroundPage2_t {
    QByteArrayData data[7];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubGroundPage2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubGroundPage2_t qt_meta_stringdata_SubGroundPage2 = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SubGroundPage2"
QT_MOC_LITERAL(1, 15, 29), // "SubGroundstartButton_clicked2"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "getPathSubGroundPage2"
QT_MOC_LITERAL(4, 68, 18), // "pathSubGroundPage2"
QT_MOC_LITERAL(5, 87, 24), // "showOutPutSubGroundPage2"
QT_MOC_LITERAL(6, 112, 28) // "SubGroundstopButton_clicked2"

    },
    "SubGroundPage2\0SubGroundstartButton_clicked2\0"
    "\0getPathSubGroundPage2\0pathSubGroundPage2\0"
    "showOutPutSubGroundPage2\0"
    "SubGroundstopButton_clicked2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubGroundPage2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SubGroundPage2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubGroundPage2 *_t = static_cast<SubGroundPage2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SubGroundstartButton_clicked2(); break;
        case 1: _t->getPathSubGroundPage2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showOutPutSubGroundPage2(); break;
        case 3: _t->SubGroundstopButton_clicked2(); break;
        default: ;
        }
    }
}

const QMetaObject SubGroundPage2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SubGroundPage2.data,
      qt_meta_data_SubGroundPage2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubGroundPage2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubGroundPage2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubGroundPage2.stringdata0))
        return static_cast<void*>(const_cast< SubGroundPage2*>(this));
    return QWidget::qt_metacast(_clname);
}

int SubGroundPage2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SubGroundPage3_t {
    QByteArrayData data[7];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubGroundPage3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubGroundPage3_t qt_meta_stringdata_SubGroundPage3 = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SubGroundPage3"
QT_MOC_LITERAL(1, 15, 29), // "SubGroundstartButton_clicked3"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "getPathSubGroundPage3"
QT_MOC_LITERAL(4, 68, 18), // "pathSubGroundPage3"
QT_MOC_LITERAL(5, 87, 24), // "showOutPutSubGroundPage3"
QT_MOC_LITERAL(6, 112, 28) // "SubGroundstopButton_clicked3"

    },
    "SubGroundPage3\0SubGroundstartButton_clicked3\0"
    "\0getPathSubGroundPage3\0pathSubGroundPage3\0"
    "showOutPutSubGroundPage3\0"
    "SubGroundstopButton_clicked3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubGroundPage3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SubGroundPage3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubGroundPage3 *_t = static_cast<SubGroundPage3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SubGroundstartButton_clicked3(); break;
        case 1: _t->getPathSubGroundPage3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showOutPutSubGroundPage3(); break;
        case 3: _t->SubGroundstopButton_clicked3(); break;
        default: ;
        }
    }
}

const QMetaObject SubGroundPage3::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SubGroundPage3.data,
      qt_meta_data_SubGroundPage3,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubGroundPage3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubGroundPage3::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubGroundPage3.stringdata0))
        return static_cast<void*>(const_cast< SubGroundPage3*>(this));
    return QWidget::qt_metacast(_clname);
}

int SubGroundPage3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SubGroundPage4_t {
    QByteArrayData data[7];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubGroundPage4_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubGroundPage4_t qt_meta_stringdata_SubGroundPage4 = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SubGroundPage4"
QT_MOC_LITERAL(1, 15, 29), // "SubGroundstartButton_clicked4"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "getPathSubGroundPage4"
QT_MOC_LITERAL(4, 68, 18), // "pathSubGroundPage4"
QT_MOC_LITERAL(5, 87, 24), // "showOutPutSubGroundPage4"
QT_MOC_LITERAL(6, 112, 28) // "SubGroundstopButton_clicked4"

    },
    "SubGroundPage4\0SubGroundstartButton_clicked4\0"
    "\0getPathSubGroundPage4\0pathSubGroundPage4\0"
    "showOutPutSubGroundPage4\0"
    "SubGroundstopButton_clicked4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubGroundPage4[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SubGroundPage4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubGroundPage4 *_t = static_cast<SubGroundPage4 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SubGroundstartButton_clicked4(); break;
        case 1: _t->getPathSubGroundPage4((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showOutPutSubGroundPage4(); break;
        case 3: _t->SubGroundstopButton_clicked4(); break;
        default: ;
        }
    }
}

const QMetaObject SubGroundPage4::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SubGroundPage4.data,
      qt_meta_data_SubGroundPage4,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubGroundPage4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubGroundPage4::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubGroundPage4.stringdata0))
        return static_cast<void*>(const_cast< SubGroundPage4*>(this));
    return QWidget::qt_metacast(_clname);
}

int SubGroundPage4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SubGroundPage5_t {
    QByteArrayData data[7];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubGroundPage5_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubGroundPage5_t qt_meta_stringdata_SubGroundPage5 = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SubGroundPage5"
QT_MOC_LITERAL(1, 15, 29), // "SubGroundstartButton_clicked5"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "getPathSubGroundPage5"
QT_MOC_LITERAL(4, 68, 18), // "pathSubGroundPage5"
QT_MOC_LITERAL(5, 87, 24), // "showOutPutSubGroundPage5"
QT_MOC_LITERAL(6, 112, 28) // "SubGroundstopButton_clicked5"

    },
    "SubGroundPage5\0SubGroundstartButton_clicked5\0"
    "\0getPathSubGroundPage5\0pathSubGroundPage5\0"
    "showOutPutSubGroundPage5\0"
    "SubGroundstopButton_clicked5"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubGroundPage5[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SubGroundPage5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubGroundPage5 *_t = static_cast<SubGroundPage5 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SubGroundstartButton_clicked5(); break;
        case 1: _t->getPathSubGroundPage5((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showOutPutSubGroundPage5(); break;
        case 3: _t->SubGroundstopButton_clicked5(); break;
        default: ;
        }
    }
}

const QMetaObject SubGroundPage5::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SubGroundPage5.data,
      qt_meta_data_SubGroundPage5,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubGroundPage5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubGroundPage5::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubGroundPage5.stringdata0))
        return static_cast<void*>(const_cast< SubGroundPage5*>(this));
    return QWidget::qt_metacast(_clname);
}

int SubGroundPage5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
