#include "FileManager.hpp"
#include <QDebug>

FileManager::FileManager(QObject *parent):
    Plugin(parent)
{
    _desc.append(description{"open()", "Ctrl+O", "", "", ""});
}

void FileManager::open()
{
    qDebug() << "FileManager::open()";
}
