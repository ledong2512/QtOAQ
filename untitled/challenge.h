#ifndef CHALLENGE_H
#define CHALLENGE_H

#include <QDialog>
#include<QDebug>
namespace Ui {
class challenge;
}

class challenge : public QDialog
{
    Q_OBJECT

public:
    explicit challenge(  QString rival, QWidget *parent = nullptr);
    ~challenge();
signals:
	void acceptFight(QString name, int number);
public slots:
    void coutDown();
	void emitAcceptFight();
private:
	int secretNumber;
    int time=5;
    Ui::challenge *ui;
};

#endif // CHALLENGE_H
