#include "TabWidget.h"
#include <qsignalmapper.h>
#include <qtoolbutton.h>
#include <qboxlayout.h>
#include <QPushButton>
#include <QDesktopWidget>
#include <QApplication>
#pragma execution_character_set("utf-8")


TabBarWidget::TabBarWidget(QWidget *parent)
	: QWidget(parent)
{
	QPalette plt;
	QColor color(100,100,100);
	plt.setBrush(QPalette::Window, QBrush(color));
	this->setPalette(plt);
	this->setAutoFillBackground(true);

	m_Layout = new QHBoxLayout(this);
	QStringList strList, imageNameList;



	strList << "外电网" << "异物电网" << "绝缘电阻"<< "UPS"<<"直流电源";
	imageNameList << ":/CableMonitor/UI/SysButtons/close_pressed.png";
	imageNameList << ":/CableMonitor/UI/SysButtons/close_pressed.png";
	imageNameList << ":/CableMonitor/UI/SysButtons/close_pressed.png";
	imageNameList << ":/CableMonitor/UI/SysButtons/close_pressed.png";
	imageNameList << ":/CableMonitor/UI/SysButtons/close_pressed.png";

	QSignalMapper* sigMapper = new QSignalMapper(this);

	for (int i = 0; i < strList.size(); ++i)
	{
		QToolButton* tmpBtn = new QToolButton(this);
		connect(tmpBtn, SIGNAL(clicked()), sigMapper, SLOT(map()));
		sigMapper->setMapping(tmpBtn, QString::number(i, 10));
		tmpBtn->setObjectName("toolButton");
		tmpBtn->setCheckable(true);
		tmpBtn->setAutoExclusive(true);
		QPixmap tempIcon(imageNameList.at(i));

		tmpBtn->setIcon(tempIcon);
		tmpBtn->setIconSize(tempIcon.size());
		tmpBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
		tmpBtn->setFixedSize(tempIcon.size().width() + 95, 0);
		tmpBtn->setText(strList.at(i));

		m_toolBtnList.append(tmpBtn);
		m_Layout->addWidget(tmpBtn, 0, Qt::AlignBottom);

	}
	connect(sigMapper, SIGNAL(mapped(const QString&)), parent, SLOT(onTabBtnClicked(const QString&)));

	QDesktopWidget* desktopWidget = QApplication::desktop();
	QRect applicationRect = desktopWidget->screenGeometry(); //得到应用程序矩形
	m_Layout->addStretch();
	m_Layout->setSpacing(applicationRect.width() / 7);
	m_Layout->setContentsMargins(0, 0, 0, 0);
	m_Layout->setObjectName("m_Layout");

}

void TabBarWidget::onTabBtnClicked(const QString& obj)
{
	int index = obj.toInt();

	if (index == 0)
	{

	}

}


TabBarWidget::~TabBarWidget()
{

}

