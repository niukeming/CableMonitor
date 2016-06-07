#ifndef CABLEMONITOR_H
#define CABLEMONITOR_H

#include <QtWidgets/QMainWindow>
#include "ui_cablemonitor.h"

class CableMonitor : public QMainWindow
{
	Q_OBJECT

public:
	CableMonitor(QWidget *parent = 0);
	~CableMonitor();

private:
	Ui::CableMonitorClass ui;
};

#endif // CABLEMONITOR_H
