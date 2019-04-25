#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <memory>
#include <QDebug>

class GraphicsView;

/**
 * Klasa wejściowa aplikacji, przedstawia GUI, ładuje elementy pod GUI.
 */
class GUIEngine : public QMainWindow
{
    Q_OBJECT
public:
    GUIEngine(QWidget* parent = nullptr);

public slots:

signals:
    void printPixmap(std::shared_ptr<QPixmap> pixmap);

    void zoomInRequest();
    void zoomOutRequest();
    void nextFileRequest();
    void prevFileRequest();

private:
    GraphicsView* graphicsView = nullptr; //<TODO> shared/unique

};

#endif
