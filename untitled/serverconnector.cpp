#include "serverconnector.h"
#include "ui_serverconnector.h"

ServerConnector::ServerConnector(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ServerConnector)
{
    ui->setupUi(this);
}

ServerConnector::~ServerConnector()
{
    delete ui;
}
