#ifndef IMGENGINE_HPP
#define IMGENGINE_HPP

#include <QObject>
#include <QSharedPointer>
#include <memory>
#include <QFileInfo>

#include "LoadManager.hpp"
#include "DataQueue.hpp"
#include "Displayer.hpp"
#include "Zoomer.hpp"

class ImgEngine : public QObject
{
    Q_OBJECT
public:
    ImgEngine(QObject* parent = nullptr);

    QFileInfo getFileInfo() const;
    double getZoom() const;
    void setZoom() const;

public slots:
    void loadImage(QString adress);

signals:
    void draw(std::shared_ptr<QPixmap> pixmap); /**<Sygnał do przerysowania obrazu.*/
    void changed(); /**<Zmiana wyświetlanego pliku.*/
    void statusChanged(QString status); /**<Zmiana statusu.*/

private:
    std::unique_ptr<LoadManager> loadManager;
    std::unique_ptr<DataQueue> dataQueue;
    std::unique_ptr<Displayer> displayer;
    std::unique_ptr<Zoomer> zoomer;
};

#endif
