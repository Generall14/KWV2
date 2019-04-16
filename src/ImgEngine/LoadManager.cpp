#include "LoadManager.hpp"

LoadManager::LoadManager(QObject* parent):
    QObject(parent)
{

}

//<TODO> przerobić na workery/wielowątkowość/przerywanie
void LoadManager::load(QString adress)
{
    QVector<QPixmap> dat;
    dat.append(QPixmap(adress));

    emit loaded(std::make_shared<ImgData>(ImgData{std::move(dat)}));
}
