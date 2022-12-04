#include <QApplication>
#include <QWidget>
#include "mainwindow.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    MainWindow window;
    window.setWindowTitle("Page 2");
    window.show();

    return a.exec();
}
