#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "StopWatch/stopwatch.h"
#include "Timer/timer.h"
#include "Kanban/kanban.h"
#include "Reminder/reminder.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ButtonStopWatchOnMainWindow_clicked();
    void on_ButtonTimerOnMainWindow_clicked();
    void on_ButtonReminderOnMainWindow_clicked();
    void on_ButtonKanbanOnMainWindow_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
