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
MainWindow *mainT;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/oan.jpg"));
    splash->show();
    mainT=new MainWindow();
    QTimer::singleShot(600,splash,SLOT(close()));
    QTimer::singleShot(600,mainT,SLOT(show()));
    return a.exec();
}
