#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QBrush>
#include<QImage>
#include"Cell.h"
#include"Game.h"
#include <QDebug>
#include<QSplashScreen>
#include<QTimer>
Game *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/test/test1.png"));
    splash->show();
    game=new Game();
    QTimer::singleShot(600,splash,SLOT(close()));
    QTimer::singleShot(600,game,SLOT(show()));
    return a.exec();
}
