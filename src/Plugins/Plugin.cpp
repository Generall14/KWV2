#include "Plugin.hpp"
#include <QMetaMethod>

Plugin::Plugin():
    QObject(nullptr)
{
    connect(this, this->metaObject()->method(this->metaObject()->indexOfSignal("msig()")),
            this, this->metaObject()->method(this->metaObject()->indexOfSlot("xyz()")));
}
