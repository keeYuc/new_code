#include "mywidget.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myWidget w;
    w.setFixedSize(1024,360);w.setWindowTitle("第一个窗口");

    w.show();
    return a.exec();
}
