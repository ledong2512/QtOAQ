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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *signupBtn;
    QLabel *label_3;

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
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, -80, 800, 561));
        frame->setFocusPolicy(Qt::NoFocus);
        frame->setContextMenuPolicy(Qt::DefaultContextMenu);
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"background:qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69))\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 220, 231, 31));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 280, 231, 31));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 210, 91, 101));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 220, 47, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color: rgb(56, 170, 127);\n"
"\n"
"}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 280, 61, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color: rgb(0, 170, 127);\n"
"\n"
"}"));
        signupBtn = new QPushButton(frame);
        signupBtn->setObjectName(QString::fromUtf8("signupBtn"));
        signupBtn->setEnabled(true);
        signupBtn->setGeometry(QRect(150, 340, 75, 23));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(126, 112, 531, 81));
        label_3->setStyleSheet(QString::fromUtf8("#label_3{\n"
"image:url(:/test/3.png)\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "T\303\240i kho\341\272\243n", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "M\341\272\255t kh\341\272\251u", nullptr));
        signupBtn->setText(QCoreApplication::translate("MainWindow", "\304\220\304\203ng k\303\255", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
