#pragma once
#include <QWidget>
#include "ui_regist.h"

class Regist : public QWidget { // this is the form to registration
	Q_OBJECT

public:
	Regist(QWidget * parent = Q_NULLPTR);
	void errMes(QString mess){ //get the return message
		ui.errorLabel->setText(QString(mess));
		ui.errorLabel->setStyleSheet("#errorLabel{color:red}");
	}
	~Regist();
public slots:
void registS();
private:
	Ui::Regist ui;
};
