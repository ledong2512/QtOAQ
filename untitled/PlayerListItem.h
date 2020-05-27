#ifndef PLAYERLISTITEM_H
#define PLAYERLISTITEM_H
#include<QWidget>
#include<QDebug>
#include<QLabel>
#include"mainwindow.h"

class PlayerListItem:public QWidget{
    Q_OBJECT
public:
    PlayerListItem();
    PlayerListItem(int rank);
    void mousePressEvent(QMouseEvent*event);
public slots:
    void challenge(){
        qDebug()<<rank->text();
        emit goToGame();
    }

signals:
    void goToGame();
private:
    QLabel *playerName,*rank;
};

#endif // PLAYERLISTITEM_H
