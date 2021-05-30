#include "config.h"
#include <QDebug>

Config::Config(QString filePath)
{
    if(filePath.isEmpty())
    {
        m_filePath = QCoreApplication::applicationDirPath() + "/Config.ini";
    }
    else
    {
        m_filePath = filePath;
    }
    m_pSetting = new QSettings(m_filePath, QSettings::IniFormat);
    qDebug() << m_filePath;
}

Config::~Config()
{
    delete m_pSetting;
    m_pSetting = nullptr;
}

void Config::SetValue(QString node, QString key, QString value)
{
    m_pSetting->setValue(QString("/%1/%2").arg(node).arg(key), value);
}

QVariant Config::GetValue(QString node, QString key)
{
    QVariant var = m_pSetting->value(QString("/%1/%2").arg(node).arg(key));
    return var;
}



