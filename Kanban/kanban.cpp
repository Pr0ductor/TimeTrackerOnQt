#include "kanban.h"
#include "./ui_kanban.h"
#include "../mainwindow.h"

// Конструктор
Kanban::Kanban(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Kanban)
{
    ui->setupUi(this);
}

// Деструктор
Kanban::~Kanban()
{
    delete ui;
}

void Kanban::on_GoBackToMenu_clicked()
{
    qDebug() << "Opening MainWindow and closing Kanban...";

    MainWindow *mainWindow = new MainWindow();

    mainWindow->show();

    this->close();
}
