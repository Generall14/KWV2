#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <QObject>

class Engine : public QObject
{
    Q_OBJECT
public:
    Engine(QObject* parent = nullptr);
};

#endif
