#include "myconfig.h"
#include "api/helper/myhelper.h"

#include <QSettings>


QString MyConfig::appPath = "";
int MyConfig::deskWidth = 1024;
int MyConfig::deskHeight = 768;


QString MyConfig::currentUserName = "";
QString MyConfig::currentUserPwd = "";

QString MyConfig::appTitle = "360度行车辅助系统";
QString MyConfig::appVersion = "V1.0";

QString MyConfig::serverIP = "127.0.0.1";
int MyConfig::serverPort = 11111;

int MyConfig::maxStorageSize = 20;
bool MyConfig::bAutoDelete = false;

int MyConfig::heartInterval = 3;

QString MyConfig::drivingVideoPath = "../resource/video/03.mp4";
QString MyConfig::reversingVideoPath = "../resource/video/backup.mp4";
QString MyConfig::trafficLightVideoPath = "../resource/video/123.mp4";

void MyConfig::ReadConfig()
{
    /* 打开ini文件 */
    QString fileName = MyConfig::appPath + "CONFIG/config.ini";

    /* 配置文件不存则全部按照初始值 */
    if(!MyHelper::FileIsExist(fileName))
    {
         return;
    }

    QSettings set(fileName, QSettings::IniFormat);

    set.beginGroup("AppConfig");

    MyConfig::appTitle = set.value("AppTitle").toString();

    MyConfig::serverIP = set.value("ServerIP").toString();
    MyConfig::serverPort = set.value("ServerPort").toInt();

    MyConfig::maxStorageSize = set.value("MaxSotageSize").toInt();
    MyConfig::bAutoDelete = set.value("AutoDelete").toString() == "true"
                            ? true : false;

    set.endGroup();
}

void MyConfig::WriteConfig()
{
    /* 打开ini文件 */
    QString fileName = MyConfig::appPath + "CONFIG/config.ini";
    QSettings set(fileName, QSettings::IniFormat);

    set.beginGroup("AppConfig");

    set.setValue("AppTitle", MyConfig::appTitle);

    set.setValue("ServerIP", MyConfig::serverIP);
    set.setValue("ServerPort", MyConfig::serverPort);

    set.setValue("MaxSotageSize", MyConfig::maxStorageSize);
    set.setValue("AutoDelete", MyConfig::bAutoDelete ? "true" : "false");

    set.endGroup();
}
