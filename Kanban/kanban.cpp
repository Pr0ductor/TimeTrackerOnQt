#include "kanban.h"
#include "./ui_kanban.h"
#include "../mainwindow.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QIcon>


// Конструктор
Kanban::Kanban(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Kanban)
{
    ui->setupUi(this);
    QWidget *container = findChild<QWidget*>("notStartedContainer");
    if (container) {
        QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(container->layout());
        if (layout) {
            notStartedLayout = layout;
        }
    }
}

// Деструктор
Kanban::~Kanban()
{
    delete ui;
}

void Kanban::on_GoBackToMenu_clicked()
{
    qDebug() << "Opening MainWindow and closing Kanban...";

    MainWindow *mainWindow = new MainWindow();

    mainWindow->show();

    this->close();
}

void Kanban::on_pushButton_2_clicked()
{
    QString taskText = ui->textEdit->toPlainText().trimmed();

    if (!taskText.isEmpty()) {
        // Создаем новый виджет для задачи
        QWidget *taskWidget = new QWidget(this);
        QHBoxLayout *taskLayout = new QHBoxLayout(taskWidget);
        taskLayout->setContentsMargins(0, 0, 0, 0); // Убираем внешние отступы
        taskLayout->setSpacing(10); // Отступ между элементами

        // Добавляем текст задачи
        QLabel *taskLabel = new QLabel(taskText, this);
        taskLabel->setStyleSheet(
            "color: white; "
            "font-size: 24px;" // Соответствует font-size из label_12
            );

        // Добавляем кнопку со стрелкой
        QPushButton *moveButton = new QPushButton(this);
        moveButton->setIcon(QIcon(":/Kanban/Right Arrow.png"));
        moveButton->setFlat(true); // Убираем границы кнопки
        moveButton->setFixedSize(25, 25); // Фиксированный размер
        moveButton->setStyleSheet(
            "background-color: transparent;"
            );

        // Добавляем кнопку удаления
        QPushButton *deleteButton = new QPushButton(this);
        deleteButton->setText("x");
        deleteButton->setFlat(true); // Убираем границы кнопки
        deleteButton->setFixedSize(20, 20); // Фиксированный размер
        deleteButton->setStyleSheet(
            "background-color: transparent;"
            );

        // Добавляем элементы в лэйаут
        taskLayout->addWidget(taskLabel);
        taskLayout->addStretch(); // Выравнивание по правому краю
        taskLayout->addWidget(moveButton);
        taskLayout->addWidget(deleteButton);

        // Настройка стиля для всей плашки
        taskWidget->setStyleSheet(
            "background-color: #3E828C; "
            "border-radius: 20px; "
            "padding: 10px; " // Внутренние отступы
            "margin: 5px;" // Внешние отступы
            );

        // Устанавливаем фиксированный размер плашки
        taskWidget->setFixedWidth(240); // Ширина соответствует label_12
        taskWidget->setFixedHeight(80); // Высота соответствует label_12

        // Ограничиваем политику размеров
        taskWidget->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

        // Добавляем новую задачу в начало layout'а
        if (notStartedLayout) {
            notStartedLayout->addWidget(taskWidget); // Добавляем в начало
        }

        // Очищаем поле ввода
        ui->textEdit->clear();
    } else {
        qDebug() << "Пустое описание задачи.";
    }
}
