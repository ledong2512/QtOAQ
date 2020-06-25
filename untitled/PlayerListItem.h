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
    PlayerListItem(QString playerNameInput,int rank);
    void mousePressEvent(QMouseEvent*event);
public slots:
    void challenge(){
        emit goToGame(playerName->text());
    }

signals:
    void goToGame(QString playerName);
private:
    QLabel *playerName,*rank;
};

#endif // PLAYERLISTITEM_H
