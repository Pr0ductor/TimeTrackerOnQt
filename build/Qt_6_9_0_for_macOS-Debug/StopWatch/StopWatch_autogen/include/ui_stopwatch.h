/********************************************************************************
** Form generated from reading UI file 'stopwatch.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOPWATCH_H
#define UI_STOPWATCH_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StopWatch
{
public:
    QWidget *centralwidget;
    QLabel *GoBackToMenuLabel;
    QPushButton *GoBackToMenu;
    QLabel *StopWatchName;
    QLabel *label_3;
    QLabel *StopWatchIconOnStopWatch;
    QLabel *StopWatchMain;
    QLabel *label_6;
    QPushButton *StartButtonOnStopWatch;
    QPushButton *StopButtonOnStopWatch;
    QLabel *MenuForSavingResultsOnStopWatch;
    QPushButton *ApplySaveButtonOnStopWatch;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *TimeOnMenuOnStopWatch;
    QTextEdit *TextEditOnStopWatch;
    QLabel *label_14;
    QFrame *frame;
    QLabel *label_15;
    QPushButton *pushButton_5;
    QLabel *label_16;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_17;
    QLabel *label_18;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StopWatch)
    {
        if (StopWatch->objectName().isEmpty())
            StopWatch->setObjectName("StopWatch");
        StopWatch->setEnabled(true);
        StopWatch->resize(1900, 1000);
        StopWatch->setMinimumSize(QSize(1900, 0));
        StopWatch->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        centralwidget = new QWidget(StopWatch);
        centralwidget->setObjectName("centralwidget");
        GoBackToMenuLabel = new QLabel(centralwidget);
        GoBackToMenuLabel->setObjectName("GoBackToMenuLabel");
        GoBackToMenuLabel->setGeometry(QRect(100, 10, 286, 48));
        QFont font;
        font.setPointSize(38);
        GoBackToMenuLabel->setFont(font);
        GoBackToMenuLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"	color: black;\n"
"}"));
        GoBackToMenu = new QPushButton(centralwidget);
        GoBackToMenu->setObjectName("GoBackToMenu");
        GoBackToMenu->setGeometry(QRect(10, 0, 75, 75));
        GoBackToMenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/StopWatchResources/Backmenu.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        GoBackToMenu->setIcon(icon);
        GoBackToMenu->setIconSize(QSize(74, 74));
        StopWatchName = new QLabel(centralwidget);
        StopWatchName->setObjectName("StopWatchName");
        StopWatchName->setGeometry(QRect(290, 0, 574, 154));
        QFont font1;
        font1.setPointSize(62);
        font1.setBold(true);
        StopWatchName->setFont(font1);
        StopWatchName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"	color: black;\n"
"}"));
        StopWatchName->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(400, 80, 450, 450));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 0;                  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213, \320\265\321\201\320\273\320\270 \320\276\320\275\320\270 \320\265\321\201\321\202\321\214 */\n"
"}"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/StopWatchResources/clock_icon.png")));
        StopWatchIconOnStopWatch = new QLabel(centralwidget);
        StopWatchIconOnStopWatch->setObjectName("StopWatchIconOnStopWatch");
        StopWatchIconOnStopWatch->setGeometry(QRect(730, -10, 130, 130));
        StopWatchIconOnStopWatch->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; \n"
"    border: none;                \n"
"    padding: 0;                \n"
"}"));
        StopWatchIconOnStopWatch->setPixmap(QPixmap(QString::fromUtf8(":/icons/StopWatchResources/clock.png")));
        StopWatchMain = new QLabel(centralwidget);
        StopWatchMain->setObjectName("StopWatchMain");
        StopWatchMain->setGeometry(QRect(440, 270, 363, 77));
        QFont font2;
        font2.setPointSize(84);
        StopWatchMain->setFont(font2);
        StopWatchMain->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    text-align: center; \n"
