/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Timer
{
public:
    QWidget *centralwidget;
    QPushButton *GoBackToMenu;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QTextEdit *Description;
    QPushButton *ApplyTimerOnTimer;
    QLabel *label_8;
    QPushButton *StartButtonOnTimer;
    QFrame *frame;
    QLabel *label_15;
    QPushButton *pushButton_5;
    QLabel *label_16;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_14;
    QLabel *label_3;
    QLabel *TimerMain;
    QTimeEdit *Select_Time;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Timer)
    {
        if (Timer->objectName().isEmpty())
            Timer->setObjectName("Timer");
        Timer->resize(1900, 1100);
        QFont font;
        font.setPointSize(38);
        Timer->setFont(font);
        Timer->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        centralwidget = new QWidget(Timer);
        centralwidget->setObjectName("centralwidget");
        GoBackToMenu = new QPushButton(centralwidget);
        GoBackToMenu->setObjectName("GoBackToMenu");
        GoBackToMenu->setGeometry(QRect(30, 10, 75, 75));
        GoBackToMenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Timer/Backmenu.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        GoBackToMenu->setIcon(icon);
        GoBackToMenu->setIconSize(QSize(75, 75));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 20, 286, 48));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"	color: black;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(420, -20, 322, 154));
        QFont font1;
        font1.setPointSize(110);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"	color: black;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(980, 3, 481, 656));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 40px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(730, -10, 130, 130));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Timer/timer.png")));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1070, 50, 298, 48));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"	color: white;\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(1090, 200, 11, 24));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;             /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"}"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1220, 200, 11, 24));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;             /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"}"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(1330, 200, 20, 24));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;             /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"}"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Description = new QTextEdit(centralwidget);
        Description->setObjectName("Description");
        Description->setGeometry(QRect(997, 360, 450, 149));
        Description->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: #D9D9D9;\n"
"    border-radius: 20px;\n"
"    padding: 10px;\n"
"    font-size: 16px;\n"
"    color: black;\n"
"}"));
        ApplyTimerOnTimer = new QPushButton(centralwidget);
        ApplyTimerOnTimer->setObjectName("ApplyTimerOnTimer");
        ApplyTimerOnTimer->setGeometry(QRect(1087, 560, 262, 73));
        ApplyTimerOnTimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D9D9D9; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 10px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"    color: black;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 46px;            /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border-radius: 10px;        /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(280, 580, 681, 81));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 40px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        StartButtonOnTimer = new QPushButton(centralwidget);
        StartButtonOnTimer->setObjectName("StartButtonOnTimer");
        StartButtonOnTimer->setGeometry(QRect(310, 595, 621, 51));
        QFont font2;
        StartButtonOnTimer->setFont(font2);
        StartButtonOnTimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D9D9D9; \n"
