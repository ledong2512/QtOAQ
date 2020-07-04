#pragma once
#include <QWidget>
#include "ui_confirm.h"

class Confirm : public QWidget {
	Q_OBJECT

public:
	Confirm(QWidget * parent = Q_NULLPTR);
	~Confirm();
	private slots:
	void emitConfirm();
signals:
	void confirmSignal();

private:
	Ui::Confirm ui;
};
