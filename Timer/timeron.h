#ifndef TIMERON_H
#define TIMERON_H

#include <QWidget>
#include <QString>
#include <QTimer>
#include <QTime>

namespace Ui {
class TimerOn;
}

class TimerOn : public QWidget
{
    Q_OBJECT

public:
    explicit TimerOn(const QString &description, const QString &timeMain, QWidget *parent = nullptr);
    ~TimerOn();

private slots:
    void onStopButtonClicked();
    void updateTimer();
    void onPauseButtonClicked();

private:
    Ui::TimerOn *ui;

    QTimer *timer;
    QTime remainingTime;
    bool isPaused;
};

#endif // TIMERON_H
