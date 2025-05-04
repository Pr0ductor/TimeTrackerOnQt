#ifndef REMINDER_H
#define REMINDER_H

#include <QMainWindow>

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

private:
    Ui::Reminder *ui;
};
#endif // REMINDER_H
