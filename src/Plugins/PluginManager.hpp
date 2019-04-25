#ifndef PLUGINMANAGER_HPP
#define PLUGINMANAGER_HPP

#include <QObject>
#include <QVector>
#include <memory>
#include "Plugin.hpp"

class GraphicsView;

class PluginManager : public QObject
{
    Q_OBJECT
public:
    PluginManager(QObject* parent = nullptr);
    PluginManager(GraphicsView* view, QObject* parent = nullptr);

private:
    void loadBuidIns();

    void applyShortcuts();
    void connectView();

    QVector<std::shared_ptr<Plugin> > _plugins;
    GraphicsView* _widget = nullptr;
};

#endif
