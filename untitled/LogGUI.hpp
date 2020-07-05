#pragma once
#include <QWidget>
#include "ui_loggui.h"

class LogGUI : public QWidget {
	Q_OBJECT

public:
	LogGUI(QWidget * parent = Q_NULLPTR);
	~LogGUI();
	void addLogLine(QString line);
private:
	Ui::LogGUI ui;
};
