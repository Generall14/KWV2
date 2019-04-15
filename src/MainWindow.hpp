#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <memory>
#include "src/GraphicsView.hpp"
#include "src/ImgEngine/ImgEngine.hpp"

/**
 * Klasa wejściowa aplikacji, przedstawia GUI, ładuje elementy pod GUI.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();

private:
    GraphicsView* graphicsView = nullptr;
    std::unique_ptr<ImgEngine> imgEngine;
};

#endif
