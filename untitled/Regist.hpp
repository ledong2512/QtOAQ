#pragma once
#include <QWidget>
#include "ui_regist.h"

class Regist : public QWidget {
	Q_OBJECT

public:
	Regist(QWidget * parent = Q_NULLPTR);
	~Regist();

private:
	Ui::Regist ui;
};
