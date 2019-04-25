#ifndef DATAQUEUE_HPP
#define DATAQUEUE_HPP

#include <QObject>
#include <memory>
#include <QVector>

class ImgData;

/**
 * Zapewnia przechowywanie plików w kolejce (do zachowania przy edycji i umożliwieniu cofnięcia zmian).
 */
class DataQueue : public QObject
{
    Q_OBJECT
public:
    DataQueue(QObject* parent = nullptr);

public slots:
    void openedFile(std::shared_ptr<ImgData> newData);

signals:
    void fileChanged();
    void pixmapChanged(std::shared_ptr<ImgData> newData);

private:
    QVector<std::shared_ptr<ImgData> > myDataVector;

    static const int QUEUE_SIZE = 1;
};

#endif
