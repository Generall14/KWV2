#include "DataQueue.hpp"
#include "ImgData.hpp"

DataQueue::DataQueue(QObject* parent):
    QObject(parent)
{
    myDataVector.resize(QUEUE_SIZE);
}

void DataQueue::openedFile(std::shared_ptr<ImgData> newData)
{
    //TODO kolejkowanie
    myDataVector[0] = std::move(newData);
    emit pixmapChanged(myDataVector[0]);
}
