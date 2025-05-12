#ifndef TIMERON_H
#define TIMERON_H

#include <QWidget>
#include <QString>

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

private:
    Ui::TimerOn *ui;
};

#endif // TIMERON_H
