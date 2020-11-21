#pragma once
#include <QWidget>
#include "ui_confirm.h"

class Confirm : public QWidget {// yes/no dialog
	Q_OBJECT

public:
	Confirm(QWidget * parent = Q_NULLPTR);
	~Confirm();
	private slots:
	void emitConfirm();// you chose yes
signals:
	void confirmSignal();// you chose yes

private:
	Ui::Confirm ui;
};
