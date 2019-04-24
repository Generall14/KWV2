#include "Plugin.hpp"
#include <QMetaMethod>

Plugin::Plugin():
    QObject(nullptr)
{
//    typedef
//    QMetaMethod sl = metaObject()->method(metaObject()->indexOfMethod("mslot()")); // = &Plugin::mslot;
//    auto sl = &Plugin::mslot;

    connect(this, this->metaObject()->method(this->metaObject()->indexOfSignal("msig()")),
            this, this->metaObject()->method(this->metaObject()->indexOfSlot("xyz()")));

//    connect(this, SIGNAL(msig()), this, SLOT(mslot()));
    connect(this, SIGNAL(msig()), this, "xyz()");
}
