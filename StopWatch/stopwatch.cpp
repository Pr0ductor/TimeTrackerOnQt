#include "stopwatch.h"
#include "ui_stopwatch.h"
#include "../mainwindow.h"
#include "../../TimeTrackerOnQt/messageboxhelper.h"

StopWatch::StopWatch(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StopWatch)
    , stopwatch(new QTimer(this))
    , elapsedMilliseconds(0)
    , isRunning(false)
{
    ui->setupUi(this);

    ui->horizontalLayoutForResults->setAlignment(Qt::AlignLeft);
    connect(ui->StartButtonOnStopWatch, &QPushButton::clicked, this, &StopWatch::onStartButtonClicked);
    connect(ui->StopButtonOnStopWatch, &QPushButton::clicked, this, &StopWatch::onStopButtonClicked);

    connect(stopwatch, &QTimer::timeout, this, [this]() {
        elapsedMilliseconds += 10;
        ui->StopWatchMain->setText(formatTime(elapsedMilliseconds));
    });

    connect(ui->ApplySaveButtonOnStopWatch, &QPushButton::clicked, this, &StopWatch::on_ApplySaveButtonOnStopWatch_clicked);
    loadSavedResults();

    ui->ResultsScrollArea->setFocusPolicy(Qt::WheelFocus);

}

StopWatch::~StopWatch()
{
    delete ui;
}

void StopWatch::on_GoBackToMenu_clicked()
{
    qDebug() << "Opening MainWindow and closing StopWatch...";

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}

void StopWatch::onStartButtonClicked()
{
    if (!isRunning) {
        elapsedMilliseconds = 0;
        ui->StopWatchMain->setText(formatTime(elapsedMilliseconds));
        stopwatch->start(10);
        isRunning = true;
    }
}

void StopWatch::onStopButtonClicked()
{
    if (isRunning) {
        stopwatch->stop();
        isRunning = false;
        ui->TimeOnMenuOnStopWatch->setText(formatTime(elapsedMilliseconds));
    }
}

QString StopWatch::formatTime(int milliseconds)
{
    int hours = milliseconds / 3600000;
    int minutes = (milliseconds % 3600000) / 60000;
    int seconds = (milliseconds % 60000) / 1000;

    return QString("%1:%2:%3")
        .arg(hours, 2, 10, QChar('0'))
        .arg(minutes, 2, 10, QChar('0'))
        .arg(seconds, 2, 10, QChar('0'));
}

void StopWatch::on_ApplySaveButtonOnStopWatch_clicked()
{
    QString time = ui->TimeOnMenuOnStopWatch->text();
    QString description = ui->TextEditOnStopWatch->toPlainText().trimmed();

    if (description.isEmpty()) {
        qDebug() << "Description is empty!";
        return;
    }

    QString projectRoot = getProjectRootPath();

    QString dirPath = projectRoot + "/saved_results";
    QString filePath = dirPath + "/stopwatch_savedresults.txt";

    QDir dir;
    if (!dir.exists(dirPath)) {
        dir.mkdir(dirPath);
    }

    QFile file(filePath);
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);

        QString currentDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");

        out << "----------------------------------------\n";
        out << "Saved at: " << currentDateTime << "\n";
        out << "Time recorded: " << time << "\n";
        out << "Description: " << description << "\n";
        out << "*---------------------------------------*\n\n";

        file.close();

        qDebug() << "Data saved to:" << filePath;
        MessageBoxHelper& helper = MessageBoxHelper::instance();

        helper.showMessage(this, MessageBoxHelper::Info, "Успех!", "Результат успешно сохранен.");
    } else {
        qDebug() << "Failed to open file for writing:" << filePath;
        MessageBoxHelper& helper = MessageBoxHelper::instance();

        helper.showMessage(this, MessageBoxHelper::Error, "Ошибка", "Результат не был сохранен(((.");
    }

    ui->TextEditOnStopWatch->clear();
    loadSavedResults();
}

QString StopWatch::getProjectRootPath()
{
    QString appDir = QCoreApplication::applicationDirPath();

    QDir dir(appDir);
    dir.cdUp();
    dir.cdUp();

    return dir.path();
}

void StopWatch::loadSavedResults()
{
    QString projectRoot = getProjectRootPath();
    QString filePath = projectRoot + "/saved_results/stopwatch_savedresults.txt";

    QFile file(filePath);

    if (!file.exists()) {
        qDebug() << "File does not exist yet.";
        return;
    }

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for reading";
        return;
    }

    QTextStream in(&file);

    QLayoutItem *item;
    while ((item = ui->horizontalLayoutForResults->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    QStringList results;
    QString currentResult;

    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.startsWith("----------------------------------------")) {
            if (!currentResult.isEmpty()) {
                results.append(currentResult.trimmed());
                currentResult.clear();
            }
        } else {
            currentResult += line + "\n";
        }
    }

    if (!currentResult.isEmpty()) {
        results.append(currentResult.trimmed());
    }

    file.close();

    for (const QString &result : results.mid(qMax(0, results.size() - 20))) {

        QStringList lines = result.split("\n");
        QString savedDateTime;
        QString time;
        QString description;

        for (const QString &line : lines) {
            QString tempLine = line;
            if (tempLine.startsWith("Saved at: ")) {
                savedDateTime = tempLine.remove("Saved at: ");
            } else if (tempLine.startsWith("Time recorded: ")) {
                time = tempLine.remove("Time recorded: ");
            } else if (tempLine.startsWith("Description: ")) {
                description = tempLine.remove("Description: ");
            }
        }

        QPushButton *button = new QPushButton(this);
        button->setFixedSize(200, 200);
        button->setStyleSheet(
            "QPushButton {"
            "background-color: #565555;"
            "border-radius: 10px;"
            "padding: 10px;"
            "color: black;"
            "font-size: 18px;"
            "font-weight: bold;"
            "}"
            "QPushButton:hover {"
            "background-color: #4CA8B7;"
            "}"
            "QToolTip {"
            "color: black;"
            "background-color: white;"
            "border: 1px solid #565555;"
            "}"
            );

        QString tooltipText = QString("Дата сохранения: %1\nЗаписанное время: %2\nОписание: %3")
            .arg(savedDateTime)
            .arg(time)
            .arg(description);
        button->setToolTip(tooltipText);

        QLabel *label = new QLabel(time, button);
        label->setAlignment(Qt::AlignCenter);
        label->setGeometry(20, 20, 160, 160);
        label->setStyleSheet(
            "background-color: #3E828C;"
            "border-radius: 80px;"
            "color: black;"
            "font-size: 30px;"
            "font-weight: bold;"
            );

        connect(button, &QPushButton::clicked, this, [description, time]() {
            qDebug() << "Clicked on saved result:" << description << "-" << time;
        });

        ui->horizontalLayoutForResults->addWidget(button);

    }
}
