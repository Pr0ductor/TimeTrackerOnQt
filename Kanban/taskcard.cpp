#include "taskcard.h"
#include <QHBoxLayout>
#include <QIcon>
#include <QSizePolicy>

QString TaskCard::getDescription() const
{
    return description;
}

TaskCard::TaskCard(const QString &text, QWidget *parent)
    : QFrame(parent), description(text)
{
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->setContentsMargins(10, 10, 10, 10);
    layout->setSpacing(10);

    QLabel *label = new QLabel(text, this);
    label->setFont(QFont("Arial", 24));
    label->setStyleSheet("color: white;");
    label->setWordWrap(true);
    label->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

    QPushButton *moveButton = new QPushButton(this);
    moveButton->setIcon(QIcon(":/Kanban/Right Arrow.png"));
    moveButton->setFixedSize(30, 30);
    moveButton->setIconSize(QSize(25, 25));
    moveButton->setFlat(true);
    moveButton->setStyleSheet("background-color: transparent;");

    QPushButton *deleteButton = new QPushButton(this);
    deleteButton->setIcon(QIcon(":/Kanban/Multiply.png"));
    deleteButton->setFixedSize(30, 30);
    deleteButton->setIconSize(QSize(25, 25));
    deleteButton->setFlat(true);
    deleteButton->setStyleSheet("background-color: transparent;");

    layout->addWidget(label);
    layout->addStretch();
    layout->addWidget(moveButton);
    layout->addWidget(deleteButton);

    setStyleSheet(
        "background-color: #3E828C;"
        "border-radius: 20px;"
        "padding: 5px;"
        "margin: 5px;"
        );

    // Отключаем fixed size, чтобы layout мог расти
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    setFixedWidth(220);
    setFixedHeight(80);

    connect(moveButton, &QPushButton::clicked, this, &TaskCard::onMoveButtonClicked);
    connect(deleteButton, &QPushButton::clicked, this, &TaskCard::onDeleteButtonClicked);
}

void TaskCard::onMoveButtonClicked()
{
    emit moveToNext(this, parentLayout);
}

void TaskCard::onDeleteButtonClicked()
{
    emit deleteRequested();
}

void TaskCard::setParentLayout(QVBoxLayout *layout)
{
    parentLayout = layout;
}
