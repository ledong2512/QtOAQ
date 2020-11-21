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
    QByteArrayData data[50];
    char stringdata0[525];
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
QT_MOC_LITERAL(7, 57, 14), // "moveGameSignal"
QT_MOC_LITERAL(8, 72, 4), // "cell"
QT_MOC_LITERAL(9, 77, 6), // "direct"
QT_MOC_LITERAL(10, 84, 9), // "returnSig"
QT_MOC_LITERAL(11, 94, 7), // "endGame"
QT_MOC_LITERAL(12, 102, 12), // "registHandle"
QT_MOC_LITERAL(13, 115, 4), // "mess"
QT_MOC_LITERAL(14, 120, 11), // "recvIPSlots"
QT_MOC_LITERAL(15, 132, 4), // "line"
QT_MOC_LITERAL(16, 137, 12), // "recvLogSlots"
QT_MOC_LITERAL(17, 150, 14), // "requestLogSlot"
QT_MOC_LITERAL(18, 165, 8), // "quitGame"
QT_MOC_LITERAL(19, 174, 8), // "gameMove"
QT_MOC_LITERAL(20, 183, 17), // "acceptedFightSlot"
QT_MOC_LITERAL(21, 201, 4), // "name"
QT_MOC_LITERAL(22, 206, 3), // "num"
QT_MOC_LITERAL(23, 210, 7), // "addNoti"
QT_MOC_LITERAL(24, 218, 4), // "noti"
QT_MOC_LITERAL(25, 223, 9), // "sendSlots"
QT_MOC_LITERAL(26, 233, 14), // "accessGameSlot"
QT_MOC_LITERAL(27, 248, 10), // "playerName"
QT_MOC_LITERAL(28, 259, 12), // "loginSuccess"
QT_MOC_LITERAL(29, 272, 8), // "nickName"
QT_MOC_LITERAL(30, 281, 4), // "rank"
QT_MOC_LITERAL(31, 286, 6), // "logout"
QT_MOC_LITERAL(32, 293, 13), // "logoutSuccess"
QT_MOC_LITERAL(33, 307, 11), // "updateBoard"
QT_MOC_LITERAL(34, 319, 10), // "listPlayer"
QT_MOC_LITERAL(35, 330, 15), // "loginErrorSlots"
QT_MOC_LITERAL(36, 346, 7), // "message"
QT_MOC_LITERAL(37, 354, 13), // "newChallenger"
QT_MOC_LITERAL(38, 368, 5), // "rival"
QT_MOC_LITERAL(39, 374, 11), // "readyToPlay"
QT_MOC_LITERAL(40, 386, 6), // "number"
QT_MOC_LITERAL(41, 393, 8), // "playGame"
QT_MOC_LITERAL(42, 402, 7), // "gameNum"
QT_MOC_LITERAL(43, 410, 12), // "moveGameSlot"
QT_MOC_LITERAL(44, 423, 3), // "dir"
QT_MOC_LITERAL(45, 427, 19), // "registButtonClicked"
QT_MOC_LITERAL(46, 447, 19), // "on_loginBtn_clicked"
QT_MOC_LITERAL(47, 467, 11), // "confirmSlot"
QT_MOC_LITERAL(48, 479, 22), // "on_nameSortBtn_clicked"
QT_MOC_LITERAL(49, 502, 22) // "on_rankSortBtn_clicked"

    },
    "MainWindow\0MainSignal\0\0messageCode\0"
    "char*\0data\0dataLength\0moveGameSignal\0"
    "cell\0direct\0returnSig\0endGame\0"
    "registHandle\0mess\0recvIPSlots\0line\0"
    "recvLogSlots\0requestLogSlot\0quitGame\0"
    "gameMove\0acceptedFightSlot\0name\0num\0"
    "addNoti\0noti\0sendSlots\0accessGameSlot\0"
    "playerName\0loginSuccess\0nickName\0rank\0"
    "logout\0logoutSuccess\0updateBoard\0"
    "listPlayer\0loginErrorSlots\0message\0"
    "newChallenger\0rival\0readyToPlay\0number\0"
    "playGame\0gameNum\0moveGameSlot\0dir\0"
    "registButtonClicked\0on_loginBtn_clicked\0"
    "confirmSlot\0on_nameSortBtn_clicked\0"
    "on_rankSortBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  154,    2, 0x06 /* Public */,
       7,    2,  161,    2, 0x06 /* Public */,
      10,    0,  166,    2, 0x06 /* Public */,
      11,    0,  167,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  168,    2, 0x0a /* Public */,
      14,    1,  171,    2, 0x0a /* Public */,
      16,    1,  174,    2, 0x0a /* Public */,
      17,    0,  177,    2, 0x0a /* Public */,
      18,    0,  178,    2, 0x0a /* Public */,
      19,    2,  179,    2, 0x0a /* Public */,
      20,    2,  184,    2, 0x0a /* Public */,
      23,    1,  189,    2, 0x0a /* Public */,
      25,    0,  192,    2, 0x0a /* Public */,
      26,    1,  193,    2, 0x0a /* Public */,
      28,    2,  196,    2, 0x0a /* Public */,
      31,    0,  201,    2, 0x0a /* Public */,
      32,    0,  202,    2, 0x0a /* Public */,
      33,    1,  203,    2, 0x0a /* Public */,
      35,    1,  206,    2, 0x0a /* Public */,
      37,    1,  209,    2, 0x0a /* Public */,
      39,    2,  212,    2, 0x0a /* Public */,
      41,    3,  217,    2, 0x0a /* Public */,
      43,    2,  224,    2, 0x0a /* Public */,
      45,    0,  229,    2, 0x08 /* Private */,
      46,    0,  230,    2, 0x08 /* Private */,
      47,    0,  231,    2, 0x08 /* Private */,
      48,    0,  232,    2, 0x08 /* Private */,
      49,    0,  233,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Int,    3,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   21,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   38,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   38,   40,   42,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,   44,
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
        case 1: _t->moveGameSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->returnSig(); break;
        case 3: _t->endGame(); break;
        case 4: _t->registHandle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->recvIPSlots((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->recvLogSlots((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->requestLogSlot(); break;
        case 8: _t->quitGame(); break;
        case 9: _t->gameMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->acceptedFightSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->addNoti((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->sendSlots(); break;
        case 13: _t->accessGameSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->loginSuccess((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->logout(); break;
        case 16: _t->logoutSuccess(); break;
        case 17: _t->updateBoard((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->loginErrorSlots((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->newChallenger((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->readyToPlay((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->playGame((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->moveGameSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->registButtonClicked(); break;
        case 24: _t->on_loginBtn_clicked(); break;
        case 25: _t->confirmSlot(); break;
        case 26: _t->on_nameSortBtn_clicked(); break;
        case 27: _t->on_rankSortBtn_clicked(); break;
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
        {
            using _t = void (MainWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::moveGameSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::returnSig)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::endGame)) {
                *result = 3;
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
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::MainSignal(int _t1, char * _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::moveGameSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2

// SIGNAL 3
void MainWindow::endGame()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
