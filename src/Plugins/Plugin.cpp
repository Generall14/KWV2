#include "Plugin.hpp"
#include <QMetaMethod>

Plugin::Plugin(QObject *parent):
    QObject(parent)
{
    connect(this, this->metaObject()->method(this->metaObject()->indexOfSignal("msig()")),
            this, this->metaObject()->method(this->metaObject()->indexOfSlot("xyz()")));
}

const QVector<Plugin::description>& Plugin::getDescriptions() const
{
    return _desc;
}
