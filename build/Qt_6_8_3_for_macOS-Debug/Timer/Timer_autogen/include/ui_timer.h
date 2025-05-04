/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Timer
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Timer)
    {
        if (Timer->objectName().isEmpty())
            Timer->setObjectName("Timer");
        Timer->resize(1940, 1100);
        QFont font;
        font.setPointSize(38);
        Timer->setFont(font);
        Timer->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        centralwidget = new QWidget(Timer);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 30, 75, 75));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 40, 286, 48));
        label->setFont(font);
        Timer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Timer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1940, 36));
        Timer->setMenuBar(menubar);
        statusbar = new QStatusBar(Timer);
        statusbar->setObjectName("statusbar");
        Timer->setStatusBar(statusbar);

        retranslateUi(Timer);

        QMetaObject::connectSlotsByName(Timer);
    } // setupUi

    void retranslateUi(QMainWindow *Timer)
    {
        Timer->setWindowTitle(QCoreApplication::translate("Timer", "Timer", nullptr));
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("Timer", "Go back to menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Timer: public Ui_Timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
