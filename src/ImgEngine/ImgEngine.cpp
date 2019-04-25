#include "ImgEngine.hpp"
#include "LoadManager.hpp"
#include "DataQueue.hpp"
#include "Displayer.hpp"
#include "Zoomer.hpp"

ImgEngine::ImgEngine(QObject* parent):
    QObject(parent)
{
    loadManager = std::make_unique<LoadManager>(new LoadManager());
    dataQueue = std::make_unique<DataQueue>(new DataQueue());
    displayer = std::make_unique<Displayer>(new Displayer);
    zoomer = std::make_unique<Zoomer>(new Zoomer());

    connect(loadManager.get(), &LoadManager::loaded, dataQueue.get(), &DataQueue::openedFile);

    connect(dataQueue.get(), &DataQueue::pixmapChanged, displayer.get(), &Displayer::pixmapChanged);
    connect(dataQueue.get(), &DataQueue::fileChanged, zoomer.get(), &Zoomer::resetZoom);
    connect(dataQueue.get(), &DataQueue::fileChanged, this, &ImgEngine::changed);

    connect(displayer.get(), &Displayer::proceedPixmap, zoomer.get(), &Zoomer::proceedPixmap);

    connect(zoomer.get(), &Zoomer::draw, this, &ImgEngine::draw);
}

//<TODO> dodać wątki
//<TODO> dodać animacje
void ImgEngine::loadImage(QString adress)
{
    loadManager->load(adress);
//    emit draw(std::shared_ptr<QPixmap>(new QPixmap(adress))); // <TODO> to tylko testy
}

QFileInfo ImgEngine::getFileInfo() const
{
    //<TODO>
    return QFileInfo();
}

double ImgEngine::getZoom() const
{
    //<TODO>
    return 1.0;
}

void ImgEngine::setZoom() const
{
    //<TODO>
}
