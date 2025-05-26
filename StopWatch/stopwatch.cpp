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


    connect(ui->StartButtonOnStopWatch, &QPushButton::clicked, this, &StopWatch::onStartButtonClicked);
    connect(ui->StopButtonOnStopWatch, &QPushButton::clicked, this, &StopWatch::onStopButtonClicked);

    connect(stopwatch, &QTimer::timeout, this, [this]() {
        elapsedMilliseconds += 10;
        ui->StopWatchMain->setText(formatTime(elapsedMilliseconds));
    });

    connect(ui->ApplySaveButtonOnStopWatch, &QPushButton::clicked, this, &StopWatch::on_ApplySaveButtonOnStopWatch_clicked);
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
        out << "----------------------------------------\n\n";

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
}

QString StopWatch::getProjectRootPath()
{

    QString appDir = QCoreApplication::applicationDirPath();


    QDir dir(appDir);
    dir.cdUp();
    dir.cdUp();   

    return dir.path();
}
