#include "timeron.h"
#include "ui_timeron.h"
#include "timer.h"
#include <QMessageBox>
#include "../../TimeTrackerOnQt/messageboxhelper.h"
#include <QMediaPlayer>
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

        MessageBoxHelper::instance().showMessage(this, MessageBoxHelper::Info, "Таймер завершен", "Время истекло!");

        connect(&MessageBoxHelper::instance(), &MessageBoxHelper::finished, this, [this]() {
            // Timer *timerWindow = new Timer();
            // timerWindow->show();
            // this->close();
        });
        QMediaPlayer *player = new QMediaPlayer(this);
        player->setSource(QUrl::fromLocalFile(":/Sounds/khi-khi-khi-kha.mp3"));
        player->play();
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
