#include "timeron.h"
#include "ui_timeron.h"
#include "timer.h"

TimerOn::TimerOn(const QString &description, const QString &timeMain, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TimerOn)
{
    ui->setupUi(this);

    // Устанавливаем переданные значения в виджеты
    ui->Description->setText(description); // Установка описания
    ui->TimerMain->setText(timeMain);     // Установка времени

    connect(ui->StopButtonOnTimerOn, &QPushButton::clicked, this, &TimerOn::onStopButtonClicked);
}

TimerOn::~TimerOn()
{
    delete ui;
}

void TimerOn::onStopButtonClicked()
{
    Timer *timerWindow = new Timer();
    timerWindow->show();
    this->close();
}
