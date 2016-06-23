#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H

#include <QWidget>
#include <QTreeWidget>
#include <QTreeWidgetItem>
//#include "ptzcontrolwidget.h"

enum ControlPanelType
{
	WireNet = 0,
	DropR,
	InsulationR,
	UPS,
	DCPower
};

class ControlPanel : public QWidget
{
	Q_OBJECT

public:
	ControlPanel(QWidget *parent = 0);
	~ControlPanel();
public:
	void SetType(ControlPanelType type);
private Q_SLOTS:
	void TreeWigetGroupItemClicked(QTreeWidgetItem*item, int column);
private:
	void TreeGroupWidgetInit();
	void InitWireNetTreeWidget();
	void InitCameraTreeWidget();
	void InitPTZControlWidget();
private:

	QTreeWidget *		m_Cameratreewidget;
	QTreeWidget *		m_ViewTreewidget;
	QTreeWidget *		m_TreewidgetGroup;
	QTreeWidgetItem*	m_camera;
//	PTZControlWidget*	m_PTZWindow;
	QWidget*			m_ViewWindow;
	QWidget*			m_cameraTreeWindow;
	QTreeWidgetItem*	m_PTZControl;
	QTreeWidgetItem*	m_view;
	QTreeWidgetItem*	m_View2;

	QTreeWidgetItem* line;		    // file monitoring top node
	QTreeWidgetItem* process;		// process monitoring top node
	QTreeWidgetItem* flow;			// flow monitoring top node
	QTreeWidgetItem* user;		// browser plugins etc.
	QTreeWidgetItem* registers;		// windows register.
	QTreeWidgetItem* mem;			// memory monitoring
	QTreeWidgetItem* stat;			// statistics of system

	

};

#endif // CONTROLPANEL_H

