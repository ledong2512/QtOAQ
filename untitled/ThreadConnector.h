
#ifndef THREAD_CONNECTOR_H
#define THREAD_CONNECTOR_H
#include<QThread>
#pragma comment(lib, "Ws2_32.lib")
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include"ClientRequest.h"
#include "MessagesCode.h"
#include<QDebug>

extern SOCKET client;
class ThreadConnector : public QThread {// this thread is recv thread
	Q_OBJECT
public:
	void handleResponse(int messageCode, char *data, int dataLength);
	void run();
	void connectThread(int messageCode, char *data, int dataLength);
signals:
	void loginSuccess(QString nickName,int rank);// nickName: player nickname, rank:player rank;
	void connectHandldeData(int messageCode, char *data, int dataLength);//connect to the main thread
	void logoutSuccess();
	void listPlayer(QString list); // list is the list of player include nickname and rank
	void loginError(QString message); // send login error message
	void newChallengerSig(QString rival); //new Challenger
	void newChat(QString mess); // new chat
	void challengAccepted(QString rivalName,int num);
	void gotoGame(QString rivalName, int num,int gameNum);
	void moveGame(int cell, int direct);
	void requestLog();
	void revlog(QString logLine);
	void recvIP(QString logLine);
	void regist(QString mess);
};
#endif