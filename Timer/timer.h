#ifndef TIMER_H
#define TIMER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Timer;
}
QT_END_NAMESPACE

class Timer : public QMainWindow
{
    Q_OBJECT

public:
    Timer(QWidget *parent = nullptr);
    ~Timer();

private slots:
    void on_GoBackToMenu_clicked();

    void onStartButtonClicked();

    void on_Select_Time_userTimeChanged(const QTime &time);
    void on_TimerButton_clicked();


private:
    Ui::Timer *ui;
    QString formatTime(int milliseconds);
};
#endif // TIMER_H
