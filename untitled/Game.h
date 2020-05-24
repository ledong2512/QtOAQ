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
    QGraphicsScene *scene;
    BigCell *cells[12];
    void emitMove(int cell, int direc);
    void removeButton();
    void showButtonAgain();
public slots:
    void move(int cell, int direc);
    void changeTurn(int cell, int direc){

        turn++;
        turn%=2;
        if(turn==1)for(int i=1;i<=5;i++){
            ((Cell*)cells[i])->lockModify();
         }
         else for(int i=7;i<=11;i++){
             ((Cell*)cells[i])->lockModify();
         }
    };
private:
    Player play[2];
    int turn=0;

};

#endif // GAME_H
