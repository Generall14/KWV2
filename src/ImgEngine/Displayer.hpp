#ifndef DISPLAYER_HPP
#define DISPLAYER_HPP

#include <QObject>
#include <memory>

class ImgData;

/**
 * Klasa wysyła poszczególne klatki obrazu.
 */
class Displayer : public QObject
{
    Q_OBJECT
public:
    Displayer(QObject* parent = nullptr);

public slots:
    void pixmapChanged(std::shared_ptr<ImgData> newData);

signals:
    void proceedPixmap(std::shared_ptr<QPixmap> pixmap);

private:
    std::shared_ptr<ImgData> myData;
};

#endif