"    border-radius: 20px;      \n"
"    padding: 10px;           \n"
"    color: black;             \n"
"    font-size: 28px;        \n"
"}"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 660, 1900, 250));
        frame->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9; /* \320\241\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"border-radius: 10px;       /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"padding: 10px;            /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_15 = new QLabel(frame);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(-70, 20, 1900, 16));
        label_15->setStyleSheet(QString::fromUtf8("background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"border-top: 2px solid #3E828C; /* \320\227\320\265\320\273\320\265\320\275\320\260\321\217 \320\262\320\265\321\200\321\205\320\275\321\217\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */"));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 30, 200, 200));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #565555;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\320\265\321\210\320\275\320\265\320\263\320\276 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 10px;               /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"    color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 18px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"    font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202"
                        " */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #4CA8B7;        /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"}"));
        label_16 = new QLabel(frame);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(50, 50, 157, 157));
        QFont font3;
        font3.setBold(true);
        label_16->setFont(font3);
        label_16->setStyleSheet(QString::fromUtf8("background-color: #3E828C;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\265\320\263\320\276 \320\272\321\200\321\203\320\263\320\260 */\n"
"border-radius: 75%;               /* \320\232\321\200\321\203\320\263\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 30px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */"));
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(310, 30, 200, 200));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #565555;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\320\265\321\210\320\275\320\265\320\263\320\276 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 10px;               /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"    color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 18px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"    font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202"
                        " */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #4CA8B7;        /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"}"));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(580, 30, 200, 200));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #565555;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\320\265\321\210\320\275\320\265\320\263\320\276 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 10px;               /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"    color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 18px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"    font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202"
                        " */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #4CA8B7;        /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"}"));
        label_17 = new QLabel(frame);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(330, 50, 157, 157));
        label_17->setFont(font3);
        label_17->setStyleSheet(QString::fromUtf8("background-color: #3E828C;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\265\320\263\320\276 \320\272\321\200\321\203\320\263\320\260 */\n"
"border-radius: 75%;               /* \320\232\321\200\321\203\320\263\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 30px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */"));
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_18 = new QLabel(frame);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(600, 50, 157, 157));
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8("background-color: #3E828C;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\265\320\263\320\276 \320\272\321\200\321\203\320\263\320\260 */\n"
"border-radius: 75%;               /* \320\232\321\200\321\203\320\263\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 30px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */"));
        label_18->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 600, 384, 77));
        QFont font4;
        font4.setPointSize(28);
        label_14->setFont(font4);
        label_14->setStyleSheet(QString::fromUtf8("color:black; background-color: transparent;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(400, 120, 450, 450));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Timer/Ellipse 1.png")));
        TimerMain = new QLabel(centralwidget);
        TimerMain->setObjectName("TimerMain");
        TimerMain->setGeometry(QRect(450, 310, 363, 77));
        QFont font5;
        font5.setPointSize(84);
        TimerMain->setFont(font5);
        TimerMain->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    text-align: center; \n"
"    background-color: transparent; \n"
"    color: black\n"
"}"));
        Select_Time = new QTimeEdit(centralwidget);
        Select_Time->setObjectName("Select_Time");
        Select_Time->setGeometry(QRect(1010, 220, 431, 81));
        QFont font6;
        font6.setPointSize(35);
        font6.setBold(true);
        Select_Time->setFont(font6);
        Select_Time->setMouseTracking(false);
        Select_Time->setStyleSheet(QString::fromUtf8("QTimeEdit {\n"
"    background-color: #D9D9D9;\n"
"    border-radius: 20px;\n"
"    color: black;\n"
"    padding-left: 100;\n"
"    border-radius: 50px;\n"
"}"));
        Select_Time->setDate(QDate(2000, 1, 1));
        Select_Time->setMaximumDateTime(QDateTime(QDate(2000, 1, 1), QTime(17, 59, 59)));
        Select_Time->setMaximumDate(QDate(2000, 1, 1));
        Select_Time->setTime(QTime(0, 0, 0));
        Timer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Timer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1900, 25));
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
        GoBackToMenu->setText(QString());
        label->setText(QCoreApplication::translate("Timer", "Go back to menu", nullptr));
        label_2->setText(QCoreApplication::translate("Timer", "Timer", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("Timer", "Options for timer", nullptr));
        label_9->setText(QCoreApplication::translate("Timer", "h", nullptr));
        label_10->setText(QCoreApplication::translate("Timer", "m", nullptr));
        label_11->setText(QCoreApplication::translate("Timer", "s", nullptr));
        Description->setPlaceholderText(QCoreApplication::translate("Timer", "Add task that you want complete...", nullptr));
        ApplyTimerOnTimer->setText(QCoreApplication::translate("Timer", "Apply timer", nullptr));
        label_8->setText(QString());
        StartButtonOnTimer->setText(QCoreApplication::translate("Timer", "Start", nullptr));
        label_15->setText(QString());
        pushButton_5->setText(QString());
        label_16->setText(QCoreApplication::translate("Timer", "10:00", nullptr));
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        label_17->setText(QCoreApplication::translate("Timer", "10:00", nullptr));
        label_18->setText(QCoreApplication::translate("Timer", "10:00", nullptr));
        label_14->setText(QCoreApplication::translate("Timer", "Recent", nullptr));
        label_3->setText(QString());
        TimerMain->setText(QCoreApplication::translate("Timer", "00:00:00", nullptr));
        Select_Time->setDisplayFormat(QCoreApplication::translate("Timer", "HH:mm:ss", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Timer: public Ui_Timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
