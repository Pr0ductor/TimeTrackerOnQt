#include "timer.h"
#include "../mainwindow.h"
#include "./ui_timer.h"

Timer::Timer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Timer)
{
    ui->setupUi(this);
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
