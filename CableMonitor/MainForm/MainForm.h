#include "../MainForm/BaseWindow.h"
#include <qnamespace.h>
#include <QBoxLayout>
#include <QCloseEvent>
#include <QStackedWidget>
#include <QSplitter>
#include <QTextEdit>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QTreeWidgetItemIterator>
#include <QSettings>
#include <QDateTime>
#include <QLabel>
#include <QCloseEvent>
#include <QSplitterHandle>
#include <QPainter>
#include <QListView>
#include "../MainForm/TitleWidget.h"
#include "../MainForm/TabWidget.h"
#include "../MainForm/controlpanel.h"
class MainForm : public BaseWindow
{
	Q_OBJECT

public:
	explicit MainForm(QWidget *parent = 0);
	~MainForm();
	void closeEvent(QCloseEvent* );
private:
	MainForm& operator=(const MainForm& obj);
	MainForm(const MainForm& obj);

	void Init();
	void InitControlPanel();

protected:
	void paintEvent(QPaintEvent* event);


private slots:
	void onTabBtnClicked(const QString& obj);
private:
	//布局
	QVBoxLayout* m_mainLayout;//main widget


	//组合
	QStackedWidget*		m_stackedWidget;

	TitleWidget*		m_titleWidget;
	TabBarWidget*       m_tabBarWidget;

	ControlPanel*		m_controlPanel;

	//控件





};
