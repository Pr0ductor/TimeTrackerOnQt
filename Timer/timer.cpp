#include "timer.h"
#include "../mainwindow.h"
#include "./ui_timer.h"
#include "timeron.h"
#include <QMessageBox>
#include "../../TimeTrackerOnQt/messageboxhelper.h"

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
    QTime selectedTime = ui->Select_Time->time();

    if (selectedTime == QTime(0, 0, 0)) {
        MessageBoxHelper::showMessage(this, MessageBoxHelper::Error, "Ошибка", "Вы не выбрали время! Пожалуйста, установите время.");
        return;
    }

    // Получаем значение Description
    QString description = ui->Description->toPlainText().trimmed(); // Убираем лишние пробелы

    // Если Description пустой, используем сообщение по умолчанию
    if (description.isEmpty()) {
        description = "Эх... щас бы в бильярд... шары покатать...";
    }

    // Получаем значение TimeMain
    QString timeMain = selectedTime.toString("hh:mm:ss");

    // Создаем объект TimerOn, передавая значения Description и TimeMain
    TimerOn *timerOn = new TimerOn(description, timeMain);

    // Показываем вторую форму
    timerOn->show();

    // Закрываем текущую форму
    this->close();
}

void Timer::on_Select_Time_userTimeChanged(const QTime &time)
{
    ui->TimerMain->setText(time.toString("hh:mm:ss"));
}


