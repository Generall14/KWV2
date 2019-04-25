#include "GUIEngine.hpp"

#include <QDebug>
#include <QLabel>
#include <QPixmap>
#include <QImage>
#include <QLayout>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QVector>
#include "GraphicsView.hpp"

GUIEngine::GUIEngine(QWidget* parent):
    QMainWindow(parent)
{
    GraphicsView* graphicsView = new GraphicsView();

    QWidget* wd = new QWidget();
    this->setCentralWidget(wd);

    QHBoxLayout* mLay = new QHBoxLayout();
    this->centralWidget()->setLayout(mLay);
    mLay->addWidget(graphicsView);

    connect(this, &GUIEngine::printPixmap, graphicsView, &GraphicsView::printPixmap);

    connect(graphicsView, &GraphicsView::zoomInRequest, this, &GUIEngine::zoomInRequest);
    connect(graphicsView, &GraphicsView::zoomOutRequest, this, &GUIEngine::zoomOutRequest);
    connect(graphicsView, &GraphicsView::nextFileRequest, this, &GUIEngine::nextFileRequest);
    connect(graphicsView, &GraphicsView::prevFileRequest, this, &GUIEngine::prevFileRequest);
}
