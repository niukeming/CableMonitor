#ifndef TABWIDGET_H
#define TABWIDGET_H

#include <QWidget>
#include <QBoxLayout>
#include <qlist.h>
#include <qtoolbutton.h>

class TabBarWidget : public QWidget
{
	Q_OBJECT

public:
	TabBarWidget(QWidget *parent);
	~TabBarWidget();

	private slots:
	void onTabBtnClicked(const QString& obj);
private:
	QHBoxLayout*m_Layout;
	QList<QToolButton*> m_toolBtnList;

};

#endif // TABWIDGET_H