"    background-color: transparent; \n"
"    color: black\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(290, 560, 681, 81));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 40px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        StartButtonOnStopWatch = new QPushButton(centralwidget);
        StartButtonOnStopWatch->setObjectName("StartButtonOnStopWatch");
        StartButtonOnStopWatch->setGeometry(QRect(340, 580, 256, 41));
        StartButtonOnStopWatch->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D9D9D9; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 20px;      /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px;           /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: black;             /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 18px;         /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}"));
        StopButtonOnStopWatch = new QPushButton(centralwidget);
        StopButtonOnStopWatch->setObjectName("StopButtonOnStopWatch");
        StopButtonOnStopWatch->setGeometry(QRect(660, 580, 256, 41));
        StopButtonOnStopWatch->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D9D9D9; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border-radius: 20px;      /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px;           /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: black;             /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 18px;         /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}"));
        MenuForSavingResultsOnStopWatch = new QLabel(centralwidget);
        MenuForSavingResultsOnStopWatch->setObjectName("MenuForSavingResultsOnStopWatch");
        MenuForSavingResultsOnStopWatch->setGeometry(QRect(1000, 10, 460, 656));
        MenuForSavingResultsOnStopWatch->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #3E828C; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"border-radius: 40px; /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"padding: 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        ApplySaveButtonOnStopWatch = new QPushButton(centralwidget);
        ApplySaveButtonOnStopWatch->setObjectName("ApplySaveButtonOnStopWatch");
        ApplySaveButtonOnStopWatch->setGeometry(QRect(1100, 500, 262, 73));
        ApplySaveButtonOnStopWatch->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D9D9D9; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;                /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    padding: 10px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"    color: black;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 46px;            /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border-radius: 10px;        /* \320\227\320\260\321\202\321\203\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(1060, 30, 317, 48));
        QFont font3;
        font3.setPointSize(26);
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;             /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"}"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(1130, 140, 11, 24));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;             /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"}"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1230, 140, 11, 24));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;             /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"}"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(1330, 140, 11, 24));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;             /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"}"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        TimeOnMenuOnStopWatch = new QLabel(centralwidget);
        TimeOnMenuOnStopWatch->setObjectName("TimeOnMenuOnStopWatch");
        TimeOnMenuOnStopWatch->setGeometry(QRect(1010, 160, 445, 90));
        QFont font4;
        font4.setPointSize(66);
        font4.setBold(true);
        TimeOnMenuOnStopWatch->setFont(font4);
        TimeOnMenuOnStopWatch->setStyleSheet(QString::fromUtf8("QLabel {\n"
"border-radius: 25px;  \n"
" color: black \n"
"}"));
        TimeOnMenuOnStopWatch->setAlignment(Qt::AlignmentFlag::AlignCenter);
        TextEditOnStopWatch = new QTextEdit(centralwidget);
        TextEditOnStopWatch->setObjectName("TextEditOnStopWatch");
        TextEditOnStopWatch->setGeometry(QRect(1010, 270, 445, 180));
        TextEditOnStopWatch->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: #D9D9D9;\n"
"    border-radius: 20px;\n"
"    padding: 10px;\n"
"    font-size: 16px;\n"
"    color: black;\n"
"}"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 610, 384, 77));
        QFont font5;
        font5.setPointSize(28);
        label_14->setFont(font5);
        label_14->setStyleSheet(QString::fromUtf8("color:black; background-color: transparent;"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-20, 670, 1900, 250));
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
        QFont font6;
        font6.setBold(true);
        label_16->setFont(font6);
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
        label_17->setFont(font6);
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
        label_18->setFont(font6);
        label_18->setStyleSheet(QString::fromUtf8("background-color: #3E828C;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\265\320\263\320\276 \320\272\321\200\321\203\320\263\320\260 */\n"
"border-radius: 75%;               /* \320\232\321\200\321\203\320\263\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 30px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */"));
        label_18->setAlignment(Qt::AlignmentFlag::AlignCenter);
        StopWatch->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StopWatch);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1900, 36));
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
        GoBackToMenuLabel->setText(QCoreApplication::translate("StopWatch", "Go back to menu", nullptr));
        GoBackToMenu->setText(QString());
        StopWatchName->setText(QCoreApplication::translate("StopWatch", "Stopwatch", nullptr));
        label_3->setText(QString());
        StopWatchIconOnStopWatch->setText(QString());
        StopWatchMain->setText(QCoreApplication::translate("StopWatch", "00:00:00", nullptr));
        label_6->setText(QString());
        StartButtonOnStopWatch->setText(QCoreApplication::translate("StopWatch", "Start", nullptr));
        StopButtonOnStopWatch->setText(QCoreApplication::translate("StopWatch", "Stop", nullptr));
        MenuForSavingResultsOnStopWatch->setText(QString());
        ApplySaveButtonOnStopWatch->setText(QCoreApplication::translate("StopWatch", "Apply save", nullptr));
        label_8->setText(QCoreApplication::translate("StopWatch", "Options for saving", nullptr));
        label_9->setText(QCoreApplication::translate("StopWatch", "h", nullptr));
        label_10->setText(QCoreApplication::translate("StopWatch", "m", nullptr));
        label_11->setText(QCoreApplication::translate("StopWatch", "s", nullptr));
        TimeOnMenuOnStopWatch->setText(QCoreApplication::translate("StopWatch", "00:00:00", nullptr));
        TextEditOnStopWatch->setHtml(QCoreApplication::translate("StopWatch", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        TextEditOnStopWatch->setPlaceholderText(QCoreApplication::translate("StopWatch", "Description of the completed task", nullptr));
        label_14->setText(QCoreApplication::translate("StopWatch", "Saved Results", nullptr));
        label_15->setText(QString());
        pushButton_5->setText(QString());
        label_16->setText(QCoreApplication::translate("StopWatch", "10:00", nullptr));
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        label_17->setText(QCoreApplication::translate("StopWatch", "10:00", nullptr));
        label_18->setText(QCoreApplication::translate("StopWatch", "10:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StopWatch: public Ui_StopWatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOPWATCH_H
