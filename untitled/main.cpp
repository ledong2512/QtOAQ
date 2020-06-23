#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QBrush>
#include<QImage>
#include"Cell.h"
#include"Game.h"
#include <QDebug>
#include<QSplashScreen>
#include<QTimer>
#include<mainwindow.h>
#include"serverconnector.h"
#include "challenge.h"
#include"ClientRequest.h"
#include"ThreadConnector.h"
#pragma comment(lib, "Ws2_32.lib")
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include<process.h>
#define SERVER_PORT 5500
#define SERVER_ADDR "127.0.0.1"
#define BUFF_SIZE 2048
#define WINDOW_STATTUS_NOT_LOGIN 0
#define WINDOW_LOGIN 1
#define WINDOW_INGAME 2
SOCKET client;
Game *game;
MainWindow *mainT;
sockaddr_in serverAddr;
ServerConnector *con;
QSplashScreen *splash;
ThreadConnector connector;
unsigned __stdcall recvThread(void *param) {
	int ret;
	char buff[BUFF_SIZE];
	char message[BUFF_SIZE];
	int messageLength;
	SOCKET client = (SOCKET)param;
	

	while (1) {
		ret = recv(client, buff, 4, 0);
		if (ret == SOCKET_ERROR) {
			if (WSAGetLastError() == WSAETIMEDOUT)
				printf("Time-out!");
			else printf("Error! Cannot receive message.");
		}
		else if (strlen(buff) > 0) {
			buff[ret] = 0;
			unsigned int messageCode = buff[0];
			messageLength = headerHandle(buff);
			ret = recv(client, buff, messageLength, 0);
			if (ret == SOCKET_ERROR) {
				if (WSAGetLastError() == WSAETIMEDOUT)
					printf("Time-out!");
				else printf("Error! Cannot receive message.");
			}
			else {
				qDebug() << messageCode;
				connector.connectHandldeData(messageCode, buff, messageLength);
			}
		}
	}
}
void TRY() {// connect to server
	serverAddr.sin_port = htons(atoi(con->getPort().toStdString().c_str()));
	serverAddr.sin_addr.s_addr = inet_addr(con->getIP().toStdString().c_str());
	if (!connect(client, (sockaddr *)&serverAddr, sizeof(serverAddr))) {
		con->close();
		mainT->setWindowTitle("Oanquan");
		splash->show();
		QTimer::singleShot(600, splash, SLOT(close()));
		QTimer::singleShot(600, mainT, SLOT(show()));
		//_beginthreadex(0, 0, recvThread, (void*)client, 0, 0);
		connector.start();
	}
	else con->errorMes();

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setWindowIcon(QIcon(":/test/icon.png"));

    splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/test/oanqan.png"));
    
    mainT=new MainWindow();
    con=new ServerConnector();
    con->show();

	WSADATA wsaData;
	WORD wVersion = MAKEWORD(2, 2);
	if (WSAStartup(wVersion, &wsaData))
		printf("Version is not supported\n");

	//Step 2: Construct socket	
	
	client = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	//(optional) Set time-out for receiving
	int tv = 10000; //Time-out interval: 10000ms
	setsockopt(client, SOL_SOCKET, SO_RCVTIMEO, (const char*)(&tv), sizeof(int));

	//Step 3: Specify server address
	
	serverAddr.sin_family = AF_INET;
	//Step 4: Request to connect server
	//connect signal button clicked to TRY function
	QObject::connect(con, &ServerConnector::buttonIsClicked, TRY);
	QObject::connect(mainT, &MainWindow::MainSignal, crafMessageAndSend );
	QObject::connect(&connector, &ThreadConnector::loginSuccess,mainT ,&MainWindow::loginSuccess);
	QObject::connect(&connector, &ThreadConnector::logoutSuccess, mainT, &MainWindow::logoutSuccess);
	QObject::connect(&connector, &ThreadConnector::listPlayer, mainT, &MainWindow::updateBoard);
	QObject::connect(&a, &QApplication::aboutToQuit, &connector, [=] {connector.terminate();connector.wait(5000);});//terminat the recv theard



    return a.exec();
}
