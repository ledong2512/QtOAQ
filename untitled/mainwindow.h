#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
#include"Game.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Game *game;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addPlayerToBoard(QString playerName, int rank);
	
signals:
	void loginToAccout(int messageCode, char *data, int dataLength);
	void logoutSignal(int messageCode, char *data, int dataLength); //signal to main thread
public slots:
    void accessGameSlot();
	void loginSuccess(char* nickName, int rank);// nickName: player nickname, rank:player rank;
	void logout();// logout slots
private slots:
	
    void on_loginBtn_clicked();

    void on_nameSortBtn_clicked();

    void on_rankSortBtn_clicked();

private:
    Ui::MainWindow *ui;
    int check =0;
};
#endif // MAINWINDOW_H
