#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QMainWindow>
#include <QMainWindow>
#include <QTimer>
#include <QFile>
#include <QDir>
#include <QDateTime>
#include <QMessageBox>

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
    void onStartButtonClicked();
    void onStopButtonClicked();

    void on_ApplySaveButtonOnStopWatch_clicked();

private:
    Ui::StopWatch *ui;

    QTimer *stopwatch;
    int elapsedMilliseconds;
    bool isRunning;

    QString formatTime(int milliseconds);
    QString getProjectRootPath();
    void loadSavedResults();
};

#endif // STOPWATCH_H
