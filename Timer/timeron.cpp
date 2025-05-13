#include "timeron.h"
#include "ui_timeron.h"
#include "timer.h"

TimerOn::TimerOn(const QString &description, const QString &timeMain, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TimerOn)
{
    ui->setupUi(this);

    ui->Description->setText(description); 
    ui->TimerMain->setText(timeMain);     

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
