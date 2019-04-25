#include "src/GUIEngine/GUIEngine.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GUIEngine w;
    w.show();

    return a.exec();
}
