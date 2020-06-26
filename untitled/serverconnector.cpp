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
	ui->textPort->setPlainText("5500");
	ui->serverName->setPlainText("127.0.0.1");
}
void ServerConnector::errorMes() {
	ui->labelError->setText(QString("Error: Cannot connect server!"));
	ui->labelError->setStyleSheet("#labelError{color:red}");
}

void ServerConnector::getInfomation(){
	char ipv4[30];
	char ipName[100];
	port = ui->textPort->toPlainText();

	ip = ui->serverName->toPlainText();
	
	if (ui->radioButton_2->isChecked()) {
		strcpy(ipName, ip.toStdString().c_str());
		ConvertHostnameToIP(ipName,ipv4);
		ip = QString(ipv4);
	}
	emit buttonIsClicked();


	
}
void ServerConnector::ConvertHostnameToIP(char *hostname, char *ip) {
	WSADATA wsaData;
	WORD wVersion = MAKEWORD(2, 2);
	if (WSAStartup(wVersion, &wsaData))
		printf("Version is not supported\n");

	DWORD dwRetval;
	struct addrinfo hints;
	struct sockaddr_in  *sockaddr_ipv4;
	struct addrinfo *result = NULL;

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;

	dwRetval = getaddrinfo(hostname, "http", NULL, &result);
	if (dwRetval != 0) {
		printf("getaddrinfo failed with error: %d\n", dwRetval);
		WSACleanup();
		getch();
		return ;
	}
	else {
		sockaddr_ipv4 = (struct sockaddr_in *) result->ai_addr;
		strcpy(ip, inet_ntoa(sockaddr_ipv4->sin_addr));
	}
	freeaddrinfo(result);
	WSACleanup();
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
