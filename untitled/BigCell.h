#ifndef BIGCELL_H
#define BIGCELL_H
#include <QGraphicsRectItem>
#include<QMoveEvent>
#include"Score.h"
#include"LeftButton.h"
class BigCell:public QGraphicsRectItem{
public:
    BigCell();
    LeftButton * leftB=NULL; RightButton *rightB=NULL;
    Score score;
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
    int index;
};

#endif // BIGCELL_H
