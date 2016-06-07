#include "cablemonitor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CableMonitor w;
	w.show();
	return a.exec();
}
