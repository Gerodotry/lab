#include <QApplication>
#include "mainwindow.h"
#include "fileio.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("QTalarm");
    a.setOrganizationName("QTalarm");
    MainWindow w;
    if(FileIO::LoadWindowShow() || !QSystemTrayIcon::isSystemTrayAvailable())
    {
        w.show();
    }else{
        w.show();
        w.hide();
    }
    return a.exec();
}
