#include "GraphicsView.hpp"
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>

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

void GraphicsView::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Right)
    {
        emit nextFileRequest();
        return;
    }
    QGraphicsView::keyPressEvent(event);
}
