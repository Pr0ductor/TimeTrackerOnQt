#include "timeron.h"
#include "ui_timeron.h"
#include "timer.h"
#include <QMessageBox>
#include "../../TimeTrackerOnQt/messageboxhelper.h"
#include <QUrl>
TimerOn::TimerOn(const QString &description, const QString &timeMain, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TimerOn)
{
    ui->setupUi(this);

    ui->Description->setReadOnly(true); // Делаем QTextEdit доступным только для чтения
    ui->Description->setPlainText(description); // Устанавливаем текст

    // Устанавливаем переданные значения в виджеты
    // Установка описания
    ui->TimerMain->setText(timeMain);     // Установка времени

    // Инициализируем таймер
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &TimerOn::updateTimer);

    // Преобразуем строку времени в QTime
    remainingTime = QTime::fromString(timeMain, "hh:mm:ss");

    // Запускаем таймер (интервал 1 секунда)
    timer->start(1000);

    connect(ui->StopButtonOnTimerOn, &QPushButton::clicked, this, &TimerOn::onStopButtonClicked);
}

TimerOn::~TimerOn()
{
    delete ui;
}

void TimerOn::updateTimer()
{
    // Уменьшаем оставшееся время на 1 секунду
    remainingTime = remainingTime.addSecs(-1);

    // Обновляем текст в виджете TimerMain
    ui->TimerMain->setText(remainingTime.toString("hh:mm:ss"));

    // Если время истекло, останавливаем таймер и показываем уведомление
    if (remainingTime == QTime(0, 0, 0)) {
        timer->stop();
        MessageBoxHelper::showMessage(this, MessageBoxHelper::Info, "Таймер завершен", "Время истекло!");
    }
}

void TimerOn::onStopButtonClicked()
{
    Timer *timerWindow = new Timer();
    timerWindow->show();
    this->close();
}
