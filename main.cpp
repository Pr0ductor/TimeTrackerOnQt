#include "mainwindow.h"
#include "Reminder/notificationmanager.h"


#include <QApplication>

#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    NotificationManager::instance();

    MainWindow w;
    w.show();


    return a.exec();
}
