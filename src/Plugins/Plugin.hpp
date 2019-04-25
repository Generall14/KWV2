#ifndef PLUGIN_HPP
#define PLUGIN_HPP

#include <QObject>
#include <QKeySequence>
#include <QVector>

class Plugin : public QObject
{
    Q_OBJECT
public:
    struct description
    {
        int switcher; /**<Z taką wartością zostanie wywołana funkcja action.*/
        const char* shortcut;
        const char* menuItem;
        const char* menuGroup;
        const char* menuSubGroup;
    };

    Plugin(QObject* parent = nullptr);
    const QVector<description>& getDescriptions() const;

public slots:
    virtual void action(int switcher=0) = 0;

protected:
    QVector<description> _desc;
};

#endif
