/********************************************************************************
** Form generated from reading UI file 'reminder.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMINDER_H
#define UI_REMINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reminder
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Reminder)
    {
        if (Reminder->objectName().isEmpty())
            Reminder->setObjectName("Reminder");
        Reminder->resize(1940, 1100);
        Reminder->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        centralwidget = new QWidget(Reminder);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 286, 48));
        QFont font;
        font.setPointSize(38);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 75, 75));
        Reminder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Reminder);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1940, 36));
        Reminder->setMenuBar(menubar);
        statusbar = new QStatusBar(Reminder);
        statusbar->setObjectName("statusbar");
        Reminder->setStatusBar(statusbar);

        retranslateUi(Reminder);

        QMetaObject::connectSlotsByName(Reminder);
    } // setupUi

    void retranslateUi(QMainWindow *Reminder)
    {
        Reminder->setWindowTitle(QCoreApplication::translate("Reminder", "Reminder", nullptr));
        label->setText(QCoreApplication::translate("Reminder", "Go back to menu", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Reminder: public Ui_Reminder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMINDER_H
