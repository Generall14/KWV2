#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <QObject>
#include "../Plugin.hpp"

class FileManager : public Plugin
{
public:
    FileManager(QObject* parent = nullptr);

public slots:
    void open();
};

#endif
