#include "LogGUI.hpp"
#include<QListWidgetItem>
LogGUI::LogGUI(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);
}

LogGUI::~LogGUI() {
	
}

void LogGUI::addLogLine(QString line)
{
	QListWidgetItem* item = new QListWidgetItem(line);
	item->setFont(QFont("Times", 12));
	item->setTextColor(Qt::black);
	ui.listWidget->addItem(item);
	ui.listWidget->scrollToBottom();
}

void LogGUI::clearBoard()
{
	ui.listWidget->clear();
}
