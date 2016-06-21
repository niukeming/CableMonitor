#include "../MainForm/BaseWindow.h"
#include <qnamespace.h>
#include <QBoxLayout>
#include <QCloseEvent>
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

private:
	QVBoxLayout* m_mainLayout;
};
