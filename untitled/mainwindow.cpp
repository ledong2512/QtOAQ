#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStackedWidget>
#include"QGraphicsScene"
#include<QLayout>
#include<QDebug>
#include<QShortcut>
#include"PlayerListItem.h"
#include "MessagesCode.h"
#include"challenge.h"
#define MAX_LENGTH 2048
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	ui->lineEdit_5->setText("ledong@gmail.com");
	ui->lineEdit_6->setText("pass");
    setFixedSize(QSize(800,480));
	ui->sendButton->setShortcut(QKeySequence(Qt::Key_Enter));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addPlayerToBoard(QString playerName, int rank)// playerName: name of player. rank: player rank
{
    QListWidgetItem* item = new QListWidgetItem();
   

    PlayerListItem * mssItem = new PlayerListItem(playerName,rank);

    item->setData(Qt::DisplayRole,rank);
    item->setFont(QFont("time",1));
    item->setTextColor(Qt::white);
    item->setSizeHint(mssItem->sizeHint());

    ui->listWidget->addItem(item);
    ui->listWidget->setItemWidget(item, mssItem);
    ui->listWidget->scrollToBottom();
}

void MainWindow::addNoti(QString noti)
{
	QListWidgetItem* item = new QListWidgetItem("  "+noti);
	item->setFont(QFont("Times", 12));
	item->setTextColor(Qt::black);
	ui->notiList->addItem(item);
	ui->listWidget->scrollToBottom();
}

void MainWindow::sendSlots()
{
	QString text = ui->chatLine->text();
	char textS[MAX_LENGTH];
	strcpy(textS, text.toStdString().c_str());
	if(text!="")
	emit MainSignal(CHAT, textS, strlen(textS));
	ui->chatLine->clear();
}

void MainWindow::accessGameSlot(QString playerName)
{   //game=new Game();
    //game->setParent(ui->page_2);
    //ui->stackedWidget->setCurrentWidget(ui->page_2);
	char challenge[MAX_LENGTH];
	strcpy_s(challenge, (playerName + " " + ui->label_name->text()).toStdString().c_str());
	qDebug() << challenge<<strlen(challenge);
	emit MainSignal(CONNECT_TO_PLAY, challenge, strlen(challenge));
}
void MainWindow::logoutSuccess() {
	ui->stackedWidget->setCurrentWidget(ui->page);
}
void MainWindow::newChallenger(QString rival) {
	challenge *tmp;
	tmp=new challenge(rival);
	tmp->show();
}
void MainWindow::logout()
{
	char log[10];
	emit MainSignal(LOGOUT_MESSAGE,log,0);
	//ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWindow::updateBoard(QString listPlayer) {
	ui->listWidget->clear();
	char nickname[100],rank_c[10];int rank;
	int guard = 0, start = 0;
	for (int i = 0;i < listPlayer.length();i++) {
		if (listPlayer[i] == ' ') {
			if (guard == 0) {
				guard = 1;
				nickname[start] = 0;
			}
			else {
				rank_c[start] = 0;guard = 0;
				addPlayerToBoard(QString(nickname), atoi(rank_c));
			}
			start = 0;
		}
		else {
			if (guard == 0) nickname[start] = listPlayer.at(i).toLatin1(); else rank_c[start] = listPlayer.at(i).toLatin1();
			++start;
		}	
	}
}
void MainWindow::loginErrorSlots(QString message)
{
	ui->loginError->setText(message);
	ui->loginError->setStyleSheet("#loginError{color:red}");
}
void MainWindow::on_loginBtn_clicked()
{
  //ui->stackedWidget->setCurrentWidget(ui->page_3);
    //for(int i=0;i<100;i++) addPlayerToBoard(QString("test_user_")+QString::number(i),i);
	QString id = ui->lineEdit_5->text();
	QString pass = ui->lineEdit_6->text();
	char loginData[MAX_LENGTH];
	strcpy_s(loginData, (id + " " + pass).toStdString().c_str());
	emit MainSignal(1, loginData, strlen(loginData));

}

void MainWindow::loginSuccess(QString nickName, int rank) {// call when successful login,set the rank and nickName
	ui->stackedWidget->setCurrentWidget(ui->page_3);
	ui->label_name->setText(nickName);
	ui->label_rank->setText(QString::number(rank));
	int ava = rank/100;
	if (ava > 6) ava = 6;
	ui->ava->setStyleSheet("#ava{image:url(:/ava/ava"+QString::number(ava)+".jpg);}");
	ui->notiList->clear();
	addNoti(u8"Chào mừng bạn đến với trò chơi ô ăn quan!");
}
void MainWindow::on_nameSortBtn_clicked()
{

	char log[10];
	emit MainSignal(GET_LIST_PLAYER, log, 0);// send get list player

}
void MainWindow::keyPressEvent(QKeyEvent *e) {
	if (Qt::Key_Enter -1 == e->key()) {
		if (ui->stackedWidget->currentIndex() == 1) {
			ui->sendButton->click();
		}
		if (ui->stackedWidget->currentIndex() == 0) {
			ui->loginBtn->click();
		}
	}
}
void MainWindow::on_rankSortBtn_clicked()
{   if(check==0){
     ui->listWidget->sortItems(Qt::DescendingOrder);
     check++;
     check%=2;
    }
    else{
        ui->listWidget->sortItems();
        check++;
        check%=2;
    }
}
