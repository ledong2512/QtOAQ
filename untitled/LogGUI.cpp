#include "LogGUI.hpp"
#include<QListWidgetItem>
LogGUI::LogGUI(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);
}

LogGUI::~LogGUI() {
	
}

void LogGUI::addLogLine(QString line)
{
	QListWidgetItem* item;
	QStringList list = line.split(":");
	QString show;
	if(list.length()<3) item = new QListWidgetItem(line);
	else {
		if (list.at(0) == "#0") show += u8"Người 1: ";
		else show += u8"Người 2: ";
		show += list.at(1);
		show += "  ";
		if (list.at(2) == "0") show += u8"phải";
		else show += u8"trái";
		item = new QListWidgetItem(show);
	}
	item->setFont(QFont("Times", 12));
	item->setTextColor(Qt::black);
	ui.listWidget->addItem(item);
	ui.listWidget->scrollToBottom();
}

void LogGUI::clearBoard()
{
	ui.listWidget->clear();
}
