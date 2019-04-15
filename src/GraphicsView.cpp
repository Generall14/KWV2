#include "GraphicsView.hpp"
#include <QDebug>

GraphicsView::GraphicsView(QWidget* parent):
    QGraphicsView(parent)
{
    scene = std::make_unique<QGraphicsScene>(new QGraphicsScene(this));
    this->setScene(scene.get());
}

GraphicsView::~GraphicsView()
{
    qDebug() << "~GraphicsView";
}

void GraphicsView::printPixmap(std::shared_ptr<QPixmap> pixmap)
{
    scene->addPixmap(*pixmap.get());
}
