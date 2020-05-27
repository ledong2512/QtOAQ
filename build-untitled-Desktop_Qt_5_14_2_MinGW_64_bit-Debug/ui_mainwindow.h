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
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *signupBtn_3;
    QLabel *label_9;
    QWidget *page_3;
    QListWidget *listWidget;
    QPushButton *nameSortBtn;
    QPushButton *rankSortBtn;
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
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, -10, 800, 561));
        frame->setFocusPolicy(Qt::NoFocus);
        frame->setContextMenuPolicy(Qt::DefaultContextMenu);
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"background:qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69))\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 220, 231, 31));
        lineEdit_6 = new QLineEdit(frame);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(150, 280, 231, 31));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        loginBtn = new QPushButton(frame);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(410, 210, 91, 101));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 220, 47, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color: rgb(56, 170, 127);\n"
"\n"
"}"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 280, 61, 31));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color: rgb(0, 170, 127);\n"
"\n"
"}"));
        signupBtn_3 = new QPushButton(frame);
        signupBtn_3->setObjectName(QString::fromUtf8("signupBtn_3"));
        signupBtn_3->setEnabled(true);
        signupBtn_3->setGeometry(QRect(150, 340, 75, 23));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(126, 112, 531, 81));
        label_9->setStyleSheet(QString::fromUtf8("#label_3{\n"
"image:url(:/test/3.png)\n"
"}"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        listWidget = new QListWidget(page_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 30, 571, 361));
        listWidget->setStyleSheet(QString::fromUtf8("#listaWidget{\n"
"background:#33CC33;\n"
"}"));
        nameSortBtn = new QPushButton(page_3);
        nameSortBtn->setObjectName(QString::fromUtf8("nameSortBtn"));
        nameSortBtn->setGeometry(QRect(0, 0, 411, 31));
        rankSortBtn = new QPushButton(page_3);
        rankSortBtn->setObjectName(QString::fromUtf8("rankSortBtn"));
        rankSortBtn->setGeometry(QRect(410, 0, 161, 31));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "T\303\240i kho\341\272\243n", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "M\341\272\255t kh\341\272\251u", nullptr));
        signupBtn_3->setText(QCoreApplication::translate("MainWindow", "\304\220\304\203ng k\303\255", nullptr));
        label_9->setText(QString());
        nameSortBtn->setText(QCoreApplication::translate("MainWindow", "T\303\252n", nullptr));
        rankSortBtn->setText(QCoreApplication::translate("MainWindow", "\304\220i\341\273\203m x\341\272\277p h\341\272\241ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
