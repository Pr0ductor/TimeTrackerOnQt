#include "reminder.h"
#include "../mainwindow.h"
#include "./ui_reminder.h"

Reminder::Reminder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Reminder)
{
    ui->setupUi(this);
}


Reminder::~Reminder()
{
    delete ui;
}

void Reminder::on_GoBackToMenu_clicked()
{
    qDebug() << "Opening MainWindow and closing Reminder...";

    MainWindow *mainWindow = new MainWindow();

    mainWindow->show();

    this->close();
}
