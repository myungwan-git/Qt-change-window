#include "ChangeWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChangeWindow w;
    w.show();
    return a.exec();
}
