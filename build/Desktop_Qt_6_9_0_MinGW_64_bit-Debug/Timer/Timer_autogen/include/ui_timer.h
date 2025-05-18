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
    QLabel *label_8;
    QPushButton *StartButtonOnTimer;
    QFrame *frame;
    QLabel *label_15;
    QPushButton *Timer1mButton;
    QLabel *Timer1mLabel;
    QPushButton *Timer5mButton;
    QLabel *Timer5mLabel;
    QPushButton *Timer10mButton;
    QLabel *Timer10mLabel;
    QPushButton *Timer15mButton;
    QLabel *Timer15mLabel;
    QPushButton *Timer30mButton;
    QLabel *Timer30mLabel;
    QPushButton *Timer60mButton;
    QLabel *Timer60hLabel;
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
        Timer1mButton = new QPushButton(frame);
        Timer1mButton->setObjectName("Timer1mButton");
        Timer1mButton->setGeometry(QRect(30, 30, 200, 200));
        Timer1mButton->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        Timer1mButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Timer1mButton->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer1mLabel = new QLabel(Timer1mButton);
        Timer1mLabel->setObjectName("Timer1mLabel");
        Timer1mLabel->setGeometry(QRect(20, 20, 157, 157));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Timer1mLabel->sizePolicy().hasHeightForWidth());
        Timer1mLabel->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setBold(true);
        Timer1mLabel->setFont(font3);
        Timer1mLabel->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        Timer1mLabel->setToolTipDuration(-1);
        Timer1mLabel->setStyleSheet(QString::fromUtf8("background-color: #3E828C;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\265\320\263\320\276 \320\272\321\200\321\203\320\263\320\260 */\n"
"border-radius: 75%;               /* \320\232\321\200\321\203\320\263\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 30px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"z-index: 1;"));
        Timer1mLabel->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer1mLabel->setTextFormat(Qt::TextFormat::AutoText);
        Timer1mLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Timer5mButton = new QPushButton(frame);
        Timer5mButton->setObjectName("Timer5mButton");
        Timer5mButton->setGeometry(QRect(280, 30, 200, 200));
        Timer5mButton->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        Timer5mButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Timer5mButton->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer5mLabel = new QLabel(Timer5mButton);
        Timer5mLabel->setObjectName("Timer5mLabel");
        Timer5mLabel->setGeometry(QRect(20, 20, 157, 157));
        sizePolicy.setHeightForWidth(Timer5mLabel->sizePolicy().hasHeightForWidth());
        Timer5mLabel->setSizePolicy(sizePolicy);
        Timer5mLabel->setFont(font3);
        Timer5mLabel->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        Timer5mLabel->setToolTipDuration(-1);
        Timer5mLabel->setStyleSheet(QString::fromUtf8("background-color: #3E828C;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\265\320\263\320\276 \320\272\321\200\321\203\320\263\320\260 */\n"
"border-radius: 75%;               /* \320\232\321\200\321\203\320\263\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 30px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"z-index: 1;"));
        Timer5mLabel->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer5mLabel->setTextFormat(Qt::TextFormat::AutoText);
        Timer5mLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Timer10mButton = new QPushButton(frame);
        Timer10mButton->setObjectName("Timer10mButton");
        Timer10mButton->setGeometry(QRect(530, 30, 200, 200));
        Timer10mButton->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        Timer10mButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Timer10mButton->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer10mLabel = new QLabel(Timer10mButton);
        Timer10mLabel->setObjectName("Timer10mLabel");
        Timer10mLabel->setGeometry(QRect(20, 20, 157, 157));
        sizePolicy.setHeightForWidth(Timer10mLabel->sizePolicy().hasHeightForWidth());
        Timer10mLabel->setSizePolicy(sizePolicy);
        Timer10mLabel->setFont(font3);
        Timer10mLabel->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        Timer10mLabel->setToolTipDuration(-1);
        Timer10mLabel->setStyleSheet(QString::fromUtf8("background-color: #3E828C;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\265\320\263\320\276 \320\272\321\200\321\203\320\263\320\260 */\n"
"border-radius: 75%;               /* \320\232\321\200\321\203\320\263\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 30px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"z-index: 1;"));
        Timer10mLabel->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer10mLabel->setTextFormat(Qt::TextFormat::AutoText);
        Timer10mLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Timer15mButton = new QPushButton(frame);
        Timer15mButton->setObjectName("Timer15mButton");
        Timer15mButton->setGeometry(QRect(780, 30, 200, 200));
        Timer15mButton->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        Timer15mButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Timer15mButton->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer15mLabel = new QLabel(Timer15mButton);
        Timer15mLabel->setObjectName("Timer15mLabel");
        Timer15mLabel->setGeometry(QRect(20, 20, 157, 157));
        sizePolicy.setHeightForWidth(Timer15mLabel->sizePolicy().hasHeightForWidth());
        Timer15mLabel->setSizePolicy(sizePolicy);
        Timer15mLabel->setFont(font3);
        Timer15mLabel->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        Timer15mLabel->setToolTipDuration(-1);
        Timer15mLabel->setStyleSheet(QString::fromUtf8("background-color: #3E828C;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\265\320\263\320\276 \320\272\321\200\321\203\320\263\320\260 */\n"
"border-radius: 75%;               /* \320\232\321\200\321\203\320\263\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 30px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"z-index: 1;"));
        Timer15mLabel->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer15mLabel->setTextFormat(Qt::TextFormat::AutoText);
        Timer15mLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Timer30mButton = new QPushButton(frame);
        Timer30mButton->setObjectName("Timer30mButton");
        Timer30mButton->setGeometry(QRect(1020, 30, 200, 200));
        Timer30mButton->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        Timer30mButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Timer30mButton->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer30mLabel = new QLabel(Timer30mButton);
        Timer30mLabel->setObjectName("Timer30mLabel");
        Timer30mLabel->setGeometry(QRect(20, 20, 157, 157));
        sizePolicy.setHeightForWidth(Timer30mLabel->sizePolicy().hasHeightForWidth());
        Timer30mLabel->setSizePolicy(sizePolicy);
        Timer30mLabel->setFont(font3);
        Timer30mLabel->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        Timer30mLabel->setToolTipDuration(-1);
        Timer30mLabel->setStyleSheet(QString::fromUtf8("background-color: #3E828C;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\265\320\263\320\276 \320\272\321\200\321\203\320\263\320\260 */\n"
"border-radius: 75%;               /* \320\232\321\200\321\203\320\263\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 30px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"z-index: 1;"));
        Timer30mLabel->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer30mLabel->setTextFormat(Qt::TextFormat::AutoText);
        Timer30mLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Timer60mButton = new QPushButton(frame);
        Timer60mButton->setObjectName("Timer60mButton");
        Timer60mButton->setGeometry(QRect(1260, 30, 200, 200));
        Timer60mButton->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        Timer60mButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Timer60mButton->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer60hLabel = new QLabel(Timer60mButton);
        Timer60hLabel->setObjectName("Timer60hLabel");
        Timer60hLabel->setGeometry(QRect(20, 20, 157, 157));
        sizePolicy.setHeightForWidth(Timer60hLabel->sizePolicy().hasHeightForWidth());
        Timer60hLabel->setSizePolicy(sizePolicy);
        Timer60hLabel->setFont(font3);
        Timer60hLabel->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        Timer60hLabel->setToolTipDuration(-1);
        Timer60hLabel->setStyleSheet(QString::fromUtf8("background-color: #3E828C;         /* \320\246\320\262\320\265\321\202 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\265\320\263\320\276 \320\272\321\200\321\203\320\263\320\260 */\n"
"border-radius: 75%;               /* \320\232\321\200\321\203\320\263\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"padding: 10px;                    /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 */\n"
"color: white;                     /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"font-size: 30px;                  /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 */\n"
"font-weight: bold;                /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"z-index: 1;"));
        Timer60hLabel->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Timer60hLabel->setTextFormat(Qt::TextFormat::AutoText);
        Timer60hLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 616, 381, 61));
        QFont font4;
        font4.setPointSize(24);
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
        Select_Time->setMaximumDateTime(QDateTime(QDate(2000, 1, 1), QTime(11, 59, 59)));
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
        label_8->setText(QString());
        StartButtonOnTimer->setText(QCoreApplication::translate("Timer", "Start", nullptr));
        label_15->setText(QString());
        Timer1mButton->setText(QString());
#if QT_CONFIG(tooltip)
        Timer1mLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Timer1mLabel->setText(QCoreApplication::translate("Timer", "00:01:00", nullptr));
        Timer5mButton->setText(QString());
#if QT_CONFIG(tooltip)
        Timer5mLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Timer5mLabel->setText(QCoreApplication::translate("Timer", "00:05:00", nullptr));
        Timer10mButton->setText(QString());
#if QT_CONFIG(tooltip)
        Timer10mLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Timer10mLabel->setText(QCoreApplication::translate("Timer", "00:10:00", nullptr));
        Timer15mButton->setText(QString());
#if QT_CONFIG(tooltip)
        Timer15mLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Timer15mLabel->setText(QCoreApplication::translate("Timer", "00:15:00", nullptr));
        Timer30mButton->setText(QString());
#if QT_CONFIG(tooltip)
        Timer30mLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Timer30mLabel->setText(QCoreApplication::translate("Timer", "00:30:00", nullptr));
        Timer60mButton->setText(QString());
#if QT_CONFIG(tooltip)
        Timer60hLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Timer60hLabel->setText(QCoreApplication::translate("Timer", "01:00:00", nullptr));
        label_14->setText(QCoreApplication::translate("Timer", "Choose time", nullptr));
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
