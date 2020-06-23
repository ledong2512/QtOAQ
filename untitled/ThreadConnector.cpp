#include "ThreadConnector.h"
void ThreadConnector::handleResponse(int messageCode, char *data, int dataLength) { // the Response Message form service
																   //messageCode: the code of message, data:the message data, dataLength: length of message data
	switch (messageCode) {
	case(LOGIN_SUCCESS): {
		int i = 0, rank;
		char nickName[50], charRank[50];
		for (i = 0;data[i] != ' '; i++) {
			nickName[i] = data[i];
		}
		nickName[i] = 0;
		qDebug() << nickName;
		++i;
		for (int j = i;j < dataLength;j++) {
			charRank[j - i] = data[j];
		}
		charRank[dataLength] = 0;
		rank = atoi(charRank);
		emit loginSuccess(QString(nickName), rank);// emit signals
		char log[10];
		crafMessageAndSend(GET_LIST_PLAYER, log, 0);// send get list player
		break;
	}
	case(LOGOUT_SUCCESS): {
		emit logoutSuccess();

		break;
	}
	case(LIST_PLAYER): {
		data[dataLength] = 0;
		emit listPlayer(QString(data));
		break;
	}
	}
}
void ThreadConnector::run() {
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
			if (messageLength != 0) ret = recv(client, buff, messageLength, 0);
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
void ThreadConnector::connectThread(int messageCode, char *data, int dataLength) {
	emit connectHandldeData(messageCode, data, dataLength);
}