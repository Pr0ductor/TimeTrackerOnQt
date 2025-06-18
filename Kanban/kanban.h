#ifndef KANBAN_H
#define KANBAN_H

#include <QMainWindow>
#include <QVBoxLayout>

class TaskCard;

QT_BEGIN_NAMESPACE
namespace Ui {
class Kanban;
}
QT_END_NAMESPACE

class Kanban : public QMainWindow
{
    Q_OBJECT

public:
    explicit Kanban(QWidget *parent = nullptr);
    ~Kanban();

private slots:
    void on_GoBackToMenu_clicked();
    void on_pushButton_2_clicked();
    void moveTaskToNextColumn(TaskCard *task, QVBoxLayout *fromLayout);

private:
    Ui::Kanban *ui;

    QVBoxLayout *notStartedLayout;
    QVBoxLayout *startedLayout;
    QVBoxLayout *completedLayout;

    QString getProjectRootPath();
    void saveTasksToFile();
    void loadTasksFromFile();
};

#endif // KANBAN_H
