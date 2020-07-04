#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
#include"Regist.hpp"
#include "Confirm.hpp"
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
    Game *game=NULL;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addPlayerToBoard(QString playerName, int rank);
	void keyPressEvent(QKeyEvent *e);
signals:
	void MainSignal(int messageCode, char *data, int dataLength); //signal to main thread
public slots:
	void gameMove(int cell, int direct);
	void acceptedFightSlot(QString name, int num);
	void addNoti(QString noti);
	void sendSlots();
    void accessGameSlot(QString playerName);
	void loginSuccess(QString nickName, int rank);// nickName: player nickname, rank:player rank;
	void logout();// logout slots // logout button clicked
	void logoutSuccess();
	void updateBoard(QString listPlayer);// update the list player board
	void loginErrorSlots(QString message);
	void newChallenger(QString rival);
	void readyToPlay(QString rival, int number);
	void playGame(QString rival, int number);
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
};
#endif // MAINWINDOW_H
