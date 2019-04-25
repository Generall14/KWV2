#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <memory>

class PluginManager;
class ImgEngine;
class GraphicsView;

/**
 * Klasa wejściowa aplikacji, przedstawia GUI, ładuje elementy pod GUI.
 */
class GUIEngine : public QMainWindow
{
    Q_OBJECT
public:
    GUIEngine();

private:
    GraphicsView* graphicsView = nullptr;
    std::shared_ptr<ImgEngine> imgEngine;
    std::shared_ptr<PluginManager> pluginManager;
};

#endif
