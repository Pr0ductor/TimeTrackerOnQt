/********************************************************************************
** Form generated from reading UI file 'timeron.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMERON_H
#define UI_TIMERON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimerOn
{
public:
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *TimerMain;
    QLabel *label_8;
    QPushButton *PauseButtonOnTimerOn;
    QPushButton *StopButtonOnTimerOn;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_6;
    QTextEdit *Description;

    void setupUi(QWidget *TimerOn)
    {
        if (TimerOn->objectName().isEmpty())
            TimerOn->setObjectName("TimerOn");
        TimerOn->resize(1900, 1100);
        TimerOn->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_2 = new QLabel(TimerOn);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(530, 20, 322, 154));
        QFont font;
        font.setPointSize(110);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"	color: black;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(TimerOn);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(840, 30, 130, 130));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Timer/timer.png")));
        label_3 = new QLabel(TimerOn);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(510, 190, 450, 450));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Timer/Ellipse 1.png")));
        TimerMain = new QLabel(TimerOn);
        TimerMain->setObjectName("TimerMain");
        TimerMain->setGeometry(QRect(560, 390, 363, 77));
        QFont font1;
        font1.setPointSize(84);
        TimerMain->setFont(font1);
        TimerMain->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    text-align: center; \n"
"    background-color: transparent; \n"
"    color: black\n"
"}"));
        label_8 = new QLabel(TimerOn);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(410, 760, 681, 81));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 40px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        PauseButtonOnTimerOn = new QPushButton(TimerOn);
        PauseButtonOnTimerOn->setObjectName("PauseButtonOnTimerOn");
        PauseButtonOnTimerOn->setGeometry(QRect(450, 780, 256, 41));
        PauseButtonOnTimerOn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D9D9D9; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 20px;      /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px;           /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: black;             /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 18px;         /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}"));
        StopButtonOnTimerOn = new QPushButton(TimerOn);
        StopButtonOnTimerOn->setObjectName("StopButtonOnTimerOn");
        StopButtonOnTimerOn->setGeometry(QRect(790, 780, 256, 41));
        StopButtonOnTimerOn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D9D9D9; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 20px;      /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px;           /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: black;             /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 18px;         /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}"));
        label_4 = new QLabel(TimerOn);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(970, 80, 481, 656));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 40px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        label_7 = new QLabel(TimerOn);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(990, 590, 438, 71));
        QFont font2;
        font2.setPointSize(36);
        font2.setBold(true);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #D9D9D9;\n"
"    border-radius: 20px;\n"
"    padding: 10px;\n"
"    color: black;\n"
"}"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(TimerOn);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 190, 500, 500));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"	color: black;\n"
"}"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/Timer/image 3.png")));
        label_6 = new QLabel(TimerOn);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1040, 110, 298, 48));
        QFont font3;
        font3.setPointSize(48);
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"	color: white;\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Description = new QTextEdit(TimerOn);
        Description->setObjectName("Description");
        Description->setGeometry(QRect(1000, 220, 421, 321));
        QFont font4;
        font4.setPointSize(25);
        Description->setFont(font4);
        Description->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #D9D9D9;\n"
"    border-radius: 20px;\n"
"    padding: 10px;\n"
"    color: black;\n"
""));

        retranslateUi(TimerOn);

        QMetaObject::connectSlotsByName(TimerOn);
    } // setupUi

    void retranslateUi(QWidget *TimerOn)
    {
        TimerOn->setWindowTitle(QCoreApplication::translate("TimerOn", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("TimerOn", "Timer", nullptr));
        label_5->setText(QString());
        label_3->setText(QString());
        TimerMain->setText(QCoreApplication::translate("TimerOn", "00:00:00", nullptr));
        label_8->setText(QString());
        PauseButtonOnTimerOn->setText(QCoreApplication::translate("TimerOn", "PAUSE", nullptr));
        StopButtonOnTimerOn->setText(QCoreApplication::translate("TimerOn", "STOP", nullptr));
        label_4->setText(QString());
        label_7->setText(QCoreApplication::translate("TimerOn", "wait for the timer to end", nullptr));
        label_9->setText(QString());
        label_6->setText(QCoreApplication::translate("TimerOn", "Task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimerOn: public Ui_TimerOn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMERON_H
