#include "MainWindow.hpp"

#include <QDebug>
#include <QLabel>
#include <QPixmap>
#include <QImage>
#include <QLayout>
#include <QGraphicsScene>
#include <QGraphicsView>

MainWindow::MainWindow():
    QMainWindow()
{
    GraphicsView* graphicsView = new GraphicsView();

    QWidget* wd = new QWidget();
    this->setCentralWidget(wd);

    QHBoxLayout* mLay = new QHBoxLayout();
    this->centralWidget()->setLayout(mLay);
    mLay->addWidget(graphicsView);

    graphicsView->printPixmap(std::shared_ptr<QPixmap>(new QPixmap("tst/imgj.jpg")));


//    QGraphicsScene* sc = new QGraphicsScene();
//    QGraphicsView* vw = new QGraphicsView();
//    vw->setScene(sc);
//    mLay->addWidget(vw);


//    sc->addPixmap(QPixmap("tst/imgj.jpg").scaledToHeight(100));
//    sc->clear();
//    sc->addPixmap(QPixmap("tst/imga.jpg").scaledToHeight(100));
}
