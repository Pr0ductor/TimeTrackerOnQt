#ifndef KANBAN_H
#define KANBAN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Kanban;
}
QT_END_NAMESPACE

class Kanban : public QMainWindow
{
    Q_OBJECT

public:
    Kanban(QWidget *parent = nullptr);
    ~Kanban();

private slots:
    void on_GoBackToMenu_clicked();

private:
    Ui::Kanban *ui;
};
#endif // KANBAN_H
