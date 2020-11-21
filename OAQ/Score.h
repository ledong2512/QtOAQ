#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>
#include "Stone.h"
class Score: public QGraphicsTextItem{
public:
    Score(QGraphicsItem * parent=0);
    void increase();
    int getScore();
    void setScore(int x);
     Stone stone;
private:
    int score;

};


#endif // SCORE_H
