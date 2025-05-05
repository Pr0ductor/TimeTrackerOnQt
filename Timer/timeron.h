#ifndef TIMERON_H
#define TIMERON_H

#include <QWidget>

namespace Ui {
class TimerOn;
}

class TimerOn : public QWidget
{
    Q_OBJECT

public:
    explicit TimerOn(QWidget *parent = nullptr);
    ~TimerOn();

private slots:

    void onStopButtonClicked();

private:
     Ui::TimerOn *ui;
};

#endif // TIMERON_H
