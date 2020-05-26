#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStackedWidget>
#include"QGraphicsScene"
#include<QLayout>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    game=new Game();
    setFixedSize(QSize(800,480));




}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_loginBtn_clicked()
{
    game->setParent(ui->page_2);
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}


