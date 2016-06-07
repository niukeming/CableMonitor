/********************************************************************************
** Form generated from reading UI file 'cablemonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CABLEMONITOR_H
#define UI_CABLEMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CableMonitorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CableMonitorClass)
    {
        if (CableMonitorClass->objectName().isEmpty())
            CableMonitorClass->setObjectName(QStringLiteral("CableMonitorClass"));
        CableMonitorClass->resize(600, 400);
        menuBar = new QMenuBar(CableMonitorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        CableMonitorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CableMonitorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CableMonitorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CableMonitorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CableMonitorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CableMonitorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CableMonitorClass->setStatusBar(statusBar);

        retranslateUi(CableMonitorClass);

        QMetaObject::connectSlotsByName(CableMonitorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CableMonitorClass)
    {
        CableMonitorClass->setWindowTitle(QApplication::translate("CableMonitorClass", "CableMonitor", 0));
    } // retranslateUi

};

namespace Ui {
    class CableMonitorClass: public Ui_CableMonitorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CABLEMONITOR_H
