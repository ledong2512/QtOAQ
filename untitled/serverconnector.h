#ifndef SERVERCONNECTOR_H
#define SERVERCONNECTOR_H

#include <QMainWindow>
#include<QString>


namespace Ui {
class ServerConnector;
}

class ServerConnector : public QMainWindow
{
    Q_OBJECT

public:
    explicit ServerConnector(QWidget *parent = nullptr);
    ~ServerConnector();
	QString getIP();
	QString getPort();
	void errorMes();
	public slots:
	void getInfomation();
signals:
	void buttonIsClicked();

private:
    Ui::ServerConnector *ui;
	QString ip, port;
};

#endif // SERVERCONNECTOR_H
