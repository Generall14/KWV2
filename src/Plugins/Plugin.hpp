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
        const char* function;
        const char* shortcut;
        const char* menuItem;
        const char* menuGroup;
        const char* menuSubGroup;
    };
    const QVector<description>& getDescriptions() const;

signals:
    void msig();
public slots:
    void xyz(){}

protected:
    Plugin(QObject* parent = nullptr);
    QVector<description> _desc;
};

#endif
