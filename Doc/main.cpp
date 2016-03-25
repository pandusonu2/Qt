#include "doc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    doc w;
    w.show();

    return a.exec();
}
