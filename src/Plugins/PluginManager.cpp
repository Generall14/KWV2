#include "PluginManager.hpp"
#include <QShortcut>
#include <QKeySequence>
#include <QDebug>
#include <QApplication>
#include <QMetaMethod>

#include "Buildin/FileManager.hpp"

PluginManager::PluginManager(QObject *parent):
    QObject(parent)
{

}

PluginManager::PluginManager(QWidget *widget, QObject *parent):
    QObject(parent),
    _widget(widget)
{
    loadBuidIns();
    loadShortcuts();
}

void PluginManager::loadBuidIns()
{
    _plugins.append(std::make_shared<FileManager>(new FileManager()));
}

void PluginManager::loadShortcuts()
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

