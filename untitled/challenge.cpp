#include "challenge.h"
#include "ui_challenge.h"
#include<QTimer>
#include<QPushButton>
challenge::challenge(QString rival, QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::challenge)
{
	
    ui->setupUi(this);
	QStringList data = rival.split(" ");

	ui->challengerLabel->setText(data.at(0));
	secretNumber = data.at(1).toInt();
	ui->challengerLabel->setStyleSheet(" font-size:14pt; font-weight:600; font-style:italic; color:#6fb34a;");
	ui->buttonBox->button(QDialogButtonBox::Cancel)->setStyleSheet(QString(":active{ background:white;} :hover{ background:gray;} :pressed{ background:white;}"));
    QTimer *t=new QTimer();
	connect(this, SIGNAL(accepted()), this, SLOT(emitAcceptFight()));
    connect(t,SIGNAL(timeout()),this,SLOT(coutDown()));
    t->start(1000);
}

challenge::~challenge()
{
    delete ui;
}

void challenge::emitAcceptFight()
{
	emit acceptFight(ui->challengerLabel->text(), secretNumber);
}


void challenge::coutDown()
{
    time--;
    ui->timeLabel->setText(QString::number(time));
	ui->timeLabel->setAlignment(Qt::AlignCenter);
	ui->timeLabel->setStyleSheet(" font-size:16pt; font-weight:600;");
    if(time==0)  this->close();
}
