#include "ThreadConnector.h"
void ThreadConnector::handleResponse(int messageCode, char *data, int dataLength) { // the Response Message form service
																   //messageCode: the code of message, data:the message data, dataLength: length of message data
	switch (messageCode) {
	case(ERROR_MESSAGE): {
		data[dataLength] = 0;
		if (strcmp(data, WORNG_INFOMATION) == 0) {
			QString a;
			
			emit loginError(QString(u8"Sai thông tin đăng nhập!"));
		}
		else if (strcmp(data, ALREADY_LOGGED_IN) == 0) {
			emit loginError(QString(u8"Tài khoản đã đăng nhập ở nơi khác!"));
		}
		else if (strcmp(data, MESSAGE_NOT_YET) == 0) {
			emit newChat(QString(u8"Vui lòng đợi 30 giây để tiếp tục gửi tin nhắn!!!!!!!"));
		}
		else if (strcmp(data, DIFF_RANK) == 0) {
			emit newChat(QString(u8"Đối thủ rank quá cao (hoặc thấp)!!!"));
		}
		else if (strcmp(data, RIVAL_OFFLINE) == 0) {
			emit newChat(QString(u8"Đối thủ không khả dụng!!!"));
		}
		else if (strcmp(data, START_ERROR) == 0) {
			emit newChat(QString(u8"Ván đấu đã bị hủy bỏ!!!"));
		}
		else if (strcmp(data, ID_DUP) == 0) {
			emit regist(QString(u8"Tài khoản trùng!!!"));
		}
		else if (strcmp(data, NICKNAME_DUP) == 0) {
			emit regist(QString(u8"Nickname trùng!!!"));
		}
		else if (strcmp(data, SQL_ERR) == 0) {
			emit regist(QString(u8"Server lỗi!!!"));
		}
		break;
	}
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
	case(CONNECT_TO_PLAY): {
		data[dataLength] = 0;
		emit newChallengerSig(QString(data));
		break;
	}
	case(CHAT): {
		data[dataLength] = 0;
		emit newChat(QString(data));
		break;
	}
	case(START): {
		data[dataLength] = 0;
		QString data_QS = QString(data);
		QStringList data_L = data_QS.split(" ");
		emit challengAccepted(data_L.at(0), data_L.at(1).toInt());
		break;
	}
	case(LETS_PLAY): {
		data[dataLength] = 0;
		QString data_QS = QString(data);
		QStringList data_L = data_QS.split(" ");
		emit gotoGame(data_L.at(0), data_L.at(1).toInt(), data_L.at(2).toInt());
		break;
	}
	case(PLAYER_MOVE): {
		data[dataLength] = 0;
		QString data_QS = QString(data);
		QStringList data_L = data_QS.split(" ");
		emit moveGame(data_L.at(2).toInt(), data_L.at(3).toInt());
		if(data_L.length()>4)
		if(data_L.at(4)==QString("endgame")) emit requestLog();
		break;
	}
	case (END_GAME): {
		emit requestLog();
		break;
	}
	case (SEND_LOG): {
		data[dataLength] = 0;
		QString data_QS = QString(data);
		QStringList data_L = data_QS.split("+");
		for (int i=0;i<data_L.length();i++)
		{
			emit revlog(data_L.at(i));
		}
		break;
	}
	case (SEND_IP): {
		data[dataLength] = 0;
		QString data_QS = QString(data);
		emit recvIP(data_QS);
		break;
	}
	case (REGIST_SUCCESS): {
		emit regist(QString(u8"Thành Công!"));
		break;
	}
	case (RETURN): {
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
			unsigned char tmp = buff[0];
			int messageCode = tmp;
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