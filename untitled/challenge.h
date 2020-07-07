#ifndef CHALLENGE_H
#define CHALLENGE_H

#include <QDialog>
#include<QDebug>
namespace Ui {
class challenge;
}

class challenge : public QDialog //this show when someone challenge you to a battle
{
    Q_OBJECT

public:
    explicit challenge(  QString rival, QWidget *parent = nullptr); //rival is the rival Name
    ~challenge();
signals:
	void acceptFight(QString name, int number); // you accept the fight, number is the secret number server send to you
public slots:
    void coutDown();// you have only 5 second to make your decision
	void emitAcceptFight();//accept the fight
private:
	int secretNumber;
    int time=5;
    Ui::challenge *ui;
};

#endif // CHALLENGE_H
