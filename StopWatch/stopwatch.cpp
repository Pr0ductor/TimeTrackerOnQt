#include "stopwatch.h"
#include "ui_stopwatch.h"
#include "../mainwindow.h"

// Конструктор
StopWatch::StopWatch(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StopWatch)
    , stopwatch(new QTimer(this))
    , elapsedMilliseconds(0)
    , isRunning(false)
{
    ui->setupUi(this);


    connect(ui->StartButtonOnStopWatch, &QPushButton::clicked, this, &StopWatch::onStartButtonClicked);
    connect(ui->StopButtonOnStopWatch, &QPushButton::clicked, this, &StopWatch::onStopButtonClicked);

    connect(stopwatch, &QTimer::timeout, this, [this]() {
        elapsedMilliseconds += 10;
        ui->StopWatchMain->setText(formatTime(elapsedMilliseconds));
    });
}

StopWatch::~StopWatch()
{
    delete ui;
}

void StopWatch::on_GoBackToMenu_clicked()
{
    qDebug() << "Opening MainWindow and closing StopWatch...";

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}

void StopWatch::onStartButtonClicked()
{
    if (!isRunning) {
        elapsedMilliseconds = 0;
        ui->StopWatchMain->setText(formatTime(elapsedMilliseconds));
        stopwatch->start(10);
        isRunning = true;
    }
}

void StopWatch::onStopButtonClicked()
{
    if (isRunning) {
        stopwatch->stop();
        isRunning = false;
        ui->TimeOnMenuOnStopWatch->setText(formatTime(elapsedMilliseconds));
    }
}

QString StopWatch::formatTime(int milliseconds)
{
    int hours = milliseconds / 3600000;
    int minutes = (milliseconds % 3600000) / 60000;
    int seconds = (milliseconds % 60000) / 1000;

    return QString("%1:%2:%3")
        .arg(hours, 2, 10, QChar('0'))
        .arg(minutes, 2, 10, QChar('0'))
        .arg(seconds, 2, 10, QChar('0'));
}
