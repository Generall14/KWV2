#include "src/Engine.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    return Engine(&a).run();
}
