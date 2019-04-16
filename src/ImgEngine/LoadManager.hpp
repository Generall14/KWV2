#ifndef LOADMANAGER_HPP
#define LOADMANAGER_HPP

#include <QObject>
#include "ImgData.hpp"
#include <memory>

/**
 * Klasa do ładowania obrazów (TODO docelowo ma wykorzystywać osobne wątki i umożliwiać przerywanie
 * działania).
 */
class LoadManager : public QObject
{
    Q_OBJECT
public:
    LoadManager(QObject* parent = nullptr);

public slots:
    void load(QString adress);

signals:
    void loaded(std::shared_ptr<ImgData> newData);
};

#endif
