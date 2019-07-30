#pragma once

#include <QtWidgets/QWidget>
#include "ui_VsQT.h"

class VsQT : public QWidget	
{
	Q_OBJECT

public:
	VsQT(QWidget *parent = Q_NULLPTR);

private:
	Ui::VsQTClass ui;

private slots:
	void calcBMI();
};
