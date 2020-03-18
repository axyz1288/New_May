/********************************************************************************
** Form generated from reading UI file 'Form_ControlPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CONTROLPANEL_H
#define UI_FORM_CONTROLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_ControlPanel
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pB_Form_Vision;
    QPushButton *pB_Form_Body;
    QPushButton *pB_Form_Strategy;
    QPushButton *pB_Form_Network;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Form_ControlPanel)
    {
        if (Form_ControlPanel->objectName().isEmpty())
            Form_ControlPanel->setObjectName(QStringLiteral("Form_ControlPanel"));
        Form_ControlPanel->resize(235, 382);
        Form_ControlPanel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        centralWidget = new QWidget(Form_ControlPanel);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        pB_Form_Vision = new QPushButton(groupBox);
        pB_Form_Vision->setObjectName(QStringLiteral("pB_Form_Vision"));
        pB_Form_Vision->setMinimumSize(QSize(150, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pB_Form_Vision->setFont(font1);
        pB_Form_Vision->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));

        verticalLayout->addWidget(pB_Form_Vision);

        pB_Form_Body = new QPushButton(groupBox);
        pB_Form_Body->setObjectName(QStringLiteral("pB_Form_Body"));
        pB_Form_Body->setMinimumSize(QSize(150, 60));
        pB_Form_Body->setFont(font1);
        pB_Form_Body->setMouseTracking(true);
        pB_Form_Body->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));

        verticalLayout->addWidget(pB_Form_Body);


        verticalLayout_3->addWidget(groupBox);

        pB_Form_Strategy = new QPushButton(centralWidget);
        pB_Form_Strategy->setObjectName(QStringLiteral("pB_Form_Strategy"));
        pB_Form_Strategy->setMinimumSize(QSize(150, 60));
        pB_Form_Strategy->setFont(font1);
        pB_Form_Strategy->setMouseTracking(true);
        pB_Form_Strategy->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));

        verticalLayout_3->addWidget(pB_Form_Strategy);

        pB_Form_Network = new QPushButton(centralWidget);
        pB_Form_Network->setObjectName(QStringLiteral("pB_Form_Network"));
        pB_Form_Network->setMinimumSize(QSize(150, 60));
        pB_Form_Network->setFont(font1);
        pB_Form_Network->setMouseTracking(true);
        pB_Form_Network->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));

        verticalLayout_3->addWidget(pB_Form_Network);

        Form_ControlPanel->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Form_ControlPanel);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 235, 19));
        Form_ControlPanel->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Form_ControlPanel);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Form_ControlPanel->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Form_ControlPanel);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Form_ControlPanel->setStatusBar(statusBar);

        retranslateUi(Form_ControlPanel);

        QMetaObject::connectSlotsByName(Form_ControlPanel);
    } // setupUi

    void retranslateUi(QMainWindow *Form_ControlPanel)
    {
        Form_ControlPanel->setWindowTitle(QApplication::translate("Form_ControlPanel", "Form_ControlPanel", 0));
        groupBox->setTitle(QApplication::translate("Form_ControlPanel", "Robot", 0));
        pB_Form_Vision->setText(QApplication::translate("Form_ControlPanel", "Vision", 0));
        pB_Form_Body->setText(QApplication::translate("Form_ControlPanel", "Body", 0));
        pB_Form_Strategy->setText(QApplication::translate("Form_ControlPanel", "Strategy", 0));
        pB_Form_Network->setText(QApplication::translate("Form_ControlPanel", "Network", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_ControlPanel: public Ui_Form_ControlPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CONTROLPANEL_H
