/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *loginBtn;
    QPushButton *signupBtn_3;
    QLabel *label_9;
    QWidget *page_3;
    QListWidget *listWidget;
    QPushButton *nameSortBtn;
    QPushButton *rankSortBtn;
    QLabel *ava;
    QLabel *label_name;
    QLabel *label_rank;
    QPushButton *logoutButton;
    QWidget *page_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 480);
        MainWindow->setFocusPolicy(Qt::StrongFocus);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 801, 481));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" border:1px solid green;\n"
"border-radius: 15px;\n"
"background:rgb(158, 255, 106)\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #3e8e41;\n"
"  box-shadow: 0 5px #666;\n"
"  transform: translateY(4px);\n"
"}\n"
"QPushButton:pressed {\n"
"  background-color:rgb(158, 255, 106) ;\n"
"  \n"
"}\n"
"QLineEdit{\n"
"border-radius: 15px;\n"
"}"));
        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, -10, 800, 561));
        frame->setFocusPolicy(Qt::NoFocus);
        frame->setContextMenuPolicy(Qt::DefaultContextMenu);
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"background:url(:/test/bg_menu.png)\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(270, 260, 231, 31));
        lineEdit_6 = new QLineEdit(frame);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(270, 300, 231, 31));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        loginBtn = new QPushButton(frame);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(510, 260, 71, 81));
        signupBtn_3 = new QPushButton(frame);
        signupBtn_3->setObjectName(QString::fromUtf8("signupBtn_3"));
        signupBtn_3->setEnabled(true);
        signupBtn_3->setGeometry(QRect(270, 350, 231, 31));
        signupBtn_3->setStyleSheet(QString::fromUtf8("#signupBtn_3{\n"
" border-radius: 15px;\n"
"}"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(150, 150, 501, 81));
        label_9->setStyleSheet(QString::fromUtf8("#label_9{\n"
"image:url(:/test/oanqan.png)\n"
"}"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" border:2px solid black;\n"
"border-radius: 15px;\n"
"background:rgb(158, 255, 106)\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #3e8e41;\n"
"  box-shadow: 0 5px #666;\n"
"  transform: translateY(4px);\n"
"}\n"
"QPushButton:pressed {\n"
"  background-color:rgb(158, 255, 106) ;\n"
"  \n"
"}"));
        listWidget = new QListWidget(page_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 30, 571, 301));
        listWidget->setStyleSheet(QString::fromUtf8("#listWidget{\n"
"background:white\n"
"}\n"
"QScrollBar:vertical {\n"
"border: 2px solid grey;\n"
"}\n"
"QScrollBar:vertical {\n"
"    border: 2px solid grey;\n"
"    background: rgb(158, 255, 106)\n"
"\n"
"\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: white;\n"
"    min-height: 20px;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"    border: 2px solid grey;\n"
"    background: rgb(158, 255, 106);\n"
"    height: 20px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"    border: 2px solid grey;\n"
"    background: rgb(158, 255, 106);\n"
"    height: 20px;\n"
"\n"
"}"));
        nameSortBtn = new QPushButton(page_3);
        nameSortBtn->setObjectName(QString::fromUtf8("nameSortBtn"));
        nameSortBtn->setGeometry(QRect(0, 0, 411, 31));
        nameSortBtn->setFocusPolicy(Qt::NoFocus);
        nameSortBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" border:2px solid black;\n"
"border-radius: 15px;\n"
"}"));
        rankSortBtn = new QPushButton(page_3);
        rankSortBtn->setObjectName(QString::fromUtf8("rankSortBtn"));
        rankSortBtn->setGeometry(QRect(410, 0, 161, 31));
        rankSortBtn->setFocusPolicy(Qt::NoFocus);
        ava = new QLabel(page_3);
        ava->setObjectName(QString::fromUtf8("ava"));
        ava->setGeometry(QRect(570, 0, 231, 231));
        ava->setStyleSheet(QString::fromUtf8("#ava{\n"
"image:url(:/ava/ava2.jpg);\n"
"}"));
        label_name = new QLabel(page_3);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(570, 230, 231, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_name->setFont(font);
        label_name->setStyleSheet(QString::fromUtf8("#label_name{\n"
" border:3px outset rgb(157, 255, 146);\n"
"background:rgb(24, 190, 49);\n"
"color:black}"));
        label_name->setScaledContents(false);
        label_name->setAlignment(Qt::AlignCenter);
        label_rank = new QLabel(page_3);
        label_rank->setObjectName(QString::fromUtf8("label_rank"));
        label_rank->setGeometry(QRect(570, 270, 231, 41));
        label_rank->setFont(font);
        label_rank->setStyleSheet(QString::fromUtf8("#label_rank{\n"
" border:3px outset rgb(157, 255, 146);\n"
"background:rgb(24, 190, 49)\n"
"}"));
        label_rank->setAlignment(Qt::AlignCenter);
        logoutButton = new QPushButton(page_3);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(690, 440, 111, 31));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(logoutButton, SIGNAL(clicked()), MainWindow, SLOT(logout()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signupBtn_3->setText(QCoreApplication::translate("MainWindow", "\304\220\304\203ng k\303\255", nullptr));
        label_9->setText(QString());
        nameSortBtn->setText(QCoreApplication::translate("MainWindow", "T\303\252n", nullptr));
        rankSortBtn->setText(QCoreApplication::translate("MainWindow", "\304\220i\341\273\203m x\341\272\277p h\341\272\241ng", nullptr));
        ava->setText(QString());
        label_name->setText(QCoreApplication::translate("MainWindow", "Test_User123", nullptr));
        label_rank->setText(QCoreApplication::translate("MainWindow", "Rank", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "\304\220\304\203ng xu\341\272\245t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
