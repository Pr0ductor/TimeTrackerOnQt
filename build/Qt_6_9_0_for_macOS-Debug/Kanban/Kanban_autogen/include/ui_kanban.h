/********************************************************************************
** Form generated from reading UI file 'kanban.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KANBAN_H
#define UI_KANBAN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kanban
{
public:
    QWidget *centralwidget;
    QPushButton *GoBackToMenu;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLabel *label_12;
    QTextEdit *textEdit;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *notStartedContainer;
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Kanban)
    {
        if (Kanban->objectName().isEmpty())
            Kanban->setObjectName("Kanban");
        Kanban->resize(1940, 1100);
        QFont font;
        font.setPointSize(46);
        Kanban->setFont(font);
        Kanban->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        centralwidget = new QWidget(Kanban);
        centralwidget->setObjectName("centralwidget");
        GoBackToMenu = new QPushButton(centralwidget);
        GoBackToMenu->setObjectName("GoBackToMenu");
        GoBackToMenu->setGeometry(QRect(60, 20, 75, 75));
        GoBackToMenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Kanban/Backmenu.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        GoBackToMenu->setIcon(icon);
        GoBackToMenu->setIconSize(QSize(75, 75));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 286, 48));
        QFont font1;
        font1.setPointSize(38);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: black;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(450, 20, 361, 81));
        QFont font2;
        font2.setPointSize(64);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: black;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(930, 30, 481, 359));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 30px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(740, -10, 130, 130));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; \n"
"    border: none;                \n"
"    padding: 0;                \n"
"}"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Kanban/KanbanIcon.png")));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(340, 170, 16, 729));
        label_9->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"border-left: 2px solid #3E828C; /* \320\222\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\320\260\321\217 \320\273\320\270\320\275\320\270\321\217 \321\201\320\273\320\265\320\262\320\260 */"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1040, 290, 262, 73));
        QFont font3;
        font3.setPointSize(42);
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D9D9D9; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 10px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"    color: black;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    border-radius: 10px;        /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(980, 40, 341, 71));
        QFont font4;
        font4.setPointSize(32);
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;             /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(70, 180, 240, 80));
        QFont font5;
        font5.setPointSize(24);
        label_12->setFont(font5);
        label_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 20px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"color: white; /*\320\261\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(950, 130, 450, 133));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: #D9D9D9;\n"
"    border-radius: 20px;\n"
"    padding: 10px;\n"
"    font-size: 16px;\n"
"    color: black;\n"
"}"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(630, 170, 16, 729));
        label_10->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"border-left: 2px solid #3E828C; /* \320\222\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\320\260\321\217 \320\273\320\270\320\275\320\270\321\217 \321\201\320\273\320\265\320\262\320\260 */"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(930, 140, 16, 729));
        label_11->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"border-left: 2px solid #3E828C; /* \320\222\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\320\260\321\217 \320\273\320\270\320\275\320\270\321\217 \321\201\320\273\320\265\320\262\320\260 */"));
        notStartedContainer = new QWidget(centralwidget);
        notStartedContainer->setObjectName("notStartedContainer");
        notStartedContainer->setGeometry(QRect(70, 290, 240, 511));
        notStartedContainer->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        verticalLayout = new QVBoxLayout(notStartedContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 0, 0, 0);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(370, 180, 240, 80));
        label_13->setFont(font5);
        label_13->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 20px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"color: white; /*\320\261\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(660, 180, 240, 80));
        label_14->setFont(font5);
        label_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 20px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"color: white; /*\320\261\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 130, 861, 40));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: black;\n"
"}"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_7);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: black;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: black;\n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_5);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 180, 25, 40));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   background-color: transparent; \n"
"   border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"   padding: 10px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Kanban/Right Arrow.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(20, 35));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(270, 180, 25, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   background-color: transparent; \n"
"   border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"   padding: 10px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Kanban/Multiply.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(20, 35));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(560, 180, 25, 40));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   background-color: transparent; \n"
"   border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"   padding: 10px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"}"));
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(20, 35));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(580, 180, 25, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   background-color: transparent; \n"
"   border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"   padding: 10px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"}"));
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(20, 35));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(850, 180, 25, 40));
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   background-color: transparent; \n"
"   border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"   padding: 10px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"}"));
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(20, 35));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(870, 180, 25, 40));
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   background-color: transparent; \n"
"   border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"   padding: 10px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"}"));
        pushButton_7->setIcon(icon2);
        pushButton_7->setIconSize(QSize(20, 35));
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
        GoBackToMenu->setText(QString());
        label->setText(QCoreApplication::translate("Kanban", "Go back to menu", nullptr));
        label_2->setText(QCoreApplication::translate("Kanban", "Kanban", nullptr));
        label_3->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Kanban", "Apply add", nullptr));
        label_6->setText(QCoreApplication::translate("Kanban", "Add the task", nullptr));
        label_12->setText(QCoreApplication::translate("Kanban", "  1. Not started task", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("Kanban", "Description of the task", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        label_13->setText(QCoreApplication::translate("Kanban", "  1. Started task", nullptr));
        label_14->setText(QCoreApplication::translate("Kanban", "  1. Completed task", nullptr));
        label_7->setText(QCoreApplication::translate("Kanban", "Not Started", nullptr));
        label_4->setText(QCoreApplication::translate("Kanban", "Started", nullptr));
        label_5->setText(QCoreApplication::translate("Kanban", "Completed", nullptr));
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Kanban: public Ui_Kanban {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KANBAN_H
