#include "Zoomer.hpp"

Zoomer::Zoomer(QObject* parent):
    QObject(parent)
{

}

void Zoomer::proceedPixmap(std::shared_ptr<QPixmap> pixmap)
{
    //<TODO> to tylko dzida
    emit draw(pixmap);
}

void Zoomer::resetZoom()
{
    //<TODO>
}
