#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>

#include <qdebug.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    qDebug("Hello World!!! \n");

    w.show();
    return a.exec();
}
