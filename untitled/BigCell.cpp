#include"BigCell.h"
#include<QGraphicsScene>
#include<QGraphicsRectItem>
#include"QDebug"
BigCell::BigCell()
{
    this->setPen(Qt::NoPen);
    this->setFlag(QGraphicsItem::ItemIsFocusable);
    score.setScore(10);
}
void BigCell::updateCell()
{
    qDebug()<<score.getScore();
    score.setScore(score.getScore());
    score.setPos(rect().x(),rect().y());
    score.stone.setPos(rect().x()+50,rect().y()+50);
    scene()->addItem(&score.stone);
    scene()->addItem(&score);
}
