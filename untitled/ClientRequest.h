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
void test() {
	qDebug() << "tesst";
}
void makeItCombine(int messageCode, char *data, int dataLength, char *arrayOut) {
	//combine those stuff to arrayOut
	arrayOut[0] = messageCode;
	arrayOut[1] = (dataLength / (256 * 256)) % 256;
	arrayOut[2] = (dataLength / 256) % 256;
	arrayOut[3] = dataLength % 256;
	memcpy(arrayOut + 4, data, dataLength);
}
int headerHandle(char *message) {// handle the response message
	unsigned char length[3];
	length[0] = message[1];length[1] = message[2];length[2] = message[3];
	return int(length[2]) + int(length[1]) * 256 + int(length[0]) * 256 * 256;
}
void crafMessageAndSend(int messageCode, char *data, int dataLength) {
	// messageCode is the code of message, data is message data, dataLength is the length of data
	char message[MAX_LENGTH];
	switch (messageCode) {
		case(LOGIN_MESSAGE): {
			message[0] = LOGIN_MESSAGE;
			makeItCombine(messageCode, data, dataLength, message);
			break;
		}
		case(LOGOUT_MESSAGE): {
			message[0] = LOGOUT_MESSAGE;
			message[1] = 0;message[2] = 0;message[3] = 0;
		}
	}
	send(client, message, dataLength + 4, 0);
}
void handleResponse(int messageCode, char *data, int dataLength) { // the Response Message form service
	switch (messageCode){
	case(LOGIN_SUCCESS): {
		
	}
	}
}