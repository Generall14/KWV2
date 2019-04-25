#ifndef PLUGINMANAGER_HPP
#define PLUGINMANAGER_HPP

#include <QObject>
#include <QVector>
#include <memory>
#include "Plugin.hpp"

class PluginManager : public QObject
{
    Q_OBJECT
public:
    PluginManager(QObject* parent = nullptr);
    PluginManager(QWidget* widget, QObject* parent = nullptr);

private:
    void loadBuidIns();

    void loadShortcuts();

    QVector<std::shared_ptr<Plugin> > _plugins;
    QWidget* _widget = nullptr;
};

#endif
