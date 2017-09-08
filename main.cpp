#include "mainwindow.h"
#include "intro.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Intro i;
    i.exec();

    MainWindow w;
    w.show();

    return a.exec();
}
