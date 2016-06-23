#include "titlewidget.h"
#include <qapplication.h>
#include <qdesktopwidget.h>
#include <qrect.h>
#include <qtextcodec.h>
#include <QMenu>
#include <QAction>
#pragma execution_character_set("utf-8")

TitleWidget::TitleWidget(QWidget *parent)
	: QWidget(parent)
{
	//m_settingPanel = NULL;
	//m_alarmQuerForm = NULL;
	//m_about = NULL;//nkm
	m_mainLayout = new QVBoxLayout(this);

	QPalette plt;
	QColor color(33, 31, 31);
	plt.setBrush(QPalette::Window, QBrush(color));
	this->setPalette(plt);
	this->setAutoFillBackground(true);
	////////////////////////////// initialize top part//////////////////////////////////////////////

	m_topLayout = new QHBoxLayout(this);
	m_settings = new CustomPushButton(this);
	m_settings->setObjectName("m_settings");

	m_minBtn = new CustomPushButton(this);
	m_minBtn->setObjectName("m_minBtn");

	m_closeBtn = new  CustomPushButton(this);
	m_closeBtn->setObjectName("m_closeBtn");

	m_settings->setBtnBackground(QString(":/CableMonitor/UI/SysButtons/menu.png"));
	m_settings->setToolTip(QString("主菜单"));
	InitMenu();
	m_minBtn->setBtnBackground(QString(":/CableMonitor/UI/SysButtons/min.png"));
	m_minBtn->setToolTip(QString("最小化"));
	m_closeBtn->setBtnBackground(QString(":/CableMonitor/UI/SysButtons/close.png"));
	m_closeBtn->setToolTip(QString("关闭"));

	m_topLayout->addStretch();
	m_topLayout->addWidget(m_settings, 0, Qt::AlignTop);
	m_topLayout->addWidget(m_minBtn, 0, Qt::AlignTop);
	m_topLayout->addWidget(m_closeBtn, 0, Qt::AlignTop);
	m_topLayout->setSpacing(0);
	m_topLayout->setContentsMargins(10, 6, 0, 0);


	m_proj_label = new QLabel(QString("电缆监测系统"), this);
	m_proj_label->setObjectName("m_proj_label");//nkm

	m_centerLayout = new QHBoxLayout(this);
	m_centerLayout->addWidget(m_proj_label, 0, Qt::AlignHCenter);
	m_centerLayout->addStretch();
	m_centerLayout->setContentsMargins(15, 6, 0, 27);

	m_mainLayout->addLayout(m_topLayout);
	m_mainLayout->addLayout(m_centerLayout);
	m_mainLayout->setSpacing(0);
	m_mainLayout->setContentsMargins(0, 0, 0, 0);

	setLayout(m_mainLayout);

	connect(m_settings, SIGNAL(clicked()), this, SLOT(ShowMenu()));
	connect(m_minBtn, SIGNAL(clicked()), this, SIGNAL(ShowMinimizedBtnClicked()));
	connect(m_closeBtn, SIGNAL(clicked()), this, SIGNAL(CloseWindowBtnClicked()));



}

void TitleWidget::InitMenu()//菜单键设置
{
	m_mainMenu = new QMenu(this);
	m_mainMenu->setStyleSheet("QMenu::item{background - color: transparent;}QMenu::item:selected{background: rgb(110, 171, 238);color: black;}");


	QAction *login = new QAction(QStringLiteral("登陆"), this);
	login->setIcon(QIcon(":/CableMonitor/UI/SysButtons/branchClose.png"));

	QAction *quit = new QAction(QStringLiteral("退出"), this);
	quit->setIcon(QIcon(":/CableMonitor/UI/SysButtons/branchOpen.png"));

	//QAction *alarmStaQuer = new QAction(QStringLiteral("订阅告警状态查询"), this);
	//connect(alarmStaQuer, SIGNAL(triggered()), this, SLOT(AlarmStaQuerSlot()));

	//QAction *polling = new QAction(QStringLiteral("轮询设置"), this);
	//QAction *settings = new QAction(QStringLiteral("系统设置"), this);
	//connect(settings, SIGNAL(triggered()), this, SLOT(SettingSlot()));

	//QAction *about = new QAction(QStringLiteral("关于我们"), this);
	//connect(about, SIGNAL(triggered()), this, SLOT(AboutSlot()));
	//QAction *OperationInstructions = new QAction(QStringLiteral("操作说明"), this);



	m_mainMenu->addAction(login);
	m_mainMenu->addAction(quit);
	m_mainMenu->addSeparator();

	//m_mainMenu->addAction(alarmStaQuer);
	//m_mainMenu->addAction(polling);
	//m_mainMenu->addAction(settings);
	//m_mainMenu->addSeparator();

	//m_mainMenu->addAction(about);
	//m_mainMenu->addAction(OperationInstructions);
	//m_mainMenu->setFixedWidth(140);
	m_settings->setMenu(m_mainMenu);



}

void TitleWidget::ShowMenu()
{
	QPoint pos;
	int x = pos.x();
	int y = pos.y();
	pos.setX(x + this->m_settings->geometry().width() / 2);
	pos.setY(y + this->m_settings->geometry().height());
	m_mainMenu->exec(m_settings->mapToGlobal(pos));
}
//
//void TitleWidget::SettingSlot()
//{
//	if (m_settingPanel == NULL)
//	{
//		m_settingPanel = new SettingPanel();
//		m_settingPanel->Init();
//		connect(m_settingPanel, SIGNAL(destroyed()), this, SLOT(SettingDestroyed()));
//	}
//	m_settingPanel->show();//模态显示
//
//}
//void TitleWidget::AlarmStaQuerSlot()
//{
//	if (m_alarmQuerForm == NULL)
//	{
//		m_alarmQuerForm = new AlarmStaQueForm();
//		m_alarmQuerForm->Init();
//		connect(m_alarmQuerForm, SIGNAL(destroyed()), this, SLOT(AlarmQueryDestroyed()));
//	}
//	m_alarmQuerForm->show();//模态显示
//}

//void TitleWidget::AboutSlot()
//{
//	if (m_about == NULL)
//	{
//		m_about = new About;
//		m_about->Init();
//		connect(m_about, SIGNAL(destroyed()), this, SLOT(AboutDestroyed()));
//	}
//	m_about->show();//模态显示
//}

//void TitleWidget::SettingDestroyed()
//{
//	m_settingPanel = NULL;
//}

//void TitleWidget::AlarmQueryDestroyed()
//{
//	m_alarmQuerForm = NULL;
//}

//void TitleWidget::AboutDestroyed()
//{
//	m_about = NULL;
//}