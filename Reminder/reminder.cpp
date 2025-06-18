#include "reminder.h"
#include "../mainwindow.h"
#include "./ui_reminder.h"
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

// Структура уведомления
struct ReminderData {
    QString title;
    QDate date;
    QTime time;
    bool isActive;
};

Reminder::Reminder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Reminder)
{
    ui->setupUi(this);

    // Настройка стиля ListForReminders
    ui->ListForReminders->setStyleSheet("background-color: #3E828C;");

    // Загружаем уведомления из файла
    loadRemindersFromFile();

    // Настройка таймера для проверки времени
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Reminder::checkReminders);
    timer->start(1000); // Проверка каждую секунду

    // Подключаем сигнал изменения элемента QListWidget
    connect(ui->ListForReminders, &QListWidget::itemChanged, this, &Reminder::on_ListForReminders_itemChanged);

    // Таймер для обновления текущего времени
    QTimer *timeUpdateTimer = new QTimer(this);
    connect(timeUpdateTimer, &QTimer::timeout, this, &Reminder::updateCurrentTime);
    timeUpdateTimer->start(1000); // Обновление каждую секунду
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

void Reminder::on_GoBackToMenu_clicked()
{
    qDebug() << "Opening MainWindow and closing Reminder...";

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}

void Reminder::on_AddReminder_clicked()
{
    QString title = ui->ReminderName->toPlainText();
    QDate date = ui->ReminderDate->date();
    QTime time = ui->ReminderTime->time();

    if (title.isEmpty() || !date.isValid() || !time.isValid()) {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, заполните все поля.");
        return;
    }

    ReminderData newReminder;
    newReminder.title = title;
    newReminder.date = date;
    newReminder.time = time;
    newReminder.isActive = true;

    reminders.append(newReminder);

    QListWidgetItem *item = new QListWidgetItem(title);
    item->setCheckState(Qt::Unchecked);
    ui->ListForReminders->addItem(item);

    saveRemindersToFile();
}

void Reminder::on_ListForReminders_itemChanged(QListWidgetItem *item)
{
    int index = ui->ListForReminders->row(item);
    if (index >= 0 && index < reminders.size()) {
        if (item->checkState() == Qt::Checked) {
            reminders[index].isActive = false;
            ui->ListForReminders->takeItem(index);
            saveRemindersToFile();
        }
    }
}

void Reminder::checkReminders()
{
    QTime currentTime = QTime::currentTime();
    QDate currentDate = QDate::currentDate();

    for (int i = 0; i < reminders.size(); ++i) {
        const ReminderData &reminder = reminders[i];
        qDebug() << "Проверка уведомления:" << reminder.title
                 << "Дата:" << reminder.date.toString("yyyy-MM-dd")
                 << "Время:" << reminder.time.toString("hh:mm");

        if (reminder.date == currentDate && reminder.time == currentTime && reminder.isActive) {
            qDebug() << "Совпадение найдено! Отображаем уведомление:" << reminder.title;
            showNotification(reminder.title);
            reminders[i].isActive = false;
            saveRemindersToFile();
        }
    }
}

void Reminder::showNotification(const QString &title)
{
    if (title.isEmpty()) {
        qDebug() << "Ошибка: попытка показать уведомление с пустым заголовком.";
        return;
    }

    QMessageBox msgBox;
    msgBox.setWindowTitle("Уведомление");
    msgBox.setText(title);
    msgBox.exec(); // Отображаем диалоговое окно

    // Удаляем уведомление из списка
    for (int i = 0; i < reminders.size(); ++i) {
        if (reminders[i].title == title) {
            reminders.removeAt(i);
            saveRemindersToFile(); // Обновляем файл
            break;
        }
    }
}

void Reminder::saveRemindersToFile()
{
    QString dirPath = QCoreApplication::applicationDirPath() + "/saved_results";
    QDir().mkpath(dirPath);
    QString filePath = dirPath + "/reminder_saveresults.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Не удалось открыть файл для записи: " << filePath;
        return;
    }

    QTextStream out(&file);
    for (const ReminderData &reminder : reminders) {
        if (reminder.isActive) {
            qDebug() << "Сохраняем уведомление:" << reminder.title
                     << "Дата:" << reminder.date.toString("yyyy-MM-dd")
                     << "Время:" << reminder.time.toString("hh:mm");
            out << reminder.title << "\n"
                << reminder.date.toString("yyyy-MM-dd") << "\n"
                << reminder.time.toString("hh:mm") << "\n"
                << "true\n";
        }
    }
    file.close();
}

void Reminder::loadRemindersFromFile()
{
    QString dirPath = QCoreApplication::applicationDirPath() + "/saved_results";
    QString filePath = dirPath + "/reminder_saveresults.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Не удалось открыть файл для чтения: " << filePath;
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString title = in.readLine();
        QDate date = QDate::fromString(in.readLine(), "yyyy-MM-dd");
        QTime time = QTime::fromString(in.readLine(), "hh:mm");
        bool isActive = in.readLine() == "true";

        qDebug() << "Загружено уведомление:" << title
                 << "Дата:" << date.toString("yyyy-MM-dd")
                 << "Время:" << time.toString("hh:mm")
                 << "Активно:" << isActive;

        ReminderData reminder;
        reminder.title = title;
        reminder.date = date;
        reminder.time = time;
        reminder.isActive = isActive;

        reminders.append(reminder);

        QListWidgetItem *item = new QListWidgetItem(title);
        item->setCheckState(isActive ? Qt::Unchecked : Qt::Checked);
        ui->ListForReminders->addItem(item);
    }
    file.close();
}
