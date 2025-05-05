#include "reminder.h"
#include "../mainwindow.h"
#include "./ui_reminder.h"
#include <QTime>
#include <QTimer>

Reminder::Reminder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Reminder)
{
    ui->setupUi(this);
    QTimer *time = new QTimer(this);
    connect(time, &QTimer::timeout, this, &Reminder::updateCurrentTime);
    time->start(1000);

    updateCurrentTime();
}


Reminder::~Reminder()
{
    delete ui;
}

void Reminder::updateCurrentTime()
{

    QTime currentTime = QTime::currentTime();

    QString timeText = currentTime.toString("hh:mm");

    ui->TimeOnReminder->setText(timeText);
}

void Reminder::on_GoBackToMenu_clicked()
{
    qDebug() << "Opening MainWindow and closing Reminder...";

    MainWindow *mainWindow = new MainWindow();

    mainWindow->show();

    this->close();
}
