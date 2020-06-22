#pragma once
#include<QThread>
#pragma comment(lib, "Ws2_32.lib")
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include"MessagesCode.h"
#include<QDebug>
extern SOCKET client;
class ThreadConnector : public QThread {// this thread is recv thread
	Q_OBJECT
public:
	void handleResponse(int messageCode, char *data, int dataLength) { // the Response Message form service
		//messageCode: the code of message, data:the message data, dataLength: length of message data
		switch (messageCode) {
		case(LOGIN_SUCCESS): {
			int i = 0,rank;
			char nickName[50],charRank[50];
			for (i = 0;data[i] != ' '; i++) {
				nickName[i] = data[i];
			}
			nickName[i] = 0;++i;
			for (int j = i;j < dataLength;j++) {
				charRank[j - i] = data[j];
			}
			charRank[dataLength] = 0;
			rank = atoi(charRank);
			emit loginSuccess(nickName,rank);// emit signals
		}
		}
	}
	int headerHandle(char *message) {// handle the response message
		unsigned char length[3];
		length[0] = message[1];length[1] = message[2];length[2] = message[3];
		return int(length[2]) + int(length[1]) * 256 + int(length[0]) * 256 * 256;
	}
	void run() {
		int ret;
		char buff[2048];
		char message[2048];
		int messageLength;
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
				if(messageLength !=0) ret = recv(client, buff, messageLength, 0);
				if (ret == SOCKET_ERROR) {
					if (WSAGetLastError() == WSAETIMEDOUT)
						printf("Time-out!");
					else printf("Error! Cannot receive message.");
				}
				else {
					qDebug() << messageCode;
					handleResponse(messageCode, buff, messageLength);
				}
			}
		}
	}
	void connectThread(int messageCode, char *data, int dataLength) {
		emit connectHandldeData(messageCode, data, dataLength);
	}
signals:
	void loginSuccess(char* nickName,int rank);// nickName: player nickname, rank:player rank;
	void connectHandldeData(int messageCode, char *data, int dataLength);//connect to the main thread

};