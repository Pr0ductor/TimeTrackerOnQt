/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *ProjectName;
    QLabel *ProjectTeam;
    QLabel *TimeOnMainMenu;
    QPushButton *Settings;
    QPushButton *ButtonStopWatchOnMainWindow;
    QLabel *StopWatchLabelOnMainWindow;
    QPushButton *ButtonTimerOnMainWindow;
    QLabel *TimerLabelOnMainWindow;
    QPushButton *ButtonKanbanOnMainWindow;
    QLabel *KanbakLabelOnMainWindow;
    QPushButton *ButtonReminderOnMainWindow;
    QLabel *ReminderLabelOnMainWindow;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(527, 696);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        MainWindow->setIconSize(QSize(8, 8));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ProjectName = new QLabel(centralwidget);
        ProjectName->setObjectName("ProjectName");
        ProjectName->setGeometry(QRect(150, 20, 221, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Avenir Next Condensed")});
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(true);
        ProjectName->setFont(font);
        ProjectName->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black; \n"
"}"));
        ProjectName->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        ProjectTeam = new QLabel(centralwidget);
        ProjectTeam->setObjectName("ProjectTeam");
        ProjectTeam->setGeometry(QRect(150, 50, 221, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Avenir Next Condensed")});
        font1.setPointSize(12);
        ProjectTeam->setFont(font1);
        ProjectTeam->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black; \n"
"    background-color: transparent; \n"
"    border: none; \n"
"}"));
        ProjectTeam->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);
        TimeOnMainMenu = new QLabel(centralwidget);
        TimeOnMainMenu->setObjectName("TimeOnMainMenu");
        TimeOnMainMenu->setGeometry(QRect(110, 110, 309, 122));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Avenir Next Condensed")});
        font2.setPointSize(96);
        font2.setBold(true);
        font2.setItalic(false);
        TimeOnMainMenu->setFont(font2);
        TimeOnMainMenu->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black; \n"
"}"));
        TimeOnMainMenu->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        Settings = new QPushButton(centralwidget);
        Settings->setObjectName("Settings");
        Settings->setGeometry(QRect(440, 10, 70, 70));
        Settings->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\221\320\265\320\267 \320\263\321\200\320\260\320\275\320\270\321\206 */\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/Setting.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Settings->setIcon(icon);
        Settings->setIconSize(QSize(70, 70));
        ButtonStopWatchOnMainWindow = new QPushButton(centralwidget);
        ButtonStopWatchOnMainWindow->setObjectName("ButtonStopWatchOnMainWindow");
        ButtonStopWatchOnMainWindow->setGeometry(QRect(110, 260, 150, 150));
        ButtonStopWatchOnMainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CA8B7; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 32px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 18px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5CC9D6; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3E9AAB; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202"
                        "\320\270\320\270 */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/StopWatchIcon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ButtonStopWatchOnMainWindow->setIcon(icon1);
        ButtonStopWatchOnMainWindow->setIconSize(QSize(90, 90));
        StopWatchLabelOnMainWindow = new QLabel(centralwidget);
        StopWatchLabelOnMainWindow->setObjectName("StopWatchLabelOnMainWindow");
        StopWatchLabelOnMainWindow->setGeometry(QRect(110, 370, 145, 25));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Avenir Next Condensed")});
        font3.setPointSize(18);
        font3.setBold(false);
        StopWatchLabelOnMainWindow->setFont(font3);
        StopWatchLabelOnMainWindow->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white; \n"
"    text-align: center; \n"
"    background-color: transparent; \n"
"}"));
        StopWatchLabelOnMainWindow->setAlignment(Qt::AlignmentFlag::AlignCenter);
        StopWatchLabelOnMainWindow->setWordWrap(false);
        StopWatchLabelOnMainWindow->setOpenExternalLinks(false);
        ButtonTimerOnMainWindow = new QPushButton(centralwidget);
        ButtonTimerOnMainWindow->setObjectName("ButtonTimerOnMainWindow");
        ButtonTimerOnMainWindow->setGeometry(QRect(290, 260, 150, 150));
        ButtonTimerOnMainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CA8B7; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 32px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 18px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5CC9D6; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3E9AAB; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202"
                        "\320\270\320\270 */\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/TimerIcon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ButtonTimerOnMainWindow->setIcon(icon2);
        ButtonTimerOnMainWindow->setIconSize(QSize(90, 90));
        TimerLabelOnMainWindow = new QLabel(centralwidget);
        TimerLabelOnMainWindow->setObjectName("TimerLabelOnMainWindow");
        TimerLabelOnMainWindow->setGeometry(QRect(290, 370, 145, 25));
        TimerLabelOnMainWindow->setFont(font3);
        TimerLabelOnMainWindow->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white; \n"
