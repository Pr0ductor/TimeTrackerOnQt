#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class StopWatch;
}
QT_END_NAMESPACE

class StopWatch : public QMainWindow
{
    Q_OBJECT

public:
    explicit StopWatch(QWidget *parent = nullptr);
    ~StopWatch();

private slots:
    void on_GoBackToMenu_clicked();

private:
    Ui::StopWatch *ui;
};

#endif // STOPWATCH_H
