#include "challenge.h"
#include "ui_challenge.h"
#include<QTimer>
challenge::challenge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::challenge)
{
    ui->setupUi(this);
    QTimer *t=new QTimer();
    connect(t,SIGNAL(timeout()),this,SLOT(coutDown()));
    t->start(1000);
}

challenge::~challenge()
{
    delete ui;
}

void challenge::coutDown()
{
    time--;
    ui->timeLabel->setText(QString::number(time));
    if(time==0)  this->close();
}
