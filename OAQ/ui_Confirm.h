/********************************************************************************
** Form generated from reading UI file 'Confirm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRM_H
#define UI_CONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Confirm
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *noButton;

    void setupUi(QWidget *Confirm)
    {
        if (Confirm->objectName().isEmpty())
            Confirm->setObjectName(QString::fromUtf8("Confirm"));
        Confirm->resize(266, 170);
        Confirm->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background:white\n"
"}\n"
"QPushButton{\n"
" border:1px solid green;\n"
"\n"
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
"#noButton{\n"
" border:1px solid green;\n"
"\n"
"background:#ff5420\n"
"}\n"
"#noButton:hover {\n"
"  background-color: rgb(204, 204, 204);\n"
"  box-shadow: 0 5px #666;\n"
"  transform: translateY(4px);\n"
"}\n"
"#noButton:pressed {\n"
"  background-color:rgb(255, 84, 32)\n"
"  \n"
"}\n"
""));
        label = new QLabel(Confirm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 251, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        label->setFont(font);
        pushButton = new QPushButton(Confirm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 110, 141, 61));
        noButton = new QPushButton(Confirm);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        noButton->setGeometry(QRect(140, 110, 131, 61));

        retranslateUi(Confirm);
        QObject::connect(noButton, SIGNAL(clicked()), Confirm, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), Confirm, SLOT(emitConfirm()));

        QMetaObject::connectSlotsByName(Confirm);
    } // setupUi

    void retranslateUi(QWidget *Confirm)
    {
        Confirm->setWindowTitle(QCoreApplication::translate("Confirm", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("Confirm", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; font-style:italic; color:#000000;\">B\341\272\241n c\303\263 ch\341\272\257c ch\341\272\257n mu\341\273\221n tho\303\241t?</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Confirm", "C\303\263", nullptr));
        noButton->setText(QCoreApplication::translate("Confirm", "Kh\303\264ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Confirm: public Ui_Confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRM_H
