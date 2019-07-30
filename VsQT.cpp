#include "VsQT.h"
#include <QDebug>
#include <QRegExp>
#include <iostream>
#include <string>
#include <cmath>

VsQT::VsQT(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	try {
		connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(calcBMI()));
	}
	catch (...) {
		qDebug() << "Handling exception not caught in slot.";
	}
}

void VsQT::calcBMI() {
	QString cm = ui.lineEdit_2->text();
	QString weight = ui.lineEdit_3->text();
	QRegExp re("\\d*");
	if(cm.isEmpty() || weight.isEmpty()) { // check empty
		ui.lineEdit->setStyleSheet("border-style:none;color:red");
		ui.lineEdit->setText("Please Enter the two form");
	}
	else {
		if (re.exactMatch(cm) && re.exactMatch(weight)) {
			float bmi = weight.toFloat() / (std::pow(cm.toFloat() / 100, 2));
			QString qbmi = "Your BMI is " + QString::number(bmi);
			ui.lineEdit->setStyleSheet("border-style:none;color:green");
			ui.lineEdit->setText(qbmi);
		}
		else {
			ui.lineEdit->setStyleSheet("border-style:none;color:red");
			ui.lineEdit->setText("Please Enter Digit");
		}
	}
}
