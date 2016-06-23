#include "MainForm.h"
#include <QApplication>
#include <qapplication.h>
#include <qdesktopwidget.h>
#include <QPalette>
const int LeftWidgetWidth = 235;
MainForm::MainForm(QWidget *parent /* = 0 */)
	:BaseWindow(parent)
{
	Init();
	QDesktopWidget* desktopWidget = QApplication::desktop();
	QRect applicationRect = desktopWidget->screenGeometry();

	m_titleWidget = new TitleWidget();
	m_stackedWidget = new QStackedWidget(this);
	m_stackedWidget->setFrameShape(QFrame::NoFrame);
	//m_slider = new SlidingWindow(this);
//	m_slider->Init();


	InitControlPanel();
	//todo
	m_tabBarWidget = new TabBarWidget(this);						// 创建工具栏
	m_tabBarWidget->setObjectName("TabBarWidget");


	m_mainLayout->addWidget(m_titleWidget);
	m_mainLayout->addWidget(m_tabBarWidget);
//	m_mainLayout->addWidget(m_stackedWidget);

	connect(m_titleWidget, SIGNAL(ShowMinimizedBtnClicked()), SLOT(showMinimized()));
	connect(m_titleWidget, SIGNAL(CloseWindowBtnClicked()), SLOT(close()));
}
MainForm::~MainForm()
{

}

void MainForm::closeEvent(QCloseEvent*event)
{

}

void MainForm::Init()
{
	this->setObjectName("MainForm");
	//setWindowIcon(QIcon(QString(":/CableMonitor/UI/SysButtons/setting_hover.png")));//set window icon 
	this->setGeometry(QApplication::desktop()->availableGeometry());//窗体最大化，不会遮挡任务栏
	this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);
	m_mainLayout = new QVBoxLayout(this);
	m_mainLayout->setSpacing(0);
	m_mainLayout->setContentsMargins(0, 0, 0, 0);					// 如果不设置  则titlewidget离顶部较远
	setLayout(m_mainLayout);
}


void MainForm::InitControlPanel()
{
	m_controlPanel = new ControlPanel;
	m_controlPanel->SetType(WireNet);
	m_controlPanel->resize(LeftWidgetWidth, 0);
	/*m_slider->SetLeftWidget(m_controlPanel);
	m_slider->SetRightWidget(m_stackedWidget);*/
}

void MainForm::paintEvent(QPaintEvent* event)
{

}

void MainForm::onTabBtnClicked(const QString& obj)
{
//	m_videoManager->setHidden(true);
//	m_replayWindow->setHidden(true);

//	int index = obj.toInt();
//	if (index == 0)
//	{
////	m_controlPanel->SetType(RealVideo);
//	m_stackedWidget->setCurrentWidget(m_videoManager);
//	//m_bar->setHidden(false);
//	}
//	if (index == 1)
//	{
////	m_controlPanel->SetType(Replay);
//	m_stackedWidget->setCurrentWidget(m_replayWindow);
//	//m_bar->setHidden(true);
//	}
//	if (index == 2)
//	{
////	m_controlPanel->SetType(RealAlarm);
//	m_stackedWidget->setCurrentWidget(m_realAlarmForm);
////	m_bar->setHidden(false);
//	}
//	if (index == 3)
//	{
//	//m_controlPanel->SetType(AlarmQuery);
//	m_stackedWidget->setCurrentWidget(m_alarmQueryForm);
////	m_bar->setHidden(false);
//	}
}