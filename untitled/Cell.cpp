#include "Cell.h"
#include"LeftButton.h"
#include <QDebug>
#include<QGraphicsRectItem>
#include<QGraphicsScene>
#include"Stone.h"
Cell::Cell(int x, int y)

{
    score.setScore(5);
    this->setRect(x,y,100,100);
    this->setPen(Qt::NoPen);
    this->setFlag(QGraphicsItem::ItemIsFocusable);
    leftB=new LeftButton();
    rightB=new RightButton();

}

void Cell::keyPressEvent(QKeyEvent *event)
{

}

void Cell::lockModify()
{
    check=1;
}

void Cell::unlockModify()
{
    check=0;
}


void Cell::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}

void Cell::focusInEvent(QFocusEvent *event)
{ qDebug()<< rect().x();
    if(check==0){
    leftB->setPos(rect().x(),rect().y()+50-8);
    rightB->setPos(rect().x()+100-16,rect().y()+50-8);
    scene()->addItem(leftB);
    scene()->addItem(rightB);}
}

void Cell::focusOutEvent(QFocusEvent *event)
{
    scene()->removeItem(leftB);
    scene()->removeItem(rightB);
}
