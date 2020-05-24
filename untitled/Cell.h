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
  Cell(int x, int y);
  void keyPressEvent(QKeyEvent *event);
  void setIndex(int x){
       index=x;

  }
  void lockModify();
  void unlockModify();

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void focusInEvent(QFocusEvent *event);
    void focusOutEvent(QFocusEvent *event);
private:
int check=0;
};

#endif // CELL_H
