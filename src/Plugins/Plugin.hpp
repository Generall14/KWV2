#ifndef PLUGIN_HPP
#define PLUGIN_HPP

#include <QObject>

class Plugin : public QObject
{
    Q_OBJECT
public:

signals:
    void msig();
public slots:
    void xyz(){}

protected:
    Plugin();
};

#endif
