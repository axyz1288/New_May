/********************************************************************************
** Form generated from reading UI file 'Form_Network.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_NETWORK_H
#define UI_FORM_NETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Form_Network
{
public:
    QTextEdit *textEdit_network_ip;
    QLabel *label_network_ip;
    QLabel *label_network_port;
    QTextEdit *textEdit_network_port;
    QPushButton *Button_network_connect;
    QLabel *label_network_state_title;
    QGroupBox *groupBox_network_messagetosend;
    QPushButton *Button_send_start;
    QLabel *label_network_messagetosend;
    QTextEdit *textEdit_network_messagetosend;
    QPushButton *Button_send_stop;
    QGroupBox *groupBox_network_messagereceive;
    QPushButton *Button_rceive_start;
    QPushButton *Button_rceive_stop;
    QListWidget *listWidget_network_message_receive;
    QPushButton *Button_rceive_clear;
    QPushButton *Button_stop_to_connect;
    QComboBox *comboBox_choose;
    QLabel *label_network_state;

    void setupUi(QDialog *Form_Network)
    {
        if (Form_Network->objectName().isEmpty())
            Form_Network->setObjectName(QStringLiteral("Form_Network"));
        Form_Network->resize(689, 630);
        Form_Network->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        textEdit_network_ip = new QTextEdit(Form_Network);
        textEdit_network_ip->setObjectName(QStringLiteral("textEdit_network_ip"));
        textEdit_network_ip->setGeometry(QRect(80, 20, 191, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(11);
        textEdit_network_ip->setFont(font);
        textEdit_network_ip->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_network_ip = new QLabel(Form_Network);
        label_network_ip->setObjectName(QStringLiteral("label_network_ip"));
        label_network_ip->setGeometry(QRect(20, 24, 58, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_network_ip->setFont(font1);
        label_network_ip->setAlignment(Qt::AlignCenter);
        label_network_port = new QLabel(Form_Network);
        label_network_port->setObjectName(QStringLiteral("label_network_port"));
        label_network_port->setGeometry(QRect(280, 20, 58, 31));
        label_network_port->setFont(font1);
        label_network_port->setAlignment(Qt::AlignCenter);
        textEdit_network_port = new QTextEdit(Form_Network);
        textEdit_network_port->setObjectName(QStringLiteral("textEdit_network_port"));
        textEdit_network_port->setGeometry(QRect(350, 20, 111, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        textEdit_network_port->setFont(font2);
        textEdit_network_port->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Button_network_connect = new QPushButton(Form_Network);
        Button_network_connect->setObjectName(QStringLiteral("Button_network_connect"));
        Button_network_connect->setGeometry(QRect(470, 60, 93, 31));
        Button_network_connect->setFont(font2);
        Button_network_connect->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        label_network_state_title = new QLabel(Form_Network);
        label_network_state_title->setObjectName(QStringLiteral("label_network_state_title"));
        label_network_state_title->setGeometry(QRect(20, 60, 81, 31));
        label_network_state_title->setFont(font1);
        groupBox_network_messagetosend = new QGroupBox(Form_Network);
        groupBox_network_messagetosend->setObjectName(QStringLiteral("groupBox_network_messagetosend"));
        groupBox_network_messagetosend->setGeometry(QRect(20, 100, 651, 121));
        groupBox_network_messagetosend->setFont(font1);
        groupBox_network_messagetosend->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Button_send_start = new QPushButton(groupBox_network_messagetosend);
        Button_send_start->setObjectName(QStringLiteral("Button_send_start"));
        Button_send_start->setGeometry(QRect(290, 30, 141, 31));
        Button_send_start->setFont(font2);
        Button_send_start->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        label_network_messagetosend = new QLabel(groupBox_network_messagetosend);
        label_network_messagetosend->setObjectName(QStringLiteral("label_network_messagetosend"));
        label_network_messagetosend->setGeometry(QRect(10, 30, 221, 31));
        label_network_messagetosend->setFont(font1);
        textEdit_network_messagetosend = new QTextEdit(groupBox_network_messagetosend);
        textEdit_network_messagetosend->setObjectName(QStringLiteral("textEdit_network_messagetosend"));
        textEdit_network_messagetosend->setGeometry(QRect(20, 70, 611, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        textEdit_network_messagetosend->setFont(font3);
        Button_send_stop = new QPushButton(groupBox_network_messagetosend);
        Button_send_stop->setObjectName(QStringLiteral("Button_send_stop"));
        Button_send_stop->setGeometry(QRect(470, 30, 141, 31));
        Button_send_stop->setFont(font2);
        Button_send_stop->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        groupBox_network_messagereceive = new QGroupBox(Form_Network);
        groupBox_network_messagereceive->setObjectName(QStringLiteral("groupBox_network_messagereceive"));
        groupBox_network_messagereceive->setGeometry(QRect(20, 240, 651, 371));
        groupBox_network_messagereceive->setFont(font1);
        groupBox_network_messagereceive->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Button_rceive_start = new QPushButton(groupBox_network_messagereceive);
        Button_rceive_start->setObjectName(QStringLiteral("Button_rceive_start"));
        Button_rceive_start->setGeometry(QRect(20, 30, 141, 28));
        Button_rceive_start->setFont(font2);
        Button_rceive_start->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        Button_rceive_stop = new QPushButton(groupBox_network_messagereceive);
        Button_rceive_stop->setObjectName(QStringLiteral("Button_rceive_stop"));
        Button_rceive_stop->setGeometry(QRect(190, 30, 141, 28));
        Button_rceive_stop->setFont(font2);
        Button_rceive_stop->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        listWidget_network_message_receive = new QListWidget(groupBox_network_messagereceive);
        listWidget_network_message_receive->setObjectName(QStringLiteral("listWidget_network_message_receive"));
        listWidget_network_message_receive->setGeometry(QRect(15, 70, 611, 291));
        Button_rceive_clear = new QPushButton(groupBox_network_messagereceive);
        Button_rceive_clear->setObjectName(QStringLiteral("Button_rceive_clear"));
        Button_rceive_clear->setGeometry(QRect(510, 30, 93, 28));
        Button_rceive_clear->setFont(font2);
        Button_rceive_clear->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        Button_stop_to_connect = new QPushButton(Form_Network);
        Button_stop_to_connect->setObjectName(QStringLiteral("Button_stop_to_connect"));
        Button_stop_to_connect->setGeometry(QRect(570, 60, 93, 31));
        Button_stop_to_connect->setFont(font2);
        Button_stop_to_connect->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        comboBox_choose = new QComboBox(Form_Network);
        comboBox_choose->setObjectName(QStringLiteral("comboBox_choose"));
        comboBox_choose->setGeometry(QRect(500, 20, 131, 31));
        comboBox_choose->setFont(font2);
        comboBox_choose->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_network_state = new QLabel(Form_Network);
        label_network_state->setObjectName(QStringLiteral("label_network_state"));
        label_network_state->setGeometry(QRect(110, 60, 341, 31));
        label_network_state->setFont(font1);

        retranslateUi(Form_Network);

        QMetaObject::connectSlotsByName(Form_Network);
    } // setupUi

    void retranslateUi(QDialog *Form_Network)
    {
        Form_Network->setWindowTitle(QApplication::translate("Form_Network", "Form_Network", 0));
        textEdit_network_ip->setPlaceholderText(QApplication::translate("Form_Network", " server \347\232\204 ip", 0));
        label_network_ip->setText(QApplication::translate("Form_Network", "IP  :", 0));
        label_network_port->setText(QApplication::translate("Form_Network", "port  :", 0));
        textEdit_network_port->setPlaceholderText(QApplication::translate("Form_Network", " server \347\232\204", 0));
        Button_network_connect->setText(QApplication::translate("Form_Network", "Connect", 0));
        label_network_state_title->setText(QApplication::translate("Form_Network", "  State :  ", 0));
        groupBox_network_messagetosend->setTitle(QApplication::translate("Form_Network", " Send ", 0));
        Button_send_start->setText(QApplication::translate("Form_Network", "Start Sending", 0));
        label_network_messagetosend->setText(QApplication::translate("Form_Network", "  Message to Send : ", 0));
        textEdit_network_messagetosend->setPlaceholderText(QApplication::translate("Form_Network", "This is the message.", 0));
        Button_send_stop->setText(QApplication::translate("Form_Network", "Stop Sending", 0));
        groupBox_network_messagereceive->setTitle(QApplication::translate("Form_Network", " Receive ", 0));
        Button_rceive_start->setText(QApplication::translate("Form_Network", "Start Receiving", 0));
        Button_rceive_stop->setText(QApplication::translate("Form_Network", "Stop Receiving", 0));
        Button_rceive_clear->setText(QApplication::translate("Form_Network", "Clear", 0));
        Button_stop_to_connect->setText(QApplication::translate("Form_Network", "Stop", 0));
        comboBox_choose->setCurrentText(QString());
        label_network_state->setText(QApplication::translate("Form_Network", "state", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_Network: public Ui_Form_Network {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_NETWORK_H
