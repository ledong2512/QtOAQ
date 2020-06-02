#include"Score.h"
#include "Score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    score = 0;
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",12));
    setPlainText(QString::number(score)); // Score: 1

}

void Score::increase(){
    score++;
    setPlainText(QString::number(score)); // Score: 1
    if(score<=13) stone.setPixmap(QPixmap(":/test/"+(QString::number(score).append(".png"))));
    else  stone.setPixmap(QPixmap(":/test/"+(QString::number(13).append(".png"))));

}

int Score::getScore(){
    return score;
}


void Score::setScore(int x)
{
    score=x;
    setPlainText(QString::number(score)); // Score: 1
    if(score<=13) stone.setPixmap(QPixmap(":/test/"+(QString::number(score).append(".png"))));
    else  stone.setPixmap(QPixmap(":/test/"+(QString::number(13).append(".png"))));
}
