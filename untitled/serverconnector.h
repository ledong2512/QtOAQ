#ifndef SERVERCONNECTOR_H
#define SERVERCONNECTOR_H

#include <QMainWindow>

namespace Ui {
class ServerConnector;
}

class ServerConnector : public QMainWindow
{
    Q_OBJECT

public:
    explicit ServerConnector(QWidget *parent = nullptr);
    ~ServerConnector();

private:
    Ui::ServerConnector *ui;
};

#endif // SERVERCONNECTOR_H
