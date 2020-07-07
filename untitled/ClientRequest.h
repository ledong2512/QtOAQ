#pragma once
#include<iostream>
#include<QDebug>
#define MAX_LENGTH 2048
#include"MessagesCode.h"
#pragma comment(lib, "Ws2_32.lib")
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include"mainwindow.h"
using namespace std;
extern MainWindow *mainT;
extern SOCKET client;
inline void test() {
	qDebug() << "tesst";
}
inline void makeItCombine(int messageCode, char *data, int dataLength, char *arrayOut) {// craft a message with messageCode is the code of message
	//data is the payload //dataLength is the length of data
	//combine those stuff to arrayOut
	arrayOut[0] = messageCode;
	arrayOut[1] = (dataLength / (256 * 256)) % 256;
	arrayOut[2] = (dataLength / 256) % 256;
	arrayOut[3] = dataLength % 256;
	memcpy(arrayOut + 4, data, dataLength);
}
inline int headerHandle(char *message) {// handle the response message return the dataLengthof that message
	unsigned char length[3];
	length[0] = message[1];length[1] = message[2];length[2] = message[3];
	return int(length[2]) + int(length[1]) * 256 + int(length[0]) * 256 * 256;
}
inline void crafMessageAndSend(int messageCode, char *data, int dataLength) {// craft a message and send it to server
	// messageCode is the code of message, data is message data, dataLength is the length of data
	char message[MAX_LENGTH];
	makeItCombine(messageCode, data, dataLength, message);
	send(client, message, dataLength + 4, 0);
}
inline void handleResponse(int messageCode, char *data, int dataLength) { // the Response Message form service
	switch (messageCode){
	case(LOGIN_SUCCESS): {
		
	}
	}
}