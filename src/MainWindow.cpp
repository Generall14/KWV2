#include "MainWindow.hpp"

#include <QDebug>
#include <QLabel>
#include <QPixmap>
#include <QImage>
#include <QLayout>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "ImgEngine/ImgData.hpp"
#include <QVector>
#include "Plugins/Plugin.hpp"
#include "src/Plugins/PluginManager.hpp"
#include "src/ImgEngine/ImgEngine.hpp"
#include "src/GraphicsView.hpp"

MainWindow::MainWindow():
    QMainWindow()
{
    GraphicsView* graphicsView = new GraphicsView();
    imgEngine = std::make_shared<ImgEngine>(new ImgEngine);

    std::make_unique<PluginManager>(new PluginManager());
//    pluginManager = std::make_shared<PluginManager>(new PluginManager());

    connect(imgEngine.get(), &ImgEngine::draw, graphicsView, &GraphicsView::printPixmap);

    QWidget* wd = new QWidget();
    this->setCentralWidget(wd);

    QHBoxLayout* mLay = new QHBoxLayout();
    this->centralWidget()->setLayout(mLay);
    mLay->addWidget(graphicsView);



    //=======================================================

//    graphicsView->printPixmap(std::shared_ptr<QPixmap>(new QPixmap("tst/imgj.jpg")));
    imgEngine->loadImage("tst/imga.jpg");

//    Plugin();
//    QVector<QPixmap> vec;
//    vec.append(QPixmap("tst/imga.jpg"));
//    vec.append(QPixmap("tst/imgb.jpeg"));
//    ImgData idd{std::move(vec)};
}
