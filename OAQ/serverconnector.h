#ifndef SERVERCONNECTOR_H
#define SERVERCONNECTOR_H

#include <QMainWindow>
#include<QString>


namespace Ui { // this is the connertor to server
class ServerConnector;
}

class ServerConnector : public QMainWindow
{
    Q_OBJECT

public:
    explicit ServerConnector(QWidget *parent = nullptr);
    ~ServerConnector();
	QString getIP();// use to get the input ip
	QString getPort();// use to get the input port
	void errorMes();
	void ConvertHostnameToIP(char *hostname, char *ip);
	public slots:
	void getInfomation();
	
signals:
	void buttonIsClicked();

private:
    Ui::ServerConnector *ui;
	QString ip, port;
};

#endif // SERVERCONNECTOR_H
