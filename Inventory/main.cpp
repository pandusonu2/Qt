#include "inventory.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Inventory w;
    w.show();

    return a.exec();
}
