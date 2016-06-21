#include "MainForm.h"
#include <QApplication>
#include <qapplication.h>
#include <qdesktopwidget.h>
MainForm::MainForm(QWidget *parent /* = 0 */)
	:BaseWindow(parent)
{
	Init();
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
	//setWindowIcon(QIcon(QString("/*:/background/logo*/")));/* set window icon */
	this->setGeometry(QApplication::desktop()->availableGeometry());//窗体最大化，不会遮挡任务栏
	this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);
	m_mainLayout = new QVBoxLayout(this);
	m_mainLayout->setSpacing(0);
	m_mainLayout->setContentsMargins(0, 0, 0, 0);					// 如果不设置  则titlewidget离顶部较远
	setLayout(m_mainLayout);
}