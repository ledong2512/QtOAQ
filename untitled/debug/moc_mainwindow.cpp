/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[34];
    char stringdata0[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "MainSignal"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "messageCode"
QT_MOC_LITERAL(4, 35, 5), // "char*"
QT_MOC_LITERAL(5, 41, 4), // "data"
QT_MOC_LITERAL(6, 46, 10), // "dataLength"
QT_MOC_LITERAL(7, 57, 17), // "acceptedFightSlot"
QT_MOC_LITERAL(8, 75, 4), // "name"
QT_MOC_LITERAL(9, 80, 3), // "num"
QT_MOC_LITERAL(10, 84, 7), // "addNoti"
QT_MOC_LITERAL(11, 92, 4), // "noti"
QT_MOC_LITERAL(12, 97, 9), // "sendSlots"
QT_MOC_LITERAL(13, 107, 14), // "accessGameSlot"
QT_MOC_LITERAL(14, 122, 10), // "playerName"
QT_MOC_LITERAL(15, 133, 12), // "loginSuccess"
QT_MOC_LITERAL(16, 146, 8), // "nickName"
QT_MOC_LITERAL(17, 155, 4), // "rank"
QT_MOC_LITERAL(18, 160, 6), // "logout"
QT_MOC_LITERAL(19, 167, 13), // "logoutSuccess"
QT_MOC_LITERAL(20, 181, 11), // "updateBoard"
QT_MOC_LITERAL(21, 193, 10), // "listPlayer"
QT_MOC_LITERAL(22, 204, 15), // "loginErrorSlots"
QT_MOC_LITERAL(23, 220, 7), // "message"
QT_MOC_LITERAL(24, 228, 13), // "newChallenger"
QT_MOC_LITERAL(25, 242, 5), // "rival"
QT_MOC_LITERAL(26, 248, 11), // "readyToPlay"
QT_MOC_LITERAL(27, 260, 6), // "number"
QT_MOC_LITERAL(28, 267, 8), // "playGame"
QT_MOC_LITERAL(29, 276, 19), // "registButtonClicked"
QT_MOC_LITERAL(30, 296, 19), // "on_loginBtn_clicked"
QT_MOC_LITERAL(31, 316, 11), // "confirmSlot"
QT_MOC_LITERAL(32, 328, 22), // "on_nameSortBtn_clicked"
QT_MOC_LITERAL(33, 351, 22) // "on_rankSortBtn_clicked"

    },
    "MainWindow\0MainSignal\0\0messageCode\0"
    "char*\0data\0dataLength\0acceptedFightSlot\0"
    "name\0num\0addNoti\0noti\0sendSlots\0"
    "accessGameSlot\0playerName\0loginSuccess\0"
    "nickName\0rank\0logout\0logoutSuccess\0"
    "updateBoard\0listPlayer\0loginErrorSlots\0"
    "message\0newChallenger\0rival\0readyToPlay\0"
    "number\0playGame\0registButtonClicked\0"
    "on_loginBtn_clicked\0confirmSlot\0"
    "on_nameSortBtn_clicked\0on_rankSortBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,  111,    2, 0x0a /* Public */,
      10,    1,  116,    2, 0x0a /* Public */,
      12,    0,  119,    2, 0x0a /* Public */,
      13,    1,  120,    2, 0x0a /* Public */,
      15,    2,  123,    2, 0x0a /* Public */,
      18,    0,  128,    2, 0x0a /* Public */,
      19,    0,  129,    2, 0x0a /* Public */,
      20,    1,  130,    2, 0x0a /* Public */,
      22,    1,  133,    2, 0x0a /* Public */,
      24,    1,  136,    2, 0x0a /* Public */,
      26,    2,  139,    2, 0x0a /* Public */,
      28,    2,  144,    2, 0x0a /* Public */,
      29,    0,  149,    2, 0x08 /* Private */,
      30,    0,  150,    2, 0x08 /* Private */,
      31,    0,  151,    2, 0x08 /* Private */,
      32,    0,  152,    2, 0x08 /* Private */,
      33,    0,  153,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Int,    3,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   25,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   25,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MainSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->acceptedFightSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->addNoti((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sendSlots(); break;
        case 4: _t->accessGameSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->loginSuccess((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->logout(); break;
        case 7: _t->logoutSuccess(); break;
        case 8: _t->updateBoard((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->loginErrorSlots((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->newChallenger((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->readyToPlay((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->playGame((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->registButtonClicked(); break;
        case 14: _t->on_loginBtn_clicked(); break;
        case 15: _t->confirmSlot(); break;
        case 16: _t->on_nameSortBtn_clicked(); break;
        case 17: _t->on_rankSortBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int , char * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::MainSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::MainSignal(int _t1, char * _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
