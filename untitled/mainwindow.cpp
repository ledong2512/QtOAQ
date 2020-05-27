#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStackedWidget>
#include"QGraphicsScene"
#include<QLayout>
#include<QDebug>
#include"PlayerListItem.h"
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

void MainWindow::resetPlayerStatus(int x)
{
    QListWidgetItem* item = new QListWidgetItem();
   //

    PlayerListItem * mssItem = new PlayerListItem(x);

    item->setData(Qt::DisplayRole,x);
    item->setFont(QFont("time",1));
    item->setTextColor(Qt::white);
    item->setSizeHint(mssItem->sizeHint());

    ui->listWidget->addItem(item);
    ui->listWidget->setItemWidget(item, mssItem);
    ui->listWidget->scrollToBottom();
}

void MainWindow::accessGameSlot()
{
    game->setParent(ui->page_2);
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}




void MainWindow::on_loginBtn_clicked()
{
  ui->stackedWidget->setCurrentWidget(ui->page_3);
    for(int i=0;i<100;i++) resetPlayerStatus(i);
}



void MainWindow::on_nameSortBtn_clicked()
{



}

void MainWindow::on_rankSortBtn_clicked()
{   if(check==0){
     ui->listWidget->sortItems(Qt::DescendingOrder);
     check++;
     check%=2;
    }
    else{
        ui->listWidget->sortItems();
        check++;
        check%=2;
    }
}
