#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <QObject>
#include <QApplication>
#include <memory>

class ImgEngine;
class GUIEngine;
class PluginManager;

class Engine : public QObject
{
    Q_OBJECT
public:
    Engine(QApplication* qapp, QObject* parent = nullptr);

    int run();

private:
    QApplication* _qapp = nullptr;

    std::shared_ptr<GUIEngine> guiEngine;
    std::shared_ptr<ImgEngine> imgEngine;
    std::shared_ptr<PluginManager> pluginManager;

    void init();
};

#endif
