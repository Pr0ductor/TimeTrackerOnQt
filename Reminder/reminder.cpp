#include "reminder.h"
#include "../mainwindow.h"
#include "./ui_reminder.h"
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QDebug>
#include "notificationmanager.h"

Reminder::Reminder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Reminder)
{
    ui->setupUi(this);

    // Настройка стиля списка
    ui->ListForReminders->setStyleSheet("background-color: #3E828C;");

    // Обновляем текущее время каждую секунду
    QTimer *timeUpdateTimer = new QTimer(this);
    connect(timeUpdateTimer, &QTimer::timeout, this, &Reminder::updateCurrentTime);
    timeUpdateTimer->start(1000);

    // Загружаем напоминания из NotificationManager
    loadRemindersFromFile();

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
    qDebug() << "Текущее время:" << timeText;
}

void Reminder::on_AddReminder_clicked()
{
    QString title = ui->ReminderName->toPlainText();
    QDateTime dateTime = QDateTime(ui->ReminderDate->date(), ui->ReminderTime->time());

    if (title.isEmpty() || !dateTime.isValid()) {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля.");
        return;
    }

    // Добавляем через менеджер уведомлений
    NotificationManager::instance()->addReminder(title, dateTime);

    // Отображаем в списке
    QListWidgetItem *item = new QListWidgetItem(title);
    item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
    item->setCheckState(Qt::Unchecked); // Начальное состояние
    ui->ListForReminders->addItem(item);
}

void Reminder::on_ListForReminders_itemChanged(QListWidgetItem *item)
{
    if (!item) return;

    QString title = item->text();

    if (item->checkState() == Qt::Checked) {
        qDebug() << "Чекбокс отмечен — удаляем напоминание:" << title;
        NotificationManager::instance()->removeReminder(title);
        delete ui->ListForReminders->takeItem(ui->ListForReminders->row(item));
    }
}

void Reminder::loadRemindersFromFile()
{
    QString dirPath = QCoreApplication::applicationDirPath() + "/saved_results";
    QString filePath = dirPath + "/reminder_saveresults.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Не удалось открыть файл для чтения:" << filePath;
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString title = in.readLine();
        QString dtStr = in.readLine();
        QString isActiveStr = in.readLine();

        if (isActiveStr == "true") {
            QDateTime dt = QDateTime::fromString(dtStr, "yyyy-MM-dd hh:mm");
            QString timeStr = dt.time().toString("hh:mm");
            QString dateStr = dt.date().toString("yyyy-MM-dd");

            qDebug() << "Загружено:" << title << "Дата:" << dateStr << "Время:" << timeStr;

            QListWidgetItem *item = new QListWidgetItem(title);
            item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
            item->setCheckState(Qt::Unchecked);
            ui->ListForReminders->addItem(item);
        }
    }

    file.close();
}

void Reminder::on_GoBackToMenu_clicked()
{
    qDebug() << "Opening MainWindow and closing Reminder...";

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}
