#include "timeron.h"
#include "ui_timeron.h"
#include "timer.h"
#include <QMessageBox>
#include "../../TimeTrackerOnQt/messageboxhelper.h"
#include <QMediaPlayer>
#include <QSoundEffect>
#include <QUrl>

TimerOn::TimerOn(const QString &description, const QString &timeMain, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TimerOn)
{
    ui->setupUi(this);

    ui->Description->setReadOnly(true);
    ui->Description->setPlainText(description);

    ui->TimerMain->setText(timeMain);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &TimerOn::updateTimer);

    remainingTime = QTime::fromString(timeMain, "hh:mm:ss");

    timer->start(1000);

    connect(ui->StopButtonOnTimerOn, &QPushButton::clicked, this, &TimerOn::onStopButtonClicked);

    connect(ui->PauseButtonOnTimerOn, &QPushButton::clicked, this, &TimerOn::onPauseButtonClicked);
    ui->PauseButtonOnTimerOn->setText("PAUSE");
    isPaused = false;
}

TimerOn::~TimerOn()
{
    delete ui;
}
void TimerOn::updateTimer()
{
    remainingTime = remainingTime.addSecs(-1);
    ui->TimerMain->setText(remainingTime.toString("hh:mm:ss"));

    if (remainingTime == QTime(0, 0, 0)) {
        timer->stop();
        QSoundEffect sound;
        sound.setSource(QUrl("qrc:/Sounds/sound1.wav"));
        sound.setVolume(1.0f);
        sound.play();
        MessageBoxHelper::instance().showMessage(this, MessageBoxHelper::Info, "Таймер завершен", "Время истекло!");

        connect(&MessageBoxHelper::instance(), &MessageBoxHelper::finished, this, [this]() {

        });

        Timer *timerWindow = new Timer();
        timerWindow->show();
        this->close();
    }
}
void TimerOn::onStopButtonClicked()
{
    Timer *timerWindow = new Timer();
    timerWindow->show();
    this->close();
}

void TimerOn::onPauseButtonClicked()
{
    if (isPaused) {
        timer->start(1000);
        ui->PauseButtonOnTimerOn->setText("PAUSE");
        isPaused = false;
    } else {
        timer->stop();
        ui->PauseButtonOnTimerOn->setText("RESUME");
        isPaused = true;
    }
}
