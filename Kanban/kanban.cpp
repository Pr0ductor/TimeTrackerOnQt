#include "kanban.h"
#include "./ui_kanban.h"
#include "taskcard.h"
#include "../mainwindow.h"
#include <QDebug>
#include <QTimer>

Kanban::Kanban(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Kanban)
{
    ui->setupUi(this);

    notStartedLayout = findChild<QVBoxLayout*>("verticalLayout");
    startedLayout = findChild<QVBoxLayout*>("verticalLayout_3");
    completedLayout = findChild<QVBoxLayout*>("verticalLayout_4");

    qDebug() << "notStartedLayout:" << notStartedLayout;
    qDebug() << "startedLayout:" << startedLayout;
    qDebug() << "completedLayout:" << completedLayout;

    if (notStartedLayout) {
        notStartedLayout->setAlignment(Qt::AlignTop);
    }
    if (startedLayout) {
        startedLayout->setAlignment(Qt::AlignTop);
    }
    if (completedLayout) {
        completedLayout->setAlignment(Qt::AlignTop);
    }

    loadTasksFromFile();
}

Kanban::~Kanban()
{
    delete ui;
}

void Kanban::on_GoBackToMenu_clicked()
{
    saveTasksToFile();

    qDebug() << "Opening MainWindow and closing Kanban...";

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}

void Kanban::on_pushButton_2_clicked()
{
    QString taskText = ui->textEdit->toPlainText().trimmed();

    if (!taskText.isEmpty()) {
        TaskCard *task = new TaskCard(taskText, this);
        task->setParentLayout(notStartedLayout);

        connect(task, &TaskCard::moveToNext, this, [this](TaskCard *card, QVBoxLayout *fromLayout) {
            moveTaskToNextColumn(card, fromLayout);
        });

        connect(task, &TaskCard::deleteRequested, task, &QWidget::deleteLater);

        if (notStartedLayout) {
            notStartedLayout->addWidget(task);
        }

        ui->textEdit->clear();
    } else {
        qDebug() << "Пустое описание задачи.";
    }
}

void Kanban::moveTaskToNextColumn(TaskCard *task, QVBoxLayout *fromLayout)
{
    int index = fromLayout->indexOf(task);
    if (index >= 0) {
        fromLayout->takeAt(index);
        if (fromLayout == notStartedLayout && startedLayout) {
            task->setParentLayout(startedLayout);
            startedLayout->addWidget(task);
        } else if (fromLayout == startedLayout && completedLayout) {
            task->setParentLayout(completedLayout);
            completedLayout->addWidget(task);
        } else {
            delete task;
        }
    }
}

QString Kanban::getProjectRootPath()
{
    // Получаем директорию, где находится исполняемый файл
    QString appDir = QCoreApplication::applicationDirPath();

    QDir dir(appDir);

    // Поднимаемся на уровень выше (предполагается структура проекта)
    dir.cdUp();           // build → src
    dir.cdUp();           // src → TimeTrackerOnQt (или корень проекта)

    return dir.path();
}
void Kanban::saveTasksToFile()
{
    QString projectRoot = getProjectRootPath();
    QString filePath = projectRoot + "/saved_results/kanban_tasks.txt";

    QDir dir;
    if (!dir.exists(dir.filePath("saved_results"))) {
        dir.mkdir("saved_results");
    }

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for writing:" << file.errorString();
        return;
    }

    QTextStream out(&file);

    auto saveLayout = [&](QVBoxLayout *layout, const QString &status) {
        for (int i = 0; i < layout->count(); ++i) {
            TaskCard *card = qobject_cast<TaskCard*>(layout->itemAt(i)->widget());
            if (card) {
                out << "----------------------------------------\n";
                out << "Saved at: " << QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss") << "\n";
                out << "Description: " << card->getDescription() << "\n";
                out << "Status: " << status << "\n";
                out << "*---------------------------------------*\n\n";
            }
        }
    };

    saveLayout(notStartedLayout, "NotStarted");
    saveLayout(startedLayout, "Started");
    saveLayout(completedLayout, "Completed");

    file.close();
    qDebug() << "Задачи сохранены в" << filePath;
}

void Kanban::loadTasksFromFile()
{
    QString projectRoot = getProjectRootPath();
    QString filePath = projectRoot + "/saved_results/kanban_tasks.txt";

    QFile file(filePath);

    if (!file.exists()) {
        qDebug() << "Файл не найден:" << filePath;
        return;
    }

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Не удалось открыть файл для чтения";
        return;
    }

    QTextStream in(&file);
    QString line;
    QString description;
    QString status;

    while (!in.atEnd()) {
        line = in.readLine();

        if (line.startsWith("Description: ")) {
            description = line.remove("Description: ");
        } else if (line.startsWith("Status: ")) {
            status = line.remove("Status: ");
        } else if (line.startsWith("*---------------------------------------*")) {

            if (!description.isEmpty() && !status.isEmpty()) {
                TaskCard *task = new TaskCard(description, this);

                task->setParentLayout(
                    status == "NotStarted" ? notStartedLayout :
                        status == "Started" ? startedLayout :
                        completedLayout
                    );

                connect(task, &TaskCard::moveToNext, this, [this](TaskCard *card, QVBoxLayout *fromLayout) {
                    moveTaskToNextColumn(card, fromLayout);
                });

                connect(task, &TaskCard::deleteRequested, task, &QWidget::deleteLater);

                if (status == "NotStarted" && notStartedLayout) {
                    notStartedLayout->addWidget(task);
                } else if (status == "Started" && startedLayout) {
                    startedLayout->addWidget(task);
                } else if (status == "Completed" && completedLayout) {
                    completedLayout->addWidget(task);
                }

                description.clear();
                status.clear();
            }
        }
    }

    file.close();
}
