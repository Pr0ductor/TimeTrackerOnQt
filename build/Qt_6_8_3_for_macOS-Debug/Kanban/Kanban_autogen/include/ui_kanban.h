/********************************************************************************
** Form generated from reading UI file 'kanban.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KANBAN_H
#define UI_KANBAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kanban
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Kanban)
    {
        if (Kanban->objectName().isEmpty())
            Kanban->setObjectName("Kanban");
        Kanban->resize(1940, 1100);
        Kanban->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        centralwidget = new QWidget(Kanban);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 20, 75, 75));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 40, 286, 48));
        QFont font;
        font.setPointSize(38);
        label->setFont(font);
        Kanban->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Kanban);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1940, 36));
        Kanban->setMenuBar(menubar);
        statusbar = new QStatusBar(Kanban);
        statusbar->setObjectName("statusbar");
        Kanban->setStatusBar(statusbar);

        retranslateUi(Kanban);

        QMetaObject::connectSlotsByName(Kanban);
    } // setupUi

    void retranslateUi(QMainWindow *Kanban)
    {
        Kanban->setWindowTitle(QCoreApplication::translate("Kanban", "Kanban", nullptr));
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("Kanban", "Go back to menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kanban: public Ui_Kanban {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KANBAN_H
