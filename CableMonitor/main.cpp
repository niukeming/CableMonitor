#include "cablemonitor.h"
#include <QtWidgets/QApplication>
#include "../MainForm/MainForm.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QString strFile = QCoreApplication::applicationDirPath() + "Resources/Style.txt";
	QFile qss(strFile);
	if (qss.open(QFile::ReadOnly))
	{
		qApp->setStyleSheet(qss.readAll());
	}

	MainForm w;
	w.show();

	//CableMonitor w;
	//w.show();
	return a.exec();
}
