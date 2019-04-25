#include "PluginManager.hpp"
#include <QShortcut>
#include <QKeySequence>
#include <QDebug>
#include <QApplication>
#include <QMetaMethod>
#include "src/GUIEngine/GraphicsView.hpp"

#include "Buildin/FileManager.hpp"

PluginManager::PluginManager(QObject *parent):
    QObject(parent)
{

}

PluginManager::PluginManager(GraphicsView *view, QObject *parent):
    QObject(parent),
    _widget(view)
{
    loadBuidIns();

    applyShortcuts();
    connectView();
}

void PluginManager::loadBuidIns()
{
    _plugins.append(std::make_shared<FileManager>(new FileManager()));
}

void PluginManager::applyShortcuts()
{
    for(auto it: _plugins)
    {
        const QVector<Plugin::description>& descs = it.get()->getDescriptions();
        for(const auto el: descs)
        {
            if(*(el.shortcut) == 0)
                continue;

            QShortcut* sh = new QShortcut(QKeySequence(el.shortcut), _widget); //QWidget przejmuje odpowiedzialność za wskaźnik
            connect(sh, &QShortcut::activated, [=](){it.get()->action(el.switcher);});
        }
    }
}

void PluginManager::connectView()
{
    for(auto it: _plugins)
        it.get()->connectToView(_widget);
}
