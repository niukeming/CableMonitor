#include "controlpanel.h"
#include <QHeaderView>
#include <QPushButton>
#include <QBoxlayout>
#include <QLabel>
//#include "ItemDelegate.h"
//#include "ptzcontrolwidget.h"
#pragma execution_character_set("utf-8")
ControlPanel::ControlPanel(QWidget *parent)
	: QWidget(parent)
{
	
	InitWireNetTreeWidget();
	//InitCameraTreeWidget();
	//InitPTZControlWidget();
	//TreeGroupWidgetInit();
	setObjectName("ControlPanel");
}

ControlPanel::~ControlPanel()
{

}

void ControlPanel::SetType(ControlPanelType type)
{
	if (type == WireNet)//外电网
	{
	//	m_PTZControl->setHidden(false);
		m_view->setHidden(false);
	}
	if (type == DropR)//异物电网电阻
	{
	//	m_PTZControl->setHidden(true);
		m_view->setHidden(false);
	}
	if (type == InsulationR)//绝缘电阻
	{
	//	m_PTZControl->setHidden(true);
		m_view->setHidden(true);
	}
	if (type == UPS)//UPS
	{
		//	m_PTZControl->setHidden(true);
		m_view->setHidden(true);
	}
	if (type == DCPower)//直流电源
	{
		//	m_PTZControl->setHidden(true);
		m_view->setHidden(true);
	}




}

//void ControlPanel::TreeGroupWidgetInit()
//{
//	m_TreewidgetGroup = new QTreeWidget(this);
//	m_TreewidgetGroup->setColumnCount(1);
//	m_TreewidgetGroup->headerItem()->setHidden(true);
//	m_TreewidgetGroup->header()->setSectionsClickable(true);
//	m_TreewidgetGroup->setObjectName("TreewidgetGroup");
//	m_TreewidgetGroup->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);// 禁止竖直滚动条
//	m_TreewidgetGroup->resizeColumnToContents(0);
//
//	QVBoxLayout*temp = new QVBoxLayout;
//	temp->setMargin(0);
//	temp->addWidget(m_TreewidgetGroup);
//	setLayout(temp);
//
//	ItemDelegate *delegate = new ItemDelegate(this);
//	delegate->setView(m_TreewidgetGroup);
//	m_TreewidgetGroup->setItemDelegate(delegate);
//
//	connect(m_TreewidgetGroup, SIGNAL(itemClicked(QTreeWidgetItem*, int)), this, SLOT(TreeWigetGroupItemClicked(QTreeWidgetItem*, int)));
//	//TreeWigetGroupItemClicked(m_TreewidgetGroup->topLevelItem(0), 0);
//	//connect(m_TreewidgetGroup->header(), SIGNAL(sectionClicked(int)), this, SLOT(sectionClickedSlot(int)));
//
//	m_TreewidgetGroup->setFrameStyle(QFrame::NoFrame);
//	m_TreewidgetGroup->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
//
//	m_TreewidgetGroup->header()->sectionResizeMode(QHeaderView::ResizeToContents);
//	m_TreewidgetGroup->header()->setStretchLastSection(true);
//
//	m_view = new QTreeWidgetItem(m_TreewidgetGroup);
//	m_view->setText(0, "视图");
//	m_View2 = new QTreeWidgetItem(m_view);
//	m_View2->setSizeHint(0, QSize(0, 130));
//	m_TreewidgetGroup->setItemWidget(m_View2, 0, m_ViewWindow);
//
//
//	m_PTZControl = new QTreeWidgetItem(m_TreewidgetGroup);
//	m_PTZControl->setText(0, "云台控制");
//	QTreeWidgetItem*PTZControl2 = new QTreeWidgetItem(m_PTZControl);
//	m_TreewidgetGroup->setItemWidget(PTZControl2, 0, m_PTZWindow);
//
//
//	m_camera = new QTreeWidgetItem(m_TreewidgetGroup);
//	m_camera->setText(0, "摄像机列表");
//	QTreeWidgetItem*camera2 = new QTreeWidgetItem(m_camera);
//	camera2->setSizeHint(0, QSize(0, m_cameraTreeWindow->height()));
//	m_TreewidgetGroup->setItemWidget(camera2, 0, m_cameraTreeWindow);
//
//}

