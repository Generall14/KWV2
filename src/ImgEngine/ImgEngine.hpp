#ifndef IMGENGINE_HPP
#define IMGENGINE_HPP

#include <QObject>
#include <QSharedPointer>
#include <memory>
#include "ImgData.hpp"

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
};

#endif
