#ifndef BIGCELL_H
#define BIGCELL_H
#include <QGraphicsRectItem>
#include<QMoveEvent>
#include"Score.h"
#include"LeftButton.h"
class BigCell:public QGraphicsRectItem{// this class called "Quan" in the game and is father class of Cell
public:
    BigCell();
    LeftButton * leftB=NULL; RightButton *rightB=NULL;// this save for children class
    Score score;// point 
    void updateCell();
    void setIndex(int x){
        index=x;
        if(leftB!=NULL) leftB->setIndex(x);
        if(rightB!=NULL) rightB->setIndex(x);

    }
    int getIndex(){
        return index;
    }
protected:
    int index;// position
};

#endif // BIGCELL_H
