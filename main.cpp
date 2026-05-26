// #include "mainwindow.h"

// #include <QApplication>

// int main(int argc, char *argv[])
// {
//     QApplication a(argc, argv);
//     MainWindow w;
//     w.show();
//     return QApplication::exec();
// }
//############################define
#include "mainwindow.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QIcon appIcon;

    appIcon.addFile(":/icons/128.png", QSize(128, 128));

   // app.setWindowIcon(appIcon);

    QCoreApplication::setOrganizationName("local");
    QCoreApplication::setApplicationName("AdaptiveLoudness");
    MainWindow w;
    a.setWindowIcon(QIcon(":/icons/128.png"));
    w.show();
    return a.exec();
}