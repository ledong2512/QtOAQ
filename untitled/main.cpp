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
    a.setWindowIcon(QIcon(":/test/icon.png"));

    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/test/oanqan.png"));
    splash->show();
    mainT=new MainWindow();
    mainT->setWindowTitle("Oanquan");
    QTimer::singleShot(600,splash,SLOT(close()));
    QTimer::singleShot(600,mainT,SLOT(show()));
    return a.exec();
}
