/********************************************************************************
** Form generated from reading UI file 'challenge.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHALLENGE_H
#define UI_CHALLENGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_challenge
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *timeLabel;
    QLabel *label;
    QLabel *challengerLabel;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QDialog *challenge)
    {
        if (challenge->objectName().isEmpty())
            challenge->setObjectName(QString::fromUtf8("challenge"));
        challenge->resize(285, 209);
        challenge->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width:100px;\n"
"height:50px;\n"
" border:1px solid green;\n"
"border-radius: 15px;\n"
"background:rgb(158, 255, 106)\n"
"\n"
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
"QDialog{\n"
" background-color:rgb(220, 220, 220)\n"
"}\n"
"QDialogButtonBox StandardButton{\n"
" background:rgb(220, 220, 220)\n"
"}"));
        challenge->setSizeGripEnabled(false);
        challenge->setModal(false);
        buttonBox = new QDialogButtonBox(challenge);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-40, 150, 291, 51));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        timeLabel = new QLabel(challenge);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(110, 90, 71, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        timeLabel->setFont(font);
        label = new QLabel(challenge);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 171, 31));
        challengerLabel = new QLabel(challenge);
        challengerLabel->setObjectName(QString::fromUtf8("challengerLabel"));
        challengerLabel->setGeometry(QRect(100, 40, 101, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        challengerLabel->setFont(font1);
        line = new QFrame(challenge);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(30, 70, 241, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(challenge);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 130, 241, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(challenge);
        QObject::connect(buttonBox, SIGNAL(accepted()), challenge, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), challenge, SLOT(reject()));

        QMetaObject::connectSlotsByName(challenge);
    } // setupUi

    void retranslateUi(QDialog *challenge)
    {
        challenge->setWindowTitle(QCoreApplication::translate("challenge", "Dialog", nullptr));
        timeLabel->setText(QCoreApplication::translate("challenge", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">5</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("challenge", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#6fb34a;\">L\341\273\235i th\303\241ch \304\221\341\272\245u t\341\273\253:</span></p></body></html>", nullptr));
        challengerLabel->setText(QCoreApplication::translate("challenge", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; font-style:italic; color:#6fb34a;\">ledong</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class challenge: public Ui_challenge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHALLENGE_H
