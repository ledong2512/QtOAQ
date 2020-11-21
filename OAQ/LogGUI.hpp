#pragma once
#include <QWidget>
#include "ui_loggui.h"

class LogGUI : public QWidget { // this is the log UI
	Q_OBJECT

public:
	LogGUI(QWidget * parent = Q_NULLPTR);
	~LogGUI();
	void addLogLine(QString line); // add a line of log
	void clearBoard(); // clear thing
public slots:
void buttonClicked() {
	emit returnToMain();
};
signals:
	void returnToMain();
private:
	Ui::LogGUI ui;
};
