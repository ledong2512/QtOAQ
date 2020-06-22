#include "serverconnector.h"
#include "ui_serverconnector.h"

#pragma comment(lib, "Ws2_32.lib")
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#define SERVER_PORT 5500
#define SERVER_ADDR "127.0.0.1"
#define BUFF_SIZE 2048
using namespace std;

extern SOCKET client;

ServerConnector::ServerConnector(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ServerConnector)
{
    ui->setupUi(this);
}
void ServerConnector::errorMes() {
	ui->labelError->setText(QString("Error: Cannot connect server!"));
	ui->labelError->setStyleSheet("#labelError{color:red}");
}

void ServerConnector::getInfomation(){
	
	port = ui->textPort->toPlainText();
	ip = ui->serverName->toPlainText();
	emit buttonIsClicked();


	
}
QString ServerConnector::getIP() {
	return ip;
}
QString ServerConnector::getPort() {
	return port;
}
ServerConnector::~ServerConnector()
{
    delete ui;
}
