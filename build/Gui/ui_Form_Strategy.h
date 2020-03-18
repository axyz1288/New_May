/********************************************************************************
** Form generated from reading UI file 'Form_Strategy.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_STRATEGY_H
#define UI_FORM_STRATEGY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Form_Strategy
{
public:
    QPushButton *button_RunStrategy;
    QPushButton *button_EndStrategy;
    QLabel *label_Strategy;
    QLabel *label_StrategyStage;
    QPushButton *button_ClearLog;
    QListWidget *listWidget_StrategyStageLog;
    QComboBox *comboBox_SelectStrategy;

    void setupUi(QDialog *Form_Strategy)
    {
        if (Form_Strategy->objectName().isEmpty())
            Form_Strategy->setObjectName(QStringLiteral("Form_Strategy"));
        Form_Strategy->setEnabled(true);
        Form_Strategy->resize(704, 418);
        Form_Strategy->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        button_RunStrategy = new QPushButton(Form_Strategy);
        button_RunStrategy->setObjectName(QStringLiteral("button_RunStrategy"));
        button_RunStrategy->setGeometry(QRect(30, 30, 161, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        button_RunStrategy->setFont(font);
        button_RunStrategy->setStyleSheet(QLatin1String("background-color: rgb(0, 255, 0);\n"
""));
        button_EndStrategy = new QPushButton(Form_Strategy);
        button_EndStrategy->setObjectName(QStringLiteral("button_EndStrategy"));
        button_EndStrategy->setGeometry(QRect(220, 30, 161, 61));
        button_EndStrategy->setFont(font);
        button_EndStrategy->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
""));
        label_Strategy = new QLabel(Form_Strategy);
        label_Strategy->setObjectName(QStringLiteral("label_Strategy"));
        label_Strategy->setGeometry(QRect(420, 20, 101, 31));
        label_Strategy->setFont(font);
        label_Strategy->setStyleSheet(QLatin1String("background-color: rgb(173, 216, 230);\n"
""));
        label_StrategyStage = new QLabel(Form_Strategy);
        label_StrategyStage->setObjectName(QStringLiteral("label_StrategyStage"));
        label_StrategyStage->setGeometry(QRect(30, 130, 161, 31));
        label_StrategyStage->setFont(font);
        label_StrategyStage->setStyleSheet(QStringLiteral(""));
        button_ClearLog = new QPushButton(Form_Strategy);
        button_ClearLog->setObjectName(QStringLiteral("button_ClearLog"));
        button_ClearLog->setGeometry(QRect(540, 110, 141, 51));
        button_ClearLog->setFont(font);
        button_ClearLog->setStyleSheet(QLatin1String("background-color: rgb(221, 221, 221);\n"
""));
        listWidget_StrategyStageLog = new QListWidget(Form_Strategy);
        listWidget_StrategyStageLog->setObjectName(QStringLiteral("listWidget_StrategyStageLog"));
        listWidget_StrategyStageLog->setGeometry(QRect(30, 170, 651, 221));
        listWidget_StrategyStageLog->setFont(font);
        listWidget_StrategyStageLog->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        comboBox_SelectStrategy = new QComboBox(Form_Strategy);
        comboBox_SelectStrategy->setObjectName(QStringLiteral("comboBox_SelectStrategy"));
        comboBox_SelectStrategy->setGeometry(QRect(420, 60, 261, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224 Light"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        comboBox_SelectStrategy->setFont(font1);
        comboBox_SelectStrategy->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));

        retranslateUi(Form_Strategy);

        QMetaObject::connectSlotsByName(Form_Strategy);
    } // setupUi

    void retranslateUi(QDialog *Form_Strategy)
    {
        Form_Strategy->setWindowTitle(QApplication::translate("Form_Strategy", "Form_Strategy", 0));
        button_RunStrategy->setText(QApplication::translate("Form_Strategy", "Run Strategy", 0));
        button_EndStrategy->setText(QApplication::translate("Form_Strategy", "End Strategy", 0));
        label_Strategy->setText(QApplication::translate("Form_Strategy", " Strategy:", 0));
        label_StrategyStage->setText(QApplication::translate("Form_Strategy", " Strategy Stage:", 0));
        button_ClearLog->setText(QApplication::translate("Form_Strategy", "Clear Log", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_Strategy: public Ui_Form_Strategy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_STRATEGY_H
