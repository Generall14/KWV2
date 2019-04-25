#include "FileManager.hpp"
#include "src/GUIEngine/GUIEngine.hpp"
#include <QDebug>

FileManager::FileManager(QObject *parent):
    Plugin(parent)
{
    _desc.append(description{0, "Ctrl+O", "", "", ""});
    _desc.append(description{1, "A", "", "", ""});
}

void FileManager::action(int switcher)
{
    switch (switcher) {
    case 0:
        qDebug() << "FileManager::open() - 0";
        break;
    case 1:
        qDebug() << "FileManager::open() - 1";
        break;
    default:
        break;
    }
}

void FileManager::connectToView(const GUIEngine *gv)
{
    qDebug() << "fdsffdsa";
    connect(gv, &GUIEngine::nextFileRequest, this, &FileManager::next);
}

void FileManager::next()
{
    qDebug() << "FileManager::next()";
}
