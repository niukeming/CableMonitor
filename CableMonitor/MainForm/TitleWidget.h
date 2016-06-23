#ifndef TITLEWIDGET_H
#define TITLEWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QBoxLayout>
#include <QSignalMapper>
#include "../Parts/PushButton.h"
//#include "../base/CustomControl/customtoolbutton.h"
//#include "..\forms\SettingForm\SettingPanel.h"
//#include "..\forms\AlarmStatQueyForm\alarmstaqueform.h"
//#include "..\forms\AboutDialog\about.h"
//nkm
class TitleWidget : public QWidget
{
	Q_OBJECT

public:
	explicit TitleWidget(QWidget *parent = NULL);
	~TitleWidget(){}
private:
	TitleWidget& operator=(const TitleWidget& obj);
	TitleWidget(const TitleWidget& obj);
	void InitMenu();
signals:
	void ShowMinimizedBtnClicked();
	void CloseWindowBtnClicked();
	void ToolBtnClicked(int index);
	/*void SettingsBtnClicked();*/
	private slots:
	void ShowMenu();
//	void SettingSlot();
//	void AlarmStaQuerSlot();
//	void AboutSlot();
//	void SettingDestroyed();
//	void AlarmQueryDestroyed();
//	void AboutDestroyed();
private:
	// top part
	QLabel* m_windowTitle;
	CustomPushButton* m_settings;
	CustomPushButton* m_minBtn;
	CustomPushButton* m_closeBtn;
	QMenu* m_mainMenu;

	// layout managers
	QHBoxLayout* m_topLayout;
	QHBoxLayout* m_bottomLayout;
	QVBoxLayout* m_mainLayout;

	QLabel* m_hust_label;
	QLabel* m_security_label;
	QVBoxLayout* m_labelLayout;

	QLabel*  m_proj_label;
	QHBoxLayout*m_centerLayout;
	//SettingPanel *m_settingPanel;
	//AlarmStaQueForm*m_alarmQuerForm;
	//About*m_about;//nkm
};

#endif // TITLEWIDGET_H