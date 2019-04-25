#ifndef PLUGINMANAGER_HPP
#define PLUGINMANAGER_HPP

#include <QObject>
#include <QVector>
#include <memory>
//#include "Plugin.hpp"

class PluginManager : public QObject
{
    Q_OBJECT
public:
    PluginManager();

private:
//    void loadBuidIns();

//    QVector<std::unique_ptr<Plugin> > _plugins;
};

#endif
