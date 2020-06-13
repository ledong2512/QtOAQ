#include "challenge.h"
#include "ui_challenge.h"

challenge::challenge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::challenge)
{
    ui->setupUi(this);
}

challenge::~challenge()
{
    delete ui;
}
