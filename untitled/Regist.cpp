#include "Regist.hpp"
#include"ClientRequest.h"
#include<QRegExpValidator>
Regist::Regist(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);
	ui.lineId->setValidator(new QRegExpValidator(QRegExp("^[!-~]*$"), this));
	ui.lineNickName->setValidator(new QRegExpValidator(QRegExp("^[!-~]*$"), this));
	ui.linePass->setValidator(new QRegExpValidator(QRegExp("^[!-~]*$"), this));
	ui.linePass_2->setValidator(new QRegExpValidator(QRegExp("^[!-~]*$"), this));
}

void Regist::registS() {
	QString id = ui.lineId->text();
	QString nickName = ui.lineNickName->text();
	QString pass = ui.linePass->text();
	QString pass2 = ui.linePass_2->text();
	if (id.length() == 0 || nickName.length() == 0 || pass.length() == 0 || pass2.length() == 0) {
		ui.errorLabel->setText(QString(u8"Vui lòng điền đủ thông tin"));
		ui.errorLabel->setStyleSheet("#errorLabel{color:red}");
		return;
	}
	if (pass != pass2) {
		ui.errorLabel->setText(QString(u8"Mật khẩu xác thực không đúng"));
		ui.errorLabel->setStyleSheet("#errorLabel{color:red}");
		return;
	}
	QString data = id + " " + nickName + " " + pass;
	char data_C[2048];strcpy(data_C, data.toStdString().c_str());
	crafMessageAndSend(REGIST, data_C,strlen(data_C));
}
Regist::~Regist() {
	
}
