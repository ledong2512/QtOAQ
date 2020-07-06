#pragma once
#include <QWidget>
#include "ui_regist.h"

class Regist : public QWidget {
	Q_OBJECT

public:
	Regist(QWidget * parent = Q_NULLPTR);
	void errMes(QString mess){
		ui.errorLabel->setText(QString(mess));
		ui.errorLabel->setStyleSheet("#errorLabel{color:red}");
	}
	~Regist();
public slots:
void registS();
private:
	Ui::Regist ui;
};
