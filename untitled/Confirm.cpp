#include "Confirm.hpp"

Confirm::Confirm(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);
}
void Confirm::emitConfirm() {
	emit confirmSignal();
}
Confirm::~Confirm() {
	
}

