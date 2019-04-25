#include "Engine.hpp"
#include "GUIEngine/GUIEngine.hpp"
#include "ImgEngine/ImgEngine.hpp"
#include "Plugins/PluginManager.hpp"

Engine::Engine(QApplication *qapp, QObject* parent):
    QObject(parent),
    _qapp(qapp)
{
    init();
}

void Engine::init()
{
    guiEngine = std::make_shared<GUIEngine>(new GUIEngine());
    imgEngine = std::make_shared<ImgEngine>(new ImgEngine());
    pluginManager = std::make_shared<PluginManager>(new PluginManager(guiEngine.get()));

    connect(imgEngine.get(), &ImgEngine::draw, guiEngine.get(), &GUIEngine::printPixmap);

    imgEngine->loadImage("tst/imga.jpg"); //<TODO>
}

int Engine::run()
{
//    GUIEngine w; <TODO>
    guiEngine->show();
    return _qapp->exec();
}