//void ControlPanel::InitCameraTreeWidget()
//{
//	QHBoxLayout *layout = new QHBoxLayout;
//	m_cameraTreeWindow = new QWidget;
//	m_Cameratreewidget = new QTreeWidget;
//	layout->addWidget(m_Cameratreewidget);
//	m_cameraTreeWindow->setLayout(layout);
//
//	m_Cameratreewidget->setColumnCount(1);
//	m_Cameratreewidget->setHeaderHidden(true);
//	m_Cameratreewidget->setObjectName("CameraTreeWidget");
//	m_Cameratreewidget->resizeColumnToContents(0);
//
//
//
//	QList<QTreeWidgetItem*> childs;
//	m_Cameratreewidget->header()->sectionResizeMode(QHeaderView::ResizeToContents);
//	m_Cameratreewidget->header()->setStretchLastSection(true);
//	m_Cameratreewidget->header()->setSectionsClickable(true);
//
//	/* top level node has no parent, so we set it as NULL */
//	line = new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("线路")));
//	childs.clear();
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[郑焦城际K4+950]基站2院落[定焦枪机]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[郑焦城际K10+250]基站3通信室内[半球]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[郑焦城际K10+250]基站3院落[定焦枪机]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[郑焦城际K50+520]修武西信号机械室内4[半球]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[郑焦城际K50+520]修武西信息机房室内2[半球]"))));
//
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[郑焦城际K70+000]焦作咽喉焦向[变焦枪机]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[郑焦城际K36+550]武陟信远动变电室内[半球]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[郑焦城际K46+600]基站8通信室内[半球]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[郑焦城际K50+300]修武西牵变所室内-3[半球]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[郑焦城际K50+520]修武西信息机房室内1[半球]"))));
//
//
//	line->addChildren(childs);
//	m_Cameratreewidget->addTopLevelItem(line);
//
//	/* add the fiveth top level node with children filled */
//	user = new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("客服")));
//	childs.clear();
//
//
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[郑焦城际K15+550]黄河景区10KV配电所室内-1[半球]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[郑焦城际K15+550]黄河景区10KV配电所室内-2[半球]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[郑焦城际K15+550]黄河景区10KV配电所室内-3[半球]"))));
//
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("黄河景区10KV配电所室内-5[半球]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("黄河景区10KV配电所室内-6[半球]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("黄河景区10KV配电所室内-7[半球]"))));
//
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[郑焦城际京广K672+484]南阳寨通信机械室内[半球]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[郑焦城际京广K667+484]南阳寨信号机械室内[半球]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[郑焦城际京广K667+484]南阳寨计算机室内[半球]"))));
//
//	user->addChildren(childs);
//	m_Cameratreewidget->addTopLevelItem(user);
//
//	m_Cameratreewidget->expandAll();
//
//}

void ControlPanel::InitWireNetTreeWidget()
{
	m_ViewWindow = new QWidget;
	m_ViewTreewidget = new QTreeWidget(m_ViewWindow);
	m_ViewTreewidget->setObjectName("ViewTreewidget");

	m_ViewTreewidget->setColumnCount(1);
	m_ViewTreewidget->headerItem()->setHidden(true);
	m_ViewTreewidget->setFrameStyle(QFrame::NoFrame);
	m_ViewTreewidget->header()->setSectionsClickable(true);
	
	QTreeWidgetItem*WireNetOne= new QTreeWidgetItem(m_ViewTreewidget);
	WireNetOne->setText(0, "外电网1");

	QTreeWidgetItem*WireNetTwo = new QTreeWidgetItem(m_ViewTreewidget);
	WireNetTwo->setText(0, "外电网2");

	QTreeWidgetItem*WireNetThree = new QTreeWidgetItem(m_ViewTreewidget);
	WireNetThree->setText(0, "外电网3");

	QTreeWidgetItem*WireNetFour = new QTreeWidgetItem(m_ViewTreewidget);
	WireNetFour->setText(0, "外电网4");
	//sixteenView->setToolTip(0,"test");//设置提示

	m_ViewTreewidget->expandAll();
}

//void ControlPanel::InitPTZControlWidget()
//{
//	m_PTZWindow = new PTZControlWidget;
//	m_PTZWindow->Init();
//}
void ControlPanel::TreeWigetGroupItemClicked(QTreeWidgetItem*item, int column)
{
	if (item == NULL)			// 初始化的时候会出现为NULL情况
	{
		return;
	}

	if (item->isExpanded())
	{
		m_TreewidgetGroup->collapseItem(item);
	}
	else
	{
		m_TreewidgetGroup->expandItem(item);
	}
}


