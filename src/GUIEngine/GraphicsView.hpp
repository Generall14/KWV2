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
    virtual void keyPressEvent(QKeyEvent *event);

private:
    std::unique_ptr<QGraphicsScene> scene;

signals:
    void zoomInRequest();
    void zoomOutRequest();
    void nextFileRequest();
    void prevFileRequest();
};

#endif

