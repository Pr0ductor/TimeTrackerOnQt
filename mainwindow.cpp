#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "StopWatch/stopwatch.h"
#include "Kanban/kanban.h"
#include "Timer/timer.h"
#include "Reminder/reminder.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ButtonStopWatchOnMainWindow_clicked()
{
    qDebug() << "Opening StopWatch window...";

    StopWatch *stopWatchWindow = new StopWatch();

    qDebug() << "StopWatch window created";

    stopWatchWindow->show();

    qDebug() << "StopWatch window shown";

    this->close();

    qDebug() << "MainWindow closed";
}

void MainWindow::on_ButtonTimerOnMainWindow_clicked()
{
    qDebug() << "Opening Timer window...";

    Timer *timerWindow = new Timer();

    qDebug() << "Timer window created";

    timerWindow->show();

    qDebug() << "Timer window shown";

    this->close();

    qDebug() << "MainWindow closed";
}

void MainWindow::on_ButtonReminderOnMainWindow_clicked()
{
    qDebug() << "Opening Reminder window...";

    Reminder *reminderWindow = new Reminder();

    qDebug() << "Reminder window created";

    reminderWindow->show();

    qDebug() << "Reminder window shown";

    this->close();

    qDebug() << "MainWindow closed";
}

void MainWindow::on_ButtonKanbanOnMainWindow_clicked()
{
    qDebug() << "Opening Kanban window...";

    Kanban *kanbanWindow = new Kanban();

    qDebug() << "Kanban window created";

    kanbanWindow->show();

    qDebug() << "Kanban window shown";

    this->close();

    qDebug() << "MainWindow closed";
}
