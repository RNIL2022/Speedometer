/****************************************************************************
** Meta object code from reading C++ file 'serial.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Animation800x480/src/serial.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSReceiverThreadENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSReceiverThreadENDCLASS = QtMocHelpers::stringData(
    "ReceiverThread",
    "request",
    "",
    "s",
    "error",
    "timeout",
    "sdataChanged",
    "nameChanged",
    "tempChanged",
    "setSdata",
    "setName",
    "setTemp",
    "sdata",
    "name",
    "temp"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSReceiverThreadENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[15];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[6];
    char stringdata5[8];
    char stringdata6[13];
    char stringdata7[12];
    char stringdata8[12];
    char stringdata9[9];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[6];
    char stringdata13[5];
    char stringdata14[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSReceiverThreadENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSReceiverThreadENDCLASS_t qt_meta_stringdata_CLASSReceiverThreadENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "ReceiverThread"
        QT_MOC_LITERAL(15, 7),  // "request"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 1),  // "s"
        QT_MOC_LITERAL(26, 5),  // "error"
        QT_MOC_LITERAL(32, 7),  // "timeout"
        QT_MOC_LITERAL(40, 12),  // "sdataChanged"
        QT_MOC_LITERAL(53, 11),  // "nameChanged"
        QT_MOC_LITERAL(65, 11),  // "tempChanged"
        QT_MOC_LITERAL(77, 8),  // "setSdata"
        QT_MOC_LITERAL(86, 7),  // "setName"
        QT_MOC_LITERAL(94, 7),  // "setTemp"
        QT_MOC_LITERAL(102, 5),  // "sdata"
        QT_MOC_LITERAL(108, 4),  // "name"
        QT_MOC_LITERAL(113, 4)   // "temp"
    },
    "ReceiverThread",
    "request",
    "",
    "s",
    "error",
    "timeout",
    "sdataChanged",
    "nameChanged",
    "tempChanged",
    "setSdata",
    "setName",
    "setTemp",
    "sdata",
    "name",
    "temp"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSReceiverThreadENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   83, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    4 /* Public */,
       4,    1,   71,    2, 0x06,    6 /* Public */,
       5,    1,   74,    2, 0x06,    8 /* Public */,
       6,    0,   77,    2, 0x06,   10 /* Public */,
       7,    0,   78,    2, 0x06,   11 /* Public */,
       8,    0,   79,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   80,    2, 0x0a,   13 /* Public */,
      10,    0,   81,    2, 0x0a,   14 /* Public */,
      11,    0,   82,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00015103, uint(3), 0,
      13, QMetaType::Int, 0x00015103, uint(4), 0,
      14, QMetaType::QString, 0x00015103, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ReceiverThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSReceiverThreadENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSReceiverThreadENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSReceiverThreadENDCLASS_t,
        // property 'sdata'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'temp'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ReceiverThread, std::true_type>,
        // method 'request'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sdataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tempChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSdata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTemp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ReceiverThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReceiverThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->request((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->timeout((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->sdataChanged(); break;
        case 4: _t->nameChanged(); break;
        case 5: _t->tempChanged(); break;
        case 6: _t->setSdata(); break;
        case 7: _t->setName(); break;
        case 8: _t->setTemp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReceiverThread::*)(const QString & );
            if (_t _q_method = &ReceiverThread::request; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReceiverThread::*)(const QString & );
            if (_t _q_method = &ReceiverThread::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ReceiverThread::*)(const QString & );
            if (_t _q_method = &ReceiverThread::timeout; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ReceiverThread::*)();
            if (_t _q_method = &ReceiverThread::sdataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ReceiverThread::*)();
            if (_t _q_method = &ReceiverThread::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ReceiverThread::*)();
            if (_t _q_method = &ReceiverThread::tempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ReceiverThread *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->sdata(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->temp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ReceiverThread *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSdata(); break;
        case 1: _t->setName(); break;
        case 2: _t->setTemp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ReceiverThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiverThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSReceiverThreadENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ReceiverThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ReceiverThread::request(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReceiverThread::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReceiverThread::timeout(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ReceiverThread::sdataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ReceiverThread::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ReceiverThread::tempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
