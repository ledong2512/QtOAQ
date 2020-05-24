#ifndef LEFTBUTTON_H
#define LEFTBUTTON_H
#include <QGraphicsPixmapItem>
#include<QMoveEvent>
#include<QObject>
class LeftButton:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    LeftButton();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void setIndex(int x){
        index=x;
    }
    int getIndex(){
        return index;
    }
private:
    int index;
signals:
    void clickOK(int index, int direct);


};
class RightButton:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    RightButton();
    void setIndex(int x){
        index=x;
    }
    int getIndex(){
        return index;
    }
private:
    int index;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:
    void clickOK(int index, int direct);

};
#endif // LEFTBUTTON_H
