#ifndef ZOOMER_HPP
#define ZOOMER_HPP

#include <QObject>
#include <memory>

class Zoomer : public QObject
{
    Q_OBJECT
public:
    Zoomer(QObject* parent = nullptr);

public slots:
    void proceedPixmap(std::shared_ptr<QPixmap> pixmap);
    void resetZoom();

signals:
    void draw(std::shared_ptr<QPixmap> pixmap);
};

#endif
