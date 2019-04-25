#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <QObject>
#include "../Plugin.hpp"

class FileManager : public Plugin
{
public:
    FileManager();

public slots:
    void open();
};

#endif
