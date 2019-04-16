#ifndef IMGENGINE_HPP
#define IMGENGINE_HPP

#include <QObject>
#include <QSharedPointer>
#include <memory>
#include "ImgData.hpp"
#include "LoadManager.hpp"
#include "DataQueue.hpp"
#include "Displayer.hpp"
#include "Zoomer.hpp"

class ImgEngine : public QObject
{
    Q_OBJECT
public:
    ImgEngine(QObject* parent = nullptr);

public slots:
    void loadImage(QString adress);

signals:
    void draw(std::shared_ptr<QPixmap> pixmap);
    void changed();

private:
    std::unique_ptr<LoadManager> loadManager;
    std::unique_ptr<DataQueue> dataQueue;
    std::unique_ptr<Displayer> displayer;
    std::unique_ptr<Zoomer> zoomer;
};

#endif
