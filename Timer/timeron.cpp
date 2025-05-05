#include "timeron.h"
#include "ui_timeron.h"
#include "timer.h"

TimerOn::TimerOn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TimerOn)
{
    ui->setupUi(this);

    connect(ui->StopButtonOnTimerOn, &QPushButton::clicked, this, &TimerOn::onStopButtonClicked);
}

TimerOn::~TimerOn()
{
    delete ui;
}

void TimerOn::onStopButtonClicked()
{
    Timer  *timerWindow = new Timer();

    timerWindow->show();

    this->close();
}
