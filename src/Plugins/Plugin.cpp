#include "Plugin.hpp"
#include <QMetaMethod>

Plugin::Plugin(QObject *parent):
    QObject(parent)
{

}

const QVector<Plugin::description>& Plugin::getDescriptions() const
{
    return _desc;
}
