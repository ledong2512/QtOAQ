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
#include<mainwindow.h>
Game *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/oan.jpg"));
    splash->show();
    MainWindow *main=new MainWindow();
    QTimer::singleShot(600,splash,SLOT(close()));
    QTimer::singleShot(600,main,SLOT(show()));
    return a.exec();
}
