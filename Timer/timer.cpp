#include "timer.h"
#include "../mainwindow.h"
#include "./ui_timer.h"
#include "timeron.h"
#include <QMessageBox>
#include "../../TimeTrackerOnQt/messageboxhelper.h"
#include <QSoundEffect>
#include <QUrl>

Timer::Timer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Timer)
{
    ui->setupUi(this);

    connect(ui->StartButtonOnTimer, &QPushButton::clicked, this, &Timer::onStartButtonClicked);

    connect(ui->Timer1mButton, &QPushButton::clicked, this, &Timer::on_TimerButton_clicked);
    connect(ui->Timer5mButton, &QPushButton::clicked, this, &Timer::on_TimerButton_clicked);
    connect(ui->Timer10mButton, &QPushButton::clicked, this, &Timer::on_TimerButton_clicked);
    connect(ui->Timer15mButton, &QPushButton::clicked, this, &Timer::on_TimerButton_clicked);
    connect(ui->Timer30mButton, &QPushButton::clicked, this, &Timer::on_TimerButton_clicked);
    connect(ui->Timer60mButton, &QPushButton::clicked, this, &Timer::on_TimerButton_clicked);
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
        QSoundEffect sound;
        sound.setSource(QUrl("qrc:/Sounds/secretsound.wav"));
        sound.setVolume(1.0f);
        sound.play();
        MessageBoxHelper& helper = MessageBoxHelper::instance();

        helper.showMessage(this, MessageBoxHelper::Error, "Ошибка", "Вы не выбрали время! Пожалуйста, установите время.");
        return;
    }

    QString description = ui->Description->toPlainText().trimmed();

    if (description.isEmpty()) {
        description = "Эх... щас бы в бильярд... шары покатать...";
    }

    QString timeMain = selectedTime.toString("hh:mm:ss");

    TimerOn *timerOn = new TimerOn(description, timeMain);
    timerOn->show();
    this->close();
}

void Timer::on_Select_Time_userTimeChanged(const QTime &time)
{
    ui->TimerMain->setText(time.toString("hh:mm:ss"));
}

void Timer::on_TimerButton_clicked()
{
    // Определяем, какая кнопка была нажата
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) {
        qDebug() << "Ошибка: не удалось определить кнопку.";
        return;
    }

    // Проверяем, что кнопка относится к группе таймеров
    QString buttonName = button->objectName();
    if (!buttonName.startsWith("Timer")) {
        qDebug() << "Эта кнопка не относится к таймерам:" << buttonName;
        return;
    }

    // Находим дочерний QLabel внутри кнопки
    QLabel *label = button->findChild<QLabel*>();
    if (!label) {
        qDebug() << "Ошибка: не найден дочерний QLabel для кнопки" << buttonName;
        return;
    }

    // Получаем текст из QLabel
    QString timeText = label->text();
    qDebug() << "Текст времени из QLabel:" << timeText;

    // Преобразуем текст в QTime
    QTime selectedTime = QTime::fromString(timeText, "hh:mm:ss");
    if (!selectedTime.isValid()) {
        qDebug() << "Ошибка: неверный формат времени в QLabel:" << timeText;
        return;
    }

    // Устанавливаем время в Select_Time
    ui->Select_Time->setTime(selectedTime);
    qDebug() << "Установлено время:" << selectedTime.toString("hh:mm:ss");
}
