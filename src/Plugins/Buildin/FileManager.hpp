#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <QObject>
#include "../Plugin.hpp"

class FileManager : public Plugin
{
public:
    FileManager(QObject* parent = nullptr);

public slots:
    virtual void action(int switcher=0);
};

#endif
