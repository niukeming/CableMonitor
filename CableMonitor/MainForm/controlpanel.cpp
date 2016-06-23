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
	if (type == WireNet)//�����
	{
	//	m_PTZControl->setHidden(false);
		m_view->setHidden(false);
	}
	if (type == DropR)//�����������
	{
	//	m_PTZControl->setHidden(true);
		m_view->setHidden(false);
	}
	if (type == InsulationR)//��Ե����
	{
	//	m_PTZControl->setHidden(true);
		m_view->setHidden(true);
	}
	if (type == UPS)//UPS
	{
		//	m_PTZControl->setHidden(true);
		m_view->setHidden(true);
	}
	if (type == DCPower)//ֱ����Դ
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
//	m_TreewidgetGroup->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);// ��ֹ��ֱ������
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
//	m_view->setText(0, "��ͼ");
//	m_View2 = new QTreeWidgetItem(m_view);
//	m_View2->setSizeHint(0, QSize(0, 130));
//	m_TreewidgetGroup->setItemWidget(m_View2, 0, m_ViewWindow);
//
//
//	m_PTZControl = new QTreeWidgetItem(m_TreewidgetGroup);
//	m_PTZControl->setText(0, "��̨����");
//	QTreeWidgetItem*PTZControl2 = new QTreeWidgetItem(m_PTZControl);
//	m_TreewidgetGroup->setItemWidget(PTZControl2, 0, m_PTZWindow);
//
//
//	m_camera = new QTreeWidgetItem(m_TreewidgetGroup);
//	m_camera->setText(0, "������б�");
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
//	line = new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("��·")));
//	childs.clear();
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[֣���Ǽ�K4+950]��վ2Ժ��[����ǹ��]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[֣���Ǽ�K10+250]��վ3ͨ������[����]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[֣���Ǽ�K10+250]��վ3Ժ��[����ǹ��]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[֣���Ǽ�K50+520]�������źŻ�е����4[����]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[֣���Ǽ�K50+520]��������Ϣ��������2[����]"))));
//
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[֣���Ǽ�K70+000]�����ʺ���[�佹ǹ��]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[֣���Ǽ�K36+550]������Զ���������[����]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[֣���Ǽ�K46+600]��վ8ͨ������[����]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[֣���Ǽ�K50+300]������ǣ��������-3[����]"))));
//	childs.append(new QTreeWidgetItem(line, QStringList(QString("[֣���Ǽ�K50+520]��������Ϣ��������1[����]"))));
//
//
//	line->addChildren(childs);
//	m_Cameratreewidget->addTopLevelItem(line);
//
//	/* add the fiveth top level node with children filled */
//	user = new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("�ͷ�")));
//	childs.clear();
//
//
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[֣���Ǽ�K15+550]�ƺӾ���10KV���������-1[����]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[֣���Ǽ�K15+550]�ƺӾ���10KV���������-2[����]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[֣���Ǽ�K15+550]�ƺӾ���10KV���������-3[����]"))));
//
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("�ƺӾ���10KV���������-5[����]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("�ƺӾ���10KV���������-6[����]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("�ƺӾ���10KV���������-7[����]"))));
//
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[֣���Ǽʾ���K672+484]����կͨ�Ż�е����[����]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[֣���Ǽʾ���K667+484]����կ�źŻ�е����[����]"))));
//	childs.append(new QTreeWidgetItem(user, QStringList(QString("[֣���Ǽʾ���K667+484]����կ���������[����]"))));
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
	WireNetOne->setText(0, "�����1");

	QTreeWidgetItem*WireNetTwo = new QTreeWidgetItem(m_ViewTreewidget);
	WireNetTwo->setText(0, "�����2");

	QTreeWidgetItem*WireNetThree = new QTreeWidgetItem(m_ViewTreewidget);
	WireNetThree->setText(0, "�����3");

	QTreeWidgetItem*WireNetFour = new QTreeWidgetItem(m_ViewTreewidget);
	WireNetFour->setText(0, "�����4");
	//sixteenView->setToolTip(0,"test");//������ʾ

	m_ViewTreewidget->expandAll();
}

//void ControlPanel::InitPTZControlWidget()
//{
//	m_PTZWindow = new PTZControlWidget;
//	m_PTZWindow->Init();
//}
void ControlPanel::TreeWigetGroupItemClicked(QTreeWidgetItem*item, int column)
{
	if (item == NULL)			// ��ʼ����ʱ������ΪNULL���
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


