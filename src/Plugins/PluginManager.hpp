#ifndef PLUGINMANAGER_HPP
#define PLUGINMANAGER_HPP

#include <QObject>
#include <QVector>
#include <memory>
#include "Plugin.hpp"

class GUIEngine;

class PluginManager : public QObject
{
    Q_OBJECT
public:
    PluginManager(QObject* parent = nullptr);
    PluginManager(GUIEngine* view, QObject* parent = nullptr);

private:
    void loadBuidIns();

    void applyShortcuts();
    void connectView();

    QVector<std::shared_ptr<Plugin> > _plugins;
    GUIEngine* _widget = nullptr;
};

#endif
