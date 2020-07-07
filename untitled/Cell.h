#ifndef CELL_H
#define CELL_H
#include <QGraphicsRectItem>
#include<QMoveEvent>
#include"LeftButton.h"
#include"BigCell.h"
#include"Score.h"
#include<QObject>
class Cell:public QObject,public BigCell{
    Q_OBJECT
public:
  Cell(int x, int y);// 
  void keyPressEvent(QKeyEvent *event);
  void setIndex(int x){
       index=x;

  }
  void lockModify();// 2 move button show
  void unlockModify();// 2 move button unshow

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);//event click
    void focusInEvent(QFocusEvent *event);//event focus
    void focusOutEvent(QFocusEvent *event);//event lose focus
private:
int check=0;
};

#endif // CELL_H
