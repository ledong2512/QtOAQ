#ifndef GAME_H
#define GAME_H
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QWidget>
#include"BigCell.h"
#include<QObject>
#include"Player.h"
#include"Cell.h"

class Game:public QGraphicsView{ // the main game class
    Q_OBJECT
public:
    Game(QString rivalName,int plyTrn,QWidget *parent=0); // rivalName is the name of your rival, plyTurn is your turn (0/1)
	//0 go first
    void keyPressEvent(QKeyEvent *event);//key board event
    void keyReleaseEvent(QKeyEvent *event);//key board event
    QGraphicsScene *scene;
    BigCell *cells[12];
    void emitMove(int cell, int direc);// move include what cell you move and it direction
    void removeButton();// you cant do anything, just watch if this fuction call
    void showButtonAgain();// you can now do the move
signals:
	void sendToServerSig(int cell, int direc); //sendmove to server signal include what cell you move and it direction
	void quitSig();// quit the game
public slots:
	void endGameTime();
    void move(int cell, int direc);// move include what cell you move and it direction
    void resetTime(int cell, int direc);//reset the timer 
	void sendToServer(int cell, int direc);//sendmove to server signal include what cell you move and it direction
    void timeCout(){ // the timer
        timer--;
        timerText.setPlainText(QString::number(timer));
        if(timer==0){
			timer++;
			removeButton();

        }
    }
    void changeTurn(int cell, int direc){ //change turn after make amove
		resetTime(cell,direc);
        turn++;
        turn%=2;
        int check=1;

        if(turn==0){
			turnItem->setPos(300, 80);
            for(int i=1;i<=5;i++){
                if(cells[i]->score.getScore()!=0) {
                    check=0;break;
                }
            }
            if (check==1){
                for(int i=1;i<=5;i++) cells[i]->score.setScore(1);
                play[0].score.setScore(play[0].score.getScore()-5);
            }

        }else{
			turnItem->setPos(300, 400);
            for(int i=7;i<=11;i++){
                if(cells[i]->score.getScore()!=0) {
                    check=0;break;
                }
            }
            if (check==1){
                for(int i=7;i<=11;i++) cells[i]->score.setScore(1);
                play[1].score.setScore(play[1].score.getScore()-5);
            }

        }
		if (turn == 1 && playerTurn == 1)for (int i = 7;i <= 11;i++) {
			((Cell*)cells[i])->unlockModify();
		}
		else if (turn == 0 && playerTurn == 0) for (int i = 1;i <= 5;i++) {
			((Cell*)cells[i])->unlockModify();
		}
        for(int i=1;i<=5;i++){
             if(cells[i]->score.getScore()==0)((Cell*)cells[i])->lockModify();
        }
        for(int i=7;i<=11;i++){
            if(cells[i]->score.getScore()==0)((Cell*)cells[i])->lockModify();
        }
		
    };
private:
    QGraphicsTextItem timerText;
    int timer=120;
    Player play[2];
    int turn=0;
	int playerTurn;
    int millisecondsWait=500;
	QGraphicsPixmapItem *turnItem;
};

#endif // GAME_H
