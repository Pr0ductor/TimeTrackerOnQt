/********************************************************************************
** Form generated from reading UI file 'stopwatch.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOPWATCH_H
#define UI_STOPWATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StopWatch
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StopWatch)
    {
        if (StopWatch->objectName().isEmpty())
            StopWatch->setObjectName("StopWatch");
        StopWatch->resize(1940, 1100);
        StopWatch->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        centralwidget = new QWidget(StopWatch);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 286, 48));
        QFont font;
        font.setPointSize(38);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 0, 75, 75));
        StopWatch->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StopWatch);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1940, 36));
        StopWatch->setMenuBar(menubar);
        statusbar = new QStatusBar(StopWatch);
        statusbar->setObjectName("statusbar");
        StopWatch->setStatusBar(statusbar);

        retranslateUi(StopWatch);

        QMetaObject::connectSlotsByName(StopWatch);
    } // setupUi

    void retranslateUi(QMainWindow *StopWatch)
    {
        StopWatch->setWindowTitle(QCoreApplication::translate("StopWatch", "StopWatch", nullptr));
        label->setText(QCoreApplication::translate("StopWatch", "Go back to menu", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StopWatch: public Ui_StopWatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOPWATCH_H
