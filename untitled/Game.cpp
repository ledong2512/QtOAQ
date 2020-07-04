#include"Game.h"
#include "Cell.h"
#include "Stone.h"
#include"LeftButton.h"
#include "mainwindow.h"
#include<QDebug>
#include<QThread>
#include<QTimer>
#include<QEventLoop>
extern MainWindow *mainT;
Game::Game(QString rivalName, int plyTrn,QWidget *parent)
{

 playerTurn = plyTrn;
 scene=new QGraphicsScene(parent);
 setScene(scene);
 cells[0]=new BigCell();
 cells[6]=new BigCell();
 cells[0]->setRect(70,200,85,75);
 scene->addItem(cells[0]);
 cells[6]->setRect(655,200,75,75);
 scene->addItem(cells[6]);
 play[0].score.setPos(360,60); play[1].score.setPos(360,390);
 scene->addItem(&play[0].score); scene->addItem(&play[1].score);
 for(int i=1;i<=5;i++){
     cells[i]=new Cell(155+(i-1)*100,140);
     scene->addItem(cells[i]);
 }
 for(int i=7;i<=11;i++){
     cells[i]=new Cell(555-(i-7)*100,240);
     scene->addItem(cells[i]);
 }
 for(int i=0;i<=11;i++) {
     cells[i]->updateCell();
     cells[i]->setIndex(i);
 }
 this->setBackgroundBrush(QBrush(QImage(":/test/a.jpg")));
 this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
 this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
 this->setFixedSize(800,480);
 scene->setSceneRect(0,0,800,480);
 QGraphicsTextItem *player, *oppo;
 player = new QGraphicsTextItem();oppo = new QGraphicsTextItem();
 player->setPlainText(QString(u8"Bạn"));
 player->setDefaultTextColor(Qt::black);
 player->setFont(QFont("times", 16));
 oppo->setPlainText(rivalName);
 oppo->setDefaultTextColor(Qt::red);
 oppo->setFont(QFont("times", 16));
 scene->addItem(player);scene->addItem(oppo);
 if (playerTurn == 0) {
	 player->setPos(500, 60); oppo->setPos(500, 380);
 }
 else {
	 oppo->setPos(500, 60); player->setPos(500, 380);
 }
 for(int i=7;i<=11;i++){
   //  connect(cells[i]->leftB,&LeftButton::clickOK,this,&Game::resetTime);
    // connect(cells[i]->rightB,&RightButton::clickOK,this,&Game::resetTime);
	 connect(cells[i]->leftB, &LeftButton::clickOK, this, &Game::sendToServer);
	 connect(cells[i]->rightB, &RightButton::clickOK, this, &Game::sendToServer);
    connect(cells[i]->leftB,&LeftButton::clickOK,this,&Game::move);
    connect(cells[i]->rightB,&RightButton::clickOK,this,&Game::move);
    connect(cells[i]->leftB,&LeftButton::clickOK,this,&Game::changeTurn);
    connect(cells[i]->rightB,&RightButton::clickOK,this,&Game::changeTurn);
 }
 for(int i=1;i<=5;i++){
   // connect(cells[i]->leftB,&LeftButton::clickOK,this,&Game::resetTime);
   // connect(cells[i]->rightB,&RightButton::clickOK,this,&Game::resetTime);
	 connect(cells[i]->leftB, &LeftButton::clickOK, this, &Game::sendToServer);
	 connect(cells[i]->rightB, &RightButton::clickOK, this, &Game::sendToServer);
    connect(cells[i]->leftB,&LeftButton::clickOK,this,&Game::move);
    connect(cells[i]->rightB,&RightButton::clickOK,this,&Game::move);
    connect(cells[i]->leftB,&LeftButton::clickOK,this,&Game::changeTurn);
    connect(cells[i]->rightB,&RightButton::clickOK,this,&Game::changeTurn);
 }
 removeButton();
 if(playerTurn==0)
 for(int i=1;i<=5;i++){
     ((Cell*)cells[i])->unlockModify();
 }
 timerText.setPos(130,23);
 timerText.setDefaultTextColor(Qt::black);
 timerText.setFont(QFont("times",12));
 timerText.setPlainText(QString::number(timer));
 scene->addItem(&timerText);
 connect(this, &Game::sendToServerSig, mainT, &MainWindow::gameMove);
 QTimer *t=new QTimer();
 connect(t,SIGNAL(timeout()),this,SLOT(timeCout()));
 t->start(1000);

}

void Game::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Space){
        millisecondsWait=20;
    }
}

void Game::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Space){
        millisecondsWait=500;
    }
}

void Game::removeButton()
{
    for(int i=1;i<=5;i++){
       ((Cell*)cells[i])->lockModify();
    }
    for(int i=7;i<=11;i++){
        ((Cell*)cells[i])->lockModify();
    }
}

void Game::showButtonAgain()
{
    for(int i=1;i<=5;i++){
       ((Cell*)cells[i])->unlockModify();
    }
    for(int i=7;i<=11;i++){
        ((Cell*)cells[i])->unlockModify();
    }
}


void Game::sendToServer(int cell, int direc) {
	emit sendToServerSig(cell, direc);
}
void Game::move(int cell, int direc)
{
    cells[0]->setFocus();
    removeButton();

    cell%=12;
        int n= cells[cell]->score.getScore();
        if(n==0) {
            showButtonAgain();
            return;
        }
        cells[cell]->score.setScore(0);cell+=direc;
        cell%=12;if(cell<0) cell+=12;
        for(int i=0;i<n;i++){
             cells[cell]->score.increase();
             cell+=direc;
             cell%=12;if(cell<0) cell+=12;

             QEventLoop loop;
                 QTimer t;
                 t.connect(&t, &QTimer::timeout, &loop, &QEventLoop::quit);
                 t.start(millisecondsWait);
                 loop.exec();
        }
        if(cells[cell]->score.getScore()==0) {
           int tmp=cell+direc;
           tmp%=12;
           if(tmp<0) tmp+=12;
           play[turn].score.setScore(cells[tmp]->score.getScore()+play[turn].score.getScore());
           cells[tmp]->score.setScore(0);// update point
           //showButtonAgain();
           return;
        }
        if(cell!=0&&cell!=6) move(cell,direc);
        //showButtonAgain();
}

void Game::resetTime(int cell, int direc)
{
            timer=120;
}
