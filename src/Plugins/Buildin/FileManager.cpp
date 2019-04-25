#include "FileManager.hpp"
#include <QDebug>

FileManager::FileManager():
    Plugin()
{
    _desc.append(description{"open()", QKeySequence(Qt::Key_C+Qt::CTRL), "", "", ""});
}

void FileManager::open()
{
    qDebug() << "FileManager::open()";
}
