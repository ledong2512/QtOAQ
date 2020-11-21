#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
#include"Regist.hpp"
#include "Confirm.hpp"
#include "LogGUI.hpp"
#include"Game.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
	Confirm confirmUI;
	Regist registForm;
	LogGUI logUI;
    Game *game=NULL;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addPlayerToBoard(QString playerName, int rank);
	void keyPressEvent(QKeyEvent *e);
signals:
	void MainSignal(int messageCode, char *data, int dataLength); //signal to main thread
	void moveGameSignal(int cell, int direct);//signal to game play
	void returnSig();
	void endGame();// call this when end game, no move can do
public slots:
	void registHandle(QString mess);// regist slots
	void recvIPSlots(QString line);// call while get IP from server: line is the IP
	void recvLogSlots(QString line);//call whileget log from server :line is the log
	void requestLogSlot();//request to get log form server
	void quitGame();// quit game
	void gameMove(int cell, int direct);// when you make a move, call this to send that to server through thread connector
	void acceptedFightSlot(QString name, int num);
	void addNoti(QString noti);// get new notification message from sever
	void sendSlots();
    void accessGameSlot(QString playerName);
	void loginSuccess(QString nickName, int rank);// nickName: player nickname, rank:player rank;
	void logout();// logout slots // logout button clicked
	void logoutSuccess();// you logout successful
	void updateBoard(QString listPlayer);// update the list player board
	void loginErrorSlots(QString message);// get the message return from server after login
	void newChallenger(QString rival);// you have some one want to fight
	void readyToPlay(QString rival, int number);
	void playGame(QString rival, int number,int gameNum);// after call this you now go to the game
	void moveGameSlot(int cell, int dir);// you recvive a move to your game form server
private slots:
	void registButtonClicked();
    void on_loginBtn_clicked();
	void confirmSlot();
    void on_nameSortBtn_clicked();

    void on_rankSortBtn_clicked();

private:
    Ui::MainWindow *ui;
    int check =0;
	int currentStt = 0;
	int numberOfGame;
	int gameTurn;
	int logRecv = 0;
};
#endif // MAINWINDOW_H
