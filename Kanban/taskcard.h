#ifndef TASKCARD_H
#define TASKCARD_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>

class TaskCard : public QFrame
{
    Q_OBJECT

public:
    explicit TaskCard(const QString &text, QWidget *parent = nullptr);

    void setParentLayout(QVBoxLayout *layout);

    QString getDescription() const;

signals:
    void moveToNext(TaskCard*, QVBoxLayout*);
    void deleteRequested();

private slots:
    void onMoveButtonClicked();
    void onDeleteButtonClicked();

private:
    QVBoxLayout *parentLayout = nullptr;

    QString description;
};

#endif // TASKCARD_H
