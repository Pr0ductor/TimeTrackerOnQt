#include "kanban.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Kanban w;
    w.show();
    return a.exec();
}
