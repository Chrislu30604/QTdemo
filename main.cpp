#include "VsQT.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VsQT w;
	w.show();
	return a.exec();
}
