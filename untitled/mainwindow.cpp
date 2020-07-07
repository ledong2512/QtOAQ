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
	ui->lineEdit_5->setValidator(new QRegExpValidator(QRegExp("^[!-~]*$"), this));
	ui->lineEdit_6->setValidator(new QRegExpValidator(QRegExp("^[!-~]*$"), this));
    setFixedSize(QSize(800,480));
	ui->sendButton->setShortcut(QKeySequence(Qt::Key_Enter));
	QObject::connect(&confirmUI, &Confirm::confirmSignal, this, &MainWindow::confirmSlot);
	QObject::connect(&logUI, &LogGUI::returnToMain, this, &MainWindow::returnSig);

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
	if (noti == QString(u8"Đối thủ không khả dụng!!!")) {
		if (ui->stackedWidget->currentIndex() == 1)
			currentStt = 1;
	}
	if (noti == QString(u8"Ván đấu đã bị hủy bỏ!!!")) {
		if (ui->stackedWidget->currentIndex() == 1)
			currentStt = 1;
	}
	QListWidgetItem* item = new QListWidgetItem("  "+noti);
	item->setFont(QFont("Times", 12));
	item->setTextColor(Qt::black);
	ui->notiList->addItem(item);
	ui->notiList->scrollToBottom();
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
void MainWindow::returnSig() {
	char log[10];
	emit MainSignal(RETURN, log, 0);

}
void MainWindow::accessGameSlot(QString playerName)
{   
	char challenge[MAX_LENGTH];
	strcpy_s(challenge, (playerName + " " + ui->label_name->text()).toStdString().c_str());
	qDebug() << challenge<<strlen(challenge);
	emit MainSignal(CONNECT_TO_PLAY, challenge, strlen(challenge));
}
void MainWindow::logoutSuccess() {
	confirmUI.close();
	currentStt = 0;
	ui->stackedWidget->setCurrentWidget(ui->page);
}
void MainWindow::newChallenger(QString rival) {
	if (currentStt != 1) return;
	challenge *tmp;
	tmp=new challenge(rival);
	tmp->show();
	QObject::connect(tmp, &challenge::acceptFight, this, &MainWindow::acceptedFightSlot);
}
void MainWindow::readyToPlay(QString rival, int number)
{
	char num_c[10];
	_itoa_s(number, num_c, 10);
	if (currentStt == 1) {// ready
		currentStt++;
		qDebug() << "check point";
		emit MainSignal(LETS_PLAY, num_c, strlen(num_c));

	}
	else {//cant play
		emit MainSignal(CANNOT_PLAY, num_c, strlen(num_c));
	}
}
void MainWindow::playGame(QString rival, int number,int gameNum)
{
	this->numberOfGame = gameNum;
	gameTurn = number;
	if (game != NULL) delete game;
	game = new Game(rival,number);
	
	game->setParent(ui->page_2);
	ui->stackedWidget->setCurrentWidget(ui->page_2);
}
void MainWindow::moveGameSlot(int cell, int dir)
{
	int direct;
	if (cell <= 5 && cell >= 1) {
		if (dir == 1) direct = -1;
		else direct = 1;
	}
	if (cell <= 11 && cell >= 7) {
		if (dir == 0) direct = -1;
		else direct = 1;
	}
	emit moveGameSignal(cell, direct);
}
void MainWindow::logout()
{
	confirmUI.show();
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
void MainWindow::registButtonClicked() {
	registForm.show();
}
void MainWindow::loginErrorSlots(QString message)
{
	ui->loginError->setText(message);
	ui->loginError->setStyleSheet("#loginError{color:red}");
}
void MainWindow::on_loginBtn_clicked()
{
	QString id = ui->lineEdit_5->text();
	QString pass = ui->lineEdit_6->text();
	char loginData[MAX_LENGTH];
	strcpy_s(loginData, (id + " " + pass).toStdString().c_str());
	if (id.length()==0||pass.length()==0) {
		ui->loginError->setText(QString(u8"Vui lòng điền đủ thông tin"));
		ui->loginError->setStyleSheet("#loginError{color:red}");
	}else
	emit MainSignal(1, loginData, strlen(loginData));

}
void MainWindow::registHandle(QString mess) {
	registForm.errMes(mess);
}
void MainWindow::confirmSlot()
{
	if (ui->stackedWidget->currentIndex() == 1) {
		char log[10];
		emit MainSignal(LOGOUT_MESSAGE, log, 0);
	}
	if (ui->stackedWidget->currentIndex() == 2) {
		if (logRecv == 1) {
			char log[10];
			emit MainSignal(RETURN, log, 0);
		}else{
		char moveMes[50];
		char tmp[10];
		_itoa_s(numberOfGame, moveMes, 10);
		strcat(moveMes, " ");
		_itoa_s(gameTurn, tmp, 10);
		strcat(moveMes, tmp);
		emit MainSignal(SURRENDER, moveMes, strlen(moveMes));
		}
	}
}

void MainWindow::loginSuccess(QString nickName, int rank) {// call when successful login,set the rank and nickName
	ui->stackedWidget->setCurrentWidget(ui->page_3);
	ui->label_name->setText(nickName);
	ui->label_rank->setText(QString::number(rank));
	int ava = rank/100;
	if (ava > 6) ava = 6;
	ui->ava->setStyleSheet("#ava{image:url(:/ava/ava"+QString::number(ava+1)+".jpg);}");
	ui->notiList->clear();
	addNoti(u8"Chào mừng bạn đến với trò chơi ô ăn quan!");
	char log[10];
	emit MainSignal(GET_LIST_PLAYER, log, 0);
	currentStt = 1;
	if (logRecv == 1) logRecv = 0;
	logUI.close();
	confirmUI.close();
	registForm.close();
}
void MainWindow::recvLogSlots(QString line) {
	if(logRecv==0)logUI.clearBoard();
	logUI.show();
	logUI.addLogLine(line);
	confirmUI.close();
	logRecv = 1;
}
void MainWindow::recvIPSlots(QString line) {
	logUI.addLogLine(line);
}
void MainWindow::on_nameSortBtn_clicked()
{

	char log[10];
	emit MainSignal(GET_LIST_PLAYER, log, 0);// send get list player

}
void MainWindow::acceptedFightSlot(QString name, int num) {
	QString mess = name + " " + QString::number(num);
	char buff[2048];
	strcpy(buff, mess.toStdString().c_str());
	emit MainSignal(AGREE_TO_PLAY, buff, strlen(buff));// send get list player
};
void MainWindow::keyPressEvent(QKeyEvent *e) {
	if (Qt::Key_Enter -1 == e->key()) {
		if (ui->stackedWidget->currentIndex() == 1) {
			ui->sendButton->click();
		}
		if (ui->stackedWidget->currentIndex() == 0) {
			ui->loginBtn->click();
		}
	}
	if (Qt::Key_Escape == e->key()) {
		if (ui->stackedWidget->currentIndex() == 2) {
			confirmUI.show();
		}
	}
}
void MainWindow::quitGame() {
	confirmUI.show();
}
void MainWindow::requestLogSlot() {
	char moveMes[50];
	char tmp[10];
	_itoa_s(numberOfGame, moveMes, 10);
	strcat(moveMes, " ");
	_itoa_s(gameTurn, tmp, 10);
	strcat(moveMes, tmp);
	emit endGame();
	emit MainSignal(GET_LOG, moveMes, strlen(moveMes));
	emit MainSignal(GET_IP, moveMes, strlen(moveMes));
}
void MainWindow::gameMove(int cell, int direct) {
	char moveMes[50];
	char tmp[10];
	_itoa_s(numberOfGame, moveMes, 10);
	strcat(moveMes, " ");
	_itoa_s(gameTurn, tmp, 10);
	strcat(moveMes, tmp);strcat(moveMes, " ");
	int  dir;
	if (cell <= 5 && cell >= 1) {
		if (direct == -1) dir = 1;
		else dir = 0;
	}
	if (cell <= 11 && cell >= 7) {
		if (direct == -1) dir = 0;
		else dir = 1;
	}
	_itoa_s(cell, tmp, 10);
	strcat(moveMes, tmp);strcat(moveMes, " ");
	_itoa_s(dir, tmp, 10);
	strcat(moveMes, tmp);
	emit MainSignal(PLAYER_MOVE, moveMes, strlen(moveMes));
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
