#include "notificationmanager.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QMessageBox>
#include <QApplication>

NotificationManager *NotificationManager::instance()
{
    static NotificationManager inst;
    return &inst;
}

NotificationManager::NotificationManager(QObject *parent)
    : QObject(parent)
{
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &NotificationManager::checkReminders);
    timer->start(1000); // Каждую секунду

    loadRemindersFromFile();
}

void NotificationManager::addReminder(const QString &title, const QDateTime &dateTime)
{
    ReminderData r;
    r.title = title;
    r.dateTime = dateTime;
    reminders.append(r);
    saveRemindersToFile();
}

void NotificationManager::removeReminder(const QString &title)
{
    for (int i = 0; i < reminders.size(); ++i) {
        if (reminders[i].title == title) {
            reminders.removeAt(i);
            saveRemindersToFile();
            break;
        }
    }
}

void NotificationManager::checkReminders()
{
    QDateTime now = QDateTime::currentDateTime();

    qDebug() << "Проверяем напоминания...";
    qDebug() << "Текущее время:" << now.toString("yyyy-MM-dd hh:mm");

    for (int i = 0; i < reminders.size(); ++i) {
        const ReminderData &r = reminders[i];

        qDebug() << "Проверяем напоминание:" << r.title << "на" << r.dateTime.toString("yyyy-MM-dd hh:mm");

        if (r.dateTime <= now) {
            qDebug() << "Совпадение найдено!" << r.title;

            QWidget dummyParent;
            dummyParent.setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
            dummyParent.setAttribute(Qt::WA_ShowWithoutActivating);

            QMessageBox msgBox(&dummyParent);
            msgBox.setWindowTitle("Уведомление");
            msgBox.setText(r.title);
            msgBox.setIcon(QMessageBox::Information);
            msgBox.exec();

            reminders.removeAt(i);
            saveRemindersToFile();
            --i; // Смещаем индекс после удаления
        }
    }
}

void NotificationManager::saveRemindersToFile()
{
    QString dirPath = QCoreApplication::applicationDirPath() + "/saved_results";
    QDir().mkpath(dirPath);
    QString filePath = dirPath + "/reminder_saveresults.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Не удалось открыть файл для записи.";
        return;
    }

    QTextStream out(&file);
    for (const auto &r : reminders) {
        out << r.title << "\n"
            << r.dateTime.toString("yyyy-MM-dd hh:mm") << "\n"
            << "true\n";
    }

    file.close();
}

void NotificationManager::loadRemindersFromFile()
{
    QString dirPath = QCoreApplication::applicationDirPath() + "/saved_results";
    QString filePath = dirPath + "/reminder_saveresults.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Не удалось открыть файл для чтения.";
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString title = in.readLine();
        QString dtStr = in.readLine();
        QString isActiveStr = in.readLine();

        if (isActiveStr == "true") {
            QDateTime dt = QDateTime::fromString(dtStr, "yyyy-MM-dd hh:mm");
            addReminder(title, dt);
        }
    }

    file.close();
}
