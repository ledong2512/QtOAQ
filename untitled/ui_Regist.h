/********************************************************************************
** Form generated from reading UI file 'Regist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regist
{
public:
    QLineEdit *lineId;
    QLineEdit *linePass;
    QLineEdit *linePass_2;
    QLineEdit *lineNickName;
    QPushButton *registButton;
    QLabel *errorLabel;
    QLabel *label;

    void setupUi(QWidget *Regist)
    {
        if (Regist->objectName().isEmpty())
            Regist->setObjectName(QString::fromUtf8("Regist"));
        Regist->resize(247, 342);
        Regist->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background:rgb(199, 199, 199)\n"
"}\n"
"QPushButton{\n"
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
"background:white;\n"
"border-radius: 15px;\n"
"}"));
        lineId = new QLineEdit(Regist);
        lineId->setObjectName(QString::fromUtf8("lineId"));
        lineId->setGeometry(QRect(50, 70, 151, 31));
        linePass = new QLineEdit(Regist);
        linePass->setObjectName(QString::fromUtf8("linePass"));
        linePass->setGeometry(QRect(50, 110, 151, 31));
        linePass->setEchoMode(QLineEdit::Password);
        linePass_2 = new QLineEdit(Regist);
        linePass_2->setObjectName(QString::fromUtf8("linePass_2"));
        linePass_2->setGeometry(QRect(50, 150, 151, 31));
        linePass_2->setEchoMode(QLineEdit::Password);
        lineNickName = new QLineEdit(Regist);
        lineNickName->setObjectName(QString::fromUtf8("lineNickName"));
        lineNickName->setGeometry(QRect(50, 190, 151, 31));
        registButton = new QPushButton(Regist);
        registButton->setObjectName(QString::fromUtf8("registButton"));
        registButton->setGeometry(QRect(150, 290, 81, 31));
        errorLabel = new QLabel(Regist);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setGeometry(QRect(40, 240, 191, 21));
        errorLabel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label = new QLabel(Regist);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 151, 31));

        retranslateUi(Regist);
        QObject::connect(registButton, SIGNAL(clicked()), Regist, SLOT(registS()));

        QMetaObject::connectSlotsByName(Regist);
    } // setupUi

    void retranslateUi(QWidget *Regist)
    {
        Regist->setWindowTitle(QCoreApplication::translate("Regist", "Regist", nullptr));
        lineId->setPlaceholderText(QCoreApplication::translate("Regist", "Username", nullptr));
        linePass->setPlaceholderText(QCoreApplication::translate("Regist", "Your password", nullptr));
        linePass_2->setPlaceholderText(QCoreApplication::translate("Regist", "Confirm password", nullptr));
        lineNickName->setPlaceholderText(QCoreApplication::translate("Regist", "InGameName", nullptr));
        registButton->setText(QCoreApplication::translate("Regist", "\304\220\304\203ng k\303\255", nullptr));
        errorLabel->setText(QString());
        label->setText(QCoreApplication::translate("Regist", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#2c9f1f;\">T\341\272\241o t\303\240i kho\341\272\243n</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Regist: public Ui_Regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
