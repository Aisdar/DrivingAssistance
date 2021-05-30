#ifndef CONFIG_H
#define CONFIG_H

#include <QVariant>
#include <QSettings>
#include <QCoreApplication>

class Config
{
public:
    Config(QString filePath = "");
    virtual ~Config();
    QVariant GetValue(QString node, QString key);
    void SetValue(QString node, QString key, QString value);

private:
    QSettings *m_pSetting;
    QString m_filePath;
};

#endif // CONFIG_H
