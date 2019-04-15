#ifndef GRAPHICSVIEW_HPP
#define GRAPHICSVIEW_HPP

#include <QGraphicsView>
#include <QGraphicsScene>
#include <memory>

/**
 * Klasa zapewnia widok obrazu.
 */
class GraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    GraphicsView(QWidget* parent = nullptr);
    ~GraphicsView();

public slots:
    void printPixmap(std::shared_ptr<QPixmap> pixmap);

private:
    std::unique_ptr<QGraphicsScene> scene;
};

#endif

