#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QBrush>
#include<QImage>
#include"Cell.h"
#include"Game.h"
#include <QDebug>
Game *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game=new Game();
    game->show();
    return a.exec();
}
