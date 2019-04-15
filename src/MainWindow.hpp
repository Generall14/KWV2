#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <memory>
#include "src/GraphicsView.hpp"

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
};

#endif
