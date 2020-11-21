/********************************************************************************
** Form generated from reading UI file 'LogGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGUI_H
#define UI_LOGGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogGUI
{
public:
    QPushButton *okButton;
    QListWidget *listWidget;

    void setupUi(QWidget *LogGUI)
    {
        if (LogGUI->objectName().isEmpty())
            LogGUI->setObjectName(QString::fromUtf8("LogGUI"));
        LogGUI->resize(333, 416);
        okButton = new QPushButton(LogGUI);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(220, 360, 101, 31));
        listWidget = new QListWidget(LogGUI);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(-5, 1, 341, 331));

        retranslateUi(LogGUI);
        QObject::connect(okButton, SIGNAL(clicked()), LogGUI, SLOT(buttonClicked()));

        QMetaObject::connectSlotsByName(LogGUI);
    } // setupUi

    void retranslateUi(QWidget *LogGUI)
    {
        LogGUI->setWindowTitle(QCoreApplication::translate("LogGUI", "LogGUI", nullptr));
        okButton->setText(QCoreApplication::translate("LogGUI", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogGUI: public Ui_LogGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGUI_H
