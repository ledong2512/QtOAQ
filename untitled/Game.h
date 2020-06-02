#ifndef GAME_H
#define GAME_H
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QWidget>
#include"BigCell.h"
#include<QObject>
#include"Player.h"
#include"Cell.h"

class Game:public QGraphicsView{
    Q_OBJECT
public:
    Game(QWidget *parent=0);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    QGraphicsScene *scene;
    BigCell *cells[12];
    void emitMove(int cell, int direc);
    void removeButton();
    void showButtonAgain();
public slots:
    void move(int cell, int direc);
    void resetTime(int cell, int direc);
    void timeCout(){
        timer--;
        timerText.setPlainText(QString::number(timer));
        if(timer==0){

            if(turn==0){
                for(int i=1;i<=5;i++){
                    if(cells[i]->score.getScore()!=0) {
                       cells[i]->leftB->clickOK(i,1);break;
                    }
                }
            }
            else{
                        for(int i=7;i<=11;i++){
                            if(cells[i]->score.getScore()!=0) {
                               cells[i]->leftB->clickOK(i,1);break;
                            }
                        }
            }

            changeTurn(0,0);

        }
    }
    void changeTurn(int cell, int direc){

        turn++;
        turn%=2;
        int check=1;

        if(turn==0){
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
        for(int i=1;i<=5;i++){
             if(cells[i]->score.getScore()==0)((Cell*)cells[i])->lockModify();
        }
        for(int i=7;i<=11;i++){
            if(cells[i]->score.getScore()==0)((Cell*)cells[i])->lockModify();
        }
        if(turn==1)for(int i=1;i<=5;i++){
            ((Cell*)cells[i])->lockModify();
         }
         else for(int i=7;i<=11;i++){
             ((Cell*)cells[i])->lockModify();
         }
    };
private:
    QGraphicsTextItem timerText;
    int timer=120;
    Player play[2];
    int turn=0;
    int millisecondsWait=500;

};

#endif // GAME_H
