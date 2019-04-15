#include "ImgEngine.hpp"

ImgEngine::ImgEngine(QObject* parent):
    QObject(parent)
{

}

//<TODO> dodać wątki
//<TODO> dodać animacje
void ImgEngine::loadImage(QString adress)
{
    emit draw(std::shared_ptr<QPixmap>(new QPixmap(adress))); // <TODO> to tylko testy
}
