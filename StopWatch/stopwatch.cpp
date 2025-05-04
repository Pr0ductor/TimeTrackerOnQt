#include "stopwatch.h"
#include "ui_stopwatch.h"
#include "../mainwindow.h"

// Конструктор
StopWatch::StopWatch(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StopWatch)
{
    ui->setupUi(this);
}

StopWatch::~StopWatch()
{
    delete ui;
}

void StopWatch::on_GoBackToMenu_clicked()
{
    qDebug() << "Opening MainWindow and closing StopWatch...";

    MainWindow *mainWindow = new MainWindow();

    mainWindow->show();

    this->close();
}

