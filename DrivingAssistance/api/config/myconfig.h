#ifndef MYCONFIG_H
#define MYCONFIG_H

#include <QString>

class MyConfig
{
public:
    static QString appPath;             // 应用程序路径
    static int deskWidth;               // 桌面宽度
    static int deskHeight;              // 桌面高度


    static QString currentUserName;     // 当前用户名
    static QString currentUserPwd;      // 当前用户密码

    static QString appTitle;            // 应用程序标题
    static QString appVersion;          // 应用程序版本

    static QString serverIP;            // 服务器IP
    static int serverPort;              // 服务器端口

    static int maxStorageSize;          // 最大存储大小 GB
    static bool bAutoDelete;            // 自动删除

    static int heartInterval;           // 心跳包间隔    3s

    static QString drivingVideoPath;        // 行车视频路径
    static QString reversingVideoPath;      // 倒车视频路径
    static QString trafficLightVideoPath;   // 红绿灯视频路径


    static void ReadConfig();
    static void WriteConfig();
};

#endif // MYCONFIG_H
