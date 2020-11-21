/********************************************************************************
** Form generated from reading UI file 'serverconnector.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERCONNECTOR_H
#define UI_SERVERCONNECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerConnector
{
public:
    QWidget *centralwidget;
    QPushButton *conBtn;
    QLabel *label;
    QTextEdit *textPort;
    QTextEdit *serverName;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *labelError;

    void setupUi(QMainWindow *ServerConnector)
    {
        if (ServerConnector->objectName().isEmpty())
            ServerConnector->setObjectName(QString::fromUtf8("ServerConnector"));
        ServerConnector->resize(346, 183);
        centralwidget = new QWidget(ServerConnector);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        conBtn = new QPushButton(centralwidget);
        conBtn->setObjectName(QString::fromUtf8("conBtn"));
        conBtn->setGeometry(QRect(220, 140, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 90, 47, 13));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        textPort = new QTextEdit(centralwidget);
        textPort->setObjectName(QString::fromUtf8("textPort"));
        textPort->setGeometry(QRect(200, 80, 104, 31));
        serverName = new QTextEdit(centralwidget);
        serverName->setObjectName(QString::fromUtf8("serverName"));
        serverName->setGeometry(QRect(20, 40, 281, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 0, 271, 31));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"border:none;\n"
"}"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 10, 82, 17));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(150, 10, 82, 17));
        labelError = new QLabel(centralwidget);
        labelError->setObjectName(QString::fromUtf8("labelError"));
        labelError->setGeometry(QRect(10, 130, 171, 20));
        ServerConnector->setCentralWidget(centralwidget);

        retranslateUi(ServerConnector);
        QObject::connect(conBtn, SIGNAL(clicked()), ServerConnector, SLOT(getInfomation()));

        QMetaObject::connectSlotsByName(ServerConnector);
    } // setupUi

    void retranslateUi(QMainWindow *ServerConnector)
    {
        ServerConnector->setWindowTitle(QCoreApplication::translate("ServerConnector", "MainWindow", nullptr));
        conBtn->setText(QCoreApplication::translate("ServerConnector", "Connect", nullptr));
        label->setText(QCoreApplication::translate("ServerConnector", "Port:", nullptr));
        groupBox->setTitle(QString());
        radioButton->setText(QCoreApplication::translate("ServerConnector", "IP", nullptr));
        radioButton_2->setText(QCoreApplication::translate("ServerConnector", "Domain name", nullptr));
        labelError->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ServerConnector: public Ui_ServerConnector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERCONNECTOR_H
