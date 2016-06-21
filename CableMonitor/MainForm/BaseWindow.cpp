#include "BaseWindow.h"

BaseWindow::BaseWindow(QWidget *parent)
	: QDialog(parent)
{
	setWindowFlags(Qt::FramelessWindowHint);
	//	setAttribute(Qt::WA_TranslucentBackground);  //ÉèÖÃ±³¾°Í¸Ã÷
	m_isPressed = false;
}

BaseWindow::~BaseWindow()
{

}

void BaseWindow::paintEvent(QPaintEvent* event)
{


}
void BaseWindow::mouseMoveEvent(QMouseEvent *event)
{
	if (m_isPressed)
	{
		// the mouse position relate to screen
		QPoint point = event->globalPos();
		move(point - m_point);
	}

}
void BaseWindow::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		m_isPressed = true;
	}
	// the mouse position relate to the current widget
	// you can use event->pos() to replace it.
	m_point = event->globalPos() - pos();
}
void BaseWindow::mouseReleaseEvent(QMouseEvent *event)
{
	m_isPressed = false;
}


