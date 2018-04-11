/****************************************************************************
** Meta object code from reading C++ file 'subskypage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/subskypage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subskypage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SubSkyPage1_t {
    QByteArrayData data[7];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubSkyPage1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubSkyPage1_t qt_meta_stringdata_SubSkyPage1 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SubSkyPage1"
QT_MOC_LITERAL(1, 12, 26), // "SubSkystartButton_clicked1"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "getPathSubSkyPage1"
QT_MOC_LITERAL(4, 59, 15), // "pathSubSkyPage1"
QT_MOC_LITERAL(5, 75, 21), // "showOutPutSubSkyPage1"
QT_MOC_LITERAL(6, 97, 25) // "SubSkystopButton_clicked1"

    },
    "SubSkyPage1\0SubSkystartButton_clicked1\0"
    "\0getPathSubSkyPage1\0pathSubSkyPage1\0"
    "showOutPutSubSkyPage1\0SubSkystopButton_clicked1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubSkyPage1[] = {

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

void SubSkyPage1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubSkyPage1 *_t = static_cast<SubSkyPage1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SubSkystartButton_clicked1(); break;
        case 1: _t->getPathSubSkyPage1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showOutPutSubSkyPage1(); break;
        case 3: _t->SubSkystopButton_clicked1(); break;
        default: ;
        }
    }
}

const QMetaObject SubSkyPage1::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SubSkyPage1.data,
      qt_meta_data_SubSkyPage1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubSkyPage1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubSkyPage1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubSkyPage1.stringdata0))
        return static_cast<void*>(const_cast< SubSkyPage1*>(this));
    return QWidget::qt_metacast(_clname);
}

int SubSkyPage1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_SubSkyPage2_t {
    QByteArrayData data[7];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubSkyPage2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubSkyPage2_t qt_meta_stringdata_SubSkyPage2 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SubSkyPage2"
QT_MOC_LITERAL(1, 12, 26), // "SubSkystartButton_clicked2"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "getPathSubSkyPage2"
QT_MOC_LITERAL(4, 59, 15), // "pathSubSkyPage1"
QT_MOC_LITERAL(5, 75, 21), // "showOutPutSubSkyPage2"
QT_MOC_LITERAL(6, 97, 25) // "SubSkystopButton_clicked2"

    },
    "SubSkyPage2\0SubSkystartButton_clicked2\0"
    "\0getPathSubSkyPage2\0pathSubSkyPage1\0"
    "showOutPutSubSkyPage2\0SubSkystopButton_clicked2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubSkyPage2[] = {

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

void SubSkyPage2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubSkyPage2 *_t = static_cast<SubSkyPage2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SubSkystartButton_clicked2(); break;
        case 1: _t->getPathSubSkyPage2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showOutPutSubSkyPage2(); break;
        case 3: _t->SubSkystopButton_clicked2(); break;
        default: ;
        }
    }
}

const QMetaObject SubSkyPage2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SubSkyPage2.data,
      qt_meta_data_SubSkyPage2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubSkyPage2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubSkyPage2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubSkyPage2.stringdata0))
        return static_cast<void*>(const_cast< SubSkyPage2*>(this));
    return QWidget::qt_metacast(_clname);
}

int SubSkyPage2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
