#ifndef REMINDER_H
#define REMINDER_H

#include <QMainWindow>
#include <QListWidget>
#include <QTimer>
#include <QDate>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui {
class Reminder;
}
QT_END_NAMESPACE

class Reminder : public QMainWindow
{
    Q_OBJECT

public:
    Reminder(QWidget *parent = nullptr);
    ~Reminder();

private slots:
    void on_GoBackToMenu_clicked();
    void updateCurrentTime();
    void on_AddReminder_clicked();
    void on_ListForReminders_itemChanged(QListWidgetItem *item);

private:
    void loadRemindersFromFile();

    Ui::Reminder *ui;
};

#endif // REMINDER_H
