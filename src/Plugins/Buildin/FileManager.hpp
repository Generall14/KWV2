#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <QObject>
#include "../Plugin.hpp"

class FileManager : public Plugin
{
public:
    FileManager(QObject* parent = nullptr);

    virtual void connectToView(const GUIEngine* gv);

public slots:
    virtual void action(int switcher=0);

    void next();
};

#endif
