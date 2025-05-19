/********************************************************************************
** Form generated from reading UI file 'reminder.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMINDER_H
#define UI_REMINDER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reminder
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *GoBackToMenu;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *TimeOnReminder;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Reminder)
    {
        if (Reminder->objectName().isEmpty())
            Reminder->setObjectName("Reminder");
        Reminder->resize(1175, 696);
        Reminder->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        centralwidget = new QWidget(Reminder);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 20, 286, 48));
        QFont font;
        font.setPointSize(38);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: black;\n"
"}"));
        GoBackToMenu = new QPushButton(centralwidget);
        GoBackToMenu->setObjectName("GoBackToMenu");
        GoBackToMenu->setGeometry(QRect(60, 10, 75, 75));
        GoBackToMenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Reminder/Backmenu.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        GoBackToMenu->setIcon(icon);
        GoBackToMenu->setIconSize(QSize(75, 75));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(690, 30, 303, 91));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: black\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(950, 30, 101, 101));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"}\n"
""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Reminder/calendar-tick.png")));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(610, 140, 534, 512));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 30px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(630, 170, 171, 84));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: black;\n"
"}\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 200, 370, 418));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 30px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
""));
        TimeOnReminder = new QLabel(centralwidget);
        TimeOnReminder->setObjectName("TimeOnReminder");
        TimeOnReminder->setGeometry(QRect(80, 50, 381, 181));
        QFont font1;
        font1.setPointSize(119);
        TimeOnReminder->setFont(font1);
        TimeOnReminder->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: black;\n"
"}\n"
""));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(630, 310, 321, 60));
        QFont font2;
        font2.setPointSize(30);
        checkBox->setFont(font2);
        checkBox->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: white;"));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(630, 360, 311, 60));
        checkBox_2->setFont(font2);
        checkBox_2->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: white;"));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(630, 410, 311, 60));
        checkBox_3->setFont(font2);
        checkBox_3->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: white;"));
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(630, 460, 311, 60));
        checkBox_4->setFont(font2);
        checkBox_4->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: white;"));
        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(630, 510, 311, 60));
        checkBox_5->setFont(font2);
        checkBox_5->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: white;"));
        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setGeometry(QRect(630, 560, 311, 60));
        checkBox_6->setFont(font2);
        checkBox_6->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: white;"));
        checkBox_7 = new QCheckBox(centralwidget);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setGeometry(QRect(630, 260, 321, 60));
        checkBox_7->setFont(font2);
        checkBox_7->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"color: white;"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(110, 260, 317, 48));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 20px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"color: black; /*\320\261\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 24px;\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
""));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(110, 360, 192, 45));
        QFont font3;
        textEdit_2->setFont(font3);
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 20px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"color: black; /*\320\261\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 24px;\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
""));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(110, 460, 192, 45));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 20px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"color: black; /*\320\261\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 24px;\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 540, 317, 41));
        QFont font4;
        font4.setPointSize(24);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D9D9D9; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 10px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"    color: black;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    border-radius: 10px;        /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(255, 463, 36, 36));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Reminder/calendar-add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(36, 36));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 360, 46, 46));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Reminder/klipartz.com.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(46, 46));
        Reminder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Reminder);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1175, 25));
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
        GoBackToMenu->setText(QString());
        label_2->setText(QCoreApplication::translate("Reminder", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:700;\">Reminder </span></p><p align=\"center\"><span style=\" font-size:18pt;\">by karmanye invalidy</span></p></body></html>", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("Reminder", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">Tomorrow </span></p><p><span style=\" font-size:24pt; font-weight:700;\">Counter: </span></p></body></html>", nullptr));
        label_6->setText(QString());
        TimeOnReminder->setText(QCoreApplication::translate("Reminder", "<html><head/><body><p align=\"center\"><span style=\" font-size:144pt;\">14:40</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("Reminder", "\320\235\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Reminder", "\320\235\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Reminder", "\320\235\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Reminder", "\320\235\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Reminder", "\320\235\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Reminder", "\320\235\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Reminder", "\320\235\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("Reminder", "Enter reminder text...", nullptr));
        textEdit_2->setPlaceholderText(QCoreApplication::translate("Reminder", "Choose time", nullptr));
        textEdit_3->setPlaceholderText(QCoreApplication::translate("Reminder", "Choose data", nullptr));
        pushButton->setText(QCoreApplication::translate("Reminder", "Add reminder", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Reminder: public Ui_Reminder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMINDER_H
