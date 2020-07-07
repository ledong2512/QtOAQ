#include"LeftButton.h"
#include"QPixmap"
#include<QDebug>
LeftButton::LeftButton()
{
    setPixmap(QPixmap(":/test/left.png"));
}

void LeftButton::mousePressEvent(QGraphicsSceneMouseEvent *event) //left button of the cell
{   int direct=-1;
    if(index>=7&&index<=11) direct=1;
    emit clickOK(index,direct);
    qDebug()<<"LB";
}
RightButton::RightButton()
{
    setPixmap(QPixmap(":/test/right.png"));
}

void RightButton::mousePressEvent(QGraphicsSceneMouseEvent *event)//right button of the cell
{   int direct=1;
    if(index>=7&&index<=11) direct=-1;
    emit clickOK(index,direct);
    qDebug()<<"RB";
}
