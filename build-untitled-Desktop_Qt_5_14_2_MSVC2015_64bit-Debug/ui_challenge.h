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
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_challenge
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *timeLabel;

    void setupUi(QDialog *challenge)
    {
        if (challenge->objectName().isEmpty())
            challenge->setObjectName(QString::fromUtf8("challenge"));
        challenge->resize(381, 225);
        buttonBox = new QDialogButtonBox(challenge);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 180, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        timeLabel = new QLabel(challenge);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(220, 120, 47, 13));

        retranslateUi(challenge);
        QObject::connect(buttonBox, SIGNAL(accepted()), challenge, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), challenge, SLOT(reject()));

        QMetaObject::connectSlotsByName(challenge);
    } // setupUi

    void retranslateUi(QDialog *challenge)
    {
        challenge->setWindowTitle(QCoreApplication::translate("challenge", "Dialog", nullptr));
        timeLabel->setText(QCoreApplication::translate("challenge", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class challenge: public Ui_challenge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHALLENGE_H
