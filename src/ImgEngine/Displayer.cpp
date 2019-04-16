#include "Displayer.hpp"


Displayer::Displayer(QObject* parent):
    QObject(parent)
{

}

void Displayer::pixmapChanged(std::shared_ptr<ImgData> newData)
{
    myData = std::move(newData);

    //<TODO> to tylko dzida testowa
    emit proceedPixmap(std::make_shared<QPixmap>(myData.get()->pixmaps.at(0)));
}
