#ifndef SHADOWWINDOW_H
#define SHADOWWINDOW_H

#include <QDialog>
#include <QMouseEvent>
#include <QPainter>
#include <QtCore>
#pragma execution_character_set("utf-8")
class BaseWindow : public QDialog
{
	Q_OBJECT

public:
	explicit BaseWindow(QWidget *parent = NULL);
	~BaseWindow();

protected:
	virtual void paintEvent(QPaintEvent* event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);


private:
	BaseWindow(const BaseWindow& obj);
	BaseWindow& operator=(const BaseWindow& obj);

private:
	bool m_isPressed;
	QPoint m_point;
};

#endif // SHADOWWINDOW_H
