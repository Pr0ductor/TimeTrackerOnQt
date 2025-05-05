#include "timer.h"
#include "../mainwindow.h"
#include "./ui_timer.h"
#include "timeron.h"

Timer::Timer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Timer)
{
    ui->setupUi(this);

    connect(ui->StartButtonOnTimer, &QPushButton::clicked, this, &Timer::onStartButtonClicked);
}

Timer::~Timer()
{
    delete ui;
}

void Timer::on_GoBackToMenu_clicked()
{
    qDebug() << "Opening MainWindow and closing Timer...";

    MainWindow *mainWindow = new MainWindow();

    mainWindow->show();

    this->close();
}

void Timer::onStartButtonClicked()
{
    TimerOn  *timerOn = new TimerOn();

    timerOn->show();

    this->close();
}
