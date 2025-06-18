#ifndef NOTIFICATIONMANAGER_H
#define NOTIFICATIONMANAGER_H

#include <QObject>
#include <QList>
#include <QDateTime>
#include <QTimer>
#include <QString>
#include <QMessageBox>

struct ReminderData {
    QString title;
    QDateTime dateTime;
};

class NotificationManager : public QObject
{
    Q_OBJECT

public:
    static NotificationManager *instance();

    void addReminder(const QString &title, const QDateTime &dateTime);
    void checkReminders();
    void removeReminder(const QString &title);

private:
    NotificationManager(QObject *parent = nullptr);

    QList<ReminderData> reminders;
    QTimer *timer;

    void saveRemindersToFile();
    void loadRemindersFromFile();
};

#endif // NOTIFICATIONMANAGER_H