"    text-align: center; \n"
"    background-color: transparent; \n"
"}"));
        TimerLabelOnMainWindow->setAlignment(Qt::AlignmentFlag::AlignCenter);
        TimerLabelOnMainWindow->setWordWrap(false);
        TimerLabelOnMainWindow->setOpenExternalLinks(false);
        ButtonKanbanOnMainWindow = new QPushButton(centralwidget);
        ButtonKanbanOnMainWindow->setObjectName("ButtonKanbanOnMainWindow");
        ButtonKanbanOnMainWindow->setGeometry(QRect(110, 430, 150, 150));
        ButtonKanbanOnMainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CA8B7; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 32px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 18px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5CC9D6; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3E9AAB; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202"
                        "\320\270\320\270 */\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/KanbanIcon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ButtonKanbanOnMainWindow->setIcon(icon3);
        ButtonKanbanOnMainWindow->setIconSize(QSize(90, 90));
        KanbakLabelOnMainWindow = new QLabel(centralwidget);
        KanbakLabelOnMainWindow->setObjectName("KanbakLabelOnMainWindow");
        KanbakLabelOnMainWindow->setGeometry(QRect(110, 540, 145, 25));
        KanbakLabelOnMainWindow->setFont(font3);
        KanbakLabelOnMainWindow->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white; \n"
"    text-align: center; \n"
"    background-color: transparent; \n"
"}"));
        KanbakLabelOnMainWindow->setAlignment(Qt::AlignmentFlag::AlignCenter);
        KanbakLabelOnMainWindow->setWordWrap(false);
        KanbakLabelOnMainWindow->setOpenExternalLinks(false);
        ButtonReminderOnMainWindow = new QPushButton(centralwidget);
        ButtonReminderOnMainWindow->setObjectName("ButtonReminderOnMainWindow");
        ButtonReminderOnMainWindow->setGeometry(QRect(290, 430, 150, 150));
        ButtonReminderOnMainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CA8B7; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 32px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 18px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5CC9D6; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3E9AAB; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202"
                        "\320\270\320\270 */\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/ReminderIcon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ButtonReminderOnMainWindow->setIcon(icon4);
        ButtonReminderOnMainWindow->setIconSize(QSize(90, 90));
        ReminderLabelOnMainWindow = new QLabel(centralwidget);
        ReminderLabelOnMainWindow->setObjectName("ReminderLabelOnMainWindow");
        ReminderLabelOnMainWindow->setGeometry(QRect(290, 540, 145, 25));
        ReminderLabelOnMainWindow->setFont(font3);
        ReminderLabelOnMainWindow->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white; \n"
"    text-align: center; \n"
"    background-color: transparent; \n"
"}"));
        ReminderLabelOnMainWindow->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ReminderLabelOnMainWindow->setWordWrap(false);
        ReminderLabelOnMainWindow->setOpenExternalLinks(false);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 527, 36));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        ProjectName->setText(QCoreApplication::translate("MainWindow", "TIME TRAKER", nullptr));
        ProjectTeam->setText(QCoreApplication::translate("MainWindow", "\n"
"by karmanye invalidy", nullptr));
        TimeOnMainMenu->setText(QCoreApplication::translate("MainWindow", "13:37", nullptr));
        Settings->setText(QString());
        ButtonStopWatchOnMainWindow->setText(QString());
        StopWatchLabelOnMainWindow->setText(QCoreApplication::translate("MainWindow", "StopWatch", nullptr));
        ButtonTimerOnMainWindow->setText(QString());
        TimerLabelOnMainWindow->setText(QCoreApplication::translate("MainWindow", "Timer", nullptr));
        ButtonKanbanOnMainWindow->setText(QString());
        KanbakLabelOnMainWindow->setText(QCoreApplication::translate("MainWindow", "Kanban", nullptr));
        ButtonReminderOnMainWindow->setText(QString());
        ReminderLabelOnMainWindow->setText(QCoreApplication::translate("MainWindow", "Reminder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
